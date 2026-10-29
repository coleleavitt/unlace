__int64 __fastcall sub_894630(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _BYTE *a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r8
  __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // rax

  if ( (*(_BYTE *)(a3 + 2) & 2) != 0 )
    return 0;
  v5 = a2;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 320);
  v10 = *(unsigned int *)(v8 + 196);
  v11 = *(_DWORD *)(v8 + 208) + 1;
  v12 = *(unsigned int *)(v8 + 192);
  *(_DWORD *)(v8 + 208) = v11;
  if ( v10 < v12 + 1 )
  {
    sub_25D6060(v8 + 184, v8 + 200, v12 + 1, 4);
    v12 = *(unsigned int *)(v8 + 192);
    v5 = a2;
  }
  *(_DWORD *)(*(_QWORD *)(v8 + 184) + 4 * v12) = v11;
  ++*(_DWORD *)(v8 + 192);
  if ( (!v5 || (unsigned __int8)sub_88A370(a1, v5)) && (unsigned __int8)sub_8571E0(a3, a4, a1) )
  {
    result = sub_8941C0(a1, 1, v9);
  }
  else
  {
    if ( v9 != -1 )
      sub_8941C0(a1, 0, v9);
    result = 0;
  }
  --*(_DWORD *)(*(_QWORD *)(a1 + 32) + 192LL);
  return result;
}

