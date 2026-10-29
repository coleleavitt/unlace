/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006DD7C
// Address: 0x000000014006DD7C

//----- (000000014006DD7C) ----------------------------------------------------
__int64 __fastcall sub_14006DD7C(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        __int64 a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct FH4::FuncInfo4 *a5,
        int a6,
        __int64 a7,
        unsigned __int8 a8)
{
  int v12; // ebp
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 pThrowImageBase_low; // r9
  _BYTE *v16; // r8
  unsigned __int64 *pExceptionObject; // rcx
  _BYTE *v18; // rdx
  __int64 pForwardCompat; // r14
  __int64 ThrowImageBase; // rax
  _DWORD v22[12]; // [rsp+50h] [rbp-48h] BYREF

  _except_validate_context_record(a3);
  v12 = 0;
  if ( !*(_DWORD *)(sub_14006CCF8() + 64) && a1->ExceptionCode != -529697949 )
  {
    if ( a1->ExceptionCode != -2147483607 )
      goto LABEL_6;
    if ( a1->NumberParameters != 15 )
      goto LABEL_7;
    if ( *(_QWORD *)&a1[1].params.magicNumber != 429065504 )
    {
LABEL_6:
      if ( a1->ExceptionCode != -2147483610 )
      {
LABEL_7:
        if ( (*(_BYTE *)a5 & 0x20) != 0 )
          return 1;
      }
    }
  }
  if ( (a1->ExceptionFlags & 0x66) != 0 )
  {
    if ( !*((_DWORD *)a5 + 2) )
      return 1;
    v13 = (_BYTE *)(*((int *)a5 + 2) + a4->ImageBase);
    if ( !(*(_DWORD *)&v13[-*((char *)qword_1400AE700 + (*v13 & 0xF)) - 4] >> *((_BYTE *)&qword_1400AE700[2]
                                                                              + (*v13 & 0xF)))
      || a6 )
    {
      return 1;
    }
    if ( (a1->ExceptionFlags & 0x20) != 0 )
    {
      if ( a1->ExceptionCode == -2147483610 )
      {
        v14 = __FrameHandler4::StateFromIp(a5, a4, a4->TargetIp);
        pThrowImageBase_low = (unsigned int)v14;
        if ( v14 >= -1 )
        {
          if ( *((_DWORD *)a5 + 2) )
          {
            v16 = (_BYTE *)(*((int *)a5 + 2) + a4->ImageBase);
            v12 = *(_DWORD *)&v16[-*((char *)qword_1400AE700 + (*v16 & 0xF)) - 4] >> *((_BYTE *)&qword_1400AE700[2]
                                                                                     + (*v16 & 0xF));
          }
          if ( v14 < v12 )
          {
            pExceptionObject = a2;
LABEL_19:
            sub_14006E6C8(pExceptionObject, (__int64)a4, (__int64)a5, pThrowImageBase_low);
            return 1;
          }
        }
        goto LABEL_35;
      }
      if ( a1->ExceptionCode == -2147483607 )
      {
        pThrowImageBase_low = LODWORD(a1->params.pThrowImageBase);
        if ( (int)pThrowImageBase_low >= -1 )
        {
          v18 = (_BYTE *)(*((int *)a5 + 2) + a4->ImageBase);
          if ( (int)pThrowImageBase_low < *(_DWORD *)&v18[-*((char *)qword_1400AE700 + (*v18 & 0xF)) - 4] >> *((_BYTE *)&qword_1400AE700[2] + (*v18 & 0xF)) )
          {
            pExceptionObject = (unsigned __int64 *)a1->params.pExceptionObject;
            goto LABEL_19;
          }
        }
LABEL_35:
        abort();
      }
    }
    __FrameHandler4::FrameUnwindToEmptyState(a2, a4, a5);
    return 1;
  }
  FH4::TryBlockMap4::TryBlockMap4((FH4::TryBlockMap4 *)v22, a5, a4->ImageBase);
  if ( v22[0] || (*(_BYTE *)a5 & 0x40) != 0 )
  {
    if ( a1->ExceptionCode == -529697949 && a1->NumberParameters >= 3 && a1->params.magicNumber > 0x19930522 )
    {
      pForwardCompat = a1->params.pThrowInfo->pForwardCompat;
      if ( (_DWORD)pForwardCompat )
      {
        ThrowImageBase = GetThrowImageBase();
        if ( pForwardCompat + ThrowImageBase )
          return ((__int64 (__fastcall *)(struct EHExceptionRecord *, unsigned __int64 *, __int64, struct _xDISPATCHER_CONTEXT *, struct FH4::FuncInfo4 *, int, __int64, _DWORD))(pForwardCompat + ThrowImageBase))(
                   a1,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8);
      }
    }
    FindHandler<__FrameHandler4>(a1, a5, a8, a6, a7);
  }
  return 1;
}
// 14006C384: using guessed type __int64 GetThrowImageBase(void);
// 14006EDE4: using guessed type __int64 __fastcall _except_validate_context_record(_QWORD);
// 1400AE700: using guessed type __int64 qword_1400AE700[4];
