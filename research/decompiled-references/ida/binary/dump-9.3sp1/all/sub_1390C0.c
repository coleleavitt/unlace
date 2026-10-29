unsigned __int64 __fastcall sub_1390C0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  bool v9; // zf
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+8h] [rbp-A0h]
  __int64 v20; // [rsp+18h] [rbp-90h]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int128 v23; // [rsp+30h] [rbp-78h]
  __int64 v24; // [rsp+40h] [rbp-68h]
  __int128 v25; // [rsp+48h] [rbp-60h]
  char v26; // [rsp+58h] [rbp-50h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 16;
  v19 = 0;
  v23 = 0;
  v25 = 0;
  v9 = (unsigned __int8)get_tinfo_details() == 0;
  v10 = nullptr;
  if ( !v9 )
    v10 = &v18;
  sub_138BB0(a1, a2, a3, (__int64)v10, a5, a6);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v11 = v18;
  if ( v18 )
  {
    v12 = v19;
    if ( (_QWORD)v19 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 80 * v13);
        clear_tinfo_t();
        v15 = v14[5];
        if ( v15 )
        {
          v14[6] = 0;
          qfree(v15);
        }
        v16 = v14[2];
        if ( v16 )
        {
          v14[3] = 0;
          qfree(v16);
        }
        ++v13;
        cleanup_argloc();
        v11 = v18;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v11);
  }
  return v27 - __readfsqword(0x28u);
}
