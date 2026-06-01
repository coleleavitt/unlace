char __fastcall sub_1CA20C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int16 v12; // ax

  v5 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  if ( (unsigned __int8)v7 <= 0x2Cu
    && ((v8 = 0x1C0400000800LL, _bittest64(&v8, v7)) || (_BYTE)v7 == 13 && ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) == 0x1E8) )
  {
    v9 = sub_F68450(v5, a2, v6, 0x1C0400000800LL, a5);
    LODWORD(v10) = 0;
    v11 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v11 & 8) != 0 )
      v10 = *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL));
    LOBYTE(v12) = (unsigned int)v10 >> 9 == 0;
  }
  else
  {
    return (*(unsigned __int8 *)(v5 + 17) >> 2) & 1;
  }
  return v12;
}
