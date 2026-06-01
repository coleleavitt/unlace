/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AAD70
// Address: 0x080AAD70

//----- (080AAD70) --------------------------------------------------------
void *__cdecl sub_80AAD70(int a1, char **a2, signed int a3, int a4)
{
  int v4; // eax
  void *result; // eax
  char *v6; // eax
  char s[4]; // [esp+8h] [ebp-38h] BYREF
  int v8; // [esp+Ch] [ebp-34h]
  void *ptr; // [esp+10h] [ebp-30h]
  int v10; // [esp+14h] [ebp-2Ch]
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+1Ch] [ebp-24h]
  unsigned int v13; // [esp+24h] [ebp-1Ch]

  v13 = __readgsdword(0x14u);
  sub_80A6580(a2, a3);
  if ( a3 <= 0 )
  {
    v6 = (char *)&dword_80DDFD8;
    if ( *(_DWORD *)(a4 + 4) )
      v6 = *(char **)a4;
    if ( v13 == __readgsdword(0x14u) )
      return sub_80A6780(a2, v6);
LABEL_12:
    sub_80D7AB0();
  }
  *(_DWORD *)s = 24;
  v8 = 4;
  v4 = *(_DWORD *)(a1 + 244);
  ptr = nullptr;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  (*(void (**)(void))(*(_DWORD *)v4 + 276))();
  sub_80B9A20(a2, s);
  if ( *(_BYTE *)(a1 + 96) )
    sub_8058290();
  sub_80B9AA0(a2, (int *)(*(_DWORD *)(a1 + 244) + 344));
  if ( ptr )
  {
    v10 = 0;
    sub_80CF780(ptr);
  }
  result = (void *)(v13 - __readgsdword(0x14u));
  if ( result )
    goto LABEL_12;
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
