/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80997C0
// Address: 0x080997C0

//----- (080997C0) --------------------------------------------------------
unsigned int __cdecl sub_80997C0(int a1, int a2, char a3)
{
  char v3; // dl
  __int64 v4; // xmm0_8
  unsigned int result; // eax
  _DWORD *v6; // eax
  int v7; // [esp+Ch] [ebp-44h] BYREF
  __int64 v8; // [esp+10h] [ebp-40h]
  _DWORD v9[3]; // [esp+18h] [ebp-38h] BYREF
  _DWORD v10[3]; // [esp+24h] [ebp-2Ch] BYREF
  unsigned int v11; // [esp+30h] [ebp-20h]

  v11 = __readgsdword(0x14u);
  v7 = 1;
  v8 = 0;
  sub_8099700(a1, (int)&v7, a3);
  if ( *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) == 63 )
  {
    v9[0] = 1;
    v9[1] = 0;
    v9[2] = 0;
    sub_80997C0(a1, v9, 1);
    if ( *(_WORD *)(*(_DWORD *)(a1 + 352) + 12) != 58 )
      sub_80933C0(a1);
    v10[0] = 1;
    v10[1] = 0;
    v10[2] = 0;
    sub_80997C0(a1, v10, 1);
    v6 = v10;
    if ( v8 )
      v6 = v9;
    v3 = *(_BYTE *)v6;
    v4 = *(_QWORD *)(v6 + 1);
  }
  else
  {
    v3 = v7;
    v4 = v8;
  }
  *(_BYTE *)a2 = v3;
  *(_QWORD *)(a2 + 4) = v4;
  result = v11 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
