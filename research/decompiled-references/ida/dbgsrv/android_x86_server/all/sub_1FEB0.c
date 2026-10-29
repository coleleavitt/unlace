/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1FEB0
// Address: 0x0001FEB0

//----- (0001FEB0) --------------------------------------------------------
unsigned int __cdecl sub_1FEB0(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  void **v8[7]; // [esp+10h] [ebp-1Ch] BYREF

  v8[2] = (void **)__readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 572);
  if ( !v2 )
    goto LABEL_16;
  v3 = a1 + 572;
  do
  {
    if ( *(_DWORD *)(v2 + 16) >= a2 )
      v3 = v2;
    v2 = *(_DWORD *)(v2 + 4 * (*(_DWORD *)(v2 + 16) < a2));
  }
  while ( v2 );
  v4 = a1;
  if ( v3 == a1 + 572 || *(_DWORD *)(v3 + 16) > a2 )
  {
LABEL_16:
    if ( !(_BYTE)under_debugger )
      interr(30064);
    BUG();
  }
  if ( *(_BYTE *)(v3 + 45) )
    --*(_DWORD *)(a1 + 672);
  sub_2F7A0(v8, a1 + 568, (_DWORD *)v3);
  v5 = *(_DWORD *)(a1 + 584);
  if ( v5 >= 0xA )
  {
    v4 = a1;
    memmove(*(void **)(a1 + 580), (const void *)(*(_DWORD *)(a1 + 580) + 4), (4 * v5 - 4) & 0xFFFFFFFC);
    v5 = *(_DWORD *)(a1 + 584) - 1;
    *(_DWORD *)(a1 + 584) = v5;
  }
  if ( *(_DWORD *)(v4 + 588) >= v5 + 1 )
  {
    v6 = *(_DWORD **)(v4 + 580);
  }
  else
  {
    v6 = qvector_reserve(v4 + 580, *(void **)(v4 + 580), v5 + 1, 4u);
    *(_DWORD *)(v4 + 580) = v6;
    v5 = *(_DWORD *)(v4 + 584);
  }
  v6[v5] = a2;
  ++*(_DWORD *)(v4 + 584);
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
