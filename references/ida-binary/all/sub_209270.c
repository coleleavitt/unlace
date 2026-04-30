unsigned __int64 __fastcall sub_209270(__int64 a1, __int64 a2, char *a3)
{
  char *v3; // rbx
  int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  unsigned __int64 v9; // [rsp+18h] [rbp-40h]

  v3 = (char *)&unk_5E0A40;
  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  do
  {
    v5 = sub_524F80(a1 + 40, *((unsigned int *)v3 + 1), 0);
    sub_209180(a2, a3, &v7, *v3, v5);
    v3 += 8;
  }
  while ( v3 != (char *)jpt_20DDD1 );
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, a3);
  }
  return v9 - __readfsqword(0x28u);
}
