bool __fastcall sub_19A3D10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // cl
  bool result; // al
  int v12; // edx
  __int64 v13; // rdx

  if ( (*(_WORD *)a2 & 0x1FF) == 0x4F )
    a2 = *(_QWORD *)(a2 + 16);
  v5 = sub_BFB9F0(a2);
  if ( (*(_WORD *)v5 & 0x1FF) != 9 )
    return 0;
  v6 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v6;
  if ( *(_BYTE *)(*v6 + 16) != 42 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) != 42 )
      return 0;
    v7 = sub_F63050(*v6, a2, v13, v4);
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) != 13
    || v8 & 7 | (v8 >> 3) & 1
    || *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 7LL | (*(__int64 *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1 )
  {
    return 0;
  }
  v10 = (*(_BYTE *)(v5 + 2) >> 3) & 7;
  if ( v10 == 1 )
    return sub_AAC110(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18664LL), v9 & 0xFFFFFFFFFFFFFFF0LL, 0);
  if ( !v10 || (result = 0, v10 == 6) )
  {
    v12 = (*(_WORD *)(v9 + 18) >> 3) & 0x1FF;
    return v12 == 437 || v12 == 448;
  }
  return result;
}
