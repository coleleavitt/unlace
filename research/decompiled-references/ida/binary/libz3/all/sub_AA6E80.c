_QWORD *__fastcall sub_AA6E80(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rbp
  __int64 v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  char *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  _QWORD *result; // rax
  unsigned int *v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 i; // rdx
  unsigned int *v25; // [rsp+0h] [rbp-E8h]
  _QWORD *v26; // [rsp+8h] [rbp-E0h]
  _QWORD *v27; // [rsp+20h] [rbp-C8h]
  unsigned int v28; // [rsp+28h] [rbp-C0h]
  int v29; // [rsp+2Ch] [rbp-BCh]
  _QWORD v30[23]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = v30;
  v30[0] = a3;
  v29 = 16;
  v5 = 1;
  v27 = v30;
  while ( v5 )
  {
    v8 = (unsigned int *)v4[v5 - 1];
    v28 = v5 - 1;
    std::__ostream_insert<char,std::char_traits<char>>();
    v9 = *a2;
    *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 6;
    v10 = (char *)a2 + *(_QWORD *)(v9 - 24);
    LODWORD(v9) = *((_DWORD *)v10 + 6);
    LOBYTE(v9) = v9 & 0x4F;
    *((_DWORD *)v10 + 6) = v9 | 0x20;
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (unsigned int)sub_8E7030(a1) )
      (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 7488) + 56LL))(*(_QWORD *)(a1 + 7488), v8);
    std::ostream::_M_insert<bool>();
    if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 104), v8) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v11 = *a2;
      *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 7;
      v12 = (char *)a2 + *(_QWORD *)(v11 - 24);
      LODWORD(v11) = *((_DWORD *)v12 + 6);
      LOBYTE(v11) = v11 & 0x4F | 0x80;
      *((_DWORD *)v12 + 6) = v11;
      if ( v8 != *(unsigned int **)(*(_QWORD *)(a1 + 104) + 864LL) )
      {
        v13 = *(_QWORD *)(a1 + 8832);
        if ( *((_WORD *)v8 + 2) || (v14 = *(_DWORD **)(*((_QWORD *)v8 + 2) + 24LL)) == nullptr || *v14 || v14[1] != 8 )
        {
          if ( !v13 )
            goto LABEL_24;
          v15 = *v8;
          if ( (unsigned int)v15 >= *(_DWORD *)(v13 - 4) )
            goto LABEL_24;
        }
        else if ( !v13 || (v15 = **((unsigned int **)v8 + 4), (unsigned int)v15 >= *(_DWORD *)(v13 - 4)) )
        {
LABEL_24:
          std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_4;
        }
        if ( *(_DWORD *)(v13 + 4 * v15) == 0x7FFFFFFF )
          goto LABEL_24;
      }
      v16 = sub_8E80A0((_QWORD *)a1, v8);
      sub_17F35B0(a2, v16);
    }
LABEL_4:
    v6 = *(_QWORD *)(a1 + 8656);
    if ( v6 )
    {
      v7 = *v8;
      if ( (unsigned int)v7 < *(_DWORD *)(v6 - 4) )
      {
        if ( *(_QWORD *)(v6 + 8 * v7) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v5 = v28;
    if ( *((_WORD *)v8 + 2) || (v18 = v8 + 8, v19 = 2LL * v8[6], v25 = &v8[v19 + 8], !(v19 * 4)) )
    {
      v4 = v27;
    }
    else
    {
      v20 = v29;
      do
      {
        v22 = *(_QWORD *)v18;
        if ( v5 < v20 )
        {
          v4 = v27;
        }
        else
        {
          v4 = (_QWORD *)sub_186B270(16LL * v20);
          v5 = v28;
          v20 *= 2;
          if ( v28 )
          {
            if ( v28 - 1 <= 2 || v4 == v27 + 1 )
            {
              for ( i = 0; i != v28; ++i )
                v4[i] = v27[i];
            }
            else
            {
              v23 = 0;
              do
              {
                *(__m128i *)&v4[v23] = _mm_loadu_si128((const __m128i *)&v27[v23]);
                v23 += 2;
              }
              while ( 2LL * (v28 >> 1) != v23 );
              if ( (v28 & 1) != 0 )
                v4[v28 & 0xFFFFFFFE] = v27[v28 & 0xFFFFFFFE];
            }
          }
          if ( v27 )
          {
            if ( v27 != v30 )
            {
              v26 = v4;
              sub_186B220(v27);
              v5 = v28;
              v4 = v26;
            }
          }
          v27 = v4;
          v29 = v20;
        }
        v21 = v5++;
        v18 += 2;
        v4[v21] = v22;
        v28 = v5;
      }
      while ( v25 != v18 );
    }
  }
  result = v30;
  if ( v4 != v30 && v4 )
    return (_QWORD *)sub_186B220(v4);
  return result;
}

