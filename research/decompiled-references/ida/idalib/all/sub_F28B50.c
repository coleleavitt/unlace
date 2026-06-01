__int64 __fastcall sub_F28B50(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // rax
  int *v8; // rbx
  __int64 result; // rax
  int *i; // r12
  __int64 v11; // rdi
  _BYTE *v12; // rax
  __int64 v13; // rax
  int v14; // esi

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" ");
  v5 = sub_9954E0(v3, " ", v4);
  v6 = sub_B17330(a2);
  sub_995540(v5, v6);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v7 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
    sub_9954E0(
      v7,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
  }
  v8 = *(int **)(a2 + 56);
  result = *(unsigned int *)(a2 + 48);
  for ( i = &v8[result]; i != v8; result = sub_227B910(v11, v14 & 0x3FFFFFFF) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 1096);
      v12 = *(_BYTE **)(v11 + 32);
      if ( *(_BYTE **)(v11 + 24) != v12 )
        break;
      ++v8;
      v13 = sub_227BF10(v11, " ", 1);
      result = sub_227B910(v13, *(v8 - 1) & 0x3FFFFFFF);
      if ( i == v8 )
        return result;
    }
    *v12 = 32;
    v14 = *v8++;
    ++*(_QWORD *)(v11 + 32);
  }
  return result;
}
