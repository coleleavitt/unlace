/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471E77
// Address: 0x00471E77

//----- (00471E77) --------------------------------------------------------
int __usercall sub_471E77@<eax>(char *a1@<ebx>, __m128i *lpMultiByteStr, __m128i *a3)
{
  char *v4; // eax
  char *v5; // esi
  int v6; // edi

  if ( !dword_4B7A00 && !dword_4B7A04 )
    return -1;
  if ( lpMultiByteStr )
  {
    v4 = sub_471EFD(a1, lpMultiByteStr, a3);
    v5 = v4;
    if ( v4
      && (v5 = nullptr, !sub_47BEF6((int)a1, v4, 1))
      && (!dword_4B7A04 || sub_471FF7(lpMultiByteStr->m128i_i8, a3->m128i_i8)) )
    {
      v6 = 0;
    }
    else
    {
      v6 = -1;
    }
    sub_479216(v5);
    return v6;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4((int)a1, 0);
    return -1;
  }
}
// 4B7A00: using guessed type int dword_4B7A00;
