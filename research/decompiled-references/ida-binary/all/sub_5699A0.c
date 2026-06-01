void *sub_5699A0()
{
  void *v0; // rbx
  void *v1; // rax
  bool v2; // cc
  void *v3; // rdi
  void *v4; // rax

  v0 = off_8C52B8(0xD0u);
  memset(v0, 0, 0xD0u);
  *((_DWORD *)v0 + 26) = -1;
  *((_DWORD *)v0 + 29) = -1;
  *((_DWORD *)v0 + 31) = -1;
  *((_QWORD *)v0 + 17) = -1;
  v1 = off_8C52B8(0x80u);
  v2 = *((_DWORD *)v0 + 17) <= 7u;
  *((_DWORD *)v0 + 13) = 8;
  *((_QWORD *)v0 + 5) = v1;
  if ( v2 )
  {
    v3 = *((void **)v0 + 7);
    if ( v3 )
      v4 = off_8C52A8(v3, 0x80u);
    else
      v4 = off_8C52B8(0x80u);
    *((_QWORD *)v0 + 7) = v4;
    *((_DWORD *)v0 + 17) = 8;
  }
  return v0;
}
