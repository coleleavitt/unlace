__int64 __fastcall sub_2209180(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  bool *v4; // r10
  unsigned int v6; // eax
  __int64 *v7; // r8
  unsigned int v8; // r9d
  bool v9; // r11
  int v10; // eax
  int v11; // r9d
  unsigned int v13; // r9d
  __int64 *v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edi
  __int64 v20; // [rsp+8h] [rbp-10h]

  v4 = a4;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(__int64 **)a2;
  v8 = v6 - 1;
  if ( v6 <= 0x40 )
  {
    v9 = 0;
    if ( (__int64 *)(1LL << v8) != v7 )
      goto LABEL_4;
  }
  else
  {
    v9 = 0;
    if ( ((1LL << v8) & v7[v8 >> 6]) == 0 )
      goto LABEL_4;
    v20 = a3;
    v10 = sub_22068B0((__int64 **)a2);
    a3 = v20;
    if ( v10 != v11 )
      goto LABEL_4;
  }
  v13 = *(_DWORD *)(a3 + 8);
  v9 = 1;
  if ( v13 )
  {
    v14 = *(__int64 **)a3;
    if ( v13 <= 0x40 )
    {
      v9 = v14 == (__int64 *)(0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v13));
    }
    else
    {
      v15 = *v14;
      if ( *v14 == -1 )
      {
        v16 = 1;
        v17 = 64;
        while ( 1 )
        {
          v15 = v14[v16];
          if ( v15 != -1 )
            break;
          ++v16;
          v17 += 64;
          if ( (unsigned int)(((unsigned __int64)v13 + 63) >> 6) <= (unsigned int)v16 )
          {
            v9 = v13 == v17;
            goto LABEL_4;
          }
        }
      }
      else
      {
        v17 = 0;
      }
      _RCX = ~v15;
      __asm { tzcnt   rcx, rcx }
      v9 = v13 == (_DWORD)_RCX + v17;
    }
  }
LABEL_4:
  *v4 = v9;
  sub_2207BA0(a1, a2, a3);
  return a1;
}
