__int64 __fastcall sub_36B7F0(__int64 a1, _QWORD *a2, int a3, char a4, _DWORD *a5)
{
  char v5; // r11
  __int64 v8; // r13
  _QWORD *v9; // r13
  __int64 v10; // rdx
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // ebp
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rbp
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rcx
  _DWORD *v25; // rdx
  int v26; // ebp
  _DWORD *v27; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  char tinfo_property; // bl
  int *v35; // [rsp+0h] [rbp-58h]
  __int64 v36; // [rsp+8h] [rbp-50h]
  char v37; // [rsp+10h] [rbp-48h]
  _DWORD *v38; // [rsp+10h] [rbp-48h]
  _DWORD *v39; // [rsp+18h] [rbp-40h]
  _DWORD *v40; // [rsp+18h] [rbp-40h]

  v5 = a4;
  v8 = *(_QWORD *)a1;
  if ( a4 )
  {
    v9 = (_QWORD *)(v8 + 208);
    v35 = (int *)(a1 + 36);
  }
  else
  {
    v9 = (_QWORD *)(v8 + 184);
    v35 = (int *)(a1 + 32);
  }
  if ( (unsigned __int64)a3 >= v9[1] )
    return 0;
  v10 = *(int *)(*v9 + 4LL * a3);
  if ( (_DWORD)v10 == -1 )
    return 0;
  v36 = a2[54] + 104LL * *(int *)(a2[57] + 4 * v10);
  if ( a5 )
  {
    if ( *a5 == *(_DWORD *)v36 )
    {
      v11 = *v35;
      if ( a3 < *v35 )
      {
LABEL_43:
        if ( (*(_BYTE *)(v36 + 26) & 8) != 0 )
        {
          v38 = a5;
          tinfo_property = get_tinfo_property();
          if ( ((get_tinfo_property() & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
            sub_1EF8F0(v36, a2[188], (_BYTE *)v38 + 64, 0);
        }
        goto LABEL_35;
      }
LABEL_8:
      v12 = *(int *)(*v9 + 4LL * v11);
      if ( (_DWORD)v12 == -1 )
        goto LABEL_19;
LABEL_9:
      if ( (!v5 || **(_DWORD **)(*(_QWORD *)a1 + 280LL) != 4) && *(_DWORD *)(a1 + 40) )
      {
        if ( !under_debugger )
          sub_383060(52078);
LABEL_54:
        BUG();
      }
      v13 = *(_QWORD *)(a1 + 8);
      v14 = *(_DWORD *)(a2[57] + 4 * v12);
      v15 = *(_QWORD *)(a1 + 16);
      v16 = (_DWORD *)(v13 + 4 * v15);
      if ( (_DWORD *)v13 != v16 )
      {
        v17 = *(_DWORD **)(a1 + 8);
        while ( v14 != *v17 )
        {
          if ( v16 == ++v17 )
            goto LABEL_36;
        }
        if ( v17 != v16 )
          goto LABEL_17;
      }
LABEL_36:
      v29 = v15 + 1;
      if ( *(_QWORD *)(a1 + 24) < v29 )
      {
        v40 = a5;
        v37 = v5;
        v30 = qvector_reserve(a1 + 8, v13, v29, 4);
        v31 = *(_QWORD *)(a1 + 16);
        a5 = v40;
        *(_QWORD *)(a1 + 8) = v30;
        v5 = v37;
        v16 = (_DWORD *)(v30 + 4 * v31);
      }
      *v16 = v14;
      ++*(_QWORD *)(a1 + 16);
LABEL_17:
      while ( a3 >= ++v11 )
      {
        v12 = *(int *)(*v9 + 4LL * v11);
        if ( (_DWORD)v12 != -1 )
          goto LABEL_9;
LABEL_19:
        if ( v5 || (v18 = *(_QWORD *)a1, **(_DWORD **)(*(_QWORD *)a1 + 280LL) != 4) )
        {
          if ( !under_debugger )
            sub_383060(52076);
          goto LABEL_54;
        }
        v19 = *(_DWORD *)(a1 + 40);
        if ( v19 <= 0 )
        {
          v20 = *(int *)(a1 + 36);
          if ( v20 >= *(_QWORD *)(v18 + 216) )
          {
            if ( !under_debugger )
              sub_383060(52077);
            goto LABEL_54;
          }
          v21 = *(int *)(*(_QWORD *)(v18 + 208) + 4 * v20);
          if ( (_DWORD)v21 == -1 )
          {
            if ( !under_debugger )
              sub_383060(52065);
            goto LABEL_54;
          }
          v39 = a5;
          v22 = sub_369A00(a1, a2, v20);
          v5 = 0;
          a5 = v39;
          if ( !v22 )
            return 0;
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(_QWORD *)(a1 + 16);
          v25 = (_DWORD *)(v23 + 4 * v24);
          v26 = *(_DWORD *)(a2[57] + 4 * v21);
          if ( (_DWORD *)v23 == v25 )
            goto LABEL_39;
          v27 = *(_DWORD **)(a1 + 8);
          while ( v26 != *v27 )
          {
            if ( v25 == ++v27 )
              goto LABEL_39;
          }
          if ( v27 == v25 )
          {
LABEL_39:
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v24 + 1) )
            {
              v32 = qvector_reserve(a1 + 8, v23, v24 + 1, 4);
              v33 = *(_QWORD *)(a1 + 16);
              a5 = v39;
              *(_QWORD *)(a1 + 8) = v32;
              v5 = 0;
              v25 = (_DWORD *)(v32 + 4 * v33);
            }
            *v25 = v26;
            ++*(_QWORD *)(a1 + 16);
          }
          ++*(_DWORD *)(a1 + 36);
          v19 = *(_DWORD *)(a1 + 40);
        }
        *(_DWORD *)(a1 + 40) = v19 - 1;
      }
      if ( !a5 )
        goto LABEL_35;
      goto LABEL_43;
    }
    return 0;
  }
  v11 = *v35;
  if ( *v35 <= a3 )
    goto LABEL_8;
LABEL_35:
  *v35 = a3 + 1;
  return 1;
}
