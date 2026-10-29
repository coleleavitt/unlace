// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_B3BB10(__int64 a1, int *a2, _DWORD *a3)
{
  __int64 v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // edx
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbp
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  int v21; // r8d
  _DWORD *v22; // rsi
  __int64 v23; // r8
  _DWORD *v24; // rdi
  _DWORD *v25; // rax
  int v26; // ecx
  __int64 i; // rdx
  _DWORD *v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rax
  _DWORD *v31; // rdx
  int v32; // ecx
  char *v33; // rdi
  __int64 v34; // rcx
  _DWORD *v35; // r8
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rdx

  v5 = *(_QWORD *)(a1 + 8);
  v6 = 214013 * *(_DWORD *)(v5 + 7504) + 2531011;
  if ( (int)(HIWORD(v6) & 0x7FFF) < (int)(32767.0 * *(double *)(*(_QWORD *)(a1 + 16) + 488LL)) )
  {
    v7 = *(_QWORD *)(v5 + 8560);
    v8 = 214013 * v6 + 2531011;
    *(_DWORD *)(v5 + 7504) = v8;
    v9 = HIWORD(v8) & 0x7FFF;
    if ( !v7 )
      BUG();
    v10 = v9 % *(_DWORD *)(v7 - 4);
    result = *(_QWORD *)(v5 + 8848);
    *a2 = v10;
    if ( !*(_BYTE *)(result + (unsigned int)(2 * v10)) )
      return result;
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
      goto LABEL_8;
    goto LABEL_21;
  }
  v12 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(v5 + 7504) = v6;
  if ( !v12 )
  {
LABEL_21:
    for ( i = *(_QWORD *)(a1 + 72); ; i = *(_QWORD *)(a1 + 72) )
    {
      while ( 1 )
      {
        v28 = (_DWORD *)(i + 201589768);
        if ( MEMORY[0xFFFFFFFFFFFFFFFC] != 2 )
          break;
        *v28 = 0;
        v29 = *(_QWORD *)(v5 + 8848);
        result = 100794884;
        --MEMORY[0xFFFFFFFFFFFFFFFC];
        *a2 = 50397442;
        if ( !*(_BYTE *)(v29 + 100794884) )
          return result;
      }
      *(_DWORD *)byte_4 = *(_DWORD *)(4LL * (unsigned int)(MEMORY[0xFFFFFFFFFFFFFFFC] - 1));
      *(_DWORD *)(i + 201589768) = 1;
      *v28 = 0;
      --MEMORY[0xFFFFFFFFFFFFFFFC];
      sub_B3B670((__int64 **)(a1 + 48), 1u);
      v38 = *(_QWORD *)(v5 + 8848);
      result = 100794884;
      *a2 = 50397442;
      if ( !*(_BYTE *)(v38 + 100794884) )
        break;
    }
    return result;
  }
LABEL_8:
  while ( 1 )
  {
    v15 = *(_DWORD *)(v12 - 4);
    if ( v15 == 1 )
      break;
    v16 = *(_QWORD *)(a1 + 72);
    v17 = *(unsigned int *)(v12 + 4);
    v18 = (_DWORD *)(v16 + 4 * v17);
    if ( v15 == 2 )
    {
      *v18 = 0;
      --*(_DWORD *)(v12 - 4);
    }
    else
    {
      v13 = *(unsigned int *)(v12 + 4LL * (unsigned int)(v15 - 1));
      *(_DWORD *)(v12 + 4) = v13;
      *(_DWORD *)(v16 + 4 * v13) = 1;
      *v18 = 0;
      --*(_DWORD *)(v12 - 4);
      sub_B3B670((__int64 **)(a1 + 48), 1u);
    }
    v14 = *(_QWORD *)(v5 + 8848);
    result = (unsigned int)(2 * v17);
    *a2 = v17;
    if ( !*(_BYTE *)(v14 + result) )
      return result;
  }
  *a2 = 0x7FFFFFFF;
  v30 = *(unsigned int *)(a1 + 88);
  v31 = *(_DWORD **)(a1 + 80);
  v32 = v30 - 1;
  result = 8 * v30;
  v33 = (char *)v31 + result;
  v34 = 8LL * (v32 & 0x7FFFFFFF);
  v35 = &v31[(unsigned __int64)v34 / 4];
  if ( v34 == result )
  {
LABEL_33:
    while ( v35 != v31 )
    {
      result = (unsigned int)v31[1];
      if ( (unsigned int)result + 0x80000000 > 1 )
      {
        if ( *v31 == 0x7FFFFFFF && (_DWORD)result == 0x7FFFFFFF )
          goto LABEL_11;
      }
      else if ( (_DWORD)result == 0x80000000 )
      {
        return result;
      }
      v31 += 2;
    }
  }
  else
  {
    result = (__int64)&v31[(unsigned __int64)v34 / 4];
    while ( 1 )
    {
      while ( 1 )
      {
        v36 = *(_DWORD *)(result + 4);
        if ( v36 + 0x80000000 > 1 )
          break;
        if ( v36 == 0x80000000 )
          return result;
        result += 8;
        if ( v33 == (char *)result )
          goto LABEL_33;
      }
      if ( *(_DWORD *)result == 0x7FFFFFFF && v36 == 0x7FFFFFFF )
        break;
      result += 8;
      if ( v33 == (char *)result )
        goto LABEL_33;
    }
LABEL_11:
    v19 = *(unsigned int *)(a1 + 112);
    v20 = *(_DWORD **)(a1 + 104);
    v21 = v19 - 1;
    v19 *= 16;
    v22 = (_DWORD *)((char *)v20 + v19);
    v23 = 16LL * (v21 & 0x7FFFFFFF);
    v24 = &v20[(unsigned __int64)v23 / 4];
    v25 = &v20[(unsigned __int64)v23 / 4];
    if ( v23 != v19 )
    {
      do
      {
        v26 = v25[1];
        if ( v26 == 2 )
        {
          if ( *v25 == 0x7FFFFFFF && v25[2] == 0x7FFFFFFF )
          {
LABEL_18:
            result = (unsigned int)v25[3];
            *a3 = result;
            return result;
          }
        }
        else if ( !v26 )
        {
          goto LABEL_51;
        }
        v25 += 4;
      }
      while ( v22 != v25 );
    }
    for ( ; v24 != v20; v20 += 4 )
    {
      v37 = v20[1];
      if ( v37 == 2 )
      {
        if ( *v20 == 0x7FFFFFFF && v20[2] == 0x7FFFFFFF )
        {
          v25 = v20;
          goto LABEL_18;
        }
      }
      else if ( !v37 )
      {
        break;
      }
    }
LABEL_51:
    *a3 = 0;
    return (__int64)a3;
  }
  return result;
}

