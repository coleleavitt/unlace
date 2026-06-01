/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BE70
// Address: 0x0044BE70

//----- (0044BE70) --------------------------------------------------------
int __thiscall sub_44BE70(void *this, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5, unsigned int *a6)
{
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  int v9; // eax
  void *v10; // ebx
  int v11; // edx
  int v12; // edi
  signed int v13; // eax
  unsigned int v14; // esi
  LPVOID v15; // eax
  void *v17[3]; // [esp+14h] [ebp-30h] BYREF
  unsigned __int8 *v18; // [esp+20h] [ebp-24h] BYREF
  unsigned int v19; // [esp+24h] [ebp-20h]
  _DWORD *v20; // [esp+28h] [ebp-1Ch]
  _BYTE v21[5]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v22[3]; // [esp+31h] [ebp-13h] BYREF
  int v23; // [esp+40h] [ebp-4h]

  v20 = a5;
  sub_44DD50((int *)v17, 39);
  v23 = 0;
  v7 = sub_4540B0(v21, (unsigned int)v22, a2);
  sub_401600((int)v17, (unsigned int)v21, v7 - v21);
  v8 = sub_4540B0(v21, (unsigned int)v22, a4);
  sub_401600((int)v17, (unsigned int)v21, v8 - v21);
  sub_401600((int)v17, a3, a4);
  v9 = (*(int (__thiscall **)(void *, int, void **))(*(_DWORD *)this + 4))(this, 39, v17);
  v10 = (void *)v9;
  if ( !v9
    || (v11 = *(_DWORD *)v9,
        v18 = (unsigned __int8 *)(v9 + 5),
        v19 = v11 + v9 + 5,
        v12 = sub_4541E0(&v18, v19),
        v13 = sub_4541E0(&v18, v19),
        v14 = v13,
        v13 > 0)
    && v20
    && (v15 = sub_453990(v13), (*v20 = v15) != 0)
    && !sub_4029F0((unsigned int *)&v18, (unsigned int)v15, v14) )
  {
    v12 = -1;
  }
  else
  {
    if ( a6 )
      *a6 = v14;
    sub_453A20(v10);
  }
  v23 = 1;
  if ( v17[0] )
  {
    v17[1] = nullptr;
    sub_453A20(v17[0]);
  }
  return v12;
}
