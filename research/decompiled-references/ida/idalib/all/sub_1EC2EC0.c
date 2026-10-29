__int64 __fastcall sub_1EC2EC0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r15
  char *v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  _DWORD *v8; // rdx
  char *v9; // rax
  _DWORD *v10; // rsi
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  _DWORD *j; // rbx
  char *v18; // rbx
  char *v19; // rdx
  char *v20; // rbx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  char *k; // rbx
  _DWORD *v30; // r13
  _DWORD *v31; // rbx
  char *i; // rbx
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned int v41; // [rsp+4h] [rbp-64h]
  _DWORD *v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+10h] [rbp-58h] BYREF
  __int64 v44; // [rsp+18h] [rbp-50h]
  __int64 v45; // [rsp+20h] [rbp-48h]

  if ( a1 != a2 )
  {
    v3 = *(_DWORD **)a2;
    v5 = *(char **)a1;
    v6 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v41 = *(_DWORD *)(a2 + 8);
      v7 = v41;
      if ( v41 > v6 )
      {
        if ( v41 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          for ( i = &v5[32 * v6]; v5 != i; sub_A0AD20((__int64)(i + 8)) )
            i -= 32;
          *(_DWORD *)(a1 + 8) = 0;
          v6 = 0;
          sub_13A7520(a1, v41);
          v3 = *(_DWORD **)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v5 = *(char **)a1;
          v8 = *(_DWORD **)a2;
        }
        else
        {
          v8 = *(_DWORD **)a2;
          if ( *(_DWORD *)(a1 + 8) )
          {
            v6 *= 32LL;
            v42 = (_DWORD *)((char *)v3 + v6);
            do
            {
              v33 = *v3;
              v3 += 8;
              v5 += 32;
              *((_DWORD *)v5 - 8) = v33;
              v34 = *((_QWORD *)v5 - 3);
              *((_QWORD *)v5 - 3) = 0;
              v43 = v34;
              v35 = *((_QWORD *)v5 - 2);
              *((_QWORD *)v5 - 2) = 0;
              v44 = v35;
              v36 = *((_QWORD *)v5 - 1);
              *((_QWORD *)v5 - 1) = 0;
              v45 = v36;
              *((_QWORD *)v5 - 3) = *((_QWORD *)v3 - 3);
              v37 = *((_QWORD *)v3 - 2);
              *((_QWORD *)v3 - 3) = 0;
              v38 = *((_QWORD *)v5 - 2);
              *((_QWORD *)v5 - 2) = v37;
              v39 = *((_QWORD *)v3 - 1);
              *((_QWORD *)v3 - 2) = v38;
              v40 = *((_QWORD *)v5 - 1);
              *((_QWORD *)v5 - 1) = v39;
              *((_QWORD *)v3 - 1) = v40;
              sub_A0AD20((__int64)&v43);
            }
            while ( v42 != v3 );
            v3 = *(_DWORD **)a2;
            v7 = *(unsigned int *)(a2 + 8);
            v5 = *(char **)a1;
            v8 = (_DWORD *)(*(_QWORD *)a2 + v6);
          }
        }
        v9 = &v5[v6];
        v10 = &v3[8 * v7];
        if ( v10 != v8 )
        {
          do
          {
            v11 = *v8;
            *(_OWORD *)(v9 + 8) = 0;
            v8 += 8;
            v9 += 32;
            *((_QWORD *)v9 - 1) = 0;
            *((_DWORD *)v9 - 8) = v11;
            *((_QWORD *)v9 - 3) = *((_QWORD *)v8 - 3);
            v12 = *((_QWORD *)v8 - 2);
            *((_QWORD *)v8 - 3) = 0;
            v13 = *((_QWORD *)v9 - 2);
            *((_QWORD *)v9 - 2) = v12;
            v14 = *((_QWORD *)v8 - 1);
            *((_QWORD *)v8 - 2) = v13;
            v15 = *((_QWORD *)v9 - 1);
            *((_QWORD *)v9 - 1) = v14;
            *((_QWORD *)v8 - 1) = v15;
          }
          while ( v10 != v8 );
          v3 = *(_DWORD **)a2;
        }
        *(_DWORD *)(a1 + 8) = v41;
        for ( j = &v3[8 * *(unsigned int *)(a2 + 8)]; j != v3; sub_A0AD20((__int64)(j + 2)) )
          j -= 8;
LABEL_11:
        *(_DWORD *)(a2 + 8) = 0;
        return a1;
      }
      v19 = *(char **)a1;
      if ( v41 )
      {
        v20 = &v5[32 * v41];
        do
        {
          v21 = *v3;
          v5 += 32;
          v3 += 8;
          *((_DWORD *)v5 - 8) = v21;
          v22 = *((_QWORD *)v5 - 3);
          *((_QWORD *)v5 - 3) = 0;
          v43 = v22;
          v23 = *((_QWORD *)v5 - 2);
          *((_QWORD *)v5 - 2) = 0;
          v44 = v23;
          v24 = *((_QWORD *)v5 - 1);
          *((_QWORD *)v5 - 1) = 0;
          v45 = v24;
          *((_QWORD *)v5 - 3) = *((_QWORD *)v3 - 3);
          v25 = *((_QWORD *)v3 - 2);
          *((_QWORD *)v3 - 3) = 0;
          v26 = *((_QWORD *)v5 - 2);
          *((_QWORD *)v5 - 2) = v25;
          v27 = *((_QWORD *)v3 - 1);
          *((_QWORD *)v3 - 2) = v26;
          v28 = *((_QWORD *)v5 - 1);
          *((_QWORD *)v5 - 1) = v27;
          *((_QWORD *)v3 - 1) = v28;
          sub_A0AD20((__int64)&v43);
        }
        while ( v5 != v20 );
        v19 = *(char **)a1;
        v6 = *(unsigned int *)(a1 + 8);
      }
      for ( k = &v19[32 * v6]; v5 != k; sub_A0AD20((__int64)(k + 8)) )
        k -= 32;
      v30 = *(_DWORD **)a2;
      *(_DWORD *)(a1 + 8) = v41;
      v31 = &v30[8 * *(unsigned int *)(a2 + 8)];
      if ( v30 == v31 )
        goto LABEL_11;
      do
      {
        v31 -= 8;
        sub_A0AD20((__int64)(v31 + 2));
      }
      while ( v30 != v31 );
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v18 = &v5[32 * v6];
      if ( v5 != v18 )
      {
        do
        {
          v18 -= 32;
          sub_A0AD20((__int64)(v18 + 8));
        }
        while ( v5 != v18 );
        v18 = *(char **)a1;
      }
      if ( v18 != (char *)(a1 + 16) )
        free(v18);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = a2 + 16;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}
