/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46ACDC
// Address: 0x0046ACDC

//----- (0046ACDC) --------------------------------------------------------
char __thiscall sub_46ACDC(int this)
{
  unsigned __int16 *v2; // edi
  int v3; // ebx
  bool v4; // al
  unsigned int v5; // ecx

  *(_DWORD *)(this + 20) += 4;
  v2 = *(unsigned __int16 **)(*(_DWORD *)(this + 20) - 4);
  if ( !v2 || (v3 = *((_DWORD *)v2 + 1)) == 0 )
  {
    *(_DWORD *)(this + 52) = "(null)";
    v5 = 6;
    goto LABEL_6;
  }
  v4 = sub_469B21(*(_DWORD *)this, *(_DWORD *)(this + 4), *(_BYTE *)(this + 49), *(_DWORD *)(this + 44));
  *(_DWORD *)(this + 52) = v3;
  v5 = *v2;
  if ( !v4 )
  {
LABEL_6:
    *(_BYTE *)(this + 60) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(this + 60) = 1;
  v5 >>= 1;
LABEL_7:
  *(_DWORD *)(this + 56) = v5;
  return 1;
}
