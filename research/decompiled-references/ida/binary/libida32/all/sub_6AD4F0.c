unsigned __int64 __fastcall sub_6AD4F0(_QWORD *a1)
{
  unsigned int *v1; // r14
  __int64 v2; // rax
  unsigned int *v3; // rax
  unsigned int *i; // [rsp+10h] [rbp-88h]
  char *s2; // [rsp+20h] [rbp-78h] BYREF
  __int128 v7; // [rsp+28h] [rbp-70h]
  unsigned __int64 v8; // [rsp+58h] [rbp-40h]

  v1 = (unsigned int *)a1[9];
  v2 = a1[10];
  v8 = __readfsqword(0x28u);
  for ( i = &v1[v2]; i != v1; ++v1 )
  {
    v3 = sub_518BB0(*(_QWORD *)(*(_QWORD *)*a1 + 1680LL), *v1);
    if ( v3 )
    {
      s2 = nullptr;
      v7 = 0;
      sub_517DD0(*(__int64 **)(*(_QWORD *)*a1 + 1680LL), (void **)&s2, *v3);
      sub_365330();
    }
  }
  a1[10] = 0;
  return v8 - __readfsqword(0x28u);
}

