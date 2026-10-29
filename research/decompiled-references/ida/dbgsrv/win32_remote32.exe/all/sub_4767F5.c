/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4767F5
// Address: 0x004767F5

//----- (004767F5) --------------------------------------------------------
int __usercall sub_4767F5@<eax>(int *a1@<edi>, void *a2@<esi>, int a3)
{
  int v4; // edi
  unsigned __int8 *v5; // eax
  unsigned __int8 **v6; // esi
  unsigned __int8 **v7; // eax
  int v8; // ebx
  void *v9; // eax
  void *v10; // edx
  int v11; // ecx
  _DWORD *i; // eax
  unsigned __int8 *v13; // [esp+4h] [ebp-10h]
  unsigned int v14; // [esp+8h] [ebp-Ch] BYREF
  LPVOID lpMem; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v16; // [esp+10h] [ebp-4h] BYREF

  if ( !a3 )
    return 0;
  if ( a3 != 2 && a3 != 1 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a3, (int)a1);
    return 22;
  }
  sub_47DA89(a3, a1, a2);
  v4 = 0;
  sub_47D4D0(nullptr, (int)dword_4B78F8, 260);
  v5 = (unsigned __int8 *)dword_4B7A40;
  dword_4B7A30 = (int)dword_4B78F8;
  v13 = (unsigned __int8 *)dword_4B7A40;
  if ( !dword_4B7A40 || !*(_BYTE *)dword_4B7A40 )
  {
    v5 = (unsigned __int8 *)dword_4B78F8;
    v13 = (unsigned __int8 *)dword_4B78F8;
  }
  v16 = 0;
  v14 = 0;
  sub_47692B(v5, nullptr, nullptr, &v16, &v14);
  v6 = (unsigned __int8 **)sub_476A9F(v16, v14, 1u);
  if ( v6 )
  {
    sub_47692B(v13, v6, (unsigned __int8 *)&v6[v16], &v16, &v14);
    if ( a3 != 1 )
    {
      lpMem = nullptr;
      v8 = sub_47D3FE(a3, 0, (const CHAR **)v6, &lpMem);
      if ( v8 )
      {
        v9 = lpMem;
      }
      else
      {
        v10 = lpMem;
        v11 = 0;
        for ( i = lpMem; *i; ++v11 )
          ++i;
        v9 = nullptr;
        dword_4B7A34 = v11;
        lpMem = nullptr;
        v8 = 0;
        dword_4B7A38 = v10;
      }
      sub_479216(v9);
      lpMem = nullptr;
      goto LABEL_20;
    }
    dword_4B7A34 = v16 - 1;
    v7 = v6;
    v6 = nullptr;
    dword_4B7A38 = v7;
  }
  else
  {
    v4 = 12;
    *sub_46B984() = 12;
  }
  v8 = v4;
LABEL_20:
  sub_479216(v6);
  return v8;
}
// 4B78F8: using guessed type int dword_4B78F8[66];
// 4B7A30: using guessed type int dword_4B7A30;
// 4B7A34: using guessed type int dword_4B7A34;
// 4B7A40: using guessed type int dword_4B7A40;
