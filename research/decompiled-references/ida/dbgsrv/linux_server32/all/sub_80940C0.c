/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80940C0
// Address: 0x080940C0

//----- (080940C0) --------------------------------------------------------
int __cdecl sub_80940C0(int a1, char *s)
{
  size_t v2; // esi
  int v3; // eax
  int v4; // edi
  unsigned int *v5; // ecx
  int result; // eax
  int v7; // edx
  int *v8; // [esp+0h] [ebp-38h]
  int v9; // [esp+0h] [ebp-38h]
  unsigned int *v10; // [esp+4h] [ebp-34h]
  _DWORD v11[2]; // [esp+8h] [ebp-30h] BYREF
  char v12; // [esp+12h] [ebp-26h] BYREF
  char v13; // [esp+13h] [ebp-25h] BYREF
  unsigned int *v14; // [esp+14h] [ebp-24h] BYREF
  unsigned int v15; // [esp+18h] [ebp-20h]

  v15 = __readgsdword(0x14u);
  v8 = *(int **)(a1 + 372);
  if ( !s )
    JUMPOUT(0x804F4C4);
  v2 = strlen(s);
  if ( !v2 )
  {
    v14 = &std::string::_Rep::_S_empty_rep_storage[3];
    goto LABEL_7;
  }
  v3 = std::string::_Rep::_S_create(v2, 0, &v12);
  v4 = v3;
  v5 = (unsigned int *)(v3 + 12);
  if ( v2 == 1 )
  {
    *(_BYTE *)(v3 + 12) = *s;
  }
  else
  {
    v10 = (unsigned int *)(v3 + 12);
    memcpy((void *)(v3 + 12), s, v2);
    v5 = v10;
  }
  if ( (unsigned int *)v4 == std::string::_Rep::_S_empty_rep_storage )
  {
    v14 = v5;
LABEL_7:
    sub_8093FD0(v11, v8, (const void **)&v14);
    result = v11[0];
    goto LABEL_8;
  }
  v14 = v5;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)v4 = v2;
  *(_BYTE *)(v4 + v2 + 12) = 0;
  sub_8093FD0(v11, v8, (const void **)&v14);
  result = v11[0];
  if ( &_pthread_key_create )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF);
  }
  else
  {
    v7 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 8) = v7 - 1;
  }
  if ( v7 <= 0 )
  {
    v9 = result;
    std::string::_Rep::_M_destroy(v4, &v13);
    result = v9;
  }
LABEL_8:
  if ( result )
    result += 8;
  if ( v15 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80940F1: control flows out of bounds to 804F4C4
// 804BAD0: using guessed type int __cdecl std::string::_Rep::_S_create(_DWORD, _DWORD, _DWORD);
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
