__int64 __fastcall sub_5D5410(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 120);
  v3 = *(_BYTE *)(v2 + 186);
  if ( (v3 & 0x3F) != 0 )
  {
    result = set_qerrno(66, a2);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    *(_BYTE *)(v2 + 186) = v3 | 0x2D;
  }
  v4 = qalloc_or_throw(56, a2);
  *(_OWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  *(_BYTE *)(v4 + 52) = 0x80;
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 48LL) = v4;
  v5 = qalloc_or_throw(24, a2);
  *(_OWORD *)(v5 + 8) = 0;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 56LL) = v5;
  v6 = qalloc_or_throw(24, a2);
  *(_QWORD *)v6 = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 64LL) = v6;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(_DWORD *)(v7 + 188);
  if ( *(_DWORD *)(a1 + 680) == 1 )
    sub_5D38A0((char **)(a1 + 624), 0, v8, nullptr);
  v9 = *(_QWORD *)(a1 + 688);
  v10 = v9 + 56LL * *(_QWORD *)(a1 + 696);
  if ( v9 == v10 )
  {
LABEL_12:
    v12 = 0;
  }
  else
  {
    while ( *(_DWORD *)(v9 + 48) != 1 || v8 != *(_DWORD *)(v9 + 52) )
    {
      v9 += 56;
      if ( v10 == v9 )
        goto LABEL_12;
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

