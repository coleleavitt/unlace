/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D39D0
// Address: 0x080D39D0

//----- (080D39D0) --------------------------------------------------------
int __cdecl sub_80D39D0(int a1, char *s, int a3)
{
  size_t v3; // eax
  void *v4; // esp
  const char *v5; // eax
  int result; // eax
  int v7; // [esp-10h] [ebp-3Ch]
  _DWORD v8[3]; // [esp-Ch] [ebp-38h] BYREF
  int v9; // [esp+0h] [ebp-2Ch]
  int v10; // [esp+4h] [ebp-28h]
  int v11; // [esp+8h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-20h]
  unsigned int v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h]
  int v16; // [esp+1Ch] [ebp-10h]

  v9 = a1;
  v13 = __readgsdword(0x14u);
  v3 = strlen(s);
  v4 = alloca(v3 + 112);
  v5 = sub_80D35D0(s, v8, v3 + 100);
  result = vfscanf(v9, v5, a3, v7, v8[0], v8[1], v8[2], v9, v10, v11, v12, v13, v14, v15, v16);
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80D3A24: variable 'v7' is possibly undefined
// 804B310: using guessed type int __stdcall vfscanf(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
