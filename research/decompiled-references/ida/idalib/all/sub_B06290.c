unsigned __int64 __fastcall sub_B06290(_BYTE *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  char v4; // dl

  v2 = sub_B06110(a1);
  v3 = 0;
  if ( v4 )
  {
    v1 = *(unsigned int *)(v2 + 40);
    v3 = 1;
  }
  return (v3 << 32) | v1 & 0xFFFFFF00FFFFFFFFLL;
}
