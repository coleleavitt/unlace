unsigned __int64 __fastcall sub_1ABB00(
        __int64 a1,
        void (***a2)(_QWORD, _QWORD, const char *, ...),
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r15
  const char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v16; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-98h] BYREF
  __int128 v18; // [rsp+28h] [rbp-90h]
  __int64 v19; // [rsp+50h] [rbp-68h]
  __int128 v20; // [rsp+58h] [rbp-60h]
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 1496);
  v21 = __readfsqword(0x28u);
  v18 = 0;
  v7 = *(_QWORD *)(v6 + 1344);
  *(_QWORD *)(v6 + 1344) = a1;
  v20 = 0;
  v17 = 0;
  v19 = 0;
  linearray_t_ctr(&v17, a1, a3, a4, a5, a6, &off_4D5C80, 0, 0);
  linearray_t_set_place(&v17, &v16);
  while ( 1 )
  {
    v9 = linearray_t_down(&v17);
    if ( !v9 )
      break;
    v8 = s1;
    if ( *(_QWORD *)(v9 + 8) )
      v8 = *(const char **)v9;
    (**a2)(a2, 0, "%s\n", v8);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1344LL) = v7;
  linearray_t_dtr(&v17);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  v10 = v17;
  if ( v17 )
  {
    v11 = v18;
    if ( (_QWORD)v18 )
    {
      v12 = 0;
      do
      {
        v13 = (__int64 *)(v10 + 24 * v12);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14);
          v10 = v17;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v10);
  }
  return v21 - __readfsqword(0x28u);
}
