__int64 __fastcall sub_3F5DC0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  bool v4; // zf
  const char *v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rsi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v4 = *(_BYTE *)(a1 + 1180) == 0;
  v14 = __readfsqword(0x28u);
  if ( v4 )
  {
    if ( a4 == 4 )
    {
      v12 = *a3;
      netnode_set(a2, &v12, 8);
    }
    else
    {
      netnode_set(a2, a3, a4);
    }
  }
  ptr = nullptr;
  v11 = 0;
  if ( a2 != *(_QWORD *)(a1 + 16) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v12 = a2;
    if ( sub_7BF130(&v12, v9, a1 + 24) <= 0 )
      sub_35A790((char **)(a1 + 24));
    *(_QWORD *)(a1 + 16) = a2;
  }
  sub_35A790((char **)&ptr);
  v12 = 0;
  v6 = haystack;
  v13 = 0;
  if ( (_QWORD)v11 )
    v6 = (const char *)ptr;
  v7 = sub_3F5570(a1, 0, v6, (__int64)&v12);
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return v7;
}
