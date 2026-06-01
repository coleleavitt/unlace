unsigned __int64 __fastcall sub_62DFC0(__int64 a1, const char *a2)
{
  int v2; // eax
  __int64 v3; // r9
  int v4; // ebp
  unsigned __int16 v5; // ax
  unsigned int v7; // ebp
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 32) != 2 )
  {
    netnode_check(&v8, "$ toc", 0, 0);
    v2 = netnode_altval(v8, -4, 65);
    v4 = v2;
    if ( (v2 & 0x10) != 0 )
    {
      v7 = v2 & 0xFFFFFBDF | 0x400;
LABEL_12:
      v9 = v7;
      netnode_supset(v8, -4, &v9, 8, 65, v3);
      return v10 - __readfsqword(0x28u);
    }
    if ( (v2 & 0x20) == 0 && (*(_BYTE *)(a1 + 24) & 4) == 0 )
    {
      if ( !strcmp(a2, "sysv") || !strcmp(a2, "eabi") )
      {
LABEL_14:
        v7 = v4 | 0x420;
        goto LABEL_12;
      }
      if ( !*a2 )
      {
        v5 = *(_WORD *)(a1 + 32);
        if ( v5 > 0xBu )
        {
          if ( v5 == 25 )
            return v10 - __readfsqword(0x28u);
        }
        else if ( v5 > 9u )
        {
          return v10 - __readfsqword(0x28u);
        }
        goto LABEL_14;
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
