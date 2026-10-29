bool __fastcall sub_E13550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rbp
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rsi
  __int64 v27; // r13
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rdx
  __int64 v33; // rdi
  int v34; // eax

  v8 = *(_QWORD *)(a2 + 104);
  v9 = *(_QWORD *)(v8 + 96);
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v9 & 1) == 0 )
  {
    v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_4;
      v15 = v11[2295];
      v16 = v8 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v15 )
      {
        v17 = v11[294];
        v11[304] += 24LL;
        v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11[295] >= v18 + 24 && v17 )
        {
          v11[294] = v18 + 24;
          v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v19 = sub_962430((__int64)(v11 + 294), 24, 24, 3, a5, a6);
          v18 = v19 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v19 = v15;
        v16 = v18 | 4;
        *(_DWORD *)(v19 + 8) = 0;
        *(_QWORD *)(v19 + 16) = v8;
      }
      v10 = v16 & 0xFFFFFFFFFFFFFFFELL;
      v9 = v10 | 1;
      *(_QWORD *)(v8 + 96) = v10 | 1;
    }
  }
  if ( v10 )
  {
    if ( (v10 & 4) != 0 )
    {
      v20 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v20 )
      {
        v21 = *(_QWORD *)v20;
        v22 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
        if ( v20[2] != v22 )
        {
          v20[2] = v22;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 152LL))(v21, v8);
          v12 = *(_QWORD *)(a2 + 128);
          if ( (*(_BYTE *)(v12 + 1) & 4) != 0 )
            goto LABEL_5;
          goto LABEL_17;
        }
      }
    }
  }
LABEL_4:
  v12 = *(_QWORD *)(a2 + 128);
  if ( (*(_BYTE *)(v12 + 1) & 4) != 0 )
  {
LABEL_5:
    v13 = sub_EBA840(*(_QWORD *)(a1 + 16), a2);
    return **(_QWORD **)(v13 + 72) == sub_A742B0(
                                        *(_QWORD *)(a1 + 16),
                                        *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 17448LL) + 8LL));
  }
LABEL_17:
  v23 = *(_QWORD *)(a2 + 104);
  v24 = *(_QWORD *)(v23 + 96);
  v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v24 & 1) != 0 )
    goto LABEL_28;
  v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_28;
  if ( (v24 & 2) != 0 )
  {
    v27 = v26[2295];
    v28 = v23 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v27 )
    {
      v29 = v26[294];
      v26[304] += 24LL;
      v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v26[295] >= v30 + 24 && v29 )
      {
        v26[294] = v30 + 24;
        v31 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v31 = sub_962430((__int64)(v26 + 294), 24, 24, 3, a5, a6);
        v30 = v31 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v31 = v27;
      v28 = v30 | 4;
      *(_DWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = v23;
    }
    v25 = v28 & 0xFFFFFFFFFFFFFFFELL;
    v24 = v25 | 1;
    *(_QWORD *)(v23 + 96) = v25 | 1;
LABEL_28:
    if ( v25 )
    {
      if ( (v25 & 4) != 0 )
      {
        v32 = (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v32 )
        {
          v33 = *(_QWORD *)v32;
          v34 = *(_DWORD *)(*(_QWORD *)v32 + 12LL);
          if ( v32[2] != v34 )
          {
            v32[2] = v34;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 152LL))(v33, v23);
          }
        }
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 128) + 20LL) )
      goto LABEL_5;
    return 0;
  }
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_5;
  return 0;
}

