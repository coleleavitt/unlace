__int64 __fastcall sub_32A2A0(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rax
  char v3; // r12
  char v5; // al
  __int64 v6; // rax
  char v7; // al
  __int128 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v1 = 0;
  v9 = __readfsqword(0x28u);
  if ( !(unsigned __int8)getinf_flag(3, 2) )
  {
    v6 = getnseg(0);
    if ( v6 )
    {
      v7 = *(_BYTE *)(v6 + 43);
      if ( v7 )
      {
        if ( v7 == 2 )
          setinf_flag(3, 4, 1);
        else
          setinf_flag(3, 2, 1);
      }
    }
    v1 = 1;
    sub_2B4E70((__int64)"AUTOHIDE REGISTRY\n"
                        "The application bitness was wrongly set to 16-bit.\n"
                        "The decompiler set it based on the bitness of the first segment");
  }
  if ( (getinf(57) & 0xF) == 0 )
  {
    v2 = *(unsigned int *)(a1 + 152);
    v3 = 6;
    if ( (unsigned int)v2 <= 0x17 )
    {
      v3 = byte_42ED60[v2];
      if ( !v3 )
        v3 = 6;
    }
    v8 = 0;
    LOBYTE(v8) = v3;
    v1 = set_compiler(&v8, 2, 0);
    if ( !v1 )
      return 0;
    sub_2B4E70((__int64)"AUTOHIDE REGISTRY\n"
                        "The target compiler was not specified in Options, Compiler.\n"
                        "The decompiler set it based on the input file format");
    *(_BYTE *)(a1 + 128) = v3;
  }
  v5 = *(_BYTE *)(a1 + 129);
  if ( (v5 & 0xF0) == 0xC0 )
  {
    if ( *(_DWORD *)(a1 + 140) > 0x10u )
      goto LABEL_9;
  }
  else if ( (*(_BYTE *)(a1 + 129) & 0xF0u) > 0x10 )
  {
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 140) = 0;
  *(_BYTE *)(a1 + 129) = v5 & 0xF | 0x30;
  if ( !(unsigned __int8)set_compiler(a1 + 128, 1, 0) )
    return 0;
  if ( !v1 )
    sub_2B4E70((__int64)"AUTOHIDE REGISTRY\n"
                        "The default calling convention was not specified in Options, Compiler.\n"
                        "The decompiler set is _cdecl for your convenience.");
LABEL_9:
  sub_D06C0(a1);
  return 1;
}
