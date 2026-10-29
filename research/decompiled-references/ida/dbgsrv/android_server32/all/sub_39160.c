/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39160
// Address: 0x00039160

//----- (00039160) --------------------------------------------------------
size_t __fastcall sub_39160(int a1, const char *a2, size_t a3)
{
  int v5; // r7
  int v6; // r1
  _BYTE *v7; // r0
  size_t result; // r0

  *(_BYTE *)(a1 + 120) = -88;
  v5 = *(_DWORD *)(a1 + 112);
  v6 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
  {
    v7 = *(_BYTE **)v5;
  }
  else
  {
    v7 = qvector_reserve(v5, *(void **)v5, v6 + 1, 1u);
    *(_DWORD *)v5 = v7;
    v6 = *(_DWORD *)(v5 + 4);
  }
  v7[v6] = -88;
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(a1 + 116);
  if ( !a3 )
    a3 = strlen(a2);
  sub_390C4(a1, (unsigned __int16)a3);
  sub_390C4(a1, HIWORD(a3));
  sub_40150(*(_DWORD *)(a1 + 112), a2, a3);
  result = *(_DWORD *)(a1 + 116) + a3;
  *(_DWORD *)(a1 + 116) = result;
  return result;
}
