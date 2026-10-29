__int64 __fastcall sub_70B5C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 *v12; // rax
  char v13; // r13
  char v14; // r14
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) != 46 )
    goto LABEL_8;
  v7 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  if ( ((*(_BYTE *)(v7 + 74) & 1) != 0 || *(_QWORD *)(v7 + 128) > 7u) && *(char *)(sub_B14A40(v5) + 76) >= 0 )
  {
    v8 = *(_QWORD *)(sub_B14A40(v5) + 128);
    v9 = nullptr;
    if ( v8 > 7 )
    {
      if ( (v8 & 4) != 0 )
      {
        v18 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
        v20 = *(_QWORD *)(v19 + 8);
        if ( (v20 & 7) != 0 || (v20 & 8) != 0 )
          v19 = sub_B0CF30(v18, v3);
        v9 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
    v5 = *v9;
LABEL_8:
    if ( *(_BYTE *)(v6 + 16) != 46 )
      goto LABEL_15;
    v10 = sub_B14A40(v6);
    if ( (*(_BYTE *)(v10 + 74) & 1) != 0 )
      goto LABEL_10;
    goto LABEL_19;
  }
  v5 = 0;
  if ( *(_BYTE *)(v6 + 16) != 46 )
    goto LABEL_16;
  v10 = sub_B14A40(v6);
  if ( (*(_BYTE *)(v10 + 74) & 1) != 0 )
    goto LABEL_10;
LABEL_19:
  if ( *(_QWORD *)(v10 + 128) <= 7u )
  {
LABEL_20:
    v6 = 0;
    if ( !v5 )
      return 0;
    goto LABEL_16;
  }
LABEL_10:
  if ( *(char *)(sub_B14A40(v6) + 76) < 0 )
    goto LABEL_20;
  v11 = *(_QWORD *)(sub_B14A40(v6) + 128);
  v12 = nullptr;
  if ( v11 > 7 )
  {
    if ( (v11 & 4) != 0 )
    {
      v21 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
      v23 = *(_QWORD *)(v22 + 8);
      if ( (v23 & 7) != 0 || (v23 & 8) != 0 )
        v22 = sub_B0CF30(v21, v3);
      v12 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v6 = *v12;
LABEL_15:
  if ( v6 == v5 )
    return 0;
LABEL_16:
  v13 = sub_B0FF70(v5);
  v14 = sub_B0FF70(v6);
  v15 = sub_70B420(a1, v5);
  v16 = sub_70B420(a1, v6);
  if ( v13 != v14 )
  {
    if ( v13 )
      return v15 < v16 ? -1 : 1;
    return v16 < v15 ? 1 : -1;
  }
  if ( v15 == v16 )
    return 0;
  return v16 < v15 ? 1 : -1;
}

