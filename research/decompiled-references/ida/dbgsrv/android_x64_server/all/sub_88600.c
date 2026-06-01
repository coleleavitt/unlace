/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88600
// Address: 0x0000000000088600

//----- (0000000000088600) ----------------------------------------------------
unsigned __int64 __fastcall sub_88600(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, _QWORD *); // rax
  int v7; // eax
  __int64 v8; // r14
  int v9; // eax
  int qerrno; // eax
  unsigned int (__fastcall *v11)(__int64, __int64); // rax
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v13[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 432);
  switch ( *(_WORD *)(v4 + 24) )
  {
    case 2:
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(a1 + 136);
      if ( v6 )
        goto LABEL_6;
      if ( *(_QWORD *)(a1 + 144) )
        goto LABEL_20;
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 8) = 0;
      goto LABEL_12;
    case 3:
    case 5:
      v5 = *(_QWORD *)(v4 + 32);
      goto LABEL_10;
    case 8:
      v5 = *(_QWORD *)(v4 + 48);
LABEL_10:
      *(_BYTE *)a2 = *(_BYTE *)(v4 + 40);
      goto LABEL_11;
    case 0x28:
      sub_881F0(a1, a2, a3, a4);
      return __readfsqword(0x28u);
    default:
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(a1 + 136);
      if ( !v6 )
      {
LABEL_20:
        v11 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 144);
        if ( v11 )
        {
          *(_BYTE *)(a1 + 444) = 0;
          *(_DWORD *)(a1 + 448) = 0;
          if ( !v11(a1, a1 + 444) )
            goto LABEL_22;
        }
        goto LABEL_25;
      }
LABEL_6:
      v7 = v6(a1, *(_QWORD *)(a1 + 192), v4, v13);
      if ( v7 )
      {
        if ( v7 == 34 )
        {
LABEL_22:
          *(_BYTE *)(a1 + 440) = 1;
          *(_BYTE *)a2 = 1;
          *(_QWORD *)(a2 + 8) = 0;
          return __readfsqword(0x28u);
        }
LABEL_25:
        sub_881D0(a1);
      }
      v5 = v13[0];
      *(_BYTE *)a2 = 0;
LABEL_11:
      *(_QWORD *)(a2 + 8) = v5;
LABEL_12:
      v8 = *(_QWORD *)(a1 + 432);
      v9 = sub_862A0(a1, v8, 0, nullptr, a3, a4);
      if ( !v9 && *(_QWORD *)(a1 + 64) )
        v9 = sub_871E0(a1, v8, a3, a4);
      if ( v9 )
      {
        qerrno = get_qerrno();
        longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
      }
      return __readfsqword(0x28u);
  }
}
