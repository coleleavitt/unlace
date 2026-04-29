unsigned __int64 __fastcall sub_3F5110(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 flags; // rax
  __int64 custom_refinfo; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 40);
  v11 = __readfsqword(0x28u);
  flags = get_flags_ex(v4, 0);
  if ( (unsigned __int8)is_off(flags, a3) )
  {
    if ( (unsigned __int8)get_refinfo(&v9, *(_QWORD *)(a1 + 40), a3) )
    {
      if ( (v10 & 0x40) != 0 )
      {
        custom_refinfo = get_custom_refinfo(v10 & 0x4F);
        if ( custom_refinfo )
        {
          if ( !strcmp(*(const char **)(custom_refinfo + 8), "PAGEOFF") )
            *(_BYTE *)(a2 + 49) |= 0x20u;
        }
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}
