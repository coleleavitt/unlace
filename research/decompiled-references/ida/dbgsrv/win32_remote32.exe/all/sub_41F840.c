/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F840
// Address: 0x0041F840

//----- (0041F840) --------------------------------------------------------
int __usercall sub_41F840@<eax>(__m128i a1@<xmm0>, int a2, char *a3, ...)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  unsigned int v6; // eax
  va_list va; // [esp+14h] [ebp+Ch] BYREF

  va_start(va, a3);
  v3 = sub_453E80(a1, nullptr, 0, a3, (int)va);
  v4 = v3;
  if ( !v3 )
    return a2;
  v5 = *(_DWORD *)(a2 + 4) != 0 ? *(_DWORD *)(a2 + 4) - 1 : 0;
  v6 = v3 + v5 + 1;
  if ( v6 > *(_DWORD *)(a2 + 8) )
  {
    *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v4 + v5 + 1, 1u);
    v6 = v4 + v5 + 1;
  }
  *(_DWORD *)(a2 + 4) = v6;
  sub_453E80(a1, (_DWORD *)(v5 + *(_DWORD *)a2), v4 + 1, a3, (int)va);
  return a2;
}
