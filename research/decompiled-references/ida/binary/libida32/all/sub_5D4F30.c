__int64 __fastcall sub_5D4F30(__int64 a1, const char *a2)
{
  __int16 v2; // dx
  __int64 v3; // rax
  char v4; // dl
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 result; // rax

  v2 = *(_WORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 120);
  switch ( v2 )
  {
    case 258:
      *(_QWORD *)(v3 + 40) |= 0x2000000000uLL;
      v3 = *(_QWORD *)(a1 + 120);
      break;
    case 259:
      *(_QWORD *)(v3 + 40) |= 0x4000000000uLL;
      v3 = *(_QWORD *)(a1 + 120);
      v4 = *(_BYTE *)(v3 + 186);
      if ( (v4 & 0x3F) == 0 )
        goto LABEL_6;
LABEL_17:
      result = set_qerrno(66, a2);
      if ( (_DWORD)result )
        return result;
      goto LABEL_7;
    case 170:
      *(_QWORD *)(v3 + 40) |= 0x800000000uLL;
      v3 = *(_QWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 728) |= 1u;
      break;
  }
  v4 = *(_BYTE *)(v3 + 186);
  if ( (v4 & 0x3F) != 0 )
    goto LABEL_17;
LABEL_6:
  *(_BYTE *)(v3 + 186) = v4 | 0xD;
LABEL_7:
  v5 = qalloc_or_throw(24, a2);
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 48LL) = v5;
  v6 = operator new(0x30u);
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 24) = v6 + 8;
  *(_QWORD *)(v6 + 32) = v6 + 8;
  v7 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v7 + 64) = v6;
  v8 = *(_QWORD *)(a1 + 120);
  v9 = *(_DWORD *)(v8 + 188);
  if ( *(_DWORD *)(a1 + 680) == 1 )
    sub_5D38A0((char **)(a1 + 624), 0, v9, nullptr);
  v10 = *(_QWORD *)(a1 + 688);
  v11 = v10 + 56LL * *(_QWORD *)(a1 + 696);
  if ( v10 == v11 )
  {
LABEL_19:
    v13 = 0;
  }
  else
  {
    while ( *(_DWORD *)(v10 + 48) != 1 || v9 != *(_DWORD *)(v10 + 52) )
    {
      v10 += 56;
      if ( v11 == v10 )
        goto LABEL_19;
    }
    v12 = *(_QWORD *)(v10 + 8);
    v13 = *(_QWORD *)v10;
    if ( v12 < *(_QWORD *)(v10 + 16) && v13 && v12 )
    {
      v13 = qrealloc(v13);
      if ( !v13 )
        v13 = *(_QWORD *)v10;
    }
    *(_QWORD *)v10 = 0;
    *(_QWORD *)(v10 + 48) = 0;
    *(_OWORD *)(v10 + 8) = 0;
  }
  *(_QWORD *)(v8 + 8) = v13;
  return 0;
}

