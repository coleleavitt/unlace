__int64 __fastcall sub_75FA40(__int64 a1)
{
  void (*v1)(); // rdx
  unsigned int v2; // ebx

  v2 = sub_75F720(a1, 0);
  if ( (_BYTE)v2 )
  {
    *(_BYTE *)(a1 + 104) = 1;
    sub_7577A0((unsigned int *)a1, 1, v1);
  }
  return v2;
}

