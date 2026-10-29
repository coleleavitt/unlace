__int64 *__fastcall sub_1C4A4A0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  __int64 *v7; // r10
  char *v9; // r14
  __int64 *v10; // r12
  __int64 *v11; // rbp
  __int64 *v12; // rbx
  __int64 *result; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  char *v17; // r13
  __int64 *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r13
  unsigned __int64 v21; // r15
  char v22; // cl
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r15
  char *v26; // r13
  __int64 v27; // rsi
  unsigned __int64 v28; // r14
  __int64 v29; // rcx
  char v30; // dl
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 *v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned __int64 v36; // [rsp+10h] [rbp-48h]
  __int64 v37; // [rsp+18h] [rbp-40h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  v7 = a1;
  v9 = a6;
  v10 = a2;
  v11 = a3;
  v12 = a1;
  if ( a4 > a5 && a5 <= a7 )
  {
    result = a1;
    if ( !a5 )
      return result;
    v14 = (char *)a3 - (char *)a2;
    v37 = (char *)a2 - (char *)a1;
    v15 = 0xAAAAAAAAAAAAAAABLL * (a3 - a2);
    v16 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
    if ( v14 <= 0 )
    {
      if ( v37 <= 0 )
        return v12;
      v21 = 0;
      v20 = 0;
    }
    else
    {
      v17 = a6;
      v18 = a2;
      do
      {
        if ( *((_DWORD *)v17 + 2) > 0x40u && *(_QWORD *)v17 )
        {
          v35 = v16;
          v31 = v15;
          operator delete[](*(void **)v17);
          v16 = v35;
          v15 = v31;
        }
        v19 = *v18;
        v17 += 24;
        v18 += 3;
        *((_QWORD *)v17 - 3) = v19;
        *((_DWORD *)v17 - 4) = *((_DWORD *)v18 - 4);
        LOBYTE(v19) = *((_BYTE *)v18 - 12);
        *((_DWORD *)v18 - 4) = 0;
        *(v17 - 12) = v19;
        *((_QWORD *)v17 - 1) = *(v18 - 1);
        --v15;
      }
      while ( v15 );
      v20 = v17 - v9;
      v21 = 0xAAAAAAAAAAAAAAABLL * (v20 >> 3);
      if ( v37 <= 0 )
        goto LABEL_15;
    }
    do
    {
      v11 -= 3;
      v10 -= 3;
      if ( *((_DWORD *)v11 + 2) > 0x40u && *v11 )
      {
        v32 = v16;
        operator delete[]((void *)*v11);
        v16 = v32;
      }
      *v11 = *v10;
      *((_DWORD *)v11 + 2) = *((_DWORD *)v10 + 2);
      v22 = *((_BYTE *)v10 + 12);
      *((_DWORD *)v10 + 2) = 0;
      *((_BYTE *)v11 + 12) = v22;
      v11[2] = v10[2];
      --v16;
    }
    while ( v16 );
LABEL_15:
    if ( v20 > 0 )
    {
      do
      {
        if ( *((_DWORD *)v12 + 2) > 0x40u )
        {
          if ( *v12 )
            operator delete[]((void *)*v12);
        }
        v23 = *(_QWORD *)v9;
        v12 += 3;
        v9 += 24;
        *(v12 - 3) = v23;
        *((_DWORD *)v12 - 4) = *((_DWORD *)v9 - 4);
        LOBYTE(v23) = *(v9 - 12);
        *((_DWORD *)v9 - 4) = 0;
        *((_BYTE *)v12 - 12) = v23;
        *(v12 - 1) = *((_QWORD *)v9 - 1);
        --v21;
      }
      while ( v21 );
    }
    return v12;
  }
  if ( a4 > a7 )
  {
    sub_1C34E40(a1, a2, a3);
    return (__int64 *)((char *)a1 + (char *)a3 - (char *)a2);
  }
  result = a3;
  if ( a4 )
  {
    v38 = (char *)a3 - (char *)a2;
    v24 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
    v25 = 0xAAAAAAAAAAAAAAABLL * (a3 - a2);
    if ( (char *)a2 - (char *)a1 <= 0 )
    {
      if ( v38 <= 0 )
        return v11;
      v34 = 0;
      v26 = a6;
      v28 = 0;
    }
    else
    {
      v26 = a6;
      do
      {
        if ( *((_DWORD *)v26 + 2) > 0x40u && *(_QWORD *)v26 )
        {
          v36 = v24;
          v33 = v7;
          operator delete[](*(void **)v26);
          v24 = v36;
          v7 = v33;
        }
        v27 = *v7;
        v26 += 24;
        v7 += 3;
        *((_QWORD *)v26 - 3) = v27;
        *((_DWORD *)v26 - 4) = *((_DWORD *)v7 - 4);
        LOBYTE(v27) = *((_BYTE *)v7 - 12);
        *((_DWORD *)v7 - 4) = 0;
        *(v26 - 12) = v27;
        *((_QWORD *)v26 - 1) = *(v7 - 1);
        --v24;
      }
      while ( v24 );
      v34 = v26 - v9;
      v28 = 0xAAAAAAAAAAAAAAABLL * ((v26 - v9) >> 3);
      if ( v38 <= 0 )
        goto LABEL_35;
    }
    do
    {
      if ( *((_DWORD *)v12 + 2) > 0x40u && *v12 )
        operator delete[]((void *)*v12);
      v29 = *v10;
      v12 += 3;
      v10 += 3;
      *(v12 - 3) = v29;
      *((_DWORD *)v12 - 4) = *((_DWORD *)v10 - 4);
      LOBYTE(v29) = *((_BYTE *)v10 - 12);
      *((_DWORD *)v10 - 4) = 0;
      *((_BYTE *)v12 - 12) = v29;
      *(v12 - 1) = *(v10 - 1);
      --v25;
    }
    while ( v25 );
LABEL_35:
    if ( v34 > 0 )
    {
      do
      {
        v11 -= 3;
        v26 -= 24;
        if ( *((_DWORD *)v11 + 2) > 0x40u && *v11 )
          operator delete[]((void *)*v11);
        *v11 = *(_QWORD *)v26;
        *((_DWORD *)v11 + 2) = *((_DWORD *)v26 + 2);
        v30 = v26[12];
        *((_DWORD *)v26 + 2) = 0;
        *((_BYTE *)v11 + 12) = v30;
        v11[2] = *((_QWORD *)v26 + 2);
        --v28;
      }
      while ( v28 );
    }
    return v11;
  }
  return result;
}
