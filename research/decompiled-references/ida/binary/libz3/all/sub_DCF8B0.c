__int64 __fastcall sub_DCF8B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  __int64 v8; // r9
  __m128i *v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  const __m128i *v13; // r13
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // rdx
  const __m128i *v17; // r11
  __int64 v18; // rsi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdx
  __int64 *v24; // rdi
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // r14d
  _QWORD *v28; // rax
  unsigned __int64 v29; // r13
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rax
  __m128i v32; // [rsp+10h] [rbp-58h] BYREF
  __int64 v33; // [rsp+20h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 24);
  result = *(unsigned int *)(v1 - 4);
  v4 = (unsigned int)(result - 1);
  v5 = *(_DWORD *)(v1 + 4 * v4);
  *(_DWORD *)(v1 - 4) = v4;
  if ( !v2 )
    return result;
  v6 = *(_DWORD *)(v2 - 4);
  if ( v5 >= v6 )
    return result;
  LODWORD(v8) = *(_DWORD *)(v2 - 4);
  while ( 1 )
  {
LABEL_4:
    while ( 1 )
    {
      v8 = (unsigned int)(v8 - 1);
      v9 = (__m128i *)(v2 + 24 * v8);
      if ( (v9->m128i_i64[0] & 6) != 0 )
        break;
      v21 = _mm_loadu_si128(v9);
      v33 = v9[1].m128i_i64[0];
      v32 = v21;
      result = sub_DCDE60(a1, &v32);
LABEL_22:
      v2 = *(_QWORD *)(a1 + 24);
LABEL_23:
      ++v5;
      LODWORD(v8) = *(_DWORD *)(v2 - 4) - 1;
      *(_DWORD *)(v2 - 4) = v8;
      if ( v5 >= v6 )
        return result;
    }
    v10 = v9->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL | ((v9->m128i_i64[0] & 7) - 2);
    v9->m128i_i64[0] = v10;
    if ( v10 )
    {
      if ( (v10 & 7) == 1 )
        v11 = v10 >> 3;
      else
        LODWORD(v11) = *(_DWORD *)(v10 - 8);
    }
    else
    {
      LODWORD(v11) = -1640531495;
    }
    v12 = *(unsigned int *)(a1 + 8);
    v13 = *(const __m128i **)a1;
    v14 = v12 - 1;
    result = 24 * v12;
    v15 = *(_QWORD *)a1 + result;
    v16 = 24LL * ((unsigned int)v11 & v14);
    v17 = (const __m128i *)(*(_QWORD *)a1 + v16);
    if ( v16 != result )
    {
      v18 = qword_1C7F378;
      result = *(_QWORD *)a1 + v16;
      do
      {
        v20 = *(_QWORD *)result;
        if ( !*(_QWORD *)result )
          goto LABEL_18;
        if ( qword_1C7F378 != v20 )
        {
          if ( v20 )
          {
            if ( (*(_QWORD *)result & 7LL) == 1 )
              v19 = v20 >> 3;
            else
              LODWORD(v19) = *(_DWORD *)(v20 - 8);
          }
          else
          {
            LODWORD(v19) = -1640531495;
          }
          if ( (_DWORD)v11 == (_DWORD)v19 && v20 == v10 )
          {
LABEL_42:
            v24 = (__int64 *)(result + 24);
            if ( v15 == result + 24 )
              v24 = (__int64 *)v13;
            v25 = *(_DWORD *)(a1 + 12) - 1;
            if ( !*v24 )
            {
              *(_QWORD *)result = 0;
              *(_DWORD *)(a1 + 12) = v25;
              LODWORD(v8) = *(_DWORD *)(v2 - 4) - 1;
              goto LABEL_18;
            }
            *(_QWORD *)result = v18;
            v26 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 12) = v25;
            result = (unsigned int)(v26 + 1);
            if ( v25 < 0x40 )
              v25 = 64;
            *(_DWORD *)(a1 + 16) = result;
            if ( v25 < (unsigned int)result )
            {
              result = sub_186AF10(v24);
              if ( (_BYTE)result )
                goto LABEL_22;
              v27 = *(_DWORD *)(a1 + 8);
              v28 = (_QWORD *)sub_186B270(24LL * v27);
              v29 = (unsigned __int64)v28;
              v30 = &v28[3 * v27];
              if ( v27 )
              {
                do
                {
                  *v28 = 0;
                  v28 += 3;
                  *((_DWORD *)v28 - 2) = 0;
                }
                while ( v30 != v28 );
                v31 = v29;
                if ( (((_BYTE)v30 - (_BYTE)v29) & 8) == 0
                  || (v31 = v29 + 24, *(_QWORD *)(v29 + 8) = 0, (_QWORD *)(v29 + 24) != v30) )
                {
                  do
                  {
                    *(_QWORD *)(v31 + 8) = 0;
                    v31 += 48LL;
                    *(_QWORD *)(v31 - 16) = 0;
                  }
                  while ( (_QWORD *)v31 != v30 );
                }
              }
              result = sub_DCF770(*(const __m128i **)a1, *(_DWORD *)(a1 + 8), v29, *(_DWORD *)(a1 + 8));
              if ( *(_QWORD *)a1 )
                result = sub_186B220(*(void **)a1);
              v2 = *(_QWORD *)(a1 + 24);
              *(_DWORD *)(a1 + 16) = 0;
              *(_QWORD *)a1 = v29;
              LODWORD(v8) = *(_DWORD *)(v2 - 4) - 1;
              goto LABEL_18;
            }
            goto LABEL_23;
          }
        }
        result += 24;
      }
      while ( v15 != result );
    }
    if ( v13 != v17 )
      break;
LABEL_18:
    ++v5;
    *(_DWORD *)(v2 - 4) = v8;
    if ( v5 >= v6 )
      return result;
  }
  v18 = qword_1C7F378;
  result = *(_QWORD *)a1;
  while ( 1 )
  {
    v23 = *(_QWORD *)result;
    if ( !*(_QWORD *)result )
      break;
    if ( v23 != qword_1C7F378 )
    {
      if ( v23 )
      {
        if ( (*(_QWORD *)result & 7LL) == 1 )
          v22 = v23 >> 3;
        else
          LODWORD(v22) = *(_DWORD *)(v23 - 8);
      }
      else
      {
        LODWORD(v22) = -1640531495;
      }
      if ( v23 == v10 && (_DWORD)v11 == (_DWORD)v22 )
      {
        v13 = *(const __m128i **)a1;
        goto LABEL_42;
      }
    }
    result += 24;
    if ( v17 == (const __m128i *)result )
      goto LABEL_18;
  }
  ++v5;
  *(_DWORD *)(v2 - 4) = v8;
  if ( v5 < v6 )
    goto LABEL_4;
  return result;
}

