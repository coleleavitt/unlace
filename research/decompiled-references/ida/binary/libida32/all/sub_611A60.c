unsigned __int64 __fastcall sub_611A60(__int64 a1, const char *a2)
{
  int v2; // eax
  int v3; // ebp
  unsigned __int16 v4; // ax
  unsigned int v6; // ebp
  unsigned int v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 32) != 2 )
  {
    netnode_check(&v7, "$ toc", 0, 0);
    v2 = netnode_altval(v7, 4294967292LL, 65);
    v3 = v2;
    if ( (v2 & 0x10) != 0 )
    {
      v6 = v2 & 0xFFFFFBDF | 0x400;
LABEL_12:
      v8 = v6;
      netnode_supset(v7, 4294967292LL, &v8, 4, 65);
      return v9 - __readfsqword(0x28u);
    }
    if ( (v2 & 0x20) == 0 && (*(_BYTE *)(a1 + 24) & 4) == 0 )
    {
      if ( !strcmp(a2, "sysv") || !strcmp(a2, "eabi") )
      {
LABEL_14:
        v6 = v3 | 0x420;
        goto LABEL_12;
      }
      if ( !*a2 )
      {
        v4 = *(_WORD *)(a1 + 32);
        if ( v4 > 0xBu )
        {
          if ( v4 == 25 )
            return v9 - __readfsqword(0x28u);
        }
        else if ( v4 > 9u )
        {
          return v9 - __readfsqword(0x28u);
        }
        goto LABEL_14;
      }
    }
  }
  return v9 - __readfsqword(0x28u);
}

