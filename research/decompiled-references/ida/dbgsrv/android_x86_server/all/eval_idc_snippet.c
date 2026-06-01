/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_snippet
// Address: 0x00051740

//----- (00051740) --------------------------------------------------------
int __cdecl eval_idc_snippet(char *a1, char *s, int a3, int a4)
{
  unsigned int v4; // eax
  char v5; // si
  int v6; // eax
  _DWORD *v8; // eax
  int v9; // [esp+0h] [ebp-2Ch]
  int v10; // [esp+4h] [ebp-28h]
  int v11[9]; // [esp+8h] [ebp-24h] BYREF

  v11[4] = __readgsdword(0x14u);
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    v8 = operator new(0x48u);
    v8[1] = 0;
    *v8 = 0;
    v8[3] = 0;
    v8[2] = 0;
    v8[5] = 0;
    v8[4] = 0;
    v8[7] = 0;
    v8[6] = 0;
    v8[9] = 0;
    v8[8] = 0;
    v8[11] = 0;
    v8[10] = 0;
    v8[13] = 0;
    v8[12] = 0;
    v8[15] = 0;
    v8[14] = 0;
    *(_DWORD *)((char *)v8 + 65) = 0;
    *(_DWORD *)((char *)v8 + 61) = 0;
    dword_13BD78 = (int)v8;
    _cxa_guard_release((__guard *)&byte_13BD7C);
  }
  v10 = dword_13BD78;
  v4 = sub_51160(dword_13BD78);
  v5 = v4;
  qsnprintf(v11, 16, "___idcexec%d", v4);
  if ( (unsigned __int8)compile_idc_snippet((int)v11, s, a3, a4, 0) )
  {
    LOBYTE(v6) = call_idc_func(a1, (char *)v11, nullptr, 0, a3, a4);
    v9 = v6;
  }
  else
  {
    v9 = 0;
  }
  sub_51260(v10, v5);
  return v9;
}
// 517D4: variable 'v6' is possibly undefined
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
