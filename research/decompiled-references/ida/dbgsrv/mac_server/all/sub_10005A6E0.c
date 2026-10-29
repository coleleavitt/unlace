/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A6E0
// Address: 0x000000010005A6E0

//----- (000000010005A6E0) ----------------------------------------------------
__int64 __fastcall sub_10005A6E0(__int64 a1, __int64 *a2, const char **a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rcx
  const char *v6; // r15
  unsigned int v7; // r13d
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  const char *v10; // r14
  char v11; // al
  __int64 v12; // rbx
  signed int i; // esi
  const char *v14; // rbx
  size_t v15; // rax
  size_t v16; // r13
  size_t v17; // r12
  unsigned __int64 v18; // r15
  char *v19; // rax
  size_t v20; // rbx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  char *v23; // rax
  int v24; // ebx
  __int64 v26; // [rsp+0h] [rbp-A0h]
  int v28; // [rsp+1Ch] [rbp-84h]
  unsigned int __src; // [rsp+28h] [rbp-78h]
  void *__srca; // [rsp+28h] [rbp-78h]
  __int64 v32; // [rsp+30h] [rbp-70h]
  char *v33; // [rsp+38h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+40h] [rbp-60h]
  unsigned __int64 v35; // [rsp+48h] [rbp-58h]
  size_t __n[2]; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-40h]
  unsigned __int8 v38; // [rsp+6Fh] [rbp-31h] BYREF

  if ( !a4 )
    return 0;
  v4 = a4;
  *(_OWORD *)__n = 0;
  v37 = 0;
  v32 = 0;
  while ( v4 > 0 )
  {
    __n[1] = 0;
    v5 = 0;
    v6 = &_s;
    v7 = 0;
    v28 = v4;
    while ( 1 )
    {
      __src = v7;
      if ( v7 == v4 )
        break;
      v8 = *a2 - v5;
      v9 = v5 - *a2;
      if ( v9 < 0 )
        v9 = *a2 - v5;
      sub_10005A320((void **)__n, v9 + 1);
      sub_100032FE0((void **)__n, v8 >> 63);
      v10 = *a3;
      v11 = **a3;
      v12 = 0;
      for ( i = 0; v11; v11 = v10[i] )
      {
        if ( v11 != v6[v12] )
          break;
        v12 = ++i;
      }
      v26 = *a2;
      sub_100032FE0((void **)__n, i);
      v14 = &v10[v12];
      v15 = strlen(v14);
      v16 = v15 + 1;
      if ( v15 != -1 )
      {
        v17 = __n[1];
        v18 = v16 + __n[1];
        if ( __CFADD__(v16, __n[1]) )
          v18 = 0x7FFFFFFFFFFFFFFFLL;
        if ( __n[1] >= v18 )
        {
          if ( __n[1] != v18 )
          {
            LOBYTE(v33) = 0;
            sub_10001CE90((__int64)__n, v18, (unsigned __int8 *)&v33);
          }
        }
        else
        {
          v19 = (char *)__n[0];
          if ( v37 < v18 )
          {
            v19 = (char *)qvector_reserve((__int64)__n, (void *)__n[0], v18, 1u);
            __n[0] = (size_t)v19;
          }
          __bzero(&v19[__n[1]], v18 - __n[1]);
          __n[1] = v18;
        }
        memcpy((void *)(__n[0] + v17), v14, v16);
      }
      ++a2;
      ++a3;
      v7 = __src + 1;
      v6 = v10;
      v4 = v28;
      v5 = v26;
      if ( __n[1] > 0x100000 )
        goto LABEL_24;
    }
    v7 = v4;
LABEL_24:
    sub_10006B790((__int64)&v33, 50);
    sub_100032FE0((void **)&v33, v7);
    v20 = __n[1];
    if ( __n[1] )
    {
      __srca = (void *)__n[0];
      v21 = v34;
      v22 = __n[1] + v34;
      if ( __CFADD__(__n[1], v34) )
        v22 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v34 >= v22 )
      {
        if ( v34 != v22 )
        {
          v38 = 0;
          sub_10001CE90((__int64)&v33, v22, &v38);
        }
      }
      else
      {
        v23 = v33;
        if ( v35 < v22 )
        {
          v23 = (char *)qvector_reserve((__int64)&v33, v33, v22, 1u);
          v33 = v23;
        }
        __bzero(&v23[v34], v22 - v34);
        v34 = v22;
      }
      memcpy(&v33[v21], __srca, v20);
    }
    v24 = sub_100065B50(a1 + 192, (__int64)&v33, -1, 0);
    if ( v33 )
    {
      v34 = 0;
      qfree(v33);
    }
    v4 -= v7;
    if ( v7 != v24 )
    {
      v32 = 1;
      break;
    }
  }
  if ( __n[0] )
  {
    __n[1] = 0;
    qfree((void *)__n[0]);
  }
  return v32;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
