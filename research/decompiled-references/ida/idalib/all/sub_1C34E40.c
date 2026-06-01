__int64 *__fastcall sub_1C34E40(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // r8
  __int64 v4; // r12
  signed __int64 v5; // r13
  __int64 v6; // r15
  __int64 *v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rdi
  int v10; // r9d
  __int64 v11; // r10
  char v12; // dl
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 *v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // r14
  int v19; // edx
  __int64 v20; // rsi
  char v21; // cl
  char v22; // di
  bool v23; // cc
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 *v27; // rcx
  __int64 *v28; // rdi
  int v29; // edx
  __int64 v30; // r8
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // [rsp+0h] [rbp-58h]
  int v35; // [rsp+10h] [rbp-48h]
  char v36; // [rsp+17h] [rbp-41h]
  __int64 v37; // [rsp+18h] [rbp-40h]

  if ( a1 == a2 )
    return a3;
  if ( a2 == a3 )
    return a1;
  v3 = a1;
  v4 = 0xAAAAAAAAAAAAAAABLL * (a2 - a1);
  v5 = 0xAAAAAAAAAAAAAAABLL * (a3 - a1);
  v37 = (__int64)a1 + (char *)a3 - (char *)a2;
  if ( v4 == v5 - v4 )
  {
    v27 = a1;
    v28 = a2;
    do
    {
      v29 = *((_DWORD *)v27 + 2);
      v30 = *v27;
      v27 += 3;
      v28 += 3;
      *((_DWORD *)v27 - 4) = 0;
      v31 = *((_BYTE *)v27 - 12);
      *(v27 - 3) = *(v28 - 3);
      *((_DWORD *)v27 - 4) = *((_DWORD *)v28 - 4);
      *((_BYTE *)v27 - 12) = *((_BYTE *)v28 - 12);
      *((_DWORD *)v28 - 4) = v29;
      v32 = *(v28 - 1);
      *(v28 - 3) = v30;
      *((_BYTE *)v28 - 12) = v31;
      v33 = *(v27 - 1);
      *(v27 - 1) = v32;
      *(v28 - 1) = v33;
    }
    while ( a2 != v27 );
    return a2;
  }
  else
  {
    v6 = v5 - v4;
    if ( v4 >= v5 - v4 )
      goto LABEL_12;
    while ( 1 )
    {
      v7 = &v3[3 * v4];
      if ( v6 > 0 )
      {
        v8 = v3;
        v9 = 0;
        do
        {
          v10 = *((_DWORD *)v8 + 2);
          v11 = *v8;
          ++v9;
          v7 += 3;
          *((_DWORD *)v8 + 2) = 0;
          v8 += 3;
          v12 = *((_BYTE *)v8 - 12);
          *(v8 - 3) = *(v7 - 3);
          *((_DWORD *)v8 - 4) = *((_DWORD *)v7 - 4);
          *((_BYTE *)v8 - 12) = *((_BYTE *)v7 - 12);
          *(v7 - 3) = v11;
          *((_DWORD *)v7 - 4) = v10;
          v13 = *(v7 - 1);
          *((_BYTE *)v7 - 12) = v12;
          v14 = *(v8 - 1);
          *(v8 - 1) = v13;
          *(v7 - 1) = v14;
        }
        while ( v6 != v9 );
        v3 += 3 * v6;
      }
      if ( !(v5 % v4) )
        break;
      v6 = v4;
      v4 -= v5 % v4;
      while ( 1 )
      {
        v5 = v6;
        v6 -= v4;
        if ( v4 < v6 )
          break;
LABEL_12:
        v15 = &v3[3 * v5];
        v3 = &v15[-3 * v6];
        if ( v4 > 0 )
        {
          v16 = v3 - 3;
          v17 = v15 - 3;
          v18 = 0;
          do
          {
            v19 = *((_DWORD *)v16 + 2);
            v20 = *v16;
            *((_DWORD *)v16 + 2) = 0;
            v21 = *((_BYTE *)v16 + 12);
            *v16 = *v17;
            *((_DWORD *)v16 + 2) = *((_DWORD *)v17 + 2);
            v22 = *((_BYTE *)v17 + 12);
            *((_DWORD *)v17 + 2) = 0;
            v23 = *((_DWORD *)v17 + 2) <= 0x40u;
            *((_BYTE *)v16 + 12) = v22;
            if ( !v23 )
            {
              if ( *v17 )
              {
                v36 = v21;
                v35 = v19;
                v34 = v3;
                operator delete[]((void *)*v17);
                v21 = v36;
                v19 = v35;
                v3 = v34;
              }
            }
            *v17 = v20;
            v24 = v17[2];
            ++v18;
            v16 -= 3;
            *((_BYTE *)v17 + 12) = v21;
            v25 = v16[5];
            v17 -= 3;
            *((_DWORD *)v17 + 8) = v19;
            v16[5] = v24;
            v17[5] = v25;
          }
          while ( v4 != v18 );
          v3 -= 3 * v4;
        }
        v4 = v5 % v6;
        if ( !(v5 % v6) )
          return (__int64 *)v37;
      }
    }
    return (__int64 *)v37;
  }
}
