/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B1F20
// Address: 0x080B1F20

//----- (080B1F20) --------------------------------------------------------
int __cdecl sub_80B1F20(int a1, int a2, _DWORD *a3, size_t *a4, unsigned int *a5)
{
  unsigned int *v5; // ecx
  int v6; // edx
  int result; // eax
  __int16 v8; // ax
  unsigned int *v9; // [esp+0h] [ebp-40h]
  char *s; // [esp+Ch] [ebp-34h] BYREF
  int v11; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+14h] [ebp-2Ch] BYREF
  int v13; // [esp+18h] [ebp-28h] BYREF
  __int16 v14; // [esp+1Ch] [ebp-24h]
  unsigned int v15; // [esp+20h] [ebp-20h]

  v15 = __readgsdword(0x14u);
  v5 = a5;
  v6 = a2;
  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_8058290();
    v5 = a5;
    v6 = a2;
  }
  if ( v6 == 16777217 )
  {
    sub_80AAC00(a1, (unsigned int *)&s, &v11, &v12, v5);
    v13 = (int)&off_811C1F4;
  }
  else
  {
    result = -1;
    if ( v6 != 16777218 )
      goto LABEL_7;
    v9 = v5;
    sub_80AAC00(a1, (unsigned int *)&s, &v11, &v12, v5);
    v8 = sub_80CDE30(v9, v9[1]);
    v13 = (int)&off_811C200;
    v14 = v8;
  }
  result = sub_80B0EF0(
             (int (__cdecl ***)(_DWORD, void **, int, _DWORD **, void **, void **))&v13,
             a1,
             a3,
             a4,
             s,
             v11,
             v12 != 0);
LABEL_7:
  if ( v15 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811C1F4: using guessed type int (__cdecl *off_811C1F4)(int, int, int, int, int, int);
// 811C200: using guessed type int (*off_811C200)();
