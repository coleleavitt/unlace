_QWORD *__fastcall sub_1370A70(_QWORD *a1, __int64 a2, _QWORD *a3, _BYTE *a4, __int64 a5)
{
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 v13; // rdi
  void *v15; // [rsp+8h] [rbp-70h] BYREF
  void *v16[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+20h] [rbp-58h]
  void *v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h]

  sub_1370410((__int64)v16, a2, a3, a4, a5);
  v6 = (__int64 *)v16[0];
  if ( v16[0] == v16[1] )
  {
    *a1 = 0;
  }
  else
  {
    v15 = v16[1];
    v7 = v17;
    v17 = 0;
    v19 = v7;
    *(__m128 *)v18 = _mm_loadh_ps((const double *)&v15);
    *(_OWORD *)v16 = 0;
    v8 = operator new(0x38u);
    sub_1392920(v8, v18);
    v9 = (__int64 *)v18[1];
    v10 = (__int64 *)v18[0];
    if ( v18[1] != v18[0] )
    {
      do
      {
        while ( 1 )
        {
          v11 = *v10;
          if ( !*v10 )
            break;
          ++v10;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          if ( v9 == v10 )
          {
            v10 = (__int64 *)v18[0];
            goto LABEL_6;
          }
        }
        ++v10;
      }
      while ( v9 != v10 );
      v10 = (__int64 *)v18[0];
    }
LABEL_6:
    if ( v10 )
      operator delete(v10);
    v12 = (__int64 *)v16[1];
    v6 = (__int64 *)v16[0];
    *a1 = v8;
    if ( v12 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v13 = *v6;
          if ( !*v6 )
            break;
          ++v6;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          if ( v12 == v6 )
            goto LABEL_11;
        }
        ++v6;
      }
      while ( v12 != v6 );
LABEL_11:
      v6 = (__int64 *)v16[0];
    }
  }
  if ( v6 )
    operator delete(v6);
  return a1;
}
