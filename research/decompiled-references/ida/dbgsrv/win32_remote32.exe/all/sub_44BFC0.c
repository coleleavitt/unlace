/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BFC0
// Address: 0x0044BFC0

//----- (0044BFC0) --------------------------------------------------------
int __userpurge sub_44BFC0@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, char *a4, int a5)
{
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // eax
  const char *v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // esi
  char *v14; // eax
  char *v15; // edx
  void *v16; // eax
  int v17; // esi
  char *v19; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v20; // [esp+14h] [ebp-28h]
  unsigned int v21; // [esp+18h] [ebp-24h]
  _DWORD *v22; // [esp+1Ch] [ebp-20h] BYREF
  int v23; // [esp+20h] [ebp-1Ch]
  unsigned int v24; // [esp+24h] [ebp-18h]
  int v25; // [esp+28h] [ebp-14h]
  unsigned int v26; // [esp+2Ch] [ebp-10h]
  int v27; // [esp+38h] [ebp-4h]
  unsigned int v28; // [esp+4Ch] [ebp+10h]

  v25 = a1;
  if ( *(_BYTE *)(a1 + 36) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1621);
  }
  if ( a3 )
    v5 = 2 * (a3 > 0) + 52;
  else
    v5 = 53;
  LOBYTE(a3) = v5;
  sub_44DD50((int *)&v19, v5);
  v27 = 1;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  v6 = sub_453E80(a2, nullptr, 0, a4, a5);
  if ( v6 )
  {
    v7 = v6 + 1;
    if ( v6 + 1 <= v24 )
    {
      v8 = v22;
    }
    else
    {
      v8 = sub_453B00((int)&v22, v22, v6 + 1, 1u);
      v22 = v8;
    }
    v23 = v7;
    sub_453E80(a2, v8, v7, a4, a5);
  }
  if ( v23 )
  {
    v9 = pNodeName;
    if ( v22 )
      v9 = (const char *)v22;
  }
  else
  {
    v9 = MultiByteStr;
  }
  v10 = strlen(v9);
  v11 = v10 + 1;
  v28 = v10 + 1;
  if ( v10 != -1 )
  {
    v12 = v20;
    v26 = v20;
    v13 = v20 + v11;
    if ( v20 + v11 < v20 )
      v13 = 0x7FFFFFFF;
    if ( v13 <= v20 )
    {
      if ( v13 != v20 )
      {
        if ( v13 < v20 )
          v12 = v13;
        v20 = v12;
      }
    }
    else
    {
      if ( v13 <= v21 )
      {
        v15 = v19;
      }
      else
      {
        v14 = (char *)sub_453B00((int)&v19, v19, v13, 1u);
        v12 = v20;
        v15 = v14;
        v19 = v14;
      }
      sub_464890((__m128i *)&v15[v12], 0, v13 - v12);
      v11 = v28;
      v20 = v13;
    }
    sub_464310((unsigned int)&v19[v26], (unsigned int)v9, v11);
  }
  v16 = (void *)(*(int (__thiscall **)(int, int, char **))(*(_DWORD *)v25 + 4))(v25, a3, &v19);
  sub_453A20(v16);
  if ( v5 == 52 )
  {
    sub_46BC95(1u);
    JUMPOUT(0x44C1C4);
  }
  v17 = v23 != 0 ? v23 - 1 : 0;
  LOBYTE(v27) = 2;
  if ( v22 )
  {
    v23 = 0;
    sub_453A20(v22);
    v22 = nullptr;
    v24 = 0;
  }
  v27 = 3;
  if ( v19 )
  {
    v20 = 0;
    sub_453A20(v19);
  }
  return v17;
}
// 44C1BF: control flows out of bounds to 44C1C4
// 4B70F0: using guessed type char byte_4B70F0;
