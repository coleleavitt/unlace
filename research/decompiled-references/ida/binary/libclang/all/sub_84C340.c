__int64 __fastcall sub_84C340(__int64 a1, __int64 a2)
{
  __int64 (*v3)(); // rax
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rdx
  unsigned int i; // ebp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 (*v24)(); // rax
  _QWORD *v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rdi
  int v40; // eax

  v3 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v3 == sub_6A41B0 )
    v4 = sub_777E10(a2);
  else
    v4 = ((__int64 (__fastcall *)(__int64))v3)(a2);
  v5 = *(_QWORD *)(a1 + 104);
  v6 = *(_QWORD *)(v5 + 96);
  v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_7;
  }
  else
  {
    if ( v7 <= 3 || (v6 & 2) == 0 )
      goto LABEL_7;
    v32 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v33 = v32[2275];
    if ( !v33 )
    {
      *(_QWORD *)(v5 + 96) = v5 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_7;
    }
    v34 = v32[274];
    v32[284] += 24LL;
    v7 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v7 + 24;
    if ( v32[275] >= v7 + 24 && v34 )
    {
      v32[274] = a2;
    }
    else
    {
      a2 = 24;
      v7 = sub_820510((__int64)(v32 + 274), 24, 3);
    }
    *(_QWORD *)v7 = v33;
    *(_DWORD *)(v7 + 8) = 0;
    v6 = v7 | 5;
    *(_QWORD *)(v7 + 16) = v5;
    *(_QWORD *)(v5 + 96) = v7 | 5;
    LOBYTE(v7) = v7 & 0xFA | 4;
  }
  if ( (v7 & 4) != 0 )
  {
    v8 = (_DWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 )
    {
      v35 = *(_QWORD *)v8;
      v36 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
      if ( v8[2] != v36 )
      {
        v8[2] = v36;
        a2 = v5;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 144LL))(v35, v5);
      }
    }
  }
LABEL_7:
  v9 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
    v10 = sub_7A2E20(v9);
  else
    v10 = *(_QWORD *)(v9 + 24);
  v11 = *(_QWORD *)(a1 + 104);
  v12 = *(_QWORD *)(v11 + 96);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_13;
  }
  else
  {
    if ( v13 <= 3 || (v12 & 2) == 0 )
      goto LABEL_13;
    v29 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    v30 = v29[2275];
    if ( !v30 )
    {
      *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_13;
    }
    v31 = v29[274];
    v29[284] += 24LL;
    v13 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v13 + 24;
    if ( v29[275] >= v13 + 24 && v31 )
    {
      v29[274] = a2;
    }
    else
    {
      a2 = 24;
      v13 = sub_820510((__int64)(v29 + 274), 24, 3);
    }
    *(_QWORD *)v13 = v30;
    *(_DWORD *)(v13 + 8) = 0;
    v12 = v13 | 5;
    *(_QWORD *)(v13 + 16) = v11;
    *(_QWORD *)(v11 + 96) = v13 | 5;
    LOBYTE(v13) = v13 & 0xFA | 4;
  }
  if ( (v13 & 4) != 0 )
  {
    v14 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v14 )
    {
      v37 = *(_QWORD *)v14;
      v38 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
      if ( v14[2] != v38 )
      {
        v14[2] = v38;
        a2 = v11;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 144LL))(v37, v11);
      }
    }
  }
LABEL_13:
  v15 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v15 + 24) & 1) != 0 )
    sub_7A2E20(v15);
  v16 = *(_QWORD *)(a1 + 104);
  v17 = *(_QWORD *)(v16 + 96);
  v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v17 & 1) != 0 )
  {
    if ( v18 )
      goto LABEL_17;
  }
  else if ( v18 > 3 && (v17 & 2) != 0 )
  {
    v26 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
    v27 = v26[2275];
    if ( v27 )
    {
      v28 = v26[274];
      v26[284] += 24LL;
      v18 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v18 + 24;
      if ( v26[275] >= v18 + 24 && v28 )
      {
        v26[274] = a2;
      }
      else
      {
        a2 = 24;
        v18 = sub_820510((__int64)(v26 + 274), 24, 3);
      }
      *(_QWORD *)v18 = v27;
      *(_DWORD *)(v18 + 8) = 0;
      v17 = v18 | 5;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v16 + 96) = v18 | 5;
      LOBYTE(v18) = v18 & 0xFA | 4;
LABEL_17:
      if ( (v18 & 4) != 0 )
      {
        v19 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v19 )
        {
          v39 = *(_QWORD *)v19;
          v40 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
          if ( v19[2] != v40 )
          {
            v19[2] = v40;
            a2 = v16;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 144LL))(v39, v16);
          }
        }
      }
      goto LABEL_19;
    }
    *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
  }
LABEL_19:
  for ( i = 0; ; ++i )
  {
    v21 = *(_QWORD *)(**(_QWORD **)(v10 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(_QWORD *)(v21 + 8);
    if ( (v22 & 7) != 0 || (v22 & 8) != 0 )
      v21 = sub_B0CF30(**(_QWORD **)(v10 + 16), a2);
    v23 = sub_B0E910(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL));
    v24 = *(__int64 (**)())(*(_QWORD *)v23 + 32LL);
    if ( v24 != sub_6A41B0 )
      break;
    if ( sub_777E10(v23) == v4 )
      return i;
LABEL_21:
    v10 += 24;
  }
  if ( ((__int64 (__fastcall *)(__int64))v24)(v23) != v4 )
    goto LABEL_21;
  return i;
}

