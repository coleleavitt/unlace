__int64 __fastcall sub_919680(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // r11d
  unsigned int v7; // r8d
  __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r9
  char v12; // r12
  char v13; // r10
  __int64 v14; // r9
  int v15; // ebp
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rax
  _DWORD *v19; // r11
  char v20; // r11
  __int64 v21; // r9
  int v22; // ebp
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int *v27; // r12
  __int64 v28; // [rsp+0h] [rbp-40h]
  char v29; // [rsp+8h] [rbp-38h]
  char v30; // [rsp+8h] [rbp-38h]
  char v31; // [rsp+Ch] [rbp-34h]

  v4 = a2 - 8;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 264);
  v7 = *(_DWORD *)(a1 + 272);
  v28 = *(_QWORD *)(a1 + 112);
  v8 = *(_QWORD *)(a1 + 128);
  result = *(unsigned int *)(a1 + 260);
  v10 = v5 + *(unsigned int *)(a1 + 44);
  v11 = v10 + 2;
  if ( a4 != 1 )
  {
    if ( v4 < v11 )
      return result;
    v12 = 32 - result;
    v13 = 64 - result;
    v29 = 64 - v6;
    while ( 1 )
    {
      v14 = 0;
      v15 = v10 - v5;
      do
      {
        v16 = *(_QWORD *)(v10 + v14);
        v17 = 0xCF1BBCDCB7A56463LL * v16;
        if ( v7 == 6 )
        {
          v18 = (0xCF1BBCDCBF9B0000LL * v16) >> v13;
        }
        else if ( v7 <= 6 )
        {
          if ( v7 != 5 )
            goto LABEL_17;
          v18 = (0xCF1BBCDCBB000000LL * v16) >> v13;
        }
        else
        {
          if ( v7 != 7 )
          {
            v18 = v17 >> v13;
            if ( v7 == 8 )
              goto LABEL_9;
LABEL_17:
            v18 = (unsigned int)(-1640531535 * *(_DWORD *)(v10 + v14)) >> v12;
            goto LABEL_9;
          }
          v18 = (0xCF1BBCDCBFA56300LL * v16) >> v13;
        }
LABEL_9:
        v19 = (_DWORD *)(v28 + 4 * (v17 >> v29));
        if ( !v14 )
        {
          *(_DWORD *)(v8 + 4 * v18) = v15;
LABEL_11:
          *v19 = v15 + v14;
          goto LABEL_12;
        }
        if ( !*v19 )
          goto LABEL_11;
LABEL_12:
        if ( !a3 )
          break;
        ++v14;
      }
      while ( v14 != 3 );
      v10 += 3;
      result = v10 + 2;
      if ( v4 < v10 + 2 )
        return result;
    }
  }
  result = (unsigned int)(result + 8);
  v30 = 56 - v6;
  if ( v4 < v11 )
    return result;
  v20 = 64 - result;
  v31 = 32 - result;
  do
  {
    v21 = 0;
    v22 = ((_DWORD)v10 - (_DWORD)v5) << 8;
    do
    {
      v23 = *(_QWORD *)(v10 + v21);
      v24 = 0xCF1BBCDCB7A56463LL * v23;
      if ( v7 == 6 )
      {
        v25 = (0xCF1BBCDCBF9B0000LL * v23) >> v20;
      }
      else if ( v7 <= 6 )
      {
        if ( v7 != 5 )
          goto LABEL_37;
        v25 = (0xCF1BBCDCBB000000LL * v23) >> v20;
      }
      else
      {
        if ( v7 != 7 )
        {
          v25 = v24 >> v20;
          if ( v7 == 8 )
            goto LABEL_29;
LABEL_37:
          v25 = (unsigned int)(-1640531535 * *(_DWORD *)(v10 + v21)) >> v31;
          goto LABEL_29;
        }
        v25 = (0xCF1BBCDCBFA56300LL * v23) >> v20;
      }
LABEL_29:
      v26 = v24 >> v30;
      v27 = (int *)(v28 + 4 * (v24 >> v30 >> 8));
      if ( !v21 )
      {
        *(_DWORD *)(v8 + 4 * (v25 >> 8)) = (((_DWORD)v10 - (_DWORD)v5) << 8) | (unsigned __int8)v25;
LABEL_31:
        *v27 = v22 | (unsigned __int8)v26;
        goto LABEL_32;
      }
      if ( !*v27 )
        goto LABEL_31;
LABEL_32:
      if ( !a3 )
        break;
      ++v21;
      v22 += 256;
    }
    while ( v21 != 3 );
    v10 += 3;
    result = v10 + 2;
  }
  while ( v4 >= v10 + 2 );
  return result;
}
