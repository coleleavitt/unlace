__int64 *__fastcall sub_1C499A0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  __int64 *v7; // r15
  char *v8; // r13
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // r12
  __int64 *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // r14
  char v19; // cl
  __int64 v20; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r14
  char *v24; // r12
  __int64 *v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // r13
  __int64 v28; // rcx
  char v29; // dl
  signed __int64 v30; // rbx
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 *v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned __int64 v36; // [rsp+10h] [rbp-48h]
  __int64 v37; // [rsp+18h] [rbp-40h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  v7 = a1;
  v8 = a6;
  v9 = a2;
  v10 = a3;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return v7;
    v11 = (char *)a3 - (char *)a2;
    v37 = (char *)a2 - (char *)a1;
    v12 = 0xAAAAAAAAAAAAAAABLL * (a3 - a2);
    v13 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
    if ( v11 <= 0 )
    {
      if ( v37 <= 0 )
        return v7;
      v18 = 0;
      v17 = 0;
    }
    else
    {
      v14 = a6;
      v15 = a2;
      do
      {
        if ( *((_DWORD *)v14 + 2) > 0x40u && *(_QWORD *)v14 )
        {
          v35 = v13;
          v31 = v12;
          operator delete[](*(void **)v14);
          v13 = v35;
          v12 = v31;
        }
        v16 = *v15;
        v14 += 24;
        v15 += 3;
        *((_QWORD *)v14 - 3) = v16;
        *((_DWORD *)v14 - 4) = *((_DWORD *)v15 - 4);
        LOBYTE(v16) = *((_BYTE *)v15 - 12);
        *((_DWORD *)v15 - 4) = 0;
        *(v14 - 12) = v16;
        *((_QWORD *)v14 - 1) = *(v15 - 1);
        --v12;
      }
      while ( v12 );
      v17 = v14 - v8;
      v18 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 3);
      if ( v37 <= 0 )
        goto LABEL_15;
    }
    do
    {
      v10 -= 3;
      v9 -= 3;
      if ( *((_DWORD *)v10 + 2) > 0x40u && *v10 )
      {
        v32 = v13;
        operator delete[]((void *)*v10);
        v13 = v32;
      }
      *v10 = *v9;
      *((_DWORD *)v10 + 2) = *((_DWORD *)v9 + 2);
      v19 = *((_BYTE *)v9 + 12);
      *((_DWORD *)v9 + 2) = 0;
      *((_BYTE *)v10 + 12) = v19;
      v10[2] = v9[2];
      --v13;
    }
    while ( v13 );
LABEL_15:
    if ( v17 > 0 )
    {
      do
      {
        if ( *((_DWORD *)v7 + 2) > 0x40u && *v7 )
          operator delete[]((void *)*v7);
        v20 = *(_QWORD *)v8;
        v7 += 3;
        v8 += 24;
        *(v7 - 3) = v20;
        *((_DWORD *)v7 - 4) = *((_DWORD *)v8 - 4);
        LOBYTE(v20) = *(v8 - 12);
        *((_DWORD *)v8 - 4) = 0;
        *((_BYTE *)v7 - 12) = v20;
        *(v7 - 1) = *((_QWORD *)v8 - 1);
        --v18;
      }
      while ( v18 );
    }
    return v7;
  }
  if ( a4 > a7 )
  {
    v30 = (char *)a3 - (char *)a2;
    sub_1C350E0(a1, a2, a3);
    return (__int64 *)((char *)a1 + v30);
  }
  if ( !a4 )
    return v10;
  v38 = (char *)a3 - (char *)a2;
  v22 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
  v23 = 0xAAAAAAAAAAAAAAABLL * (a3 - a2);
  if ( (char *)a2 - (char *)a1 <= 0 )
  {
    if ( v38 <= 0 )
      return v10;
    v34 = 0;
    v24 = a6;
    v27 = 0;
    goto LABEL_30;
  }
  v24 = a6;
  v25 = a1;
  do
  {
    if ( *((_DWORD *)v24 + 2) > 0x40u && *(_QWORD *)v24 )
    {
      v36 = v22;
      v33 = v25;
      operator delete[](*(void **)v24);
      v22 = v36;
      v25 = v33;
    }
    v26 = *v25;
    v24 += 24;
    v25 += 3;
    *((_QWORD *)v24 - 3) = v26;
    *((_DWORD *)v24 - 4) = *((_DWORD *)v25 - 4);
    LOBYTE(v26) = *((_BYTE *)v25 - 12);
    *((_DWORD *)v25 - 4) = 0;
    *(v24 - 12) = v26;
    *((_QWORD *)v24 - 1) = *(v25 - 1);
    --v22;
  }
  while ( v22 );
  v34 = v24 - v8;
  v27 = 0xAAAAAAAAAAAAAAABLL * ((v24 - v8) >> 3);
  if ( v38 > 0 )
  {
    do
    {
LABEL_30:
      if ( *((_DWORD *)v7 + 2) > 0x40u && *v7 )
        operator delete[]((void *)*v7);
      v28 = *v9;
      v7 += 3;
      v9 += 3;
      *(v7 - 3) = v28;
      *((_DWORD *)v7 - 4) = *((_DWORD *)v9 - 4);
      LOBYTE(v28) = *((_BYTE *)v9 - 12);
      *((_DWORD *)v9 - 4) = 0;
      *((_BYTE *)v7 - 12) = v28;
      *(v7 - 1) = *(v9 - 1);
      --v23;
    }
    while ( v23 );
  }
  if ( v34 <= 0 )
    return v10;
  v7 = v10;
  do
  {
    v7 -= 3;
    v24 -= 24;
    if ( *((_DWORD *)v7 + 2) > 0x40u && *v7 )
      operator delete[]((void *)*v7);
    *v7 = *(_QWORD *)v24;
    *((_DWORD *)v7 + 2) = *((_DWORD *)v24 + 2);
    v29 = v24[12];
    *((_DWORD *)v24 + 2) = 0;
    *((_BYTE *)v7 + 12) = v29;
    v7[2] = *((_QWORD *)v24 + 2);
    --v27;
  }
  while ( v27 );
  return v7;
}
