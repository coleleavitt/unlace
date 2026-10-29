/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC220
// Address: 0x000AC220

//----- (000AC220) --------------------------------------------------------
_DWORD *__cdecl sub_AC220(int a1, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi

  v2 = operator new(0x2Cu);
  *v2 = &off_13934C;
  v2[4] = a1;
  v2[3] = 0;
  v2[6] = 0;
  v2[5] = 0;
  v2[8] = 0;
  v2[7] = 0;
  v2[10] = 0;
  v2[9] = 0;
  v2[1] = a2;
  v2[2] = 0;
  v2[5] = qtmpfile();
  if ( (int)v2[2] < 0 || (int)v2[3] < 0 )
  {
    (*(void (__cdecl **)(_DWORD *))(*v2 + 8))(v2);
    return nullptr;
  }
  else
  {
    v3 = operator new(0x24u);
    *v3 = 4;
    v3[1] = v2;
    sub_AB220((int)v3);
  }
  return v3;
}
// 13934C: using guessed type int (__cdecl *off_13934C)(int, int off, int, void *ptr, int);
