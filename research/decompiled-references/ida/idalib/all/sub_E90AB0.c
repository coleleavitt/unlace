void __fastcall sub_E90AB0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdx
  int v7; // eax

  v4 = a2;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    if ( a2 )
      goto LABEL_3;
LABEL_10:
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 16) = 0;
    return;
  }
  free(*(void **)(a1 + 8));
  if ( !a2 )
    goto LABEL_10;
LABEL_3:
  *(_QWORD *)a1 = a2;
  v5 = 0;
  *(_QWORD *)(a1 + 8) = a3;
  do
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( *(_QWORD *)(v4 + 16) )
      v7 = 4 * (((unsigned int)(v6 >> 1) & 3) >= 2) + 8;
    else
      v7 = 4;
    v5 += v7;
    v4 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 );
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 20) = 0;
}
