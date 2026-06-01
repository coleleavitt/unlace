__int64 __fastcall sub_22C0EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r15
  _QWORD *v4; // rbx
  unsigned __int64 *v5; // rbp
  unsigned __int64 *v6; // r14
  unsigned __int64 *i; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rbp
  __int64 v13; // r14
  unsigned __int64 *v14; // r13
  unsigned __int64 *v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // rbp
  __int64 v21; // rax
  int v22; // r14d
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v24; // r14
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v28[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a1 + 8);
    v4 = *(_QWORD **)a1;
    v27 = *(_DWORD *)(a2 + 8);
    v2 = v27;
    if ( v27 <= v3 )
    {
      v11 = *(_QWORD **)a1;
      if ( v27 )
      {
        v12 = *(unsigned __int64 **)a2;
        v13 = 32LL * v27;
        v14 = v4 + 1;
        v15 = (unsigned __int64 *)(*(_QWORD *)a2 + v13);
        do
        {
          v16 = v14[2];
          *(v14 - 1) = *v12;
          v17 = v12[3];
          if ( v16 != v17 )
          {
            if ( v16 != -4096 && v16 != 0 && v16 != -8192 )
            {
              sub_20CB110(v14);
              v17 = v12[3];
            }
            v14[2] = v17;
            if ( v17 != -4096 && v17 != 0 && v17 != -8192 )
              sub_20CB0E0(v14, v12[1] & 0xFFFFFFFFFFFFFFF8LL);
          }
          v12 += 4;
          v14 += 4;
        }
        while ( v12 != v15 );
        v11 = *(_QWORD **)a1;
        v3 = *(unsigned int *)(a1 + 8);
        v4 = (_QWORD *)((char *)v4 + v13);
      }
      v18 = &v11[4 * v3];
      while ( v4 != v18 )
      {
        while ( 1 )
        {
          v18 -= 4;
          v19 = v18[3];
          if ( v19 == -4096 || v19 == 0 || v19 == -8192 )
            break;
          sub_20CB110(v18 + 1);
          if ( v4 == v18 )
            goto LABEL_10;
        }
      }
    }
    else
    {
      if ( v27 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v20 = &v4[4 * v3];
        while ( v20 != v4 )
        {
          while ( 1 )
          {
            v20 -= 4;
            v21 = v20[3];
            if ( v21 == 0 || v21 == -4096 || v21 == -8192 )
              break;
            sub_20CB110(v20 + 1);
            if ( v20 == v4 )
              goto LABEL_34;
          }
        }
LABEL_34:
        *(_DWORD *)(a1 + 8) = 0;
        v4 = sub_2237400(a1, (void *)(a1 + 16), v27, 32, v28);
        sub_22C0DB0(a1, v4);
        v22 = v28[0];
        if ( a1 + 16 != *(_QWORD *)a1 )
          free(*(void **)a1);
        *(_QWORD *)a1 = v4;
        v3 = 0;
        v5 = *(unsigned __int64 **)a2;
        *(_DWORD *)(a1 + 12) = v22;
        v2 = *(unsigned int *)(a2 + 8);
      }
      else
      {
        v5 = *(unsigned __int64 **)a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v3 *= 32LL;
          v23 = v4 + 1;
          v24 = (unsigned __int64 *)((char *)v5 + v3);
          do
          {
            v25 = v23[2];
            *(v23 - 1) = *v5;
            v26 = v5[3];
            if ( v25 != v26 )
            {
              if ( v25 != -4096 && v25 != 0 && v25 != -8192 )
              {
                sub_20CB110(v23);
                v26 = v5[3];
              }
              v23[2] = v26;
              if ( v26 != 0 && v26 != -4096 && v26 != -8192 )
                sub_20CB0E0(v23, v5[1] & 0xFFFFFFFFFFFFFFF8LL);
            }
            v5 += 4;
            v23 += 4;
          }
          while ( v5 != v24 );
          v2 = *(unsigned int *)(a2 + 8);
          v5 = *(unsigned __int64 **)a2;
          v4 = (_QWORD *)(v3 + *(_QWORD *)a1);
        }
      }
      v6 = &v5[4 * v2];
      for ( i = (unsigned __int64 *)((char *)v5 + v3); i != v6; v4 += 4 )
      {
        v8 = *i;
        v4[1] = 4;
        v4[2] = 0;
        *v4 = v8;
        v9 = i[3];
        v4[3] = v9;
        if ( v9 != 0 && v9 != -4096 && v9 != -8192 )
          sub_20CB0E0(v4 + 1, i[1] & 0xFFFFFFFFFFFFFFF8LL);
        i += 4;
      }
    }
LABEL_10:
    *(_DWORD *)(a1 + 8) = v27;
  }
  return a1;
}
