unsigned __int64 __fastcall sub_F74880(__int64 a1, unsigned __int64 a2, const __m128i *a3)
{
  unsigned __int8 v6; // al
  unsigned __int64 result; // rax
  _BYTE *v8; // rax
  char v9; // cl
  unsigned __int8 v10; // di
  __int64 v11; // rsi
  char v12; // dl
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  char **v15; // rdx
  char *v16; // rbx
  size_t v17; // rax
  char v18; // cl
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 i; // r15
  __int64 v24; // rsi
  char v25; // dl
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rsi
  _WORD *v31; // rdx
  const void **v32; // [rsp+0h] [rbp-68h] BYREF
  __int16 v33; // [rsp+20h] [rbp-48h]

  v6 = (*(_BYTE *)(a1 + 19) >> 1) & 0xF;
  if ( (unsigned int)v6 - 1 <= 2 )
  {
    sub_995540(a2, " throw(");
    v18 = *(_BYTE *)(a1 + 19);
    v19 = ((unsigned __int8)v18 >> 1) & 0xF;
    if ( v19 == 3 )
    {
      sub_995540(a2, "...");
    }
    else if ( v19 == 2 )
    {
      v20 = *(_QWORD *)(a1 + 16);
      v21 = *(unsigned __int16 *)(a1 + 22);
      if ( (*(_WORD *)((a1 + ((SBYTE3(v20) >> 5) & 4) + 8 * v21 + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) != 0 )
      {
        v22 = (*(_WORD *)((a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8 * v21 + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL)
             & 0x3FFu)
            - 1;
        for ( i = 0; ; ++i )
        {
          v24 = 8 * v21 + 48;
          v25 = SBYTE3(v20) >> 5;
          v26 = (v20 & 0x40000000) != 0;
          v27 = (a1 + v24 + (v25 & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v18 & 0x40) != 0 )
            v26 += (*(_BYTE *)(((a1 + ((v18 >> 5) & 4) + v24 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
          v33 = 257;
          v28 = *(_QWORD *)(v27 + 8 * (i + v26));
          if ( (a3->m128i_i8[5] & 1) != 0 )
            v28 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v28) & 7;
          v29 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
          v30 = v28 & 7;
          if ( (v28 & 8) != 0 )
          {
            v30 |= *(__int64 *)((char *)&qword_18 + (v28 & 0xFFFFFFFFFFFFFFF0LL));
            v29 = (_QWORD *)*v29;
          }
          sub_F74650((__int64)v29, v30, a2, a3, &v32, 0);
          if ( i == v22 )
            break;
          if ( (_DWORD)i != -1 )
          {
            v31 = *(_WORD **)(a2 + 32);
            if ( *(_QWORD *)(a2 + 24) - (_QWORD)v31 <= 1u )
            {
              sub_227BF10(a2, ", ", 2);
            }
            else
            {
              *v31 = 8236;
              *(_QWORD *)(a2 + 32) += 2LL;
            }
          }
          v18 = *(_BYTE *)(a1 + 19);
          v20 = *(_QWORD *)(a1 + 16);
          v21 = *(unsigned __int16 *)(a1 + 22);
        }
      }
    }
    goto LABEL_15;
  }
  if ( v6 == 4 )
    return sub_995540(a2, " __attribute__((nothrow))");
  result = (v6 + 12) & 0xF;
  if ( (unsigned __int8)result <= 4u )
  {
    sub_995540(a2, " noexcept");
    result = ((*(_BYTE *)(a1 + 19) >> 1) & 0xFu) - 6;
    if ( (unsigned int)result <= 2 )
    {
      v8 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v8 >= *(_QWORD *)(a2 + 24) )
      {
        sub_227BA10(a2, 40);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v8 + 1;
        *v8 = 40;
      }
      v9 = *(_BYTE *)(a1 + 19);
      v10 = ((unsigned __int8)v9 >> 1) & 0xF;
      if ( (unsigned int)v10 - 6 <= 2 )
      {
        v11 = 8LL * *(unsigned __int16 *)(a1 + 22) + 48;
        v12 = BYTE3(*(_QWORD *)(a1 + 16));
        v13 = (v12 & 0x40) != 0;
        v14 = (a1 + v11 + ((v12 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v9 & 0x40) != 0 )
          v13 += (*(_BYTE *)(((a1 + v11 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v15 = (char **)(v14 + 8 * v13);
        if ( v10 == 2 )
          v15 = (char **)(v14 + 8
                              * ((*(_WORD *)((a1 + v11 + ((v9 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v13));
        v16 = *v15;
        if ( *v15 )
        {
          v17 = j__strlen("\n");
          sub_F07C00(v16, a2, 0, a3, 0, 0, "\n", v17);
        }
      }
LABEL_15:
      result = *(_QWORD *)(a2 + 32);
      if ( result >= *(_QWORD *)(a2 + 24) )
      {
        return sub_227BA10(a2, 41);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = result + 1;
        *(_BYTE *)result = 41;
      }
    }
  }
  return result;
}
