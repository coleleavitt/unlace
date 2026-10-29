__int64 __fastcall sub_877770(__int64 a1)
{
  unsigned int *v1; // rbx

  v1 = *(unsigned int **)a1;
  sub_86B8E0(*(unsigned int **)a1, 33, 4, 0, 130, 0);
  if ( !*v1 )
  {
    v1[36] = 0;
    sub_86D220(v1, 0x5030100u, 2, 0, 2, 0, 127, 1);
  }
  return sub_86B8E0(v1, 33, 1, 0, 132, *(_QWORD *)(a1 + 240));
}
