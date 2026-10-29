/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E940
// Address: 0x0006E940

//----- (0006E940) --------------------------------------------------------
int __cdecl sub_6E940(_DWORD *a1, char a2, int a3)
{
  int v3; // edi
  int result; // eax
  const char *v5; // eax
  const char *v6; // eax
  size_t v7; // eax
  size_t v8; // ecx
  char *v9; // edx
  size_t v10; // edi
  char *v11; // eax
  int v12; // esi
  size_t v13; // [esp+14h] [ebp-38h]
  char *v14; // [esp+18h] [ebp-34h]
  const char *v15; // [esp+1Ch] [ebp-30h]
  int v16; // [esp+20h] [ebp-2Ch] BYREF
  size_t v17; // [esp+24h] [ebp-28h]
  void *v18; // [esp+28h] [ebp-24h]
  _DWORD v19[7]; // [esp+30h] [ebp-1Ch] BYREF

  v3 = a3;
  v19[2] = __readgsdword(0x14u);
  if ( !a2 )
    sub_6D8F0((int)a1, a3);
  if ( (unsigned __int8)sub_6DEC0((int)a1, (char **)a3) )
    return 0;
  v5 = sub_6DAB0(a1, a3, &v16);
  result = v5 != nullptr ? -1 : (unsigned __int8)v16;
  if ( result != -1 )
  {
    if ( result == 2 )
      return 0;
    if ( result == 1 )
      return 1;
    if ( *(_DWORD *)(a3 + 4) )
      v6 = *(const char **)a3;
    else
      v6 = byte_EF875;
    v17 = 0;
    v16 = 0;
    v18 = nullptr;
    v15 = v6;
    v7 = strlen(v6);
    if ( v7 >= 0xFFFFFFF0 )
      sub_758B0();
    v8 = v7;
    v13 = v7;
    if ( v7 >= 0xB )
    {
      v10 = (v7 + 16) & 0xFFFFFFF0;
      v11 = (char *)operator new(v10);
      v8 = v13;
      v9 = v11;
      v18 = v11;
      v16 = v10 | 1;
      v3 = a3;
      v17 = v13;
    }
    else
    {
      LOBYTE(v16) = 2 * v7;
      v9 = (char *)&v16 + 1;
      if ( !v7 )
        goto LABEL_19;
    }
    v14 = v9;
    memcpy(v9, v15, v8);
    v9 = v14;
    v8 = v13;
LABEL_19:
    v9[v8] = 0;
    sub_76D20(v19, a1 + 12, (unsigned __int8 *)&v16);
    v12 = v19[0];
    if ( (v16 & 1) != 0 )
      operator delete(v18);
    if ( v12 )
      *(_WORD *)(v3 + 12) = *(_WORD *)(v12 + 20);
    else
      *(_WORD *)(v3 + 12) = 2;
    return 0;
  }
  return result;
}
