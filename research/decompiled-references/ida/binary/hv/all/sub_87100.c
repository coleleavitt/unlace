__int64 __fastcall sub_87100(__int64 a1, _QWORD *a2, unsigned __int8 *a3, __int64 *a4)
{
  __int64 v6; // r14
  char v7; // r12
  unsigned __int8 *v8; // rbp
  __int64 v9; // r11
  __int64 v10; // rdx
  int *v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 i; // rax
  __int64 v19; // rsi
  __int64 v20; // r10
  _BOOL4 v21; // r15d
  __int64 v22; // rsi
  __int64 v23; // rdx
  _BOOL4 v24; // edi
  __int64 j; // r15
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v33; // rax
  __int64 *v34; // rax
  unsigned __int8 *v35; // [rsp+8h] [rbp-50h]
  unsigned __int8 *v36; // [rsp+10h] [rbp-48h]

  v35 = a3;
  if ( !a3 )
    return 0;
  v6 = 1;
  v7 = 0;
  do
  {
    v8 = *(unsigned __int8 **)v35;
    v36 = (unsigned __int8 *)(*(_QWORD *)v35 + *((_QWORD *)v35 + 1));
    if ( *(_QWORD *)v35 < (unsigned __int64)v36 )
    {
      do
      {
        v9 = *v8;
        v10 = a2[12];
        a2[4] = 0;
        v11 = (int *)(v10 + 56 * v9);
        v12 = *v11;
        if ( !*v11 )
        {
          if ( v11 == (int *)a2[11] )
          {
            v14 = 0;
          }
          else
          {
            v13 = a2[11];
            do
            {
              v13 = *(_QWORD *)(v13 + 24);
              ++v12;
            }
            while ( v11 != (int *)v13 );
            v14 = v12;
          }
          v15 = a2[2] - ((a2[3] == 0) - 1LL);
          if ( a2[2] == (a2[3] == 0) - 1LL )
          {
            v11 = (int *)a2[11];
          }
          else
          {
            v16 = (_DWORD *)a2[7];
            a2[4] = 1;
            *v16 = v14 & 1;
            v17 = 2;
            for ( i = v15 - 1; i; --i )
            {
              v19 = a2[4];
              v20 = a2[7];
              a2[4] = v19 + 1;
              v21 = (v14 & v17) != 0;
              v17 *= 2;
              *(_DWORD *)(v20 + 4 * v19) = v21;
            }
            v11 = (int *)a2[11];
          }
        }
        if ( (int *)a2[13] != v11 )
        {
          do
          {
            v22 = a2[7];
            v23 = a2[4];
            v24 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 24LL) == (_QWORD)v11;
            a2[4] = v23 + 1;
            *(_DWORD *)(v22 + 4 * v23) = v24;
            v11 = *((int **)v11 + 1);
          }
          while ( v11 != (int *)a2[13] );
        }
        sub_812C0(a2, v9);
        for ( j = a2[4]; j; --j )
        {
          v26 = a2[7];
          v27 = a2[4] - 1LL;
          a2[4] = v27;
          if ( *(_DWORD *)(v26 + 4 * v27) )
            v7 |= v6;
          if ( v6 == 128 )
          {
            v28 = a4[1];
            if ( v28 == a4[2] )
            {
              v33 = sub_84CB0(a1, (__int64)a4);
              a4 = v33;
              if ( !v33 )
                return 12;
              v28 = v33[1];
            }
            v29 = *a4;
            v6 = 1;
            a4[1] = v28 + 1;
            *(_BYTE *)(v29 + v28) = v7;
            v7 = 0;
          }
          else
          {
            v6 *= 2;
          }
        }
        ++v8;
      }
      while ( v36 != v8 );
    }
    v35 = *((unsigned __int8 **)v35 + 3);
  }
  while ( v35 );
  if ( v6 == 1 )
    return 0;
  v30 = a4[1];
  if ( v30 != a4[2] )
  {
LABEL_28:
    v31 = *a4;
    a4[1] = v30 + 1;
    *(_BYTE *)(v31 + v30) = v7;
    return 0;
  }
  v34 = sub_84CB0(a1, (__int64)a4);
  a4 = v34;
  if ( v34 )
  {
    v30 = v34[1];
    goto LABEL_28;
  }
  return 12;
}

