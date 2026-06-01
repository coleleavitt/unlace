__int64 __fastcall sub_77FEA0(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = sub_77FB80((__int64 *)a1, 0);
  if ( (_BYTE)v1 )
  {
    *(_BYTE *)(a1 + 108) = 1;
    sub_777CB0((_QWORD *)a1, 1);
  }
  return v1;
}
