__int64 __fastcall sub_1039650(__int64 a1)
{
  unsigned int v1; // ebp
  char v3; // al
  int v4; // edx
  size_t v5; // rax

  v1 = sub_10BB6C0();
  if ( !(_BYTE)v1 )
    return v1;
  v3 = sub_10BDBA0(a1, "avx512f", 7);
  v4 = 512;
  if ( !v3 )
  {
    v5 = j__strlen("avx");
    v4 = (unsigned __int8)sub_10BDBA0(a1, "avx", v5) == 0 ? 128 : 256;
  }
  *(_DWORD *)(a1 + 68) = v4;
  return v1;
}
