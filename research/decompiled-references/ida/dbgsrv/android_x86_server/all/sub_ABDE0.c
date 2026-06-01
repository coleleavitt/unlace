/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABDE0
// Address: 0x000ABDE0

//----- (000ABDE0) --------------------------------------------------------
_DWORD *__cdecl sub_ABDE0(int a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // edx
  _DWORD *v4; // edi

  v2 = operator new(0x14u);
  *v2 = &off_139310;
  v2[4] = a1;
  v2[3] = a2;
  v2[1] = qfilelength(a1);
  v2[2] = v3;
  if ( v3 < 0 || (int)v2[3] < 0 )
  {
    (*(void (__cdecl **)(_DWORD *))(*v2 + 8))(v2);
    return nullptr;
  }
  else
  {
    v4 = operator new(0x24u);
    *v4 = 4;
    v4[1] = v2;
    sub_AB220((int)v4);
  }
  return v4;
}
// ABE25: variable 'v3' is possibly undefined
// 139310: using guessed type int (__cdecl *off_139310)(int, int, int, void *buf, size_t nbytes);
