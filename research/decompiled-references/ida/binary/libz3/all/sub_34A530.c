__int64 __fastcall sub_34A530(__int64 a1, __int64 a2)
{
  void *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  int v7; // eax
  void *v8; // r15
  __int64 v9; // rdx
  void *v10; // rbx
  int v11; // eax
  __int64 result; // rax
  char v13; // al
  char v14; // al
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-40h]

  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v16 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v16, "found optimum\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v3 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1 + 72);
  v17 = a1 + 88;
  sub_182CBA0(v3, a1 + 88);
  v4 = *(__int64 **)(a1 + 32);
  *(_BYTE *)(a1 + 92) &= ~1u;
  *(_DWORD *)(a1 + 88) = 1;
  v5 = *v4;
  if ( *v4 )
  {
    v6 = v5 + 56LL * *(unsigned int *)(v5 - 4);
    while ( v6 != v5 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)sub_1374270(*(_QWORD *)(a1 + 136), *(_QWORD *)v5) )
        {
          *(_DWORD *)(v5 + 48) = 1;
          goto LABEL_6;
        }
        v7 = *(_DWORD *)(v5 + 16);
        v8 = qword_1C7F2C0;
        *(_DWORD *)(v5 + 48) = 0;
        if ( v7 )
          break;
        v13 = *(_BYTE *)(a1 + 76);
        if ( (v13 & 1) != 0 )
        {
          sub_182C690(v8, a1 + 72, a1 + 72);
          v14 = *(_BYTE *)(a1 + 92);
          if ( (v14 & 1) != 0 )
          {
LABEL_24:
            sub_182C690(v8, v17, v17);
            goto LABEL_6;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 76) = v13 & 0xFE;
          v14 = *(_BYTE *)(a1 + 92);
          if ( (v14 & 1) != 0 )
            goto LABEL_24;
        }
        *(_BYTE *)(a1 + 92) = v14 & 0xFE;
LABEL_6:
        v5 += 56;
        if ( v6 == v5 )
          goto LABEL_13;
      }
      v9 = v5 + 16;
      if ( !*(_DWORD *)(a1 + 72) )
      {
        if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
        {
          sub_182C690(v8, a1 + 72, v9);
          if ( (*(_BYTE *)(v5 + 36) & 1) != 0 )
          {
LABEL_33:
            sub_182C690(v8, v17, v5 + 32);
            goto LABEL_6;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 76) &= ~1u;
          *(_DWORD *)(a1 + 72) = v7;
          if ( (*(_BYTE *)(v5 + 36) & 1) != 0 )
            goto LABEL_33;
        }
        v15 = *(_DWORD *)(v5 + 32);
        *(_BYTE *)(a1 + 92) &= ~1u;
        *(_DWORD *)(a1 + 88) = v15;
        goto LABEL_6;
      }
      if ( (*(_BYTE *)(a1 + 92) & 1) == 0
        && *(_DWORD *)(a1 + 88) == 1
        && (*(_BYTE *)(v5 + 36) & 1) == 0
        && *(_DWORD *)(v5 + 32) == 1 )
      {
        sub_1831A80(v8, a1 + 72, v9, a1 + 72);
        sub_182CBA0(v8, v17);
        *(_BYTE *)(a1 + 92) &= ~1u;
        *(_DWORD *)(a1 + 88) = 1;
        goto LABEL_6;
      }
      v5 += 56;
      sub_1851D20(v8, a1 + 72, v9, a1 + 72);
    }
  }
LABEL_13:
  v10 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1 + 104, a1 + 72);
    if ( (*(_BYTE *)(a1 + 92) & 1) == 0 )
      goto LABEL_15;
LABEL_28:
    result = sub_182C690(v10, a1 + 120, v17);
    goto LABEL_16;
  }
  v11 = *(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 108) &= ~1u;
  *(_DWORD *)(a1 + 104) = v11;
  if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
    goto LABEL_28;
LABEL_15:
  result = *(unsigned int *)(a1 + 88);
  *(_BYTE *)(a1 + 124) &= ~1u;
  *(_DWORD *)(a1 + 120) = result;
LABEL_16:
  *(_BYTE *)(a1 + 532) = 1;
  return result;
}

