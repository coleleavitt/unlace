__int64 __fastcall sub_5F1240(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_BYTE *)(v1 + 186);
  if ( (v2 & 0x3F) != 0 )
  {
    result = set_qerrno(66);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    *(_BYTE *)(v1 + 186) = v2 | 0x2D;
  }
  v3 = qalloc_or_throw(56);
  *(_OWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 32) = 0;
  *(_QWORD *)v3 = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  *(_BYTE *)(v3 + 52) = 0x80;
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 48LL) = v3;
  v4 = qalloc_or_throw(24);
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 56LL) = v4;
  v5 = qalloc_or_throw(24);
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = v5;
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(_DWORD *)(v6 + 188);
  if ( *(_DWORD *)(a1 + 696) == 1 )
    sub_5EF6C0((const __m128i *)(a1 + 632), 0, v7, nullptr);
  v8 = *(_QWORD *)(a1 + 704);
  v9 = v8 + 56LL * *(_QWORD *)(a1 + 712);
  if ( v8 == v9 )
  {
LABEL_12:
    v11 = 0;
  }
  else
  {
    while ( *(_DWORD *)(v8 + 48) != 1 || v7 != *(_DWORD *)(v8 + 52) )
    {
      v8 += 56;
      if ( v9 == v8 )
        goto LABEL_12;
    }
    v10 = *(_QWORD *)(v8 + 8);
    v11 = *(_QWORD *)v8;
    if ( v10 < *(_QWORD *)(v8 + 16) && v11 && v10 )
    {
      v11 = qrealloc(v11);
      if ( !v11 )
        v11 = *(_QWORD *)v8;
    }
    *(_QWORD *)v8 = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_OWORD *)(v8 + 8) = 0;
  }
  *(_QWORD *)(v6 + 8) = v11;
  return 0;
}
