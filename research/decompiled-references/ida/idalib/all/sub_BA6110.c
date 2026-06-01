unsigned __int64 __fastcall sub_BA6110(unsigned int *a1)
{
  __int64 v1; // rax

  v1 = a1[10];
  if ( !(_DWORD)v1 )
    v1 = a1[6];
  return a1[9] | (unsigned __int64)(v1 << 32);
}
