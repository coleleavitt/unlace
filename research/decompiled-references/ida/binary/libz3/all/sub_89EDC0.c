__int64 __fastcall sub_89EDC0(__int64 a1, __int64 a2, int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r15
  int v7; // r9d
  unsigned int v8; // r13d
  _DWORD *v9; // rax
  int v11; // edx
  _DWORD *v12; // rax
  int v13; // r9d
  unsigned int v14; // r15d
  int *v15; // [rsp+0h] [rbp-B8h]
  _QWORD *v16; // [rsp+8h] [rbp-B0h]
  int v17[2]; // [rsp+18h] [rbp-A0h]
  char v18; // [rsp+2Eh] [rbp-8Ah] BYREF
  char v19; // [rsp+2Fh] [rbp-89h] BYREF
  _QWORD v20[4]; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+50h] [rbp-68h] BYREF
  int v22; // [rsp+58h] [rbp-60h] BYREF
  char v23; // [rsp+5Ch] [rbp-5Ch]
  __int64 v24; // [rsp+60h] [rbp-58h]
  int v25; // [rsp+68h] [rbp-50h]
  char v26; // [rsp+6Ch] [rbp-4Ch]
  __int64 v27; // [rsp+70h] [rbp-48h]

  v5 = a1 + 80;
  v15 = a3;
  v16 = a5;
  v20[0] = 0;
  v20[1] = 0;
  v20[2] = 1;
  v20[3] = 0;
  v8 = sub_1666AE0(a1 + 80, a2, v20, &v18);
  if ( (_BYTE)v8 )
  {
    sub_2FC4A0((__int64)qword_1C7F2C0, a4, (__int64)v20, a4);
    goto LABEL_9;
  }
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_7;
  v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v9 )
  {
LABEL_6:
    v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL))(a1, a2);
    v23 &= 0xFCu;
    v26 &= 0xFCu;
    v22 = 0;
    v24 = 0;
    v25 = 1;
    v27 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v22, v15);
    sub_893020(v16, (__int64)&v21);
    v8 = 1;
    sub_25A130((char *)&v22);
    goto LABEL_7;
  }
  if ( *v9 != 5 )
    goto LABEL_5;
  v11 = v9[1];
  if ( v11 == 6 )
  {
    if ( *(_DWORD *)(a2 + 24) )
    {
      v14 = 0;
      while ( (unsigned __int8)sub_89EDC0(
                                 a1,
                                 *(_QWORD *)(a2 + 8LL * v14 + 32),
                                 (int)v15,
                                 a4,
                                 (int)v16,
                                 v7,
                                 (int)v15,
                                 v16) )
      {
        if ( ++v14 >= *(_DWORD *)(a2 + 24) )
          goto LABEL_9;
      }
      goto LABEL_7;
    }
LABEL_9:
    v8 = 1;
    goto LABEL_7;
  }
  if ( v11 != 9 || *(_DWORD *)(a2 + 24) != 2 )
    goto LABEL_12;
  *(_QWORD *)v17 = *(_QWORD *)(a2 + 40);
  if ( (unsigned __int8)sub_1666AE0(v5, *(_QWORD *)(a2 + 32), v20, &v19) )
    goto LABEL_19;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_7;
  v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v9 )
    goto LABEL_6;
LABEL_5:
  if ( *v9 != 5 )
    goto LABEL_6;
LABEL_12:
  if ( v9[1] != 9 || *(_DWORD *)(a2 + 24) != 2 )
    goto LABEL_7;
  *(_QWORD *)v17 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)sub_1666AE0(v5, *(_QWORD *)(a2 + 40), v20, &v21) )
  {
LABEL_19:
    sub_3EBE30((__int64)&v21, (__int64)v15, (__int64)v20);
    v8 = sub_89EDC0(a1, v17[0], (int)&v21, a4, (int)v16, v13, (int)v15, v16);
    sub_25A130((char *)&v21);
    goto LABEL_7;
  }
  if ( !*(_WORD *)(a2 + 4) )
  {
    v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v12 || *v12 != 5 )
      goto LABEL_6;
  }
LABEL_7:
  sub_25A130((char *)v20);
  return v8;
}

