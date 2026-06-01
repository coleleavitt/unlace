_QWORD *__fastcall sub_922E80(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // r11
  int v6; // r9d
  unsigned int v7; // r8d
  _QWORD *result; // rax
  char v9; // di
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  bool v13; // cc
  unsigned __int64 v14; // rcx
  _DWORD *v15; // rcx
  char v16; // cl
  char v17; // r9
  char v18; // r10
  _QWORD *v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rdi
  int v26; // eax
  bool v27; // cc
  unsigned __int64 v28; // rcx
  int *v29; // r15
  unsigned __int64 v30; // [rsp+0h] [rbp-40h]
  char v31; // [rsp+Ch] [rbp-34h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_DWORD *)(a1 + 264);
  v7 = *(_DWORD *)(a1 + 272);
  result = (_QWORD *)(v4 + *(unsigned int *)(a1 + 44));
  v30 = a2 - 6;
  if ( a4 != 1 )
  {
    v9 = 64 - v6;
    v31 = 32 - v6;
    while ( 1 )
    {
      if ( (unsigned __int64)result + 3 >= v30 )
        return result;
      if ( v7 == 6 )
      {
        v11 = (0xCF1BBCDCBF9B0000LL * *result) >> v9;
      }
      else
      {
        if ( v7 <= 6 )
        {
          v10 = 0xCF1BBCDCBB000000LL;
          if ( v7 == 5 )
          {
LABEL_9:
            v11 = (*result * v10) >> v9;
            goto LABEL_10;
          }
          goto LABEL_24;
        }
        if ( v7 != 7 )
        {
          v10 = 0xCF1BBCDCB7A56463LL;
          if ( v7 == 8 )
            goto LABEL_9;
LABEL_24:
          v11 = (unsigned int)(-1640531535 * *(_DWORD *)result) >> v31;
          goto LABEL_10;
        }
        v11 = (0xCF1BBCDCBFA56300LL * *result) >> v9;
      }
LABEL_10:
      *(_DWORD *)(v5 + 4 * v11) = (_DWORD)result - v4;
      if ( a3 )
      {
        v12 = 1;
        v13 = v7 <= 6;
        if ( v7 != 6 )
        {
LABEL_12:
          if ( v13 )
          {
            if ( v7 == 5 )
            {
              v14 = (0xCF1BBCDCBB000000LL * *(_QWORD *)((char *)result + v12)) >> v9;
              goto LABEL_16;
            }
          }
          else
          {
            if ( v7 == 7 )
            {
              v14 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)((char *)result + v12)) >> v9;
              goto LABEL_16;
            }
            if ( v7 == 8 )
            {
              v14 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)((char *)result + v12)) >> v9;
              goto LABEL_16;
            }
          }
          v14 = (unsigned int)(-1640531535 * *(_DWORD *)((char *)result + v12)) >> v31;
          goto LABEL_16;
        }
        while ( 1 )
        {
          v14 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)((char *)result + v12)) >> v9;
LABEL_16:
          v15 = (_DWORD *)(v5 + 4 * v14);
          if ( !*v15 )
            *v15 = (_DWORD)result - v4 + v12;
          if ( v12 == 2 )
            break;
          v12 = 2;
          v13 = v7 <= 6;
          if ( v7 != 6 )
            goto LABEL_12;
        }
      }
      result = (_QWORD *)((char *)result + 3);
    }
  }
  v16 = v6 + 8;
  v17 = 64 - (v6 + 8);
  v18 = 32 - v16;
  while ( 1 )
  {
    v19 = (_QWORD *)((char *)result + 3);
    if ( (unsigned __int64)result + 3 >= v30 )
      return result;
    v20 = (_DWORD)result - v4;
    if ( v7 == 6 )
    {
      v22 = 0xCF1BBCDCBF9B0000LL;
      goto LABEL_38;
    }
    if ( v7 <= 6 )
    {
      v21 = 0xCF1BBCDCBB000000LL;
      if ( v7 == 5 )
      {
LABEL_37:
        v22 = v21;
LABEL_38:
        v23 = (*(_QWORD *)((char *)v19 - 3) * v22) >> v17;
        v24 = v23;
        goto LABEL_39;
      }
    }
    else
    {
      if ( v7 == 7 )
      {
        v22 = 0xCF1BBCDCBFA56300LL;
        goto LABEL_38;
      }
      v21 = 0xCF1BBCDCB7A56463LL;
      if ( v7 == 8 )
        goto LABEL_37;
    }
    LODWORD(v23) = (unsigned int)(-1640531535 * *(_DWORD *)((char *)v19 - 3)) >> v18;
    v24 = (unsigned int)v23;
LABEL_39:
    *(_DWORD *)(v5 + 4 * (v24 >> 8)) = (v20 << 8) | (unsigned __int8)v23;
    if ( a3 )
    {
      v25 = (_QWORD *)((char *)v19 - 2);
      v26 = (v20 + 1) << 8;
      v27 = v7 <= 6;
      if ( v7 != 6 )
      {
LABEL_41:
        if ( v27 )
        {
          if ( v7 == 5 )
          {
            v28 = (0xCF1BBCDCBB000000LL * *v25) >> v17;
            goto LABEL_45;
          }
        }
        else
        {
          if ( v7 == 7 )
          {
            v28 = (0xCF1BBCDCBFA56300LL * *v25) >> v17;
            goto LABEL_45;
          }
          if ( v7 == 8 )
          {
            v28 = (0xCF1BBCDCB7A56463LL * *v25) >> v17;
            goto LABEL_45;
          }
        }
        v28 = (unsigned int)(-1640531535 * *(_DWORD *)v25) >> v18;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v28 = (0xCF1BBCDCBF9B0000LL * *v25) >> v17;
LABEL_45:
        v29 = (int *)(v5 + 4 * (v28 >> 8));
        if ( !*v29 )
          *v29 = v26 | (unsigned __int8)v28;
        v25 = (_QWORD *)((char *)v25 + 1);
        v26 += 256;
        if ( v19 == v25 )
          break;
        v27 = v7 <= 6;
        if ( v7 != 6 )
          goto LABEL_41;
      }
    }
    result = v19;
  }
}
