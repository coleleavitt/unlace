void __fastcall sub_9CDDD0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int16 i; // ax
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 *v17; // rbx
  bool v18; // zf
  __int64 *v19; // rax
  unsigned __int16 v20; // ax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // r15
  __int64 *v24; // rax
  unsigned int v25; // eax
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int16 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned __int16 *v31; // rax
  unsigned __int16 *v32; // rdx
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned int v36; // [rsp+14h] [rbp-44h]
  void (*v37)(); // [rsp+18h] [rbp-40h]

  while ( 1 )
  {
    for ( i = *(_WORD *)a3 & 0x1FF; i == 20; i = *(_WORD *)a3 & 0x1FF )
      a3 = *(_QWORD *)(a3 + 24);
    if ( ((i + 433) & 0x1FFu) > 9 )
      break;
    v20 = *(_WORD *)(a3 + 2);
    a3 = *(_QWORD *)(a3 + 16);
    if ( ((v20 >> 3) & 0x7F) == 0xB )
    {
      v21 = a3;
LABEL_31:
      sub_9CD930(a1, (unsigned __int16 **)a2, v21, a4, a5);
      return;
    }
  }
  if ( i == 4 )
  {
    if ( *(_BYTE *)(a3 + 2) >> 3 == 4 )
    {
      v21 = *(_QWORD *)(a3 + 16);
      goto LABEL_31;
    }
    v8 = a5 - 3;
    if ( (unsigned int)v8 > 6 )
      return;
  }
  else
  {
    v8 = a5 - 3;
    v36 = 0;
    if ( (unsigned int)v8 > 6 )
    {
      if ( i == 71 )
        goto LABEL_8;
      goto LABEL_27;
    }
  }
  v36 = dword_23DB750[v8];
  if ( i == 71 )
  {
LABEL_8:
    v9 = *(_QWORD *)(a3 + 16);
    goto LABEL_9;
  }
LABEL_27:
  if ( i != 46 )
    return;
  v9 = *(_QWORD *)(a3 + 24);
LABEL_9:
  if ( !v9 || (*(_BYTE *)(v9 + 29) & 1) == 0 )
    return;
  v10 = sub_B8C3D0(v9);
  v11 = *(__int64 **)v10;
  v12 = *(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8);
  if ( *(_QWORD *)v10 < v12 )
  {
    v22 = *(__int64 **)v10;
    while ( *(_WORD *)(*v22 + 36) != 337 )
    {
      if ( (__int64 *)v12 == ++v22 )
        goto LABEL_17;
    }
    if ( (__int64 *)v12 == v22 )
      goto LABEL_17;
  }
  else
  {
    if ( v11 == (__int64 *)v12 )
      goto LABEL_17;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 337 )
    {
      v13 = (__int64 *)(v12 + 8);
      while ( v13 != v11 )
      {
        v14 = *v13++;
        if ( *(_WORD *)(v14 + 36) == 337 )
          goto LABEL_48;
      }
      goto LABEL_17;
    }
  }
LABEL_48:
  v28 = *(unsigned __int16 **)a2;
  v29 = *(_QWORD *)a2 + 2LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v29 )
  {
    v30 = *(_QWORD *)(a1 + 544);
    if ( (*(_BYTE *)(*(_QWORD *)(v30 + 8LL * *v28) + 8LL) & 2) == 0 )
      goto LABEL_17;
    v31 = v28 + 1;
    while ( 1 )
    {
      v32 = v31;
      if ( (unsigned __int16 *)v29 == v31 )
        break;
      ++v31;
      if ( (*(_BYTE *)(*(_QWORD *)(v30 + 8LL * *v32) + 8LL) & 2) == 0 )
        goto LABEL_17;
    }
  }
  v33 = *(_QWORD *)(a1 + 320);
  v37 = *(void (**)())(*(_QWORD *)v33 + 64LL);
  v34 = sub_C00A40(a3);
  if ( v37 != nullsub_375 )
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v37)(v33, v9, v36, a4, v34);
LABEL_17:
  if ( (*(_BYTE *)(v9 + 29) & 1) != 0 )
  {
    v15 = sub_B8C3D0(v9);
    v16 = *(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8);
    if ( (*(_BYTE *)(v9 + 29) & 1) != 0 )
      v17 = *(__int64 **)sub_B8C3D0(v9);
    else
      v17 = nullptr;
    v18 = v17 == (__int64 *)v16;
    if ( (unsigned __int64)v17 >= v16 )
      goto LABEL_41;
    while ( 1 )
    {
      v19 = v17;
      while ( *(_WORD *)(*v19 + 36) != 336 )
      {
        if ( (__int64 *)v16 == ++v19 )
          return;
      }
      while ( 1 )
      {
LABEL_37:
        v23 = *v17;
        if ( *(_WORD *)(*v17 + 36) != 336 )
        {
          v24 = v17 + 1;
          do
          {
            v23 = *v24;
            v17 = v24++;
          }
          while ( *(_WORD *)(v23 + 36) != 336 );
        }
        ++v17;
        v25 = sub_C00A40(a3);
        sub_9CD490(a1, a2, v9, a3, a4, *(_QWORD *)(v23 + 40), v36, 0, v25);
        v18 = v17 == (__int64 *)v16;
        if ( (unsigned __int64)v17 < v16 )
          break;
LABEL_41:
        if ( v18 )
          return;
        if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 336 )
        {
          v26 = (__int64 *)(v16 + 8);
          while ( v17 != v26 )
          {
            v27 = *v26++;
            if ( *(_WORD *)(v27 + 36) == 336 )
              goto LABEL_37;
          }
          return;
        }
      }
    }
  }
}
