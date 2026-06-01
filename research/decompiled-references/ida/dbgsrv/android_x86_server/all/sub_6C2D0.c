/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C2D0
// Address: 0x0006C2D0

//----- (0006C2D0) --------------------------------------------------------
unsigned int __cdecl sub_6C2D0(int a1, char *s)
{
  size_t v2; // eax
  size_t v3; // ecx
  char *v4; // esi
  size_t v5; // edi
  size_t v6; // esi
  char *v7; // eax
  size_t v8; // edi
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  _DWORD *v12; // [esp+Ch] [ebp-30h]
  int v13; // [esp+10h] [ebp-2Ch] BYREF
  size_t v14; // [esp+14h] [ebp-28h]
  void *v15; // [esp+18h] [ebp-24h]
  _DWORD v16[7]; // [esp+20h] [ebp-1Ch] BYREF

  v16[2] = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 272) )
  {
    if ( !(_BYTE)under_debugger )
      interr(303);
    BUG();
  }
  v12 = *(_DWORD **)(a1 + 248);
  v14 = 0;
  v13 = 0;
  v15 = nullptr;
  v2 = strlen(s);
  if ( v2 >= 0xFFFFFFF0 )
    sub_758B0();
  v3 = v2;
  if ( v2 >= 0xB )
  {
    v5 = (v2 + 16) & 0xFFFFFFF0;
    v6 = v2;
    v7 = (char *)operator new(v5);
    v3 = v6;
    v4 = v7;
    v15 = v7;
    v13 = v5 | 1;
    v14 = v3;
    goto LABEL_7;
  }
  LOBYTE(v13) = 2 * v2;
  v4 = (char *)&v13 + 1;
  if ( v2 )
  {
LABEL_7:
    v8 = v3;
    memcpy(v4, s, v3);
    v3 = v8;
  }
  v4[v3] = 0;
  sub_75D10(v16, v12, (unsigned __int8 *)&v13);
  v9 = (_DWORD *)v16[0];
  if ( (v13 & 1) != 0 )
    operator delete(v15);
  if ( v9 )
  {
    v10 = *(_DWORD **)(a1 + 248);
    v16[0] = v9;
    sub_76B10(&v13, v10, v9);
  }
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
