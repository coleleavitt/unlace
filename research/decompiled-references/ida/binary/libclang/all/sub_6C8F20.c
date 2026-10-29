unsigned __int64 __fastcall sub_6C8F20(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  char v9; // al
  __int64 v10; // rax
  __int64 v12; // rax

  v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = a2;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL) )
    v5 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7;
  v6 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 48LL;
  v7 = (v6 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v7 + 48 && v6 )
  {
    *(_QWORD *)(a1 + 2192) = v7 + 48;
    v8 = (v6 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v12 = sub_6A76A0(a1 + 2192, 48, 4);
    v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v8 = v12;
    v7 = v12;
  }
  v9 = *(_BYTE *)(*(_QWORD *)v4 + 17LL);
  *(_QWORD *)v8 = v8;
  if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) < 0x10 )
    v5 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(v8 + 24) = a2;
  *(_BYTE *)(v8 + 18) &= 0xF8u;
  *(_QWORD *)(v8 + 8) = v5;
  *(_QWORD *)(v8 + 32) = a3;
  *(_WORD *)(v8 + 16) = ((v9 & 0x1F) << 8) | 0x1D;
  v10 = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v10 + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, v10 + 1, 8);
    v10 = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10) = v7;
  ++*(_DWORD *)(a1 + 16);
  return v8 & 0xFFFFFFFFFFFFFFF0LL;
}

