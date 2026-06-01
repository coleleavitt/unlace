/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002A8F0
// Address: 0x000000010002A8F0

//----- (000000010002A8F0) ----------------------------------------------------
__int64 __fastcall sub_10002A8F0(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( SHIDWORD(qword_1000AC128[1]) <= 0 )
  {
    return 1612;
  }
  else
  {
    *(_BYTE *)(a1 + 212) = -44;
    v1 = *(_QWORD *)(a1 + 200);
    v2 = *(void **)v1;
    v3 = *(_QWORD *)(v1 + 8);
    if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
    {
      v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
      *(_QWORD *)v1 = v2;
      v3 = *(_QWORD *)(v1 + 8);
    }
    *((_BYTE *)v2 + v3) = -44;
    ++*(_QWORD *)(v1 + 8);
    ++*(_DWORD *)(a1 + 208);
    v4 = 0;
    sub_100026CF0(a1, 0, WORD2(qword_1000AC128[1]));
  }
  return v4;
}
// 1000AC128: using guessed type __int64 qword_1000AC128[3];
