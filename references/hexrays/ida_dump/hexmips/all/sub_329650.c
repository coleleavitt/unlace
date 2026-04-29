__int64 __fastcall sub_329650(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  __int64 v5; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+8h] [rbp-70h] BYREF
  __int128 v7; // [rsp+10h] [rbp-68h] BYREF
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+28h] [rbp-50h]
  __int16 v10; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( a2[1] != 1 )
    return 0;
  v2 = (_QWORD *)*a2;
  if ( *(_QWORD *)*a2 )
    return 0;
  if ( a1 )
  {
    v5 = 0;
    v3 = v2 + 8;
    v6 = 0;
    v7 = 0;
    copy_tinfo_t((char *)&v7 + 8, &v5);
    v8 = 0;
    copy_tinfo_t(&v8, &v6);
    v9 = 0;
    v10 = 0;
    clear_tinfo_t(&v5);
    clear_tinfo_t(&v6);
    copy_tinfo_t(&v7, v3);
    create_tinfo(a1, 10, 10, &v7);
    clear_tinfo_t(&v8);
    clear_tinfo_t((char *)&v7 + 8);
    clear_tinfo_t(&v7);
  }
  return 1;
}
