__int64 __fastcall sub_193D50(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  if ( v1 > 1 )
  {
    v2 = 1;
    *(_QWORD *)(a1 + 8) = v1 - 1;
  }
  return v2;
}

