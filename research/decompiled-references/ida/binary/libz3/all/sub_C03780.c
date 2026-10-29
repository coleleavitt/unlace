__int64 __fastcall sub_C03780(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // edx
  __int64 v11; // rsi
  unsigned int v12; // edx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rbp
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __m128i *v21; // rdi
  unsigned int v22; // r14d
  const __m128i *v23; // rbp
  const __m128i *v24; // r15
  __int64 v25; // r13
  char *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(unsigned int *)(v1 + 4272);
  v4 = *(_QWORD *)(v1 + 4264);
  v5 = v3 - 1;
  result = 16 * v3;
  v7 = v4 + result;
  v8 = 16LL * (v2 & v5);
  v9 = v4 + v8;
  if ( v8 == result )
  {
LABEL_13:
    if ( v4 != v9 )
    {
      result = *(_QWORD *)(v1 + 4264);
      while ( 1 )
      {
        v13 = *(_DWORD *)(result + 4);
        if ( v13 == 2 )
        {
          if ( v2 == *(_DWORD *)result && v2 == *(_DWORD *)(result + 8) )
            goto LABEL_8;
        }
        else if ( !v13 )
        {
          return result;
        }
        result += 16;
        if ( v9 == result )
          return result;
      }
    }
    return result;
  }
  result = v4 + v8;
  while ( 1 )
  {
    v10 = *(_DWORD *)(result + 4);
    if ( v10 != 2 )
    {
      if ( !v10 )
        return result;
      goto LABEL_4;
    }
    if ( v2 == *(_DWORD *)result && v2 == *(_DWORD *)(result + 8) )
      break;
LABEL_4:
    result += 16;
    if ( v7 == result )
      goto LABEL_13;
  }
LABEL_8:
  v11 = result + 16;
  if ( v7 == result + 16 )
    v11 = *(_QWORD *)(v1 + 4264);
  v12 = *(_DWORD *)(v1 + 4276) - 1;
  if ( !*(_DWORD *)(v11 + 4) )
  {
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(v1 + 4276) = v12;
    return result;
  }
  *(_DWORD *)(result + 4) = 1;
  v14 = *(_DWORD *)(v1 + 4280);
  *(_DWORD *)(v1 + 4276) = v12;
  result = (unsigned int)(v14 + 1);
  if ( v12 < 0x40 )
    v12 = 64;
  *(_DWORD *)(v1 + 4280) = result;
  if ( v12 < (unsigned int)result )
  {
    result = sub_186AF10(v9);
    if ( !(_BYTE)result )
    {
      v15 = *(unsigned int *)(v1 + 4272);
      v16 = (_QWORD *)sub_186B270(16 * v15);
      v17 = v16;
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 == 1 )
          goto LABEL_31;
        v18 = v16;
        v19 = &v16[4 * ((unsigned int)v15 >> 1)];
        do
        {
          *v18 = 0;
          v18 += 4;
          *(v18 - 2) = 0;
        }
        while ( v19 != v18 );
        if ( (v15 & 1) != 0 )
        {
          v16 = &v17[2 * ((unsigned int)v15 & 0xFFFFFFFE)];
LABEL_31:
          *v16 = 0;
        }
      }
      v20 = *(unsigned int *)(v1 + 4272);
      v21 = *(__m128i **)(v1 + 4264);
      v22 = v20 - 1;
      result = 16 * v20;
      v23 = v21;
      v24 = (__m128i *)((char *)v21 + result);
      v25 = result;
      v26 = (char *)v17 + result;
      if ( v21 != (__m128i *)&v21->m128i_i8[result] )
      {
        do
        {
          if ( v23->m128i_i32[1] == 2 )
          {
            v27 = 16LL * (v23->m128i_i32[0] & v22);
            v28 = &v17[(unsigned __int64)v27 / 8];
            if ( v25 == v27 )
            {
LABEL_45:
              if ( v17 == v28 )
              {
LABEL_50:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              result = (__int64)v17;
              while ( *(_DWORD *)(result + 4) )
              {
                result += 16;
                if ( v28 == (_QWORD *)result )
                  goto LABEL_50;
              }
            }
            else
            {
              result = (__int64)&v17[(unsigned __int64)v27 / 8];
              while ( *(_DWORD *)(result + 4) )
              {
                result += 16;
                if ( v26 == (char *)result )
                  goto LABEL_45;
              }
            }
            *(__m128i *)result = _mm_loadu_si128(v23);
          }
          ++v23;
        }
        while ( v24 != v23 );
        v21 = *(__m128i **)(v1 + 4264);
      }
      if ( v21 )
        result = sub_186B220(v21);
      *(_QWORD *)(v1 + 4264) = v17;
      *(_DWORD *)(v1 + 4280) = 0;
    }
  }
  return result;
}

