/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467E90
// Address: 0x00467E90

//----- (00467E90) --------------------------------------------------------
int __usercall sub_467E90@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v7; // eax
  int (__cdecl *v8)(int, int, int, int, int); // esi
  int v10; // [esp-14h] [ebp-18h]
  int v11; // [esp-10h] [ebp-14h]
  int v12; // [esp-Ch] [ebp-10h]
  int v13; // [esp-8h] [ebp-Ch]
  int v14; // [esp-4h] [ebp-8h]

  v7 = sub_47841D();
  if ( v7 && (v8 = (int (__cdecl *)(int, int, int, int, int))v7[215]) != nullptr )
  {
    v14 = a7;
    v13 = a6;
    v12 = a5;
    v11 = a4;
    v10 = a3;
  }
  else
  {
    v14 = a7;
    v13 = a6;
    v12 = a5;
    v8 = (int (__cdecl *)(int, int, int, int, int))__ROR4__(dword_4B78C4 ^ __security_cookie, __security_cookie & 0x1F);
    v11 = a4;
    v10 = a3;
    if ( !v8 )
    {
      sub_467F04(a1, a2);
      __debugbreak();
    }
  }
  return v8(v10, v11, v12, v13, v14);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4B78C4: using guessed type int dword_4B78C4;
