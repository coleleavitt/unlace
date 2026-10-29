/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_363E0
// Address: 0x000363E0

//----- (000363E0) --------------------------------------------------------
int __cdecl sub_363E0(int a1, int a2, __int64 *a3)
{
  int result; // eax
  _QWORD *v4; // edi
  __int64 v5; // xmm0_8
  __int64 v6; // [esp+4h] [ebp-18h]

  result = *(_DWORD *)a3;
  if ( *a3 >= 1 && a3[2] )
  {
    v4 = (_QWORD *)a2;
    if ( *(__int64 *)a2 >= 1 && *(_QWORD *)(a2 + 16) )
    {
      LODWORD(v6) = *(_DWORD *)(a2 + 4);
      HIDWORD(v6) = *(_DWORD *)a2;
      if ( v6 == __PAIR64__(result, *((_DWORD *)a3 + 1)) )
        return result;
      result = sub_333F0();
      v4 = (_QWORD *)a2;
    }
    v4[3] = a3[3];
    v4[2] = a3[2];
    v5 = *a3;
    v4[1] = a3[1];
    *v4 = v5;
  }
  return result;
}
