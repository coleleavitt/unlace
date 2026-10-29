/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F720
// Address: 0x0043F720

//----- (0043F720) --------------------------------------------------------
int __userpurge sub_43F720@<eax>(int a1@<ebx>, int a2, int a3)
{
  int v4; // edi
  const CHAR *v5; // eax
  int result; // eax
  int v7; // ecx
  int (__stdcall *v8)(int, int, int, int *, _DWORD); // esi
  int v9; // eax
  int v10; // eax
  bool v11; // cc
  int v12; // [esp+Ch] [ebp-24h] BYREF
  __int128 v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+2Ch] [ebp-4h]
  int v15; // [esp+38h] [ebp+8h]

  v4 = sub_439DB0();
  v5 = MultiByteStr;
  if ( *(_DWORD *)(a2 + 36) )
    v5 = *(const CHAR **)(a2 + 32);
  v15 = (*(int (__thiscall **)(int, const CHAR *, _DWORD))(*(_DWORD *)v4 + 240))(v4, v5, 0);
  if ( v15 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30055);
  }
  result = sub_4246D0(a1, v4, (char *)a2);
  if ( !result )
  {
    v12 = -2;
    v13 = 0;
    v7 = *(_DWORD *)(a2 + 12);
    v14 = 0;
    LODWORD(v13) = *(_DWORD *)(a2 + 8);
    DWORD1(v13) = v7;
    v8 = *(int (__stdcall **)(int, int, int, int *, _DWORD))(*(_DWORD *)v4 + 112);
    v9 = sub_439DC0();
    v10 = v8(v4, v9, v15, &v12, 0);
    v11 = v12 < -1;
    v14 = -1;
    *(_DWORD *)(a3 + 8) = v10;
    if ( !v11 )
    {
      v14 = 1;
      if ( (_DWORD)v13 )
      {
        DWORD1(v13) = 0;
        sub_453A20((void *)v13);
      }
    }
    return 0;
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
