__int64 __fastcall sub_829C50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  void *v7; // r13
  int v8; // edx
  void *v9; // r13
  __int64 v10; // rdx
  char v11; // si
  char v12; // al
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // edx
  char v21; // cl
  char v22; // al
  char v23; // dl
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rbx
  void *v28; // rdi
  __int64 v31; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+40h] [rbp-58h] BYREF
  char v36; // [rsp+44h] [rbp-54h]
  __int64 v37; // [rsp+48h] [rbp-50h]
  int v38; // [rsp+50h] [rbp-48h] BYREF
  char v39; // [rsp+54h] [rbp-44h]
  __int64 v40; // [rsp+58h] [rbp-40h]

  v31 = 0;
  v32 = 0;
  v33 = 1;
  v34 = 0;
  sub_182CBA0(qword_1C7F2C0, &v33);
  v4 = *((unsigned int *)a3 + 2);
  v5 = *a3;
  LODWORD(v33) = 1;
  BYTE4(v33) &= ~1u;
  v6 = v5 + 48 * v4;
  if ( v5 == v6 )
    goto LABEL_28;
  while ( *(_DWORD *)(v5 + 4) != 2 )
  {
    v5 += 48;
    if ( v6 == v5 )
      goto LABEL_28;
  }
  if ( v5 == v6 )
    goto LABEL_28;
  do
  {
    v7 = qword_1C7F2C0;
    v36 &= 0xFCu;
    v39 &= 0xFCu;
    v35 = 0;
    v37 = 0;
    v38 = 1;
    v40 = 0;
    sub_1832C70(qword_1C7F2C0, &v31, v5 + 16, &v35);
    sub_182CBA0(v7, &v38);
    v8 = v35;
    v9 = qword_1C7F2C0;
    v35 = v31;
    LODWORD(v31) = v8;
    v10 = v37;
    v37 = v32;
    v32 = v10;
    v11 = BYTE4(v31) & 1;
    v12 = v36 & 0xFC | BYTE4(v31) & 2;
    BYTE4(v31) = v36 & 1 | BYTE4(v31) & 0xFC | v36 & 2;
    v36 = v11 | v12;
    v13 = v33;
    LODWORD(v33) = 1;
    v38 = v13;
    v14 = v34;
    v34 = v40;
    v40 = v14;
    LOBYTE(v10) = BYTE4(v33) & 0xFC | v39 & 2;
    v39 = BYTE4(v33) & 1 | BYTE4(v33) & 2 | v39 & 0xFC;
    BYTE4(v33) = v10;
    sub_182CBA0(qword_1C7F2C0, &v35);
    sub_182CBA0(v9, &v38);
    v15 = v5 + 48;
    if ( v6 == v5 + 48 )
      break;
    while ( 1 )
    {
      v5 = v15;
      if ( *(_DWORD *)(v15 + 4) == 2 )
        break;
      v15 += 48;
      if ( v6 == v15 )
        goto LABEL_11;
    }
  }
  while ( v6 != v15 );
LABEL_11:
  v16 = v31;
  if ( !(_DWORD)v31 )
  {
LABEL_28:
    v28 = qword_1C7F2C0;
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    sub_27B950((__int64)v28, a1, &qword_1C7F280);
  }
  else
  {
    if ( (v31 & 0x100000000LL) != 0 || (_DWORD)v31 != 1 || (v33 & 0x100000000LL) != 0 || (v20 = v33, (_DWORD)v33 != 1) )
    {
      v17 = *a3;
      v18 = *a3 + 48LL * *((unsigned int *)a3 + 2);
      if ( *a3 != v18 )
      {
        while ( *(_DWORD *)(v17 + 4) != 2 )
        {
          v17 += 48;
          if ( v18 == v17 )
            goto LABEL_25;
        }
        if ( v18 != v17 )
        {
          do
          {
            sub_3ED4D0((__int64)qword_1C7F2C0, (int *)(v17 + 16), (__int64)&v31, v17 + 16);
            v19 = v17 + 48;
            if ( v18 == v17 + 48 )
              break;
            while ( 1 )
            {
              v17 = v19;
              if ( *(_DWORD *)(v19 + 4) == 2 )
                break;
              v19 += 48;
              if ( v18 == v19 )
                goto LABEL_24;
            }
          }
          while ( v19 != v18 );
LABEL_24:
          v16 = v31;
        }
      }
LABEL_25:
      v20 = v33;
    }
    else
    {
      v16 = 1;
    }
    v21 = BYTE4(v31);
    *(_DWORD *)a1 = v16;
    v22 = *(_BYTE *)(a1 + 4);
    *(_DWORD *)(a1 + 16) = v20;
    v23 = BYTE4(v33) & 3;
    *(_BYTE *)(a1 + 4) = v21 & 3 | v22 & 0xFC;
    v24 = v32;
    v32 = 0;
    *(_QWORD *)(a1 + 8) = v24;
    *(_BYTE *)(a1 + 20) = v23 | *(_BYTE *)(a1 + 20) & 0xFC;
    v25 = v34;
    v34 = 0;
    *(_QWORD *)(a1 + 24) = v25;
  }
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  sub_182CBA0(v26, &v33);
  return a1;
}

