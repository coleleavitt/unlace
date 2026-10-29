__int64 __fastcall sub_9FC5A0(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx
  char v3; // si

  for ( i = a2; i > 0x1F; i >>= 5 )
  {
    v3 = i;
    sub_9FC530(a1, v3 & 0x1F | 0x20);
  }
  return sub_9FC530(a1, i);
}

