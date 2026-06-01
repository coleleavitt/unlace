__int64 __fastcall sub_31420(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // esi
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rbp
  __m128i v19; // xmm1
  __int64 v20; // rdi
  __int64 v21; // rax
  __int16 v22; // ax
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // [rsp+10h] [rbp-68h] BYREF
  __m128i v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  while ( 1 )
  {
    v6 = *(unsigned __int16 *)(a2 + 16);
    if ( (unsigned __int16)v6 > 0x5Fu )
      break;
    if ( (unsigned __int16)v6 > 0x42u )
    {
      switch ( *(_WORD *)(a2 + 16) )
      {
        case 'C':
        case 'I':
        case '_':
          goto LABEL_22;
        case 'D':
          if ( (unsigned __int64)sub_BFF0(a2) <= 1 )
          {
            *(_DWORD *)a1 = 1;
            *(_QWORD *)(a1 + 8) = a2;
            *(_DWORD *)(a1 + 16) = 3904;
            return a1;
          }
          v18 = 0;
          if ( (unsigned __int64)sub_BFF0(a2) > 1 )
            v18 = *((_QWORD *)sub_C020((_BYTE *)a2) + 1);
          if ( !(unsigned __int8)sub_31280(v18) )
            goto LABEL_46;
          sub_31420(&v28, v18, a3);
          if ( v28.m128i_i32[0] )
          {
            v21 = v29.m128i_i64[0];
            *(__m128i *)a1 = _mm_load_si128(&v28);
            *(_QWORD *)(a1 + 16) = v21;
          }
          else
          {
            v25 = sub_C400(a3, 68);
            v26 = sub_BA70(a2, 0);
            sub_C080(v25, v26, a3);
            sub_C080(v25, v29.m128i_i64[1], a3);
            if ( sub_BFF0(a2) == 3 )
            {
              v27 = sub_BA70(a2, 2u);
              sub_C080(v25, v27, a3);
            }
            *(_DWORD *)a1 = 0;
            *(_QWORD *)(a1 + 8) = 0;
            *(_DWORD *)(a1 + 16) = 0;
            *(_QWORD *)(a1 + 24) = v25;
          }
          break;
        case 'P':
          if ( sub_BFF0(a2) )
          {
            v23 = sub_BFF0(a2);
            v24 = 0;
            if ( v23 )
              v24 = *(_QWORD *)sub_C020((_BYTE *)a2);
            if ( *(_WORD *)(v24 + 16) == 221 )
            {
              *(_DWORD *)a1 = 0;
              *(_QWORD *)(a1 + 8) = 0;
              *(_DWORD *)(a1 + 16) = 0;
              *(_QWORD *)(a1 + 24) = v24;
            }
            else
            {
              *(_DWORD *)a1 = 1;
              *(_QWORD *)(a1 + 8) = v24;
              *(_DWORD *)(a1 + 16) = 3887;
            }
          }
          else
          {
            *(_DWORD *)a1 = 1;
            *(_QWORD *)(a1 + 8) = a2;
            *(_DWORD *)(a1 + 16) = 3885;
          }
          return a1;
        default:
          goto LABEL_9;
      }
      return a1;
    }
    if ( (unsigned __int16)v6 > 0x3Au )
      goto LABEL_9;
    if ( (unsigned __int16)v6 <= 0x11u )
    {
      if ( !(_WORD)v6 )
        goto LABEL_22;
      if ( (unsigned __int16)(v6 - 12) > 5u )
        goto LABEL_9;
      if ( !sub_BFF0(a2) )
      {
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = a2;
        *(_DWORD *)(a1 + 16) = 3874;
        return a1;
      }
      v20 = 0;
      if ( sub_BFF0(a2) )
        v20 = *(_QWORD *)sub_C020((_BYTE *)a2);
      if ( *(_WORD *)(v20 + 16) != 221 )
      {
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v20;
        *(_DWORD *)(a1 + 16) = 3876;
        return a1;
      }
      if ( !sub_BFF0(v20) )
      {
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v20;
        *(_DWORD *)(a1 + 16) = 3877;
        return a1;
      }
      a2 = sub_BA70(v20, 0);
      if ( !(unsigned __int8)sub_31280(a2) )
      {
LABEL_46:
        *(_DWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 24) = a2;
        return a1;
      }
    }
    else
    {
      if ( ((1LL << v6) & 0x1800044000000LL) != 0 )
        goto LABEL_22;
      if ( ((1LL << v6) & 0x400000000400000LL) != 0 )
        goto LABEL_20;
      if ( (_WORD)v6 != 18 )
        goto LABEL_9;
      if ( !sub_BFF0(a2) )
      {
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = a2;
        *(_DWORD *)(a1 + 16) = 3892;
        return a1;
      }
      if ( sub_BFF0(a2) )
        a2 = *(_QWORD *)sub_C020((_BYTE *)a2);
      else
        a2 = 0;
      v22 = *(_WORD *)(a2 + 16);
      if ( v22 != 26 && v22 != 73 )
      {
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = a2;
        *(_DWORD *)(a1 + 16) = 3894;
        return a1;
      }
      if ( !(unsigned __int8)sub_31280(a2) )
        goto LABEL_46;
    }
  }
  if ( (unsigned __int16)v6 > 0xF6u )
  {
    if ( (_WORD)v6 != 330 )
      goto LABEL_9;
  }
  else if ( (unsigned __int16)v6 <= 0xC0u )
  {
    if ( (unsigned __int16)(v6 - 111) > 0x39u )
      goto LABEL_9;
    v12 = 0x300000080000101LL;
    if ( !_bittest64(&v12, (unsigned int)(v6 - 111)) )
    {
      if ( (_WORD)v6 == 157 )
        goto LABEL_20;
      goto LABEL_9;
    }
  }
  else
  {
    v8 = 1LL << ((unsigned __int8)v6 + 63);
    if ( (v8 & 0x24C00000014801LL) == 0 )
    {
      if ( (v8 & 0x40008000) != 0 )
      {
LABEL_20:
        v9 = 2;
        goto LABEL_23;
      }
LABEL_9:
      *(_DWORD *)a1 = 5;
      *(_QWORD *)(a1 + 8) = a2;
      *(_DWORD *)(a1 + 16) = 3921;
      return a1;
    }
  }
LABEL_22:
  v10 = sub_BFF0(a2);
  LOWORD(v6) = *(_WORD *)(a2 + 16);
  v9 = v10;
LABEL_23:
  v11 = sub_C400(a3, v6);
  if ( sub_BFF0(a2) )
  {
    v13 = 0;
    if ( sub_BFF0(a2) )
      v13 = *(_QWORD *)sub_C020((_BYTE *)a2);
    if ( (unsigned __int8)sub_31280(v13) )
    {
      sub_31420(&v28, v13, a3);
      if ( v28.m128i_i32[0] )
      {
        v19 = _mm_load_si128(&v29);
        *(__m128i *)a1 = _mm_load_si128(&v28);
        *(__m128i *)(a1 + 16) = v19;
        return a1;
      }
      v13 = v29.m128i_i64[1];
    }
    v14 = v13;
    v15 = v9;
    sub_C080(v11, v14, a3);
    v16 = 1;
    if ( (unsigned int)v15 > 1 )
    {
      do
      {
        v17 = 0;
        if ( v16 < sub_BFF0(a2) )
          v17 = *(_QWORD *)&sub_C020((_BYTE *)a2)[8 * v16];
        ++v16;
        sub_C080(v11, v17, a3);
      }
      while ( v16 != v15 );
    }
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v11;
  }
  else
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)(a1 + 16) = 3853;
  }
  return a1;
}

