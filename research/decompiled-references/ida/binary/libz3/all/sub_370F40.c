__int64 __fastcall sub_370F40(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // esi
  unsigned int v5; // edx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  void *v19; // rdi
  __int64 v20; // rbp
  unsigned int v21; // r8d
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int *)(v1 + 8);
  v4 = *(_DWORD *)(v2 + 12);
  v5 = v3 - 1;
  result = 24 * v3;
  v7 = *(_QWORD *)v1 + result;
  v8 = 24LL * (v4 & v5);
  v9 = *(_QWORD *)v1 + v8;
  if ( v8 == result )
  {
LABEL_9:
    if ( *(_QWORD *)v1 != v9 )
    {
      result = *(_QWORD *)v1;
      while ( 1 )
      {
        v11 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v11 + 12) == v4 && v2 == v11 )
            goto LABEL_17;
        }
        else if ( !v11 )
        {
          return result;
        }
        result += 24;
        if ( v9 == result )
          return result;
      }
    }
    return result;
  }
  result = *(_QWORD *)v1 + v8;
  while ( 1 )
  {
    v10 = *(_QWORD *)result;
    if ( *(_QWORD *)result > 1u )
      break;
    if ( !v10 )
      return result;
LABEL_5:
    result += 24;
    if ( v7 == result )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v10 + 12) != v4 || v2 != v10 )
    goto LABEL_5;
LABEL_17:
  v12 = (_QWORD *)(result + 24);
  if ( v7 == result + 24 )
    v12 = *(_QWORD **)v1;
  v13 = *(_DWORD *)(v1 + 12) - 1;
  if ( *v12 )
  {
    *(_QWORD *)result = 1;
    v14 = *(_DWORD *)(v1 + 16);
    *(_DWORD *)(v1 + 12) = v13;
    result = (unsigned int)(v14 + 1);
    if ( v13 < 0x40 )
      v13 = 64;
    *(_DWORD *)(v1 + 16) = result;
    if ( v13 < (unsigned int)result )
    {
      result = sub_186AF10(v9);
      if ( !(_BYTE)result )
      {
        v15 = *(_DWORD *)(v1 + 8);
        v16 = sub_186B270(24LL * v15);
        v17 = v16;
        if ( v15 )
        {
          if ( v15 == 1 )
            goto LABEL_30;
          v18 = v16 + 48LL * (v15 >> 1);
          do
          {
            *(_OWORD *)v16 = 0;
            v16 += 48;
            *(_OWORD *)(v16 - 32) = 0;
            *(_OWORD *)(v16 - 16) = 0;
          }
          while ( v16 != v18 );
          if ( (v15 & 1) != 0 )
          {
            v16 = v17 + 24LL * (v15 & 0xFFFFFFFE);
LABEL_30:
            *(_QWORD *)(v16 + 16) = 0;
            *(_OWORD *)v16 = 0;
          }
        }
        result = *(unsigned int *)(v1 + 8);
        v19 = *(void **)v1;
        v20 = *(_QWORD *)v1;
        v21 = result - 1;
        v22 = 24 * result;
        v23 = *(_QWORD *)v1 + 24 * result;
        v24 = v17 + 24 * result;
        if ( *(_QWORD *)v1 != v23 )
        {
          do
          {
            if ( *(_QWORD *)v20 > 1u )
            {
              v25 = 24LL * (*(_DWORD *)(*(_QWORD *)v20 + 12LL) & v21);
              v26 = v17 + v25;
              if ( v22 == v25 )
              {
LABEL_41:
                if ( v26 == v17 )
                {
LABEL_50:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                result = v17;
                while ( *(_QWORD *)result )
                {
                  result += 24;
                  if ( v26 == result )
                    goto LABEL_50;
                }
              }
              else
              {
                result = v17 + v25;
                while ( *(_QWORD *)result )
                {
                  result += 24;
                  if ( v24 == result )
                    goto LABEL_41;
                }
              }
              *(__m128 *)result = _mm_loadh_ps((const double *)(v20 + 8));
              *(_QWORD *)(result + 16) = *(_QWORD *)(v20 + 16);
            }
            v20 += 24;
          }
          while ( v23 != v20 );
          v19 = *(void **)v1;
        }
        if ( v19 )
          result = sub_186B220(v19);
        *(_QWORD *)v1 = v17;
        *(_DWORD *)(v1 + 16) = 0;
      }
    }
  }
  else
  {
    *(_QWORD *)result = 0;
    *(_DWORD *)(v1 + 12) = v13;
  }
  return result;
}

