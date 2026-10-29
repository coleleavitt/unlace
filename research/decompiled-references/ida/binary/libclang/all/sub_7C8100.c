void __fastcall sub_7C8100(__int64 *a1, __int64 a2)
{
  char v4; // al
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  _BYTE *v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  const void *v13; // rax
  size_t v14; // rdx
  void *v15; // rdi
  size_t v16; // rbx
  __int64 v17; // rdi
  _DWORD *v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r12
  _QWORD *v21; // rdx
  _BYTE *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned int *v25; // rsi
  size_t v26; // r13
  const void *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax

  sub_7C8480(a1, *(_QWORD *)(a2 + 56), 0);
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v4 != 66 )
  {
    v19 = *(_QWORD *)(a2 + 48);
    if ( v19 )
    {
      sub_7C5C80((__int64)a1, v19);
    }
    else if ( v4 == 71 )
    {
      v20 = *a1;
      v21 = *(_QWORD **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v21 <= 7u )
      {
        v29 = sub_26240F0(*a1, "concept ", 8);
        v22 = *(_BYTE **)(v29 + 32);
        v20 = v29;
      }
      else
      {
        *v21 = 0x20747065636E6F63LL;
        v22 = (_BYTE *)(*(_QWORD *)(v20 + 32) + 8LL);
        *(_QWORD *)(v20 + 32) = v22;
      }
      v23 = *(_QWORD *)(a2 + 40);
      if ( (v23 & 7) == 0 )
      {
        v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v24 )
        {
          v25 = *(unsigned int **)(v24 + 16);
          v26 = *v25;
          v27 = v25 + 4;
          if ( *(_QWORD *)(v20 + 24) - (_QWORD)v22 >= v26 )
          {
            if ( v26 )
            {
              memcpy(v22, v27, v26);
              v22 = (_BYTE *)(v26 + *(_QWORD *)(v20 + 32));
              *(_QWORD *)(v20 + 32) = v22;
            }
          }
          else
          {
            v28 = sub_26240F0(v20, v27, v26);
            v22 = *(_BYTE **)(v28 + 32);
            v20 = v28;
          }
        }
      }
      if ( *(_QWORD *)(v20 + 24) - (_QWORD)v22 <= 2u )
      {
        sub_26240F0(v20, " = ", 3);
      }
      else
      {
        v22[2] = 32;
        *(_WORD *)v22 = 15648;
        *(_QWORD *)(v20 + 32) += 3LL;
      }
      sub_AE6C50(*(_QWORD *)(a2 + 64), *a1, 0, (_DWORD)a1 + 8, *((_DWORD *)a1 + 8), a1[3], "\n", 1u);
    }
    return;
  }
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(*a1 + 24) - v6;
  if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
  {
    if ( v7 <= 7 )
    {
      sub_26240F0(v5, "typename", 8);
    }
    else
    {
      *(_QWORD *)v6 = 0x656D616E65707974LL;
      *(_QWORD *)(v5 + 32) += 8LL;
    }
  }
  else
  {
    if ( v7 > 4 )
    {
      *(_DWORD *)v6 = 1935764579;
      *(_BYTE *)(v6 + 4) = 115;
      *(_QWORD *)(v5 + 32) += 5LL;
      if ( (*(_BYTE *)(a2 + 80) & 2) == 0 )
        goto LABEL_6;
LABEL_18:
      v17 = *a1;
      v18 = *(_DWORD **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v18 > 3u )
      {
        *v18 = 774778400;
        *(_QWORD *)(v17 + 32) += 4LL;
        v11 = *(_QWORD *)(a2 + 40);
        if ( v11 > 7 )
          goto LABEL_11;
        goto LABEL_20;
      }
      sub_26240F0(v17, " ...", 4);
LABEL_10:
      v11 = *(_QWORD *)(a2 + 40);
      if ( v11 > 7 )
      {
LABEL_11:
        if ( (*((_BYTE *)a1 + 13) & 0x10) != 0 && (v11 & 7) == 0 )
        {
          v12 = *a1;
          v13 = (const void *)sub_C86900(v11 & 0xFFFFFFFFFFFFFFF8LL);
          v15 = *(void **)(v12 + 32);
          v16 = v14;
          if ( *(_QWORD *)(v12 + 24) - (_QWORD)v15 < v14 )
          {
            sub_26240F0(v12, v13, v14);
          }
          else if ( v14 )
          {
            memcpy(v15, v13, v14);
            *(_QWORD *)(v12 + 32) += v16;
          }
          return;
        }
LABEL_21:
        sub_791C00(*a1, v11);
        return;
      }
LABEL_20:
      if ( !(_DWORD)v11 )
        return;
      goto LABEL_21;
    }
    sub_26240F0(v5, "class", 5);
  }
  if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
    goto LABEL_18;
LABEL_6:
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 > 7 || (_DWORD)v8 )
  {
    v9 = *a1;
    v10 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_26239D0(v9, 32);
    }
    else
    {
      *(_QWORD *)(v9 + 32) = v10 + 1;
      *v10 = 32;
    }
    goto LABEL_10;
  }
}

