/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8067AD0
// Address: 0x08067AD0

//----- (08067AD0) --------------------------------------------------------
int __cdecl sub_8067AD0(_DWORD *a1, int a2, int a3, int *a4, _BYTE *a5, char a6, char *a7, int a8)
{
  int v8; // ebx
  signed int v10; // [esp+0h] [ebp-14h] BYREF
  unsigned int v11; // [esp+4h] [ebp-10h]

  v11 = __readgsdword(0x14u);
  v8 = sub_809F7D0((int)a1, a2, a3, a4, a5, a6, a7, a8, &v10);
  if ( v8 > 0 && v10 && !(unsigned __int8)sub_8066E20(a1, v10, 0) )
  {
    v8 = -2;
    (*(void (__cdecl **)(_DWORD *, _DWORD))(*a1 + 80))(a1, 0);
  }
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
