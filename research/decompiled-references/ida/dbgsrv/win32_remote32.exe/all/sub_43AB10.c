/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AB10
// Address: 0x0043AB10

//----- (0043AB10) --------------------------------------------------------
bool __userpurge sub_43AB10@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, __m128i a4@<xmm0>, int a5)
{
  const CHAR *v6; // eax
  int *v7; // eax
  int *v8; // edi
  int v9; // esi

  if ( !a5 )
    return 1;
  v6 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 240) )
    v6 = *(const CHAR **)(a1 + 236);
  v7 = sub_45C5A0(a2, a3, a4, v6, 0);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = sub_4613F0((int)v7, (int)v7);
  sub_45C550(a2, (int)v8, v8);
  return v9 == a5;
}
// 43AB10: could not find valid save-restore pair for edi
