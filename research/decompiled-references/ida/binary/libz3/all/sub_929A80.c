__int64 __fastcall sub_929A80(__int64 a1, unsigned int *a2, int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r15
  unsigned int v8; // ebx
  int v9; // r9d
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // r12d
  _DWORD *v16; // rbp
  _DWORD *v17; // r15
  int v19; // edx
  _DWORD *v20; // rax
  int v21; // r9d
  int v22; // r15d
  int *v23; // [rsp+0h] [rbp-B8h]
  _QWORD *v24; // [rsp+8h] [rbp-B0h]
  int v25[2]; // [rsp+18h] [rbp-A0h]
  char v26; // [rsp+2Eh] [rbp-8Ah] BYREF
  char v27; // [rsp+2Fh] [rbp-89h] BYREF
  _QWORD v28[4]; // [rsp+30h] [rbp-88h] BYREF
  int v29; // [rsp+50h] [rbp-68h] BYREF
  int v30; // [rsp+58h] [rbp-60h] BYREF
  char v31; // [rsp+5Ch] [rbp-5Ch]
  __int64 v32; // [rsp+60h] [rbp-58h]
  int v33; // [rsp+68h] [rbp-50h]
  char v34; // [rsp+6Ch] [rbp-4Ch]
  __int64 v35; // [rsp+70h] [rbp-48h]

  v5 = a1 + 96;
  v23 = a3;
  v24 = a5;
  v28[0] = 0;
  v28[1] = 0;
  v28[2] = 1;
  v28[3] = 0;
  v8 = sub_1666AE0(a1 + 96, a2, v28, &v26);
  if ( (_BYTE)v8 )
  {
    sub_2FC4A0((__int64)qword_1C7F2C0, a4, (__int64)v28, a4);
    goto LABEL_20;
  }
  if ( *((_WORD *)a2 + 2) )
    goto LABEL_21;
  v10 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v10 )
    goto LABEL_6;
  if ( *v10 != 5 )
    goto LABEL_5;
  v19 = v10[1];
  if ( v19 == 6 )
  {
    if ( a2[6] )
    {
      v22 = 0;
      while ( (unsigned __int8)sub_929A80(a1, *(_QWORD *)&a2[2 * v22 + 8], (int)v23, a4, (int)v24, v9, (int)v23, v24) )
      {
        if ( ++v22 >= a2[6] )
          goto LABEL_20;
      }
      goto LABEL_21;
    }
LABEL_20:
    v8 = 1;
    goto LABEL_21;
  }
  if ( v19 != 9 || a2[6] != 2 )
    goto LABEL_25;
  *(_QWORD *)v25 = *((_QWORD *)a2 + 5);
  if ( (unsigned __int8)sub_1666AE0(v5, *((_QWORD *)a2 + 4), v28, &v27) )
    goto LABEL_32;
  if ( *((_WORD *)a2 + 2) )
    goto LABEL_21;
  v10 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v10 )
    goto LABEL_6;
LABEL_5:
  if ( *v10 != 5 )
  {
LABEL_6:
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(v11 + 8656);
    if ( !v12 || (v13 = *a2, (unsigned int)v13 >= *(_DWORD *)(v12 - 4)) || (v14 = *(_QWORD *)(v12 + 8 * v13)) == 0 )
    {
      sub_B6F780(v11);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2);
    }
    v15 = sub_B39350(v14, *(unsigned int *)(a1 + 8));
    if ( v15 == -1 )
      v15 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v14);
    v16 = (_DWORD *)*v24;
    if ( !*v24 )
      goto LABEL_18;
    v17 = &v16[10 * *(v16 - 1)];
    if ( v17 == v16 )
      goto LABEL_18;
    do
    {
      while ( *v16 != v15 )
      {
        v16 += 10;
        if ( v17 == v16 )
          goto LABEL_17;
      }
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(v16 + 2), (__int64)v23, (__int64)(v16 + 2));
      v16 += 10;
      LOBYTE(v8) = 1;
    }
    while ( v17 != v16 );
LABEL_17:
    if ( !(_BYTE)v8 )
    {
LABEL_18:
      v29 = v15;
      v31 &= 0xFCu;
      v34 &= 0xFCu;
      v30 = 0;
      v32 = 0;
      v33 = 1;
      v35 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v30, v23);
      sub_91D970(v24, (__int64)&v29);
      sub_25A130((char *)&v30);
    }
    goto LABEL_20;
  }
LABEL_25:
  if ( v10[1] != 9 || a2[6] != 2 )
    goto LABEL_21;
  *(_QWORD *)v25 = *((_QWORD *)a2 + 4);
  if ( (unsigned __int8)sub_1666AE0(v5, *((_QWORD *)a2 + 5), v28, &v29) )
  {
LABEL_32:
    sub_3EBE30((__int64)&v29, (__int64)v23, (__int64)v28);
    v8 = sub_929A80(a1, v25[0], (int)&v29, a4, (int)v24, v21, (int)v23, v24);
    sub_25A130((char *)&v29);
    goto LABEL_21;
  }
  if ( !*((_WORD *)a2 + 2) )
  {
    v20 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( !v20 || *v20 != 5 )
      goto LABEL_6;
  }
LABEL_21:
  sub_25A130((char *)v28);
  return v8;
}

