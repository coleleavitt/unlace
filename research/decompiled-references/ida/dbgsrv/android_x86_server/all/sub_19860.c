/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19860
// Address: 0x00019860

//----- (00019860) --------------------------------------------------------
int __fastcall sub_19860(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // eax
  int v4; // esi
  ssize_t v5; // eax
  int v6; // ecx
  int v7; // edi
  char *v8; // edi
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v12; // [esp+0h] [ebp-45Ch]
  char *endptr; // [esp+4h] [ebp-458h] BYREF
  char buf[1024]; // [esp+8h] [ebp-454h] BYREF
  _DWORD v15[21]; // [esp+408h] [ebp-54h] BYREF

  v15[16] = __readgsdword(0x14u);
  sub_19980((int)v15, 64, 64, (int)"/proc/%d/task/%d/status", a1, a2);
  v3 = __open_2(v15, 0);
  if ( v3 < 0 )
    return -1;
  v4 = v3;
  while ( 1 )
  {
    v5 = read(v4, buf, 0x3FFu);
    if ( v5 >= 0 )
      break;
    if ( *(_DWORD *)__errno(v6) != 4 )
      goto LABEL_10;
  }
  buf[v5] = 0;
  v8 = strstr(buf, "CapPrm:");
  v10 = (_DWORD *)__errno(v9);
  if ( v8 )
  {
    *v10 = 0;
    v12 = v10;
    *a3 = strtoull(v8 + 8, &endptr, 16);
    v7 = -(*v12 != 0);
    goto LABEL_11;
  }
  *v10 = 22;
LABEL_10:
  v7 = -1;
LABEL_11:
  close(v4);
  return v7;
}
// 198D6: variable 'v6' is possibly undefined
// 19903: variable 'v9' is possibly undefined
// 17A70: using guessed type int __cdecl __open_2(_DWORD, _DWORD);
// 17A90: using guessed type int __fastcall __errno(_DWORD);
