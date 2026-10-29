/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_expr
// Address: 0x00050790

//----- (00050790) --------------------------------------------------------
int __cdecl eval_idc_expr(int a1, int a2, char *s, int a4)
{
  int v4; // edx
  char *v5; // ecx
  int v6; // edi
  _DWORD v8[7]; // [esp+0h] [ebp-1Ch] BYREF

  v4 = a4;
  v5 = s;
  v6 = a2;
  v8[2] = __readgsdword(0x14u);
  if ( a1 )
  {
    free_idcv((char *)a1);
    v5 = s;
    v6 = a2;
    v4 = a4;
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 4) = 0;
  }
  v8[0] = &off_137F60;
  v8[1] = v6;
  return eval_idc_snippet((char *)a1, v5, v4, (int)v8);
}
// 137F60: using guessed type int (__cdecl *off_137F60)(int, int);
