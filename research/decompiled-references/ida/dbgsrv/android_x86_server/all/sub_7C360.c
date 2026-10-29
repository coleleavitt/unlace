/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C360
// Address: 0x0007C360

//----- (0007C360) --------------------------------------------------------
int __cdecl sub_7C360(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD **v6; // esi
  _DWORD v8[7]; // [esp+0h] [ebp-1Ch] BYREF

  v8[2] = __readgsdword(0x14u);
  v6 = (_DWORD **)(a1 - 100);
  if ( !a1 )
    v6 = nullptr;
  v8[0] = a3;
  v8[1] = a3 + a4;
  if ( a2 < 0x1000000 )
    return (*(int (__cdecl **)(_DWORD *, int, int, int, int, int))(*v6[61] + 200))(v6[61], a2, a3, a4, a5, a6);
  else
    return ((int (__cdecl *)(_DWORD **, int, int, int, _DWORD *))(*v6)[4])(v6, a2, a5, a6, v8);
}
