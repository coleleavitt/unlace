/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AB50
// Address: 0x0006AB50

//----- (0006AB50) --------------------------------------------------------
int __cdecl sub_6AB50(int a1, char *s)
{
  size_t v2; // eax
  size_t v3; // ecx
  char *v4; // esi
  size_t v5; // edi
  size_t v6; // esi
  char *v7; // eax
  size_t v8; // edi
  int v9; // esi
  int result; // eax
  _DWORD *v11; // [esp+Ch] [ebp-30h]
  int v12; // [esp+10h] [ebp-2Ch] BYREF
  size_t v13; // [esp+14h] [ebp-28h]
  void *v14; // [esp+18h] [ebp-24h]
  _DWORD v15[7]; // [esp+20h] [ebp-1Ch] BYREF

  v15[2] = __readgsdword(0x14u);
  v11 = *(_DWORD **)(a1 + 248);
  v13 = 0;
  v12 = 0;
  v14 = nullptr;
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
    v14 = v7;
    v12 = v5 | 1;
    v13 = v3;
    goto LABEL_6;
  }
  LOBYTE(v12) = 2 * v2;
  v4 = (char *)&v12 + 1;
  if ( v2 )
  {
LABEL_6:
    v8 = v3;
    memcpy(v4, s, v3);
    v3 = v8;
  }
  v4[v3] = 0;
  sub_75D10(v15, v11, (unsigned __int8 *)&v12);
  v9 = v15[0];
  if ( (v12 & 1) != 0 )
    operator delete(v14);
  result = v9 + 20;
  if ( !v9 )
    return 0;
  return result;
}
