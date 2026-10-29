__int64 sub_279990()
{
  __int64 v0; // rax
  unsigned int v1; // edx
  __int64 v2; // rax

  v0 = sub_277DF0();
  v1 = 7;
  if ( v0 )
  {
    v2 = *(_QWORD *)(v0 + 112);
    if ( v2 )
      return (*(_DWORD *)(v2 + 48) & 0x100) == 0 ? 3 : 7;
  }
  return v1;
}
