__int64 __fastcall sub_224B60(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  int v6; // eax
  unsigned int v7; // ebx
  char tinfo_property; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  bool v15; // al
  unsigned __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rax
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // al
  int tinfo_size; // ebp
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // ebx
  __int64 v29; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v30[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  v30[1] = __readfsqword(0x28u);
  v4 = v2 + 24;
  v5 = *(_QWORD *)a2 + 24LL;
  v6 = *(_DWORD *)(v2 + 80);
  if ( (v6 & 4) != 0 && *(_DWORD *)(a1 + 192) == -1 && (*(_BYTE *)(*(_QWORD *)a2 + 80LL) & 1) != 0 )
  {
    v25 = *(_QWORD *)(v4 + 32);
    v26 = *(int *)(v4 + 52);
    if ( (_DWORD)v26 != -1 )
      v25 += v26;
    if ( *(_QWORD *)(v5 + 32) >= v25 )
      return 1;
  }
  if ( (v6 & 2) == 0 )
    return 0;
  if ( (v6 & 0x1018) != 0 )
    return 0;
  v7 = v6 & 1;
  if ( (v6 & 1) != 0 )
    return 0;
  if ( *(_QWORD *)(v4 + 40) == -1 )
  {
    v10 = *(int *)(v4 + 52);
  }
  else
  {
    tinfo_property = get_tinfo_property(*(_QWORD *)(v4 + 24), 2);
    v10 = *(int *)(v4 + 52);
    v11 = *(_QWORD *)(v4 + 32);
    if ( (tinfo_property & 0xF) == 0xB )
    {
      if ( (_DWORD)v10 != -1 )
        v11 += (int)v10;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) >= v11 )
        return 0;
    }
  }
  v12 = *(_QWORD *)(v5 + 32);
  v13 = *(_QWORD *)(v4 + 32);
  v14 = *(int *)(v5 + 52);
  v15 = (int)v10 != 0 && v12 >= v13;
  if ( (_DWORD)v14 )
  {
    if ( v15 )
    {
      v16 = v13 - 1;
      if ( v13 - 1 + (int)v10 >= v12 + (int)v14 - 1 )
        goto LABEL_16;
    }
LABEL_46:
    if ( (*(_DWORD *)(v5 + 56) & 2) != 0 )
    {
      LOBYTE(v7) = (*(_DWORD *)(v5 + 56) & 0x1418) != 0;
      return v7;
    }
    return 1;
  }
  if ( !v15 )
    goto LABEL_46;
  v16 = v13 - 1;
  if ( v13 - 1 + (int)v10 < v12 )
    goto LABEL_46;
LABEL_16:
  v17 = *(_DWORD *)(v5 + 56);
  if ( (v17 & 1) != 0 )
  {
    v18 = *(int *)(a1 + 196);
    if ( (_DWORD)v18 )
    {
      v19 = *(_QWORD *)(a1 + 176);
      if ( (int)v14 <= 0 )
        v14 = 1;
      v20 = v12 + v14 - 1;
      if ( v20 < v19 )
        goto LABEL_29;
      if ( (int)v18 <= 0 )
        v18 = 1;
      if ( v19 + v18 - 1 < v12 )
      {
LABEL_29:
        if ( v20 >= v13 )
        {
          v21 = 1;
          if ( (int)v10 > 0 )
            v21 = v10;
          if ( v21 + v16 >= v12 && ((*(_BYTE *)(v4 + 56) & 2) == 0 || *(_QWORD *)(v4 + 40) == -1) )
          {
            if ( (get_tinfo_property(*(_QWORD *)(v4 + 24), 2) & 0x2F) != 0xD
              && (get_tinfo_property(*(_QWORD *)(v4 + 24), 2) & 0xF) != 0xB )
            {
              return 1;
            }
            v17 = *(_DWORD *)(v5 + 56);
          }
        }
      }
    }
  }
  if ( (v17 & 0x400) != 0 )
  {
    v22 = *(_QWORD *)(v5 + 24);
    if ( (_BYTE)v22 )
    {
      if ( !(unsigned int)verify_tinfo(v22) )
      {
        v23 = get_tinfo_property(*(_QWORD *)(v5 + 24), 2);
        v29 = 0;
        if ( (v23 & 0xF) == 0xB )
          v29 = get_tinfo_property(*(_QWORD *)(v5 + 24), 11);
        else
          copy_tinfo_t(&v29, v5 + 24);
        tinfo_size = get_tinfo_size(0, v29, 0);
        if ( tinfo_size <= 0 )
        {
          if ( !under_debugger )
            sub_37E160(52276);
          BUG();
        }
        if ( (*(_BYTE *)(v4 + 57) & 4) != 0 || (get_tinfo_property(*(_QWORD *)(v4 + 24), 2) & 0x2F) == 0xD )
          goto LABEL_38;
        if ( !((*(_QWORD *)(v5 + 32) - *(_QWORD *)(v4 + 32)) % tinfo_size) && !(*(_DWORD *)(v4 + 52) % tinfo_size) )
        {
          if ( *(_QWORD *)(v4 + 40) != -1 )
          {
LABEL_38:
            clear_tinfo_t(&v29);
            return v7;
          }
          if ( (get_tinfo_property(*(_QWORD *)(v4 + 24), 2) & 0xF) == 0xB )
          {
            v27 = *(_QWORD *)(v4 + 24);
            v30[0] = 0;
            v30[0] = get_tinfo_property(v27, 11);
            v28 = compare_tinfo(v29, v30[0], 2);
            clear_tinfo_t(v30);
            v7 = v28 ^ 1;
            goto LABEL_38;
          }
        }
        v7 = 1;
        goto LABEL_38;
      }
    }
  }
  return 0;
}
