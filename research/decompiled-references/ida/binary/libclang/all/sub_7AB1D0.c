__int64 __fastcall sub_7AB1D0(__int64 a1)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 8) != 0 )
    return 0;
  if ( *(char *)(a1 + 28) < 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 4) == 0 || (unsigned __int8)sub_79B8A0(a1 + 64) )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v3 = *(_QWORD *)(a1 + 128);
  v4 = (*(_BYTE *)(v3 + 24) & 1) != 0 ? sub_7A2E20(v3) : *(_QWORD *)(v3 + 24);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v5 = *(_QWORD *)(a1 + 104);
  v6 = v4 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
  sub_6E77B0((unsigned __int64 *)(v5 + 96), v5);
  v7 = *(_QWORD *)(a1 + 128);
  v8 = (*(_BYTE *)(v7 + 24) & 1) != 0 ? sub_7A2E20(v7) : *(_QWORD *)(v7 + 24);
  if ( v6 == v8 )
    return 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(**(_QWORD **)(v8 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(_QWORD *)(v9 + 8);
    if ( (v10 & 7) != 0 || (v10 & 8) != 0 )
      v9 = sub_B0CF30(**(_QWORD **)(v8 + 16), v5);
    v11 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
    v5 = *(_QWORD *)(v11 + 104);
    v12 = v11;
    sub_6E77B0((unsigned __int64 *)(v5 + 96), v5);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 128) + 1LL) & 8) != 0 )
      break;
    v8 += 24;
    if ( v8 == v6 )
      return 0;
  }
  return 1;
}

