void __fastcall sub_8BD200(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  size_t v7; // r15
  __int64 v8; // rax
  size_t v9; // r14
  __int64 v10; // rax
  int v11; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  size_t v14; // r14
  unsigned __int64 v15; // rax
  __int64 i; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r15
  char *v19; // rax
  char *v20; // r12
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  __int64 j; // r15
  size_t v24; // rbx
  char *v25; // rax
  const void *v26; // rsi
  unsigned __int64 v27; // r15
  __int64 v28; // rcx
  size_t v29; // r15
  char *v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // r15
  __int64 v33; // rbp
  char *v34; // r12
  size_t v35; // rbx
  char *v36; // rax
  const void *v37; // rsi
  size_t nb; // [rsp+0h] [rbp-68h]
  size_t n; // [rsp+0h] [rbp-68h]
  size_t na; // [rsp+0h] [rbp-68h]
  char *s; // [rsp+8h] [rbp-60h]
  char *dest; // [rsp+10h] [rbp-58h]
  unsigned int desta; // [rsp+10h] [rbp-58h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  char *v45; // [rsp+18h] [rbp-50h]
  __int64 v46; // [rsp+20h] [rbp-48h]
  __int64 v47; // [rsp+20h] [rbp-48h]
  size_t v48; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v7 = *(_QWORD *)a1;
  s = (char *)operator new[](*(_QWORD *)a1);
  if ( (__int64)(v7 - 1) >= 0 )
    memset(s, 0, v7);
  if ( a2 > a3 )
  {
    v8 = a3 + a4;
    v4 = a3;
    a4 = a2 - a3;
    a3 = v8;
  }
  if ( a4 > 0 && v4 != a3 )
  {
    do
    {
      v13 = a3 - v4;
      if ( a3 - v4 <= a4 )
      {
        v9 = a3 - v4;
        v10 = v4 + a4;
        if ( v7 >= v13 )
        {
          v27 = *(_QWORD *)a1;
          na = a3 - v4;
          v28 = v10 & (*(_QWORD *)a1 - 1LL);
          desta = v10 >> *(_DWORD *)(a1 + 8);
          v45 = s;
          while ( 1 )
          {
            v29 = v27 - v28;
            v47 = v28;
            if ( v29 > na )
              v29 = na;
            v30 = (char *)sub_8BCA60((size_t *)a1, desta, 1);
            memmove(v45, &v30[v47], v29);
            v45 += v29;
            ++desta;
            na -= v29;
            if ( !na )
              break;
            v27 = *(_QWORD *)a1;
            v28 = 0;
          }
          sub_8BCDF0(a1, a3, v4, a4);
          v31 = *(_QWORD *)a1;
          v32 = v4 & (*(_QWORD *)a1 - 1LL);
          v33 = v4 >> *(_DWORD *)(a1 + 8);
          v34 = s;
          while ( 1 )
          {
            v35 = v31 - v32;
            if ( v35 > v9 )
              v35 = v9;
            v36 = (char *)sub_8BCA60((size_t *)a1, v33, 1);
            *(v36 - 2) = 1;
            v37 = v34;
            v34 += v35;
            LODWORD(v33) = v33 + 1;
            memmove(&v36[v32], v37, v35);
            v9 -= v35;
            if ( !v9 )
              break;
            v31 = *(_QWORD *)a1;
            v32 = 0;
          }
          break;
        }
        nb = v4 + a4;
        sub_8BCFF0(a1, v4, v4 + a4, a3 - v4, s, v7);
        v11 = a3 - v4;
        v4 = (unsigned int)a3;
        v12 = nb - a3;
        a3 = (unsigned int)(v11 + a3);
        a4 = v12;
        if ( a3 == v4 )
          break;
      }
      else
      {
        v14 = a4;
        if ( v7 >= a4 )
        {
          n = a4;
          dest = s;
          v44 = v4 >> *(_DWORD *)(a1 + 8);
          v15 = *(_QWORD *)a1;
          for ( i = v4 & (*(_QWORD *)a1 - 1LL); ; i = 0 )
          {
            v17 = v15 - i;
            v48 = v13;
            v46 = i;
            if ( v17 > n )
              v17 = n;
            v18 = v17;
            v19 = (char *)sub_8BCA60((size_t *)a1, v44, 1);
            memmove(dest, &v19[v46], v18);
            dest += v18;
            v13 = v48;
            LODWORD(v44) = v44 + 1;
            n -= v18;
            if ( !n )
              break;
            v15 = *(_QWORD *)a1;
          }
          sub_8BCDF0(a1, v4, v4 + a4, v48);
          v20 = s;
          v21 = a3 >> *(_DWORD *)(a1 + 8);
          v22 = *(_QWORD *)a1;
          for ( j = a3 & (*(_QWORD *)a1 - 1LL); ; j = 0 )
          {
            v24 = v22 - j;
            if ( v22 - j > v14 )
              v24 = v14;
            v25 = (char *)sub_8BCA60((size_t *)a1, v21, 1);
            *(v25 - 2) = 1;
            v26 = v20;
            v20 += v24;
            LODWORD(v21) = v21 + 1;
            memmove(&v25[j], v26, v24);
            v14 -= v24;
            if ( !v14 )
              break;
            v22 = *(_QWORD *)a1;
          }
          break;
        }
        sub_8BCFF0(a1, v4, a3, a4, s, v7);
        a3 -= a4;
        if ( a3 == v4 )
          break;
      }
    }
    while ( a4 > 0 );
  }
  if ( s )
    operator delete[](s);
}
