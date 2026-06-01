__int64 __fastcall sub_5E0090(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v5[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v6; // [rsp+408h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v3 = sub_727D10(v5, 1024, a2, a3);
  if ( (_BYTE)v3 )
  {
    if ( !strcasecmp(v5, "GDL") )
    {
      *(_DWORD *)(a1 + 356) = 0;
    }
    else if ( !strcasecmp(v5, "DOT") )
    {
      *(_DWORD *)(a1 + 356) = 1;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}

