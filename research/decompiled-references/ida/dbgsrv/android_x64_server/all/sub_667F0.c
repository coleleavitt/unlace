/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_667F0
// Address: 0x00000000000667F0

//----- (00000000000667F0) ----------------------------------------------------
bool __fastcall sub_667F0(_QWORD *a1, int a2, int a3)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebp
  int v7; // esi
  char v9; // [rsp+Fh] [rbp-19h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  if ( a2 < 0 )
  {
    v7 = -a2;
    if ( (unsigned __int64)off_154A20 <= v7 )
      return 0;
    v6 = (int)off_154A28[5 * v7 + 4];
    v5 = sub_6E3B0(off_154A28[5 * v7 + 2], &v9);
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || a1[1] <= (unsigned __int64)a2 )
      return 0;
    v4 = *(_QWORD *)(*a1 + 8LL * a2);
    v5 = *(_DWORD *)(v4 + 24);
    v6 = *(_DWORD *)(v4 + 72);
  }
  if ( a3 + v6 >= v5 )
    return v9 != 0 || v5 >= a3;
  return 0;
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
