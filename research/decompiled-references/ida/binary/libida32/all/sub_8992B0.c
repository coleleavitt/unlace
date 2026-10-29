__int64 __fastcall sub_8992B0(__int64 a1, __int64 a2, __int64 a3, signed __int64 a4, char *a5, size_t a6)
{
  __int64 result; // rax
  size_t v9; // rbx
  __int64 v10; // r9
  int v11; // ecx
  size_t v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  char *v15; // r15
  size_t v16; // r12
  size_t v17; // rbx
  unsigned int v18; // esi
  char *v19; // rax
  void *v20; // rdi
  size_t v21; // r14
  size_t v22; // rbx
  char *v23; // r15
  __int64 v24; // r12
  __int64 i; // r13
  size_t v26; // rbx
  unsigned int v27; // esi
  char *v28; // rax
  const void *v29; // rsi
  __int64 v30; // rbx
  int v31; // r12d
  int v32; // r13d
  unsigned int v33; // esi
  void *v34; // r14
  void *v35; // rax
  __int64 v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+18h] [rbp-50h]
  signed __int64 n; // [rsp+20h] [rbp-48h]

  result = a4 | a3 | a2;
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)a1 - 1LL;
  n = a4;
  v11 = *(_DWORD *)(a1 + 8);
  v37 = a2;
  v38 = a3;
  if ( (v10 & result) != 0 )
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v12 = a6;
        if ( a6 > n )
          v12 = n;
        a6 = v12;
        v13 = v37 & v10;
        v14 = v37 >> v11;
        if ( v12 )
        {
          v15 = a5;
          v16 = v12;
          while ( 1 )
          {
            v17 = v9 - v13;
            v18 = v14;
            if ( v17 > v16 )
              v17 = v16;
            LODWORD(v14) = v14 + 1;
            v19 = (char *)sub_898D20((size_t *)a1, v18, 1);
            v20 = v15;
            v15 += v17;
            memmove(v20, &v19[v13], v17);
            v16 -= v17;
            if ( !v16 )
              break;
            v9 = *(_QWORD *)a1;
            v13 = 0;
          }
          v21 = a6;
          sub_8990B0(a1, v37, v38, a6);
          v22 = *(_QWORD *)a1;
          v23 = a5;
          v24 = v38 >> *(_DWORD *)(a1 + 8);
          for ( i = v38 & (*(_QWORD *)a1 - 1LL); ; i = 0 )
          {
            v26 = v22 - i;
            v27 = v24;
            if ( v26 > v21 )
              v26 = v21;
            LODWORD(v24) = v24 + 1;
            v28 = (char *)sub_898D20((size_t *)a1, v27, 1);
            v29 = v23;
            *(v28 - 2) = 1;
            v23 += v26;
            memmove(&v28[i], v29, v26);
            v21 -= v26;
            if ( !v21 )
              break;
            v22 = *(_QWORD *)a1;
          }
          result = a6;
          v37 += a6;
          v38 += a6;
          n -= a6;
          if ( !n )
            return result;
        }
        else
        {
          sub_8990B0(a1, v37, v38, 0);
        }
        v9 = *(_QWORD *)a1;
        v11 = *(_DWORD *)(a1 + 8);
        v10 = *(_QWORD *)a1 - 1LL;
      }
    }
  }
  else if ( (unsigned int)(n >> v11) )
  {
    v30 = a2 >> v11;
    v31 = (a2 >> v11) + (n >> v11);
    v32 = (a3 >> v11) - (a2 >> v11);
    do
    {
      v33 = v32 + v30;
      v34 = sub_898D20((size_t *)a1, v30, 1);
      LODWORD(v30) = v30 + 1;
      v35 = sub_898D20((size_t *)a1, v33, 1);
      result = sub_8989A0(a1, (__int64)v34, (__int64)v35);
    }
    while ( (_DWORD)v30 != v31 );
  }
  return result;
}

