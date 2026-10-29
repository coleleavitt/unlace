/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64BE0
// Address: 0x0000000000064BE0

//----- (0000000000064BE0) ----------------------------------------------------
__int64 __fastcall sub_64BE0(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  char *v4; // rax
  unsigned int v5; // ebx

  if ( SHIDWORD(qword_154A68[0]) <= 0 )
  {
    return 1611;
  }
  else
  {
    *(_BYTE *)(a1 + 212) = -44;
    v2 = *(_QWORD *)(a1 + 200);
    v3 = *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)(v2 + 16) >= (unsigned __int64)(v3 + 1) )
    {
      v4 = *(char **)v2;
    }
    else
    {
      v4 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v2, v3 + 1, 1u);
      *(_QWORD *)v2 = v4;
      v3 = *(_QWORD *)(v2 + 8);
    }
    v4[v3] = -44;
    ++*(_QWORD *)(v2 + 8);
    ++*(_DWORD *)(a1 + 208);
    v5 = 0;
    sub_61790(a1, a2, 0);
    sub_61950(a1, 0, WORD2(qword_154A68[0]));
  }
  return v5;
}
// 154A68: using guessed type __int64 qword_154A68[3];
