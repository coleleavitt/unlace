/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5C70
// Address: 0x080A5C70

//----- (080A5C70) --------------------------------------------------------
int __cdecl sub_80A5C70(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // eax
  int result; // eax
  int v8; // ebp
  int (*v9)(); // edi
  int v10; // [esp+8h] [ebp-38h]
  int v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+10h] [ebp-30h]
  _DWORD v13[3]; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v14; // [esp+20h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  v6 = a1;
  v13[0] = a3;
  if ( a1 )
    v6 = a1 - 25;
  v13[1] = a3 + a4;
  if ( a2 <= 0xFFFFFF )
  {
    v8 = v6[61];
    v9 = *(int (**)())(*(_DWORD *)v8 + 200);
    result = 0;
    if ( v9 != sub_8053340 )
      result = ((int (__cdecl *)(int, int, int, int, int, int))v9)(v8, a2, a3, a4, a5, a6);
  }
  else
  {
    result = (*(int (__stdcall **)(_DWORD *, int, int, int, _DWORD *, int, int, int))(*v6 + 16))(
               v6,
               a2,
               a5,
               a6,
               v13,
               v10,
               v11,
               v12);
  }
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80A5CCD: variable 'v10' is possibly undefined
// 80A5CCD: variable 'v11' is possibly undefined
// 80A5CCD: variable 'v12' is possibly undefined
