bool __fastcall sub_16A8540(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v13; // rdx

  v4 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  if ( *(_BYTE *)(*v4 + 16) == 42 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
    return 0;
  v5 = sub_F63050(*v4, a2, a3, a4);
  if ( !v5 )
    return 0;
LABEL_2:
  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v6;
  if ( *(_BYTE *)(*v6 + 16) != 42 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) != 42 )
      return 0;
    v7 = sub_F63050(*v6, v6, v13, a4);
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)&byte_8[*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v9) = 0;
  if ( (v8 & 8) != 0 )
    v9 = *(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL));
  v10 = (unsigned int)v9 >> 9;
  v11 = *(_QWORD *)&byte_8[*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL];
  LODWORD(v7) = 0;
  if ( (v11 & 8) != 0 )
    v7 = *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL));
  return (unsigned int)v7 >> 9 != v10;
}
