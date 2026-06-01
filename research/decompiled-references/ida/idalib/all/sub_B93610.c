__int64 __fastcall sub_B93610(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // ecx
  unsigned int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 *v15; // rdx
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  int v27; // r10d
  __int64 v28; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v29[4]; // [rsp+18h] [rbp-20h] BYREF

  v28 = a2;
  v2 = sub_B8C1B0(a1);
  if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0 )
  {
    v2 = sub_B8C2C0(v2);
    v5 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
      goto LABEL_3;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
      goto LABEL_3;
  }
  v5 = sub_B8EF10((unsigned __int64 *)a1, *(_QWORD *)(v2 + 88));
LABEL_3:
  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    sub_B912C0(a1);
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    v6 = v5 + 8;
    v7 = 3;
  }
  else
  {
    v19 = *(_DWORD *)(v5 + 16);
    v6 = *(_QWORD *)(v5 + 8);
    if ( !v19 )
    {
      v9 = nullptr;
      goto LABEL_24;
    }
    v7 = v19 - 1;
  }
  v8 = v7 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
  v9 = (__int64 *)(v6 + 16LL * v8);
  v3 = *v9;
  if ( v28 == *v9 )
    goto LABEL_8;
  v27 = 1;
  v4 = 0;
  if ( v3 != -1 )
  {
    while ( 1 )
    {
      if ( v3 == -2 && !v4 )
        v4 = (__int64)v9;
      v8 = v7 & (v27 + v8);
      v9 = (__int64 *)(v6 + 16LL * v8);
      v3 = *v9;
      if ( v28 == *v9 )
        break;
      if ( v3 == -1 )
      {
        if ( v4 )
          v9 = (__int64 *)v4;
        goto LABEL_24;
      }
      ++v27;
    }
LABEL_8:
    v10 = v9[1];
    v11 = (unsigned __int64 *)(v9 + 1);
    v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
LABEL_20:
      *v11 = v10 & 0xFFFFFFFFFFFFFFFDLL;
      return 0;
    }
    if ( !v12 )
      BUG();
    if ( (v10 & 4) != 0 )
    {
      v13 = *(_QWORD *)v13;
      if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0 )
        goto LABEL_12;
    }
    else if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0 )
    {
LABEL_12:
      v14 = *(_QWORD *)(v13 + 88);
      v15 = v29;
      v16 = nullptr;
      v29[0] = 0;
LABEL_13:
      v17 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v12 & 4) != 0 )
      {
        while ( v17 )
        {
          if ( *(char *)(*(_QWORD *)v17 + 29LL) < 0 )
          {
            v12 = *(_QWORD *)(v17 + 8);
            *(_QWORD *)(v17 + 8) = *(_QWORD *)(v14 + 17496) | 4LL;
            *(_QWORD *)(v14 + 17496) = v17;
            goto LABEL_13;
          }
          *v15 = v12;
          v12 = *(_QWORD *)(v17 + 8);
          v16 = v15;
          v15 = (unsigned __int64 *)(v17 + 8);
          v17 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v12 & 4) == 0 )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
        if ( *(char *)(v17 + 29) < 0 )
        {
          if ( v16 )
          {
            v26 = (_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFF8LL);
            *v16 = *v26 & 0xFFFFFFFFFFFFFFFBLL;
            v26[1] = *(_QWORD *)(v14 + 17496) | 4LL;
            *(_QWORD *)(v14 + 17496) = v26;
          }
          goto LABEL_19;
        }
      }
      *v15 = v12;
LABEL_19:
      v10 = v29[0] | v9[1] & 3;
      v9[1] = v10;
      goto LABEL_20;
    }
    v13 = sub_B8C2C0(v13);
    goto LABEL_12;
  }
LABEL_24:
  v29[0] = v9;
  v20 = (*(_DWORD *)v5 >> 1) + 1;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    v22 = 12;
    v21 = 4;
  }
  else
  {
    v21 = *(_DWORD *)(v5 + 16);
    v22 = 3 * v21;
  }
  v23 = (unsigned int)(4 * v20);
  if ( (unsigned int)v23 >= (unsigned int)v22 )
  {
    v21 *= 2;
    goto LABEL_41;
  }
  v23 = v21 - (v20 + *(_DWORD *)(v5 + 4));
  v22 = v21 >> 3;
  if ( (unsigned int)v23 <= (unsigned int)v22 )
  {
LABEL_41:
    sub_B928B0(v5, v21, v22, v23, v3, v4);
    sub_B8FEB0(v5, &v28, v29);
    v20 = (*(_DWORD *)v5 >> 1) + 1;
  }
  *(_DWORD *)v5 = *(_DWORD *)v5 & 1 | (2 * v20);
  v24 = (__int64 *)v29[0];
  if ( *(_QWORD *)v29[0] != -1 )
    --*(_DWORD *)(v5 + 4);
  v25 = v28;
  v24[1] = 0;
  *v24 = v25;
  v24[1] = 0;
  return 0;
}
