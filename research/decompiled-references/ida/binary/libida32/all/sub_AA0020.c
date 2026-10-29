__int64 __fastcall sub_AA0020(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  _BYTE *v11; // rax
  bool v12; // zf
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rbx
  __int64 v19; // rdi
  _WORD *v20; // rdx
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // rsi
  __int64 v29; // rdi
  _BYTE *v30; // rax
  _QWORD v31[8]; // [rsp+8h] [rbp-40h] BYREF

  result = a3;
  if ( a2 )
  {
    if ( a3 == a2 )
    {
      v25 = *(_QWORD *)(a1 + 48);
      v31[0] = a3;
      return sub_F4D7C0(v31, v25, a1 + 8, 1);
    }
    v5 = HIDWORD(a2);
    if ( HIDWORD(a2) )
    {
      if ( ((WORD2(a2) ^ 0xFFC0) & 0xFFC0) == 0 || HIDWORD(a2) != HIDWORD(a3) )
      {
        v5 = 0;
        goto LABEL_32;
      }
      result = (unsigned int)a3;
      v5 = a2 & 0xFFFFFFFF00000000LL;
      a2 = (unsigned int)a2;
    }
  }
  else
  {
    v5 = 0;
    if ( !a3 )
      return result;
  }
  if ( ((result | a2) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v6 = result & a2;
    v7 = ~(result & a2);
    v8 = v7 & a2;
    v9 = result & v7;
    goto LABEL_5;
  }
LABEL_32:
  v21 = (unsigned __int8)a3 & (unsigned __int8)a2 & 7;
  v6 = v21 | v5;
  v22 = ~v21;
  v8 = v22 & a2;
  v9 = result & v22;
  v23 = (v8 >> 4) & 3;
  if ( (_DWORD)v23 == ((v9 >> 4) & 3) )
  {
    v8 &= 0xFFFFFFFFFFFFFFCFLL;
    v9 &= 0xFFFFFFFFFFFFFFCFLL;
    v6 = (16 * (int)v23) | (unsigned __int64)v6;
  }
  v24 = (v8 >> 6) & 7;
  if ( (_DWORD)v24 == ((v9 >> 6) & 7) )
  {
    v8 &= 0xFFFFFFFFFFFFFE3FLL;
    v9 &= 0xFFFFFFFFFFFFFE3FLL;
    v6 = (int)((_DWORD)v24 << 6) | (unsigned __int64)v6;
  }
  result = (unsigned int)v8 >> 9;
  if ( (_DWORD)result != (unsigned int)v9 >> 9 )
  {
LABEL_5:
    if ( *(_BYTE *)(a1 + 25) )
      goto LABEL_6;
    goto LABEL_38;
  }
  v6 = (unsigned int)((_DWORD)result << 9) | (unsigned __int64)v6;
  result = 0xFFFFFFFF000001FFLL;
  v8 &= 0xFFFFFFFF000001FFLL;
  v9 &= 0xFFFFFFFF000001FFLL;
  if ( *(_BYTE *)(a1 + 25) )
  {
LABEL_6:
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_BYTE **)(v10 + 32);
    if ( *(_BYTE **)(v10 + 24) == v11 )
    {
      sub_22581D0(v10, "[", 1);
    }
    else
    {
      *v11 = 91;
      ++*(_QWORD *)(v10 + 32);
    }
    if ( v6 )
    {
      v27 = a1 + 8;
      v28 = *(_QWORD *)(a1 + 48);
      v31[0] = v6;
      sub_F4D7C0(v31, v28, a1 + 8, 1);
      v31[0] = v8;
      if ( !v8 )
        goto LABEL_15;
    }
    else
    {
      if ( !v8 )
      {
        v12 = *(_BYTE *)(a1 + 26) == 0;
        *(_BYTE *)(a1 + 56) = 1;
        if ( !v12 )
          sub_A9C3F0(a1);
        sub_971800(*(_QWORD *)(a1 + 48), "(no qualifiers) ");
        v12 = *(_BYTE *)(a1 + 26) == 0;
        *(_BYTE *)(a1 + 56) = 0;
        if ( !v12 )
        {
          v13 = *(_QWORD *)(a1 + 48);
          v14 = *(_BYTE **)(v13 + 32);
          if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
          {
            sub_2257CD0(v13, 127);
          }
          else
          {
            *(_QWORD *)(v13 + 32) = v14 + 1;
            *v14 = 127;
          }
        }
        goto LABEL_15;
      }
      v31[0] = v8;
      v27 = a1 + 8;
    }
    v12 = *(_BYTE *)(a1 + 26) == 0;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v12 )
      sub_A9C3F0(a1);
    sub_F4D7C0(v31, *(_QWORD *)(a1 + 48), v27, 1);
    v12 = *(_BYTE *)(a1 + 26) == 0;
    *(_BYTE *)(a1 + 56) = 0;
    if ( !v12 )
      sub_A9C3F0(a1);
LABEL_15:
    v15 = *(_QWORD *)(a1 + 48);
    v16 = *(_QWORD *)(v15 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v15 + 24) - v16) > 2 )
    {
      *(_BYTE *)(v16 + 2) = 32;
      *(_WORD *)v16 = 15649;
      *(_QWORD *)(v15 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v15, "!= ", 3);
    }
    if ( v6 )
    {
      v18 = a1 + 8;
      v26 = *(_QWORD *)(a1 + 48);
      v31[0] = v6;
      sub_F4D7C0(v31, v26, a1 + 8, v9 != 0);
      v31[0] = v9;
      if ( !v9 )
      {
LABEL_24:
        v19 = *(_QWORD *)(a1 + 48);
        v20 = *(_WORD **)(v19 + 32);
        if ( *(_QWORD *)(v19 + 24) - (_QWORD)v20 <= 1u )
          return sub_22581D0(v19, "] ", 2);
        *v20 = 8285;
        *(_QWORD *)(v19 + 32) += 2LL;
        return 8285;
      }
      v17 = *(_BYTE *)(a1 + 26);
    }
    else
    {
      v17 = *(_BYTE *)(a1 + 26);
      if ( !v9 )
      {
        *(_BYTE *)(a1 + 56) = 1;
        v29 = *(_QWORD *)(a1 + 48);
        if ( v17 )
        {
          v30 = *(_BYTE **)(v29 + 32);
          if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 24) )
          {
            sub_2257CD0(v29, 127);
          }
          else
          {
            *(_QWORD *)(v29 + 32) = v30 + 1;
            *v30 = 127;
          }
          v29 = *(_QWORD *)(a1 + 48);
        }
        sub_971800(v29, "(no qualifiers)");
        v12 = *(_BYTE *)(a1 + 26) == 0;
        *(_BYTE *)(a1 + 56) = 0;
        if ( v12 )
          goto LABEL_24;
LABEL_23:
        sub_A9C3F0(a1);
        goto LABEL_24;
      }
      v31[0] = v9;
      v18 = a1 + 8;
    }
    *(_BYTE *)(a1 + 56) = 1;
    if ( v17 )
      sub_A9C3F0(a1);
    sub_F4D7C0(v31, *(_QWORD *)(a1 + 48), v18, 0);
    v12 = *(_BYTE *)(a1 + 26) == 0;
    *(_BYTE *)(a1 + 56) = 0;
    if ( v12 )
      goto LABEL_24;
    goto LABEL_23;
  }
LABEL_38:
  v31[0] = v6;
  if ( v6 )
    result = sub_F4D7C0(v31, *(_QWORD *)(a1 + 48), a1 + 8, 1);
  v31[0] = v8;
  if ( v8 )
  {
    v12 = *(_BYTE *)(a1 + 26) == 0;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v12 )
      sub_A9C3F0(a1);
    result = sub_F4D7C0(v31, *(_QWORD *)(a1 + 48), a1 + 8, 1);
    v12 = *(_BYTE *)(a1 + 26) == 0;
    *(_BYTE *)(a1 + 56) = 0;
    if ( !v12 )
      return (__int64)sub_A9C3F0(a1);
  }
  return result;
}

