__int64 __fastcall sub_90590(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // rbx

  if ( a4 )
  {
    v5 = operator new(0x38u);
    sub_90470(v5, a1, a2, a3);
  }
  else
  {
    v5 = operator new(0x38u);
    sub_82A90(v5, a1, a2, a3);
  }
  return v5;
}
