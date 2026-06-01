/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4338A0
// Address: 0x004338A0

//----- (004338A0) --------------------------------------------------------
void __thiscall sub_4338A0(_DWORD *this, int a2)
{
  _BYTE *v4; // ebx
  int v5; // edi
  char v6; // [esp+14h] [ebp+4h]

  *(_DWORD *)(a2 + 4) = 0;
  if ( *(_DWORD *)(a2 + 8) < 0x400u )
    *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, 0x400u, 1u);
  v4 = (_BYTE *)(*(this + 1) - 1);
  for ( *(this + 1) = v4; ; v4 = (_BYTE *)*(this + 1) )
  {
    LOBYTE(v4) = *v4;
    if ( ((char)v4 < 0 || !sub_46B640((int)v4, (unsigned __int8)v4)) && (_BYTE)v4 != 95 && (_BYTE)v4 != 36 )
      break;
    v6 = *(_BYTE *)*(this + 1);
    v5 = *(_DWORD *)(a2 + 4) != 0 ? *(_DWORD *)(a2 + 4) - 1 : 0;
    if ( (unsigned int)(v5 + 2) > *(_DWORD *)(a2 + 8) )
      *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v5 + 2, 1u);
    *(_DWORD *)(a2 + 4) = v5 + 2;
    *(_BYTE *)(v5 + *(_DWORD *)a2) = v6;
    *(_BYTE *)(*(_DWORD *)a2 + v5 + 1) = 0;
    ++*(this + 1);
  }
}
