__int64 __fastcall sub_328950(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  __int64 tinfo_pdata; // rax
  const char *v5; // rbp
  const char *v6; // rdi
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v1 = 0;
  v2 = *a1;
  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  if ( (v2 & 0x100) != 0 )
  {
    tinfo_pdata = get_tinfo_pdata(&v7, v2, 2);
    v5 = v7;
    if ( tinfo_pdata )
    {
      v6 = v7;
      if ( !(_QWORD)v8 )
        v6 = s1;
      LOBYTE(v1) = strncmp(v6, "gstruc", 6u) == 0;
    }
    if ( v5 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v5);
    }
  }
  return v1;
}
