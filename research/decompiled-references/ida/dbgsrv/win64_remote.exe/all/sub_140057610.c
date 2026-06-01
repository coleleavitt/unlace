/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057610
// Address: 0x0000000140057610

//----- (0000000140057610) ----------------------------------------------------
void *__fastcall sub_140057610(int a1, int a2, __int16 a3, int a4)
{
  void *v8; // rbx
  _WORD *v9; // rax

  v8 = j__calloc_base(1u, 0x30u);
  if ( !v8 )
    return nullptr;
  v9 = j__calloc_base(1u, 0x10u);
  if ( !v9 )
  {
    free(v8);
    return nullptr;
  }
  v9[1] = a3;
  *v9 = 2;
  *((_DWORD *)v9 + 1) = a4;
  *((_QWORD *)v8 + 4) = v9;
  *((_DWORD *)v8 + 1) = 2;
  *((_DWORD *)v8 + 2) = a1;
  *((_DWORD *)v8 + 3) = a2;
  *((_QWORD *)v8 + 2) = 16;
  return v8;
}
