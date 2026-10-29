/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64C80
// Address: 0x0000000000064C80

//----- (0000000000064C80) ----------------------------------------------------
__int64 __fastcall sub_64C80(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  char *v3; // rax
  unsigned int v4; // ebx

  if ( SHIDWORD(qword_154A68[1]) <= 0 )
  {
    return 1612;
  }
  else
  {
    *(_BYTE *)(a1 + 212) = -44;
    v1 = *(_QWORD *)(a1 + 200);
    v2 = *(_QWORD *)(v1 + 8);
    if ( *(_QWORD *)(v1 + 16) >= (unsigned __int64)(v2 + 1) )
    {
      v3 = *(char **)v1;
    }
    else
    {
      v3 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v1, v2 + 1, 1u);
      *(_QWORD *)v1 = v3;
      v2 = *(_QWORD *)(v1 + 8);
    }
    v3[v2] = -44;
    ++*(_QWORD *)(v1 + 8);
    ++*(_DWORD *)(a1 + 208);
    v4 = 0;
    sub_61950(a1, 0, WORD2(qword_154A68[1]));
  }
  return v4;
}
// 154A68: using guessed type __int64 qword_154A68[3];
