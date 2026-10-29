unsigned __int64 __fastcall sub_1097B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  const char *v6; // rax
  TView *v8; // rax
  const char *v9; // [rsp+0h] [rbp-28h]
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 8);
  v10 = __readfsqword(0x28u);
  v3 = TProgram::application;
  v4 = *(unsigned int *)(a2 + 4);
  if ( v2 || (_DWORD)v4 )
  {
    v9 = *(const char **)(a2 + 8);
    v5 = v4 + v2;
    unpack_ds();
    qfree();
    unpack_ds();
    qfree();
    v6 = v9;
    while ( (unsigned __int64)v6 < v5 )
    {
      if ( !*v6++ )
      {
        if ( v9 )
        {
          v8 = sub_109690(v9);
          if ( v8 )
            sub_174DE0(v3 + 136, v8, 1);
        }
        return v10 - __readfsqword(0x28u);
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}

