unsigned __int64 __fastcall sub_1C350E0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r13
  signed __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 *v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rdi
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // r11
  char v13; // dl
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 *v17; // rbp
  __int64 v18; // r14
  int v19; // edx
  __int64 v20; // rsi
  char v21; // cl
  char v22; // di
  bool v23; // cc
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 *v27; // rdx
  __int64 *v28; // rax
  int v29; // edi
  __int64 v30; // r9
  char v31; // cl
  __int64 v32; // rdi
  __int64 v33; // rcx
  signed __int64 v34; // [rsp+0h] [rbp-58h]
  int v35; // [rsp+10h] [rbp-48h]
  char v36; // [rsp+17h] [rbp-41h]
  __int64 v37; // [rsp+18h] [rbp-40h]

  if ( a1 == a2 )
    return (unsigned __int64)a3;
  v3 = a1;
  if ( a2 == a3 )
    return (unsigned __int64)a1;
  v37 = (__int64)a1 + (char *)a3 - (char *)a2;
  v4 = 0xAAAAAAAAAAAAAAABLL * (a3 - a1);
  v5 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
  if ( v5 == v4 - v5 )
  {
    v27 = a2;
    v28 = a1;
    do
    {
      v29 = *((_DWORD *)v28 + 2);
      v30 = *v28;
      v28 += 3;
      v27 += 3;
      *((_DWORD *)v28 - 4) = 0;
      v31 = *((_BYTE *)v28 - 12);
      *(v28 - 3) = *(v27 - 3);
      *((_DWORD *)v28 - 4) = *((_DWORD *)v27 - 4);
      *((_BYTE *)v28 - 12) = *((_BYTE *)v27 - 12);
      *((_DWORD *)v27 - 4) = v29;
      v32 = *(v27 - 1);
      *(v27 - 3) = v30;
      *((_BYTE *)v27 - 12) = v31;
      v33 = *(v28 - 1);
      *(v28 - 1) = v32;
      *(v27 - 1) = v33;
    }
    while ( a2 != v28 );
    return (unsigned __int64)&v3[((unsigned __int64)((char *)(a2 - 3) - (char *)v3) >> 3) + 3];
  }
  else
  {
    v6 = v4 - v5;
    if ( v5 >= v4 - v5 )
      goto LABEL_12;
    while ( 1 )
    {
      v7 = &v3[3 * v5];
      if ( v6 > 0 )
      {
        v8 = v3;
        v9 = 0;
        do
        {
          v10 = *((_DWORD *)v8 + 2);
          v11 = *v8;
          ++v9;
          v8 += 3;
          *((_DWORD *)v8 - 4) = 0;
          v12 = *v7;
          v7 += 3;
          v13 = *((_BYTE *)v8 - 12);
          *(v8 - 3) = v12;
          *((_DWORD *)v8 - 4) = *((_DWORD *)v7 - 4);
          *((_BYTE *)v8 - 12) = *((_BYTE *)v7 - 12);
          *(v7 - 3) = v11;
          *((_DWORD *)v7 - 4) = v10;
          v14 = *(v7 - 1);
          *((_BYTE *)v7 - 12) = v13;
          v15 = *(v8 - 1);
          *(v8 - 1) = v14;
          *(v7 - 1) = v15;
        }
        while ( v6 != v9 );
        v3 += 3 * v6;
      }
      if ( !(v4 % v5) )
        break;
      v6 = v5;
      v5 -= v4 % v5;
      while ( 1 )
      {
        v4 = v6;
        v6 -= v5;
        if ( v5 < v6 )
          break;
LABEL_12:
        v16 = &v3[3 * v4];
        v3 = &v16[-3 * v6];
        if ( v5 > 0 )
        {
          v17 = &v16[-3 * v6];
          v18 = 0;
          do
          {
            v17 -= 3;
            v16 -= 3;
            v19 = *((_DWORD *)v17 + 2);
            v20 = *v17;
            *((_DWORD *)v17 + 2) = 0;
            v21 = *((_BYTE *)v17 + 12);
            *v17 = *v16;
            *((_DWORD *)v17 + 2) = *((_DWORD *)v16 + 2);
            v22 = *((_BYTE *)v16 + 12);
            *((_DWORD *)v16 + 2) = 0;
            v23 = *((_DWORD *)v16 + 2) <= 0x40u;
            *((_BYTE *)v17 + 12) = v22;
            if ( !v23 && *v16 )
            {
              v36 = v21;
              v35 = v19;
              v34 = v4;
              operator delete[]((void *)*v16);
              v21 = v36;
              v19 = v35;
              v4 = v34;
            }
            *v16 = v20;
            v24 = v16[2];
            ++v18;
            *((_BYTE *)v16 + 12) = v21;
            v25 = v17[2];
            *((_DWORD *)v16 + 2) = v19;
            v17[2] = v24;
            v16[2] = v25;
          }
          while ( v5 != v18 );
          v3 -= 3 * v5;
        }
        v5 = v4 % v6;
        if ( !(v4 % v6) )
          return v37;
      }
    }
  }
  return v37;
}
