__int64 __fastcall sub_AF59A0(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 4 )
  {
    v3 = 0;
    if ( *(_DWORD *)a1 == 1701736302 )
    {
LABEL_3:
      *a3 = v3;
      return 1;
    }
  }
  else if ( a2 == 13 )
  {
    if ( *(_QWORD *)a1 == 0x72705F7466697773LL && *(_DWORD *)(a1 + 8) == 1952544361 )
    {
      v3 = 1;
      if ( *(_BYTE *)(a1 + 12) == 101 )
        goto LABEL_3;
    }
  }
  else if ( a2 == 17
         && !(*(_QWORD *)a1 ^ 0x666977735F746F6ELL | *(_QWORD *)(a1 + 8) ^ 0x7461766972705F74LL)
         && *(_BYTE *)(a1 + 16) == 101 )
  {
    v3 = 2;
    goto LABEL_3;
  }
  return 0;
}

