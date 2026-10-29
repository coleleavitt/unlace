/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A8B0
// Address: 0x000000010004A8B0

//----- (000000010004A8B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_10004A8B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64, __int64 *); // rax
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax
  int qerrno; // eax
  __int64 v11; // rax
  unsigned int (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // [rsp+0h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 496);
  switch ( *(_WORD *)(v2 + 24) )
  {
    case 2:
      v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(a1 + 136);
      if ( v4 )
        goto LABEL_6;
      if ( *(_QWORD *)(a1 + 144) )
        goto LABEL_18;
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 8) = 0;
      goto LABEL_11;
    case 3:
    case 5:
      v3 = *(_QWORD *)(v2 + 32);
      goto LABEL_10;
    case 8:
      v3 = *(_QWORD *)(v2 + 48);
LABEL_10:
      *(_BYTE *)a2 = *(_BYTE *)(v2 + 40);
      *(_QWORD *)(a2 + 8) = v3;
      goto LABEL_11;
    case 0x28:
      return sub_10004A4C0(a1, a2);
    default:
      v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(a1 + 136);
      if ( !v4 )
      {
LABEL_18:
        v12 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 144);
        if ( v12 )
        {
          v5 = a2;
          *(_BYTE *)(a1 + 508) = 0;
          *(_DWORD *)(a1 + 512) = 0;
          if ( !v12(a1, a1 + 508) )
            goto LABEL_20;
        }
        goto LABEL_23;
      }
LABEL_6:
      v5 = a2;
      v6 = v4(a1, *(_QWORD *)(a1 + 192), v2, &v13);
      if ( v6 )
      {
        if ( v6 == 34 )
        {
LABEL_20:
          *(_BYTE *)(a1 + 504) = 1;
          *(_BYTE *)v5 = 1;
          *(_QWORD *)(v5 + 8) = 0;
          return __stack_chk_guard;
        }
LABEL_23:
        sub_10004A4A0(a1);
      }
      v11 = v13;
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = v11;
LABEL_11:
      v7 = *(_QWORD *)(a1 + 496);
      v8 = sub_100048770(a1, v7, 0, nullptr);
      if ( *(_QWORD *)(a1 + 64) != 0 && v8 == 0 )
        v8 = sub_100049580(a1, v7);
      if ( v8 )
      {
        qerrno = get_qerrno();
        longjmp((int *)(a1 + 344), qerrno);
      }
      return __stack_chk_guard;
  }
}
