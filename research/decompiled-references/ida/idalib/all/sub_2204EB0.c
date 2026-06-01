unsigned __int64 __fastcall sub_2204EB0(__int64 *a1)
{
  char v1; // al
  __int64 v2; // r9
  char v3; // dl
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // r9
  int v11; // esp
  bool v13; // r8
  int v14; // esp
  int v15; // eax
  char v16; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v17[9]; // [rsp+1h] [rbp-87h] BYREF
  unsigned __int64 v18; // [rsp+Ah] [rbp-7Eh]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  __int64 v24; // [rsp+60h] [rbp-28h]
  __int64 v25; // [rsp+68h] [rbp-20h]
  __int64 v26; // [rsp+70h] [rbp-18h]
  unsigned __int64 v27; // [rsp+78h] [rbp-10h]

  v1 = *((_BYTE *)a1 + 20);
  v2 = *a1;
  v3 = v1 & 7;
  if ( (v1 & 7) == 1 )
  {
    v13 = 0;
    goto LABEL_8;
  }
  if ( v3 == 3 || !v3 )
  {
    v13 = (v1 & 8) != 0;
LABEL_8:
    *(_QWORD *)&v17[1] = 0;
    v19 = 0;
    memset(&v17[7], 0, 8LL * ((v14 + 2 - (unsigned int)&v17[7] + 62) >> 3));
    v16 = v1 & 7;
    v27 = 0xFF51AFD7ED558CCDLL;
    v17[0] = v13;
    v15 = *(_DWORD *)(v2 + 8);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    *(_DWORD *)&v17[1] = v15;
    return sub_2012F20(&v16, 6u, 0xFF51AFD7ED558CCDLL);
  }
  v5 = a1 + 1;
  v6 = (__int64)(a1 + 2);
  v7 = *(_DWORD *)(v2 + 8) + 64;
  if ( v7 > 0x7F )
  {
    v5 = (_QWORD *)a1[1];
    v6 = (__int64)&v5[v7 >> 6];
  }
  v8 = sub_100C420(v5, v6);
  v9 = *a1;
  v10 = v8;
  LOBYTE(v8) = *((_BYTE *)a1 + 20);
  v17[8] = 0;
  v19 = 0;
  memset(&v17[7], 0, 8LL * ((v11 + 2 - (unsigned int)&v17[7] + 62) >> 3));
  v16 = v8 & 7;
  v27 = 0xFF51AFD7ED558CCDLL;
  *(_QWORD *)v17 = (v8 & 8) != 0;
  LODWORD(v8) = *(_DWORD *)(v9 + 8);
  v20 = 0;
  *(_DWORD *)&v17[1] = v8;
  LODWORD(v8) = *((_DWORD *)a1 + 4);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  *(_DWORD *)&v17[5] = v8;
  v18 = v10;
  return sub_2012F20(&v16, 0x12u, 0xFF51AFD7ED558CCDLL);
}
