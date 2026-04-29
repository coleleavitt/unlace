unsigned __int64 __fastcall sub_134C00(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int8 a6)
{
  __int64 v9; // rdi
  bool v11; // zf
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v20; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h] BYREF
  __int128 v25; // [rsp+30h] [rbp-78h]
  __int64 v26; // [rsp+40h] [rbp-68h]
  __int128 v27; // [rsp+48h] [rbp-60h]
  char v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v9 = *a4;
  v29 = __readfsqword(0x28u);
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 16;
  v21 = 0;
  v25 = 0;
  v27 = 0;
  v11 = (unsigned __int8)get_tinfo_details(v9, 12, &v20) == 0;
  v12 = nullptr;
  if ( !v11 )
    v12 = &v20;
  sub_1346F0(a1, a2, a3, (__int64)v12, a5, a6);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  cleanup_argloc(&v24);
  clear_tinfo_t(&v23);
  v13 = v20;
  if ( v20 )
  {
    v14 = v21;
    if ( (_QWORD)v21 )
    {
      v15 = 0;
      do
      {
        v16 = (_QWORD *)(v13 + 80 * v15);
        clear_tinfo_t(v16 + 8);
        v17 = v16[5];
        if ( v17 )
        {
          v16[6] = 0;
          qfree(v17);
        }
        v18 = v16[2];
        if ( v18 )
        {
          v16[3] = 0;
          qfree(v18);
        }
        ++v15;
        cleanup_argloc(v16);
        v13 = v20;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v13);
  }
  return v29 - __readfsqword(0x28u);
}
