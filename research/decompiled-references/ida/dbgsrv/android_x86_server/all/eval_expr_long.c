/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr_long
// Address: 0x00050820

//----- (00050820) --------------------------------------------------------
_DWORD *__cdecl eval_expr_long(_DWORD *a1, int a2, char *a3, int a4)
{
  _DWORD *v4; // eax
  _DWORD *v6; // [esp+1Ch] [ebp-30h]
  char v7[4]; // [esp+20h] [ebp-2Ch] BYREF
  int v8; // [esp+24h] [ebp-28h]
  int v9; // [esp+28h] [ebp-24h]
  int v10; // [esp+2Ch] [ebp-20h]
  int v11; // [esp+30h] [ebp-1Ch]
  unsigned int v12; // [esp+38h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  v7[0] = 2;
  v9 = 0;
  v8 = 0;
  v11 = 0;
  v10 = 0;
  if ( (unsigned __int8)eval_expr((int)v7, a2, a3, a4) )
  {
    idcv_long((int)v7);
    v4 = a1;
    *a1 = v8;
    LOBYTE(v4) = 1;
    v6 = v4;
  }
  else
  {
    v6 = nullptr;
  }
  free_idcv(v7);
  return v6;
}
