__int64 __fastcall sub_2154640(_DWORD **a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v3 = *a1[6];
  LOBYTE(v2) = a2 == v3;
  if ( a2 == v3 )
    (*((void (__fastcall **)(_DWORD **))*a1 + 19))(a1);
  return v2;
}
