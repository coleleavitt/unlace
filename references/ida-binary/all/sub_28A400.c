__int64 __fastcall sub_28A400(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 fchunk; // rsi
  __int64 v4; // rdi
  bool v5; // al
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // r15
  bool v17; // zf
  const __int16 *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  const char *v23; // rsi
  _QWORD *v24; // r15
  _QWORD *v25; // r14
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  unsigned int v33; // r13d
  __int64 *v34; // rbx
  __int64 v35; // rdi
  __int64 v37; // rsi
  __int64 v38; // [rsp+10h] [rbp-158h] BYREF
  int v39; // [rsp+18h] [rbp-150h]
  __int64 v40; // [rsp+20h] [rbp-148h] BYREF
  __int128 v41; // [rsp+28h] [rbp-140h]
  __int64 v42; // [rsp+40h] [rbp-128h] BYREF
  __int128 v43; // [rsp+48h] [rbp-120h]
  __int64 (__fastcall **v44)(); // [rsp+60h] [rbp-108h] BYREF
  __int64 v45; // [rsp+68h] [rbp-100h]
  __int128 v46; // [rsp+70h] [rbp-F8h]
  __int64 v47; // [rsp+80h] [rbp-E8h]
  const char *v48; // [rsp+88h] [rbp-E0h]
  int v49; // [rsp+90h] [rbp-D8h]
  _QWORD v50[2]; // [rsp+98h] [rbp-D0h] BYREF
  int v51; // [rsp+A8h] [rbp-C0h]
  char v52; // [rsp+B0h] [rbp-B8h] BYREF
  char v53; // [rsp+F8h] [rbp-70h] BYREF
  _DWORD v54[2]; // [rsp+110h] [rbp-58h] BYREF
  unsigned __int64 *v55; // [rsp+118h] [rbp-50h]
  __int64 *v56; // [rsp+120h] [rbp-48h]
  unsigned __int64 v57; // [rsp+128h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v38 = 0;
  fchunk = get_fchunk(a2);
  func_parent_iterator_set(&v38, fchunk);
  v4 = v38;
  v39 = 0;
  v5 = 0;
  if ( v38 && *(char *)(v38 + 17) < 0 )
  {
    fchunk = *(unsigned int *)(v38 + 32);
    v5 = (int)fchunk > 0;
  }
  v6 = a1[1];
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 40);
      v8 = v6 + 1;
      fchunk = *a1;
      v9 = *(_QWORD *)(v7 + 8LL * v39);
      v10 = a1[2];
      v42 = v9;
      if ( (unsigned __int64)&v42 < fchunk || (unsigned __int64)&v42 >= fchunk + 8 * v10 )
      {
        if ( v10 < v8 )
        {
          v29 = qvector_reserve(a1, fchunk, v8, 8);
          v6 = a1[1];
          v9 = v42;
          *a1 = v29;
          fchunk = v29;
        }
      }
      else if ( v10 < v8 )
      {
        v30 = qvector_reserve(a1, fchunk, v8, 8);
        *a1 = v30;
        v6 = a1[1];
        fchunk = v30;
      }
      *(_QWORD *)(fchunk + 8 * v6) = v9;
      v4 = v38;
      v6 = a1[1] + 1;
      v11 = v39;
      a1[1] = v6;
      v12 = v11 + 1;
      if ( v12 >= *(_DWORD *)(v4 + 32) )
        break;
      v39 = v12;
    }
  }
  if ( !v6 )
  {
    v33 = 0;
    goto LABEL_45;
  }
  if ( v6 == 1 )
  {
    v33 = 1;
    goto LABEL_45;
  }
  v40 = 0;
  v45 = 0x7FF000004LL;
  v44 = (__int64 (__fastcall **)())&stru_86F6A0;
  v47 = 0;
  v49 = 16;
  v50[0] = 0;
  v51 = -1;
  v48 = "Please select the function parent(s)";
  v41 = 0;
  v50[1] = &off_860AE0;
  v13 = &v52;
  v46 = -1;
  do
  {
    *(_QWORD *)v13 = 0;
    v13 += 24;
    *((_OWORD *)v13 - 1) = 0;
  }
  while ( v54 != (_DWORD *)v13 );
  v54[0] = 0;
  v14 = HIDWORD(v45);
  if ( ((HIDWORD(v45) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v45) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, fchunk, HIDWORD(v45), ((HIDWORD(v45) >> 19) & 0x3F) - 1, 0.0);
      BUG();
    }
    v14 = HIDWORD(v45) & 0xFE07FFFF;
    BYTE3(v45) = ((HIDWORD(v45) >> 19) & 0x3F) - 1;
    HIDWORD(v45) &= 0xFE07FFFF;
  }
  v44 = (__int64 (__fastcall **)())&unk_870D58;
  v15 = *(_DWORD *)(get_eah(v4, fchunk, v14) + 24);
  v16 = a1[1];
  v44 = fchunk_parent_chooser_t___vtable;
  v17 = v15 == 4;
  v54[1] = v15;
  v18 = L" %\b";
  if ( v17 )
    v18 = L" %\b";
  v19 = v41;
  v55 = a1;
  v56 = &v40;
  v50[0] = v18;
  v51 = 41;
  if ( (unsigned __int64)v41 < v16 )
  {
    v37 = v40;
    if ( *((_QWORD *)&v41 + 1) < v16 )
    {
      v40 = qvector_reserve(&v40, v40, v16, 8);
      v19 = v41;
      v37 = v40;
    }
    memset((void *)(v37 + 8 * v19), 0, 8 * (v16 - v19));
    goto LABEL_21;
  }
  if ( v16 != (_QWORD)v41 )
  {
LABEL_21:
    *(_QWORD *)&v41 = v16;
    v19 = v16;
  }
  v20 = v40;
  if ( v40 != v40 + 8 * v19 )
  {
    v21 = 0;
    v22 = (8 * v19 - 8) >> 3;
    do
    {
      *(_QWORD *)(v20 + 8 * v21) = (int)v21;
      v19 = v21++;
    }
    while ( v19 != v22 );
  }
  v23 = (const char *)&v40;
  if ( sub_4AED50(&v44, &v40, v19, v20) < 0 )
  {
    v33 = 0;
  }
  else
  {
    v24 = (_QWORD *)v40;
    v42 = 0;
    v43 = 0;
    v25 = (_QWORD *)(v40 + 8 * v41);
    if ( (_QWORD *)v40 == v25 )
    {
      v26 = 0;
      v27 = 0;
      v23 = nullptr;
    }
    else
    {
      v23 = nullptr;
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = *(_QWORD *)(*a1 + 8LL * *v24);
        if ( v26 < v27 + 1 )
        {
          v42 = qvector_reserve(&v42, v23, v27 + 1, 8);
          v23 = (const char *)v42;
          v27 = v43;
        }
        *(_QWORD *)&v23[8 * v27] = v28;
        ++v24;
        v23 = (const char *)v42;
        v26 = *((_QWORD *)&v43 + 1);
        v27 = v43 + 1;
        *(_QWORD *)&v43 = v43 + 1;
      }
      while ( v25 != v24 );
    }
    v31 = *a1;
    v32 = a1[2];
    *a1 = (unsigned __int64)v23;
    a1[1] = v27;
    a1[2] = v26;
    v42 = v31;
    *((_QWORD *)&v43 + 1) = v32;
    if ( v31 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v31, v23);
    }
    v33 = 1;
  }
  v44 = (__int64 (__fastcall **)())&stru_86F6A0;
  v34 = (__int64 *)&v53;
  do
  {
    v35 = *v34;
    if ( *v34 )
    {
      v34[1] = 0;
      qfree(v35, v23);
    }
    v34 -= 3;
  }
  while ( v50 != v34 );
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, v23);
  }
  v4 = v38;
LABEL_45:
  if ( v4 )
    lock_func_range(v4, 0);
  return v33;
}
