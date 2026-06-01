char __fastcall sub_11E5E20(_DWORD *a1)
{
  int v1; // ebx
  char result; // al
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = a1[983];
  if ( (unsigned int)(v1 - 1) > 1 )
  {
    if ( v1 == 3 )
      return a1[984] != 0;
    return v1 != 4;
  }
  if ( a1[984] )
    return v1 != 4;
  v3[0] = 0x8000000000000006LL;
  v3[1] = 0x80000000LL;
  result = sub_A09E20(a1 + 985, (unsigned int *)v3);
  if ( result )
    return v1 != 4;
  return result;
}
