/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A340
// Address: 0x0008A340

//----- (0008A340) --------------------------------------------------------
int sub_8A340(int a1, char *a2, ...)
{
  int v2; // esi
  int v3; // ecx
  void *v4; // eax
  va_list va; // [esp+2Ch] [ebp+10h] BYREF

  va_start(va, a2);
  if ( *(_BYTE *)(a1 + 348) )
  {
    v2 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 204))(a1);
    v3 = *(_DWORD *)(a1 + 208);
    if ( v3 && !*(_BYTE *)(v3 + 36) )
      sub_95A70(0, v3, (int)a2, (int)va);
    else
      sub_99010(0, a2, va);
    v4 = winerr(v2);
    sub_1C9D0(a1, ": %s\n", v4);
  }
  return 0;
}
