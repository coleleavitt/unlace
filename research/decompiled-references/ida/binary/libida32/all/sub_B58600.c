__int64 __fastcall sub_B58600(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx

  v2 = (_BYTE *)sub_B58190(a1);
  if ( sub_B58260(a1, a2, 1u) && !*(_DWORD *)(a2 + 8) )
  {
    *v2 |= 4u;
    return 1;
  }
  else
  {
    *v2 &= ~4u;
    *v2 &= ~1u;
    return 0;
  }
}

