unsigned __int64 __fastcall sub_6CE4C0(_QWORD *a1)
{
  unsigned __int64 *v1; // r13
  __int64 v2; // rax
  __int64 *v3; // rax
  unsigned __int64 *i; // [rsp+10h] [rbp-88h]
  char *s2; // [rsp+20h] [rbp-78h] BYREF
  __int128 v7; // [rsp+28h] [rbp-70h]
  unsigned __int64 v8; // [rsp+58h] [rbp-40h]

  v1 = (unsigned __int64 *)a1[9];
  v2 = a1[10];
  v8 = __readfsqword(0x28u);
  for ( i = &v1[v2]; i != v1; ++v1 )
  {
    v3 = sub_5310F0(*(_QWORD *)(*(_QWORD *)*a1 + 1872LL), *v1);
    if ( v3 )
    {
      s2 = nullptr;
      v7 = 0;
      sub_5301C0(*(__int64 **)(*(_QWORD *)*a1 + 1872LL), (void **)&s2, *v3);
      sub_368890();
    }
  }
  a1[10] = 0;
  return v8 - __readfsqword(0x28u);
}
