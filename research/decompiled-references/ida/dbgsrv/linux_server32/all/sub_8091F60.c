/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8091F60
// Address: 0x08091F60

//----- (08091F60) --------------------------------------------------------
_DWORD *__usercall sub_8091F60@<eax>(int a1@<eax>)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int *v5; // edx
  size_t v6; // edx
  void *v8; // eax
  size_t n; // [esp+0h] [ebp-30h]
  char v10; // [esp+13h] [ebp-1Dh] BYREF
  unsigned int v11; // [esp+14h] [ebp-1Ch]

  v11 = __readgsdword(0x14u);
  v2 = (_DWORD *)operator new(0x1Cu);
  *v2 = 0;
  v3 = v2;
  v4 = *(_DWORD *)a1;
  v5 = (unsigned int *)(*(_DWORD *)a1 - 12);
  if ( *(int *)(*(_DWORD *)a1 - 4) < 0 )
  {
    v4 = std::string::_Rep::_M_clone(v5, &v10, 0);
  }
  else if ( v5 != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( *((_DWORD *)&qword_811CFF4 - 8) )
      _InterlockedAdd((volatile signed __int32 *)(v4 - 4), 1u);
    else
      ++*(_DWORD *)(v4 - 4);
  }
  v6 = *(_DWORD *)(a1 + 8);
  v3[1] = v4;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  if ( v6 )
  {
    n = v6;
    v8 = sub_80CF8B0(v6);
    v3[2] = v8;
    v3[4] = n;
    memcpy(v8, *(const void **)(a1 + 4), n);
    v3[3] = n;
  }
  *((_WORD *)v3 + 10) = *(_WORD *)(a1 + 16);
  if ( v11 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v3;
}
// 804BCC0: using guessed type int __cdecl std::string::_Rep::_M_clone(_DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F9B0: using guessed type unsigned int std::string::_Rep::_S_empty_rep_storage[4];
