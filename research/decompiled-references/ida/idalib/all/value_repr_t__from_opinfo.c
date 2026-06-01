__int64 __fastcall value_repr_t__from_opinfo(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // r12d
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  int tid_ordinal; // eax
  int v13; // eax
  __int64 v14; // [rsp+8h] [rbp-30h]
  __int64 v15; // [rsp+8h] [rbp-30h]

  v6 = a3;
  if ( (a2 & 0x600) != 0x400 )
    goto LABEL_2;
  v9 = (unsigned int)a2 & 0xF0000000;
  if ( v9 == 1342177280 )
  {
    if ( !a4 )
      return 0;
    *(_QWORD *)a1 = 10;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)a4;
  }
  else
  {
    a3 = 3489660928LL;
    if ( v9 != 3489660928LL )
    {
LABEL_2:
      v7 = (a2 >> 20) & 0xF;
      v8 = a2 & 0x800000;
      if ( (a2 & 0x800000) == 0 )
      {
        switch ( v7 )
        {
          case 1LL:
            *(_QWORD *)a1 = 3;
            goto LABEL_12;
          case 2LL:
            *(_QWORD *)a1 = 4;
            goto LABEL_12;
          case 3LL:
            *(_QWORD *)a1 = 6;
            goto LABEL_12;
          case 4LL:
            *(_QWORD *)a1 = 7;
            goto LABEL_12;
          case 5LL:
            if ( !a4 )
              return 0;
            *(_QWORD *)a1 = 9;
            *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)a4);
            *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a4 + 16));
            break;
          case 6LL:
            *(_QWORD *)a1 = 1;
            goto LABEL_12;
          case 7LL:
            *(_QWORD *)a1 = 2;
            goto LABEL_12;
          default:
            *(_QWORD *)a1 = 0;
            if ( (a2 & 0x20000) == 0 )
              goto LABEL_15;
            goto LABEL_14;
        }
        goto LABEL_12;
      }
      if ( (unsigned __int64)(v7 - 8) > 5 )
      {
        if ( !under_debugger )
          interr(2921);
        BUG();
      }
      if ( ((1LL << v7) & 0x2A00) != 0 )
      {
        *(_QWORD *)a1 = 0;
        goto LABEL_12;
      }
      if ( ((1LL << v7) & 0x500) == 0 )
      {
        *(_QWORD *)a1 = 5;
LABEL_12:
        if ( (a2 & 0x20000) != 0 )
        {
          v8 = *(_QWORD *)a1;
          if ( (_UNKNOWN *)(a2 & 0xF00000) == &loc_800000 )
          {
            BYTE1(v8) |= 4u;
            *(_QWORD *)a1 = v8;
          }
          else
          {
LABEL_14:
            BYTE1(v8) |= 1u;
            *(_QWORD *)a1 = v8;
          }
        }
LABEL_15:
        if ( (a2 & 0x40000) != 0 )
          *(_QWORD *)a1 |= 0x200uLL;
        goto LABEL_17;
      }
      if ( a4 )
      {
        if ( v7 == 8 )
        {
          *(_QWORD *)a1 = 8;
          v14 = a5;
          tid_ordinal = get_tid_ordinal(*(void **)a4, a2, a3, 8, a5);
          a5 = v14;
          *(_DWORD *)(a1 + 16) = tid_ordinal;
        }
        else if ( v7 == 10 )
        {
          *(_QWORD *)a1 = 11;
          v15 = a5;
          v13 = get_tid_ordinal(*(void **)(a4 + 8), a2, a3, 10, a5);
          a5 = v15;
          *(_DWORD *)(a1 + 16) = v13;
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(a4 + 264);
        }
        goto LABEL_12;
      }
      return 0;
    }
    if ( !a4 )
      return 0;
    *(_QWORD *)a1 = 12;
    *(_WORD *)(a1 + 8) = *(_WORD *)a4;
    *(_WORD *)(a1 + 10) = *(_WORD *)(a4 + 2);
  }
LABEL_17:
  if ( (v6 & 0x10000) != 0 )
    *(_QWORD *)a1 |= 0x800uLL;
  if ( a5 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)a5;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a5 + 8);
    v10 = *(_DWORD *)(a1 + 40);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      *(_QWORD *)a1 |= 0x400uLL;
      *(_DWORD *)(a1 + 40) = v10;
    }
    if ( v10 != 1 || *(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 48) != -1 )
      *(_QWORD *)a1 |= 0x1000uLL;
  }
  return 1;
}
