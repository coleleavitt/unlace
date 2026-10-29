/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A4B0
// Address: 0x000000010005A4B0

//----- (000000010005A4B0) ----------------------------------------------------
__int64 __fastcall sub_10005A4B0(__int64 a1, __int64 **a2)
{
  __int64 v2; // r15
  const char *v3; // r14
  __int64 v4; // rbx
  size_t v5; // rax
  size_t v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  char *v9; // rax
  int v10; // eax
  char *v12; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-48h]
  unsigned __int64 v14; // [rsp+30h] [rbp-40h]
  unsigned __int8 v15; // [rsp+3Fh] [rbp-31h] BYREF

  if ( 56LL * (_QWORD)a2[1] )
  {
    v2 = (__int64)*a2;
    while ( 1 )
    {
      v3 = _s1;
      if ( *(_QWORD *)(v2 + 16) )
        v3 = *(const char **)(v2 + 8);
      v4 = *(_QWORD *)v2;
      sub_10006B790((__int64)&v12, 57);
      sub_10005A320((void **)&v12, v4 + 1);
      if ( !v3 )
        v3 = &_s;
      v5 = strlen(v3);
      v6 = v5 + 1;
      if ( v5 != -1 )
      {
        v7 = v13;
        v8 = 0x7FFFFFFFFFFFFFFFLL;
        if ( !__CFADD__(v6, v13) )
          v8 = v6 + v13;
        if ( v13 >= v8 )
        {
          if ( v13 != v8 )
          {
            v15 = 0;
            sub_10001CE90((__int64)&v12, v8, &v15);
          }
        }
        else
        {
          v9 = v12;
          if ( v14 < v8 )
          {
            v9 = (char *)qvector_reserve((__int64)&v12, v12, v8, 1u);
            v12 = v9;
          }
          __bzero(&v9[v13], v8 - v13);
          v13 = v8;
        }
        memcpy(&v12[v7], v3, v6);
      }
      sub_10005ACB0((void **)&v12, *(const void **)(v2 + 32), *(_QWORD *)(v2 + 40));
      v10 = sub_100065B50(a1 + 192, (__int64)&v12, -1, 0);
      if ( v10 < 0 )
        break;
      if ( v10 )
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 568LL))(*(_QWORD *)(a1 + 440), v2);
      if ( v12 )
      {
        v13 = 0;
        qfree(v12);
      }
      v2 += 56;
      if ( (__int64 *)v2 == &(*a2)[7 * (_QWORD)a2[1]] )
        return __stack_chk_guard;
    }
    if ( v12 )
    {
      v13 = 0;
      qfree(v12);
    }
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
