/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039B20
// Address: 0x0000000140039B20

//----- (0000000140039B20) ----------------------------------------------------
void __fastcall sub_140039B20(__int64 a1, __int64 a2)
{
  unsigned __int8 *v4; // rbx
  int v5; // ebx
  char v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx

  *(_QWORD *)(a2 + 8) = 0;
  if ( *(_QWORD *)(a2 + 16) < 0x400u )
    *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, 0x400u, 1u);
  v4 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) - 1LL);
  for ( *(_QWORD *)(a1 + 8) = v4; ; v4 = *(unsigned __int8 **)(a1 + 8) )
  {
    v5 = *v4;
    if ( ((v5 & 0x80u) != 0 || !isalnum(v5)) && (_BYTE)v5 != 95 && (_BYTE)v5 != 36 )
      break;
    v6 = **(_BYTE **)(a1 + 8);
    v7 = *(_QWORD *)(a2 + 8);
    v8 = v7 - 1;
    if ( !v7 )
      v8 = 0;
    if ( (unsigned __int64)(v8 + 2) > *(_QWORD *)(a2 + 16) )
      *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v8 + 2, 1u);
    *(_QWORD *)(a2 + 8) = v8 + 2;
    *(_BYTE *)(v8 + *(_QWORD *)a2) = v6;
    *(_BYTE *)(*(_QWORD *)a2 + v8 + 1) = 0;
    ++*(_QWORD *)(a1 + 8);
  }
}
