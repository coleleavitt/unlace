__int64 __fastcall sub_1075CA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // edx
  char v5; // al
  unsigned int v6; // eax

  if ( sub_9B4AA0(a2, "generic") )
  {
    v6 = sub_229FE00(*(void **)a2, *(_QWORD *)(a2 + 8));
    sub_1071450(a1, v6);
  }
  result = 0;
  if ( *(_DWORD *)(a1 + 616) )
  {
    v3 = *(_DWORD *)(a1 + 612);
    v4 = *(_DWORD *)(a1 + 620);
    if ( v3 == 1 )
    {
      if ( *(_DWORD *)(a1 + 624) > 5u )
      {
LABEL_11:
        if ( v4 == 3 )
          *(_WORD *)(a1 + 286) = 8224;
        else
          *(_WORD *)(a1 + 286) = 16448;
LABEL_9:
        sub_9EE8A0(a1 + 544, a2);
        return 1;
      }
    }
    else if ( v3 == 2 && *(_DWORD *)(a1 + 624) > 6u )
    {
      goto LABEL_11;
    }
    v5 = 32;
    if ( v4 != 3 )
      v5 = 64;
    *(_BYTE *)(a1 + 286) = v5;
    goto LABEL_9;
  }
  return result;
}
