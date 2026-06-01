__int64 __fastcall sub_632B00(__int64 a1, unsigned int a2, _BYTE *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  int v10; // eax

  v4 = ((__int64 (*)(void))sub_CACF70)();
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = sub_CACF70(a1, (unsigned int)v4);
    v8 = v7;
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = sub_CACF70(a1, (unsigned int)v7);
      v8 = v10;
      if ( v10 < 0 )
        return (unsigned int)sub_632B00(a1, (unsigned int)v10, a3);
      else
        *a3 = sub_CAC7C0(a1, v9, 0);
    }
    else
    {
      *a3 = sub_CAC7C0(a1, v5, 0);
    }
    return v8;
  }
  else
  {
    *a3 = sub_CAC7C0(a1, a2, 0);
    return v5;
  }
}

