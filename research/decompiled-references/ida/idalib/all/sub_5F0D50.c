__int64 __fastcall sub_5F0D50(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // rax
  char v3; // dl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 result; // rax

  v1 = *(_WORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 128);
  switch ( v1 )
  {
    case 258:
      *(_QWORD *)(v2 + 40) |= 0x2000000000uLL;
      v2 = *(_QWORD *)(a1 + 128);
      break;
    case 259:
      *(_QWORD *)(v2 + 40) |= 0x4000000000uLL;
      v2 = *(_QWORD *)(a1 + 128);
      v3 = *(_BYTE *)(v2 + 186);
      if ( (v3 & 0x3F) == 0 )
        goto LABEL_6;
LABEL_17:
      result = set_qerrno(66);
      if ( (_DWORD)result )
        return result;
      goto LABEL_7;
    case 170:
      *(_QWORD *)(v2 + 40) |= 0x800000000uLL;
      v2 = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(a1 + 744) |= 1u;
      break;
  }
  v3 = *(_BYTE *)(v2 + 186);
  if ( (v3 & 0x3F) != 0 )
    goto LABEL_17;
LABEL_6:
  *(_BYTE *)(v2 + 186) = v3 | 0xD;
LABEL_7:
  v4 = qalloc_or_throw(24);
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 48LL) = v4;
  v5 = operator new(0x30u);
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 24) = v5 + 8;
  *(_QWORD *)(v5 + 32) = v5 + 8;
  v6 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v6 + 64) = v5;
  v7 = *(_QWORD *)(a1 + 128);
  v8 = *(_DWORD *)(v7 + 188);
  if ( *(_DWORD *)(a1 + 696) == 1 )
    sub_5EF6C0((const __m128i *)(a1 + 632), 0, v8, nullptr);
  v9 = *(_QWORD *)(a1 + 704);
  v10 = v9 + 56LL * *(_QWORD *)(a1 + 712);
  if ( v9 == v10 )
  {
LABEL_19:
    v12 = 0;
  }
  else
  {
    while ( *(_DWORD *)(v9 + 48) != 1 || v8 != *(_DWORD *)(v9 + 52) )
    {
      v9 += 56;
      if ( v10 == v9 )
        goto LABEL_19;
    }
    v11 = *(_QWORD *)(v9 + 8);
    v12 = *(_QWORD *)v9;
    if ( v11 < *(_QWORD *)(v9 + 16) && v12 && v11 )
    {
      v12 = qrealloc(v12);
      if ( !v12 )
        v12 = *(_QWORD *)v9;
    }
    *(_QWORD *)v9 = 0;
    *(_QWORD *)(v9 + 48) = 0;
    *(_OWORD *)(v9 + 8) = 0;
  }
  *(_QWORD *)(v7 + 8) = v12;
  return 0;
}
