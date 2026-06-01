unsigned __int64 sub_109CA0()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rbp
  _UNKNOWN **v3; // [rsp+0h] [rbp-58h] BYREF
  __int64 v4; // [rsp+8h] [rbp-50h]
  __int128 v5; // [rsp+10h] [rbp-48h]
  unsigned __int64 v6; // [rsp+28h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  v3 = &off_230660;
  v4 = qvector_reserve();
  sub_19B0F0(&v3, 0);
  v0 = (_QWORD *)v4;
  v1 = (_QWORD *)(v4 + 8 * v5);
  if ( v1 != (_QWORD *)v4 )
  {
    do
      sub_19AE40(*v0++);
    while ( v1 != v0 );
    v0 = (_QWORD *)v4;
  }
  v3 = &off_230660;
  if ( v0 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v6 - __readfsqword(0x28u);
}

