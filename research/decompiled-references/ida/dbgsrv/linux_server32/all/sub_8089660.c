/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8089660
// Address: 0x08089660

//----- (08089660) --------------------------------------------------------
_DWORD *__usercall sub_8089660@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, _DWORD *a3@<ecx>, int *a4)
{
  int v4; // esi
  int v5; // eax
  size_t v6; // edi
  _DWORD *v7; // edi
  unsigned int v8; // eax
  void *v10; // eax
  void *v11; // eax
  const char *v12; // edx
  const char *v13; // eax
  const void **v14; // [esp+0h] [ebp-44h]
  int v18; // [esp+14h] [ebp-30h] BYREF
  _DWORD *v19; // [esp+18h] [ebp-2Ch]
  unsigned int v20; // [esp+28h] [ebp-1Ch]

  v20 = __readgsdword(0x14u);
  v4 = operator new(0x30u);
  *(_DWORD *)(v4 + 16) = 0;
  v5 = *a4;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  v6 = *(_DWORD *)(v5 + 4);
  v14 = (const void **)v5;
  if ( v6 )
  {
    v11 = sub_80CF8B0(v6);
    *(_DWORD *)(v4 + 16) = v11;
    *(_DWORD *)(v4 + 24) = v6;
    memcpy(v11, *v14, v6);
    *(_DWORD *)(v4 + 20) = v6;
  }
  *(_BYTE *)(v4 + 28) = 2;
  *(_OWORD *)(v4 + 32) = 0;
  sub_8084DB0(&v18, a2, a3, v4 + 16);
  v7 = v19;
  if ( v19 )
  {
    v8 = 1;
    if ( !v18 && v19 != a2 + 1 )
    {
      v12 = (char *)&qword_811CFF4 - 258076;
      if ( v19[5] )
        v12 = (const char *)v19[4];
      v13 = (char *)&qword_811CFF4 - 258076;
      if ( *(_DWORD *)(v4 + 20) )
        v13 = *(const char **)(v4 + 16);
      v8 = (unsigned int)strcmp(v13, v12) >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v8, v4, v7, a2 + 1);
    ++a2[5];
    *a1 = v4;
  }
  else
  {
    *a1 = v18;
    if ( v4 )
    {
      sub_8089430(v4 + 28);
      v10 = *(void **)(v4 + 16);
      if ( v10 )
      {
        *(_DWORD *)(v4 + 20) = 0;
        sub_80CF780(v10);
      }
      operator delete((void *)v4, 0x30u);
    }
  }
  if ( v20 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
