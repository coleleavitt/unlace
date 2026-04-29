unsigned __int64 __fastcall sub_125B0(__int64 a1, __int64 a2)
{
  char v2; // al
  const char *v3; // r8
  void *v4; // rcx
  void *v6; // [rsp+0h] [rbp-58h] BYREF
  __int128 v7; // [rsp+8h] [rbp-50h]
  const char *v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v6 = nullptr;
  v8 = nullptr;
  v7 = 0;
  v9 = 0;
  get_segm_name(&v6, a2, 1);
  get_segm_class(&v8, a2);
  v2 = *(_BYTE *)(a2 + 42);
  if ( v2 == 6 )
  {
    v3 = "data";
    if ( *(_BYTE *)(a2 + 184) == 9 )
      v3 = "bss";
  }
  else
  {
    v3 = "const";
    if ( v2 != 4 )
    {
      v3 = "text";
      if ( v2 != 5 )
      {
        v3 = "symtab";
        if ( *(_BYTE *)(a2 + 184) != 1 )
        {
          v3 = (const char *)&unk_255D0;
          if ( (_QWORD)v9 )
            v3 = v8;
        }
      }
    }
  }
  v4 = &unk_255D0;
  if ( (_QWORD)v7 )
    v4 = v6;
  sub_12250(a1, 0, (__int64)&unk_2486F, v4, v3);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v10 - __readfsqword(0x28u);
}
