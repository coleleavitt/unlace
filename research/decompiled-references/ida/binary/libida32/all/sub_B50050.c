__int64 __fastcall sub_B50050(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rax

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    if ( (v2 & 4) != 0 )
    {
      v3 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v3 )
      {
        if ( (*v3 & 8) != 0 )
          return 0;
      }
    }
  }
  if ( sub_B4FF00(a1, a2) )
    return 0;
  return sub_F41CF0(*(_QWORD *)(a1 + 48));
}

