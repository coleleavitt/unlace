/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C340
// Address: 0x0040C340

//----- (0040C340) --------------------------------------------------------
int __thiscall sub_40C340(int *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // ebx
  void **v9; // esi
  unsigned int v10; // eax
  int v11; // ecx
  _DWORD *v12; // ecx
  _BYTE v14[8]; // [esp+Ch] [ebp-8h] BYREF

  v8 = *(this + 3);
  if ( a7 != -1 )
    *(_DWORD *)(*(_DWORD *)sub_408C60((int)(this + 5), (int)v14, (unsigned __int8 *)&a7) + 12) = v8;
  v9 = (void **)(this + 2);
  v10 = *(this + 3) + 1;
  if ( v10 > *(this + 4) )
    *v9 = sub_453B00((int)(this + 2), *v9, v10, 0x14u);
  v11 = *(this + 3);
  *(this + 3) = v11 + 1;
  v12 = (char *)*v9 + 20 * v11;
  *v12 = a2;
  v12[1] = a7;
  v12[2] = a4;
  v12[3] = a5;
  v12[4] = a6;
  sub_40C3F0(
    *(this + 1),
    *(const char **)a3,
    *(_DWORD *)(a3 + 4),
    *(_BYTE *)(a3 + 9),
    *(_BYTE *)(a3 + 8),
    *(_DWORD *)(a3 + 12),
    *(_DWORD *)(a3 + 16));
  return v8;
}
