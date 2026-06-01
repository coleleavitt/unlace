/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425D40
// Address: 0x00425D40

//----- (00425D40) --------------------------------------------------------
char __userpurge sub_425D40@<al>(__m128i a1@<xmm0>, __m128i *a2, int a3)
{
  char result; // al
  _DWORD *v4; // eax
  struct _RTL_CRITICAL_SECTION *v5; // esi
  unsigned int v6; // edi
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  struct _RTL_CRITICAL_SECTION *v15; // esi
  int v16; // edi
  int v17; // edx
  bool v18; // cf
  _DWORD *v19; // ebx
  _DWORD v20[2]; // [esp+1Ch] [ebp-38h] BYREF
  int v21; // [esp+24h] [ebp-30h]
  _DWORD *v22; // [esp+28h] [ebp-2Ch]
  int v23; // [esp+2Ch] [ebp-28h] BYREF
  char v24; // [esp+33h] [ebp-21h]
  _DWORD v25[4]; // [esp+34h] [ebp-20h] BYREF
  int v26; // [esp+50h] [ebp-4h]

  ((void (__cdecl *)(int, int *))off_4B46B0)(11, &v23);
  v20[0] = &off_48BE8C;
  v20[1] = v23;
  if ( sub_464A10(a1, a2, (const __m128i *)"static ") )
  {
    sub_42F0D0("main", 0, (unsigned int)dword_48BF48, 7u);
    result = sub_42F310(a3, (int)a2, a3, (int)v20, 0);
    if ( result )
      return sub_4235F0(a3, nullptr, "main", nullptr, 0, a3, (int)v20);
  }
  else
  {
    v4 = sub_428030();
    v5 = dword_4B6B40;
    v22 = v4;
    sub_4562D0(dword_4B6B40);
    v6 = 0;
    v26 = 0;
    v7 = 1;
    v8 = 0;
    v9 = v22[8];
    v10 = v22[9];
    v21 = v9;
    v23 = v10;
    while ( 1 )
    {
      v11 = (v6 & v10 | v7 & v9) == 0;
      v9 = v21;
      if ( v11 )
        break;
      v10 = v23;
      ++v8;
      v6 = __PAIR64__(v6, v7) >> 31;
      v7 *= 2;
      if ( v8 >= 0x40 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1443);
      }
    }
    v12 = v22;
    v13 = v7 | v21;
    v14 = v6 | v23;
    v22[8] = v13;
    v12[9] = v14;
    v26 = 1;
    sub_4562F0(v5);
    v26 = -1;
    sub_453D50(a1, v25, 16, "___idcexec%d", v8);
    v24 = sub_428A70(v8, a1, (const char *)v25, a2->m128i_i8, a3, (int)v20, 0);
    if ( v24 )
      v24 = sub_4235F0(v8, nullptr, (char *)v25, nullptr, 0, a3, (int)v20);
    v15 = dword_4B6B40;
    sub_4562D0(dword_4B6B40);
    v26 = 3;
    v16 = 0;
    if ( v8 >= 0x20 )
      v16 = 1 << v8;
    v17 = v16 ^ (1 << v8);
    v18 = v8 < 0x40;
    v19 = v22;
    if ( !v18 )
      v16 = v17;
    if ( !(v16 & v22[9] | v17 & v22[8]) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1444);
    }
    v22[8] &= ~v17;
    v19[9] &= ~v16;
    v26 = 4;
    sub_4562F0(v15);
    return v24;
  }
  return result;
}
// 48BE8C: using guessed type _UNKNOWN *off_48BE8C;
// 48BF48: using guessed type int dword_48BF48[2];
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4B70F0: using guessed type char byte_4B70F0;
