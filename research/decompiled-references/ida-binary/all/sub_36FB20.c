__int64 __fastcall pb_chooser_t__::vfunc_14(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // r12
  _QWORD *i; // r13
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // r11
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 *v14; // r13
  unsigned __int64 *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // [rsp+18h] [rbp-78h] BYREF
  __int128 v18; // [rsp+20h] [rbp-70h]
  __int64 v19; // [rsp+38h] [rbp-58h] BYREF
  __int128 v20; // [rsp+40h] [rbp-50h]
  unsigned __int64 v21; // [rsp+50h] [rbp-40h]

  v2 = *(_QWORD **)a2;
  v3 = *(_QWORD *)(a2 + 8);
  v21 = __readfsqword(0x28u);
  v4 = (__int64 *)a2;
  v18 = 0;
  v17 = 0;
  for ( i = &v2[v3]; i != v2; *(_QWORD *)&v18 = v18 + 1 )
  {
    while ( *v2 >= a1[26] )
    {
      if ( i == ++v2 )
        goto LABEL_8;
    }
    a2 = v17;
    v6 = *(_QWORD *)(a1[25] + 16LL * *v2);
    v7 = v18;
    if ( *((_QWORD *)&v18 + 1) < (unsigned __int64)(v18 + 1) )
    {
      v17 = qvector_reserve(&v17, v17, v18 + 1, 8);
      a2 = v17;
      v7 = v18;
    }
    ++v2;
    *(_QWORD *)(a2 + 8 * v7) = v6;
  }
LABEL_8:
  (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v8 = v18;
  v9 = 0;
  v10 = 0;
  v19 = 0;
  v20 = 0;
  if ( (_QWORD)v18 )
  {
    a2 = 0;
    v19 = qvector_reserve(&v19, 0, v18, 8);
    v10 = v19;
    v8 = v20;
    v14 = (unsigned __int64 *)(v17 + 8 * v18);
    if ( v14 != (unsigned __int64 *)v17 )
    {
      v15 = (unsigned __int64 *)v17;
      do
      {
        a2 = *v15;
        v16 = sub_36F9E0((__int64)a1, *v15);
        if ( v16 != -1 )
        {
          if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)(v8 + 1) )
          {
            a2 = v10;
            v19 = qvector_reserve(&v19, v10, v8 + 1, 8);
            v8 = v20;
            v10 = v19;
          }
          *(_QWORD *)(v10 + 8 * v8) = v16;
          v10 = v19;
          v8 = v20 + 1;
          *(_QWORD *)&v20 = v20 + 1;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    v9 = *((_QWORD *)&v20 + 1);
  }
  v11 = *v4;
  v12 = v4[2];
  *v4 = v10;
  v4[1] = v8;
  v4[2] = v9;
  v19 = v11;
  *((_QWORD *)&v20 + 1) = v12;
  if ( v11 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v11, (const char *)a2);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17, (const char *)a2);
  }
  return 1;
}
