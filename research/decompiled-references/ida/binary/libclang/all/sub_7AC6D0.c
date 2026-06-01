__int64 __fastcall sub_7AC6D0(__int64 a1)
{
  _QWORD *v2; // r13
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = (_QWORD *)sub_798D40(a1);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v3 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
  {
    v14 = sub_798D40(*(_QWORD *)(v3 + 88));
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 18200) + 56LL))(
            *(_QWORD *)(v14 + 18200),
            *(_QWORD *)(v3 + 24) >> 1);
    *(_QWORD *)(v3 + 24) = v15;
    v4 = v15;
  }
  else
  {
    v4 = *(_QWORD *)(v3 + 24);
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v5 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v5 + 24) & 1) != 0 )
  {
    v12 = sub_798D40(*(_QWORD *)(v5 + 88));
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12 + 18200) + 56LL))(
            *(_QWORD *)(v12 + 18200),
            *(_QWORD *)(v5 + 24) >> 1);
    *(_QWORD *)(v5 + 24) = v13;
    v6 = v13;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 24);
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v7 = *(_QWORD *)(a1 + 104);
  v8 = (unsigned __int64 *)(v7 + 96);
  if ( v4 == v6 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL) )
  {
    sub_6E77B0(v8, v7);
    v16 = *(_QWORD *)(a1 + 128);
    v10 = (_QWORD *)(v16 + 40);
    if ( (*(_BYTE *)(v16 + 56) & 4) != 0 )
      sub_7A2D50(v16 + 40, (__int64)v2);
  }
  else
  {
    sub_6E77B0(v8, v7);
    v9 = *(_QWORD *)(a1 + 128);
    v10 = (_QWORD *)(v9 + 64);
    if ( (*(_BYTE *)(v9 + 80) & 4) != 0 )
      sub_7A2D50(v9 + 64, (__int64)v2);
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( *(char *)(*(_QWORD *)(a1 + 128) + 10LL) >= 0 )
    {
      sub_7AC220(v2, a1, v10);
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 0x80u;
    }
  }
  return *v10;
}

