/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABE80
// Address: 0x000ABE80

//----- (000ABE80) --------------------------------------------------------
_DWORD *__cdecl sub_ABE80(int a1, __int64 a2, unsigned int a3)
{
  char *v3; // esi
  _DWORD *v4; // edi

  v3 = (char *)operator new(0x24u);
  *(_DWORD *)v3 = &off_139324;
  *((_DWORD *)v3 + 4) = a1;
  *(_QWORD *)(v3 + 20) = a2;
  *(_QWORD *)(v3 + 28) = a3 + a2;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 1) = a3;
  *((_DWORD *)v3 + 2) = 0;
  v4 = operator new(0x24u);
  *v4 = 4;
  v4[1] = v3;
  sub_AB220((int)v4);
  return v4;
}
// 139324: using guessed type int (__cdecl *off_139324)(int, int, int, void *dest, size_t n);
