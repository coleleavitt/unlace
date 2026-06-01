__int64 __fastcall sub_24660(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // rdx
  int v12; // eax
  const char *v13; // r8

  v9 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v9 <= 7 )
  {
    if ( a2 > 20 )
    {
      if ( a2 != 22 )
      {
        v12 = 4;
        LODWORD(v13) = 0;
        goto LABEL_5;
      }
    }
    else if ( a2 <= 18 )
    {
      v12 = 12;
      LODWORD(v13) = 0;
LABEL_5:
      sub_2EE90(a1, dword_6E140[v9], 2, v12, (_DWORD)v13, a3, a4, a5, a6, a7, a8);
      return 1;
    }
    v12 = *(unsigned __int16 *)(a1 + 350);
    v13 = "RIP";
    goto LABEL_5;
  }
  return 0;
}

