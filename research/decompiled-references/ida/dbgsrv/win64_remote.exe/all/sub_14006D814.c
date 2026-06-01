/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006D814
// Address: 0x000000014006D814

//----- (000000014006D814) ----------------------------------------------------
__int64 __fastcall sub_14006D814(
        struct EHExceptionRecord *a1,
        unsigned __int64 *a2,
        struct _CONTEXT *a3,
        struct _xDISPATCHER_CONTEXT *a4,
        struct FH4::FuncInfo4 *a5,
        int a6,
        int a7,
        __int64 a8)
{
  bool v8; // zf
  __int64 result; // rax
  PVOID v13; // rbx
  __int64 v14; // xmm1_8
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  _BYTE *v28; // r10
  __int64 v29; // rcx
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE *v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // r10
  int v37; // [rsp+50h] [rbp-B0h]
  unsigned int v38; // [rsp+60h] [rbp-A0h]
  __int64 v40[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v41; // [rsp+88h] [rbp-78h]
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  _BYTE v47[8]; // [rsp+C8h] [rbp-38h] BYREF
  int v48; // [rsp+D0h] [rbp-30h]
  _DWORD v49[10]; // [rsp+100h] [rbp+0h] BYREF

  v8 = a1->ExceptionCode == -2147483645;
  result = a8;
  v41 = a2;
  if ( !v8 )
  {
    if ( !*(_QWORD *)(sub_14006CCF8() + 16)
      || (v13 = EncodePointer(nullptr), *(PVOID *)(sub_14006CCF8() + 16) == v13)
      || a1->ExceptionCode == -532459699
      || a1->ExceptionCode == -532462766
      || (result = sub_14006BC74(&a1->ExceptionCode, (__int64)a2, (__int64)a3), !(_DWORD)result) )
    {
      FH4::TryBlockMap4::TryBlockMap4((FH4::TryBlockMap4 *)v49, a5, a4->ImageBase);
      if ( !v49[0] )
        abort();
      sub_14006BE54(&v42, (__int64)v49, a6);
      v14 = v42;
      result = DWORD2(v42);
      *(_OWORD *)v40 = v42;
      if ( DWORD2(v42) < v43 )
      {
        v38 = v40[1];
        do
        {
          *(_OWORD *)v40 = *(_OWORD *)(v14 + 24);
          if ( SLODWORD(v40[0]) <= a6 && a6 <= SHIDWORD(v40[0]) )
          {
            FH4::HandlerMap4::HandlerMap4(
              (FH4::HandlerMap4 *)&v44,
              (const struct FH4::TryBlockMapEntry4 *)v40,
              a4->ImageBase,
              a4->FunctionEntry->BeginAddress);
            v45 = v46;
            FH4::HandlerMap4::DecompHandler((FH4::HandlerMap4 *)&v44);
            v15 = v44;
            v45 = v46;
            FH4::HandlerMap4::DecompHandler((FH4::HandlerMap4 *)&v44);
            v20 = (unsigned int)(v15 - 1);
            if ( (_DWORD)v20 )
            {
              do
              {
                FH4::HandlerMap4::DecompHandler((FH4::HandlerMap4 *)&v44);
                --v20;
              }
              while ( v20 );
            }
            v21 = v48;
            if ( !v48
              || !(v21 + GetImageBase(v17, v16, v18, v19))
              || ((v26 = v48) == 0 ? (v27 = 0) : (v27 = v26 + GetImageBase(v23, v22, v24, v25)), !*(_BYTE *)(v27 + 16)) )
            {
              if ( (v47[4] & 0x40) == 0 )
              {
                LOBYTE(v37) = 1;
                sub_14006D204(a1, v41, a3, a4, a5, (struct FH4::HandlerType4 *)v47, 0, (int *)v40, a7, a8, v37, 0);
              }
            }
          }
          v28 = *(_BYTE **)(v14 + 8);
          v29 = *v28 & 0xF;
          v30 = *((char *)qword_1400AE700 + v29);
          v31 = *(_DWORD *)&v28[-v30 - 4] >> *((_BYTE *)&qword_1400AE700[2] + v29);
          *(_QWORD *)(v14 + 8) = &v28[-v30];
          *(_DWORD *)(v14 + 24) = v31;
          v32 = v28[-v30] & 0xF;
          v33 = *((char *)qword_1400AE700 + v32);
          v34 = &v28[-v33 - v30];
          *(_DWORD *)(v14 + 28) = *((_DWORD *)v34 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v32);
          *(_QWORD *)(v14 + 8) = v34;
          v35 = *v34 & 0xF;
          v36 = &v28[-*((char *)qword_1400AE700 + v35) - v33 - v30];
          *(_DWORD *)(v14 + 32) = *(v36 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v35);
          result = (__int64)(v36 + 1);
          *(_QWORD *)(v14 + 8) = v36;
          *(_DWORD *)(v14 + 36) = *v36;
          *(_QWORD *)(v14 + 8) = v36 + 1;
          ++v38;
        }
        while ( v38 < v43 );
      }
    }
  }
  return result;
}
// 14006D9C9: variable 'v17' is possibly undefined
// 14006D9C9: variable 'v16' is possibly undefined
// 14006D9C9: variable 'v18' is possibly undefined
// 14006D9C9: variable 'v19' is possibly undefined
// 14006D9DB: variable 'v23' is possibly undefined
// 14006D9DB: variable 'v22' is possibly undefined
// 14006D9DB: variable 'v24' is possibly undefined
// 14006D9DB: variable 'v25' is possibly undefined
// 14006DA3C: variable 'v37' is possibly undefined
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400AE700: using guessed type __int64 qword_1400AE700[4];
