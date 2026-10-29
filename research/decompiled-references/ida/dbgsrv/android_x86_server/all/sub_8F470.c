/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F470
// Address: 0x0008F470

//----- (0008F470) --------------------------------------------------------
int __cdecl sub_8F470(int a1, int a2)
{
  _DWORD *v2; // esi
  char *v3; // eax
  int v4; // eax
  int v5; // edi
  unsigned int v6; // eax
  signed int v7; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD v11[3]; // [esp+8h] [ebp-24h] BYREF
  _DWORD v12[6]; // [esp+14h] [ebp-18h] BYREF

  v12[1] = __readgsdword(0x14u);
  v2 = (_DWORD *)sub_8EB10();
  if ( *(_DWORD *)(a1 + 8) )
    v3 = *(char **)(a1 + 4);
  else
    v3 = byte_EF875;
  v4 = (*(int (__cdecl **)(_DWORD *, char *, _DWORD *))(*v2 + 244))(v2, v3, v12);
  if ( v4 < 0 )
    goto LABEL_14;
  v5 = v4;
  v6 = v2[71];
  v7 = v6;
  if ( !v6 )
    v7 = v2[83];
  if ( v5 >= v7 )
  {
LABEL_14:
    if ( !(_BYTE)under_debugger )
      interr(30056);
    BUG();
  }
  memset(v11, 0, sizeof(v11));
  if ( !v6 )
    v6 = v2[83];
  sub_849F0((int)v11, v6);
  v8 = sub_8EB30();
  if ( (*(int (__cdecl **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*v2 + 112))(v2, v8, v12[0], v11[0], 0) <= 0 )
  {
    v9 = throw_idc_exception(a2, "failed to read register value");
  }
  else
  {
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v11[0] + 16 * v5 + 4);
    v9 = 0;
  }
  sub_84B00((int)v11);
  return v9;
}
// 13E34C: using guessed type int under_debugger;
