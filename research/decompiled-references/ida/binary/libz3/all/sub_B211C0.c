char __fastcall sub_B211C0(_QWORD *a1, int *a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v7; // rbx
  __int16 v8; // dx
  int v9; // esi
  char v10; // r15
  _DWORD *v11; // rax
  int v12; // eax
  int *v13; // rdx
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // r12
  void *v18; // r13
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // rax
  int *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int *v33; // rdi
  int *i; // rax
  int v35; // esi
  char v36; // r10
  __int64 v37; // rsi
  char v38; // r10
  __int64 v39; // rsi
  __int64 v40; // rax
  int *v41; // rsi
  __int64 v42; // rax
  unsigned int v43; // ebp
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  void *v50; // [rsp+8h] [rbp-90h]
  int *v51; // [rsp+10h] [rbp-88h]
  _DWORD *v52; // [rsp+18h] [rbp-80h]
  __int64 v53; // [rsp+20h] [rbp-78h]
  unsigned int v54; // [rsp+2Ch] [rbp-6Ch]
  __int64 v55[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = a3;
  v8 = *(_WORD *)(a3 + 4);
  v9 = *a2;
  if ( v8 )
  {
    if ( !v9 )
      goto LABEL_6;
    LOBYTE(v12) = *(_QWORD *)(*a1 + 856LL) == v7;
    return v12;
  }
  v10 = 1;
  do
  {
    v11 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( !v11 || *v11 || v11[1] != 8 || *(_DWORD *)(v7 + 24) != 1 )
    {
      if ( !v9 )
        goto LABEL_6;
      goto LABEL_10;
    }
    v7 = *(_QWORD *)(v7 + 32);
    v10 ^= 1u;
  }
  while ( !*(_WORD *)(v7 + 4) );
  v8 = *(_WORD *)(v7 + 4);
  if ( !v9 )
    goto LABEL_6;
LABEL_10:
  if ( *(_QWORD *)(*a1 + 856LL) == v7 )
    goto LABEL_6;
  if ( v8 || (v13 = *(int **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr )
  {
LABEL_15:
    LOBYTE(v12) = 0;
    return v12;
  }
  v12 = *v13;
  if ( !*v13 )
  {
    if ( v13[1] != 2 )
      return v12;
    goto LABEL_25;
  }
  if ( v12 != 5 )
    goto LABEL_15;
  v14 = v13[1];
  if ( v14 == 2 || v14 == 4 || v14 == 5 || (LOBYTE(v12) = 0, v13[1] == 3) )
  {
LABEL_25:
    v15 = a1[5];
    if ( v15 )
    {
      v16 = *(unsigned int *)(v15 - 4);
      if ( (_DWORD)v16 == *(_DWORD *)(v15 - 8) )
      {
        v54 = (unsigned int)(3 * v16 + 1) >> 1;
        v27 = 32 * v54 + 8;
        if ( 32 * (int)v16 + 8 >= v27 || (unsigned int)v16 >= (unsigned int)(3 * v16 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v55, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = sub_186B270(v27);
        v29 = (int *)a1[5];
        v30 = v28 + 8;
        v52 = (_DWORD *)v28;
        v31 = v28;
        v53 = v28 + 8;
        if ( v29 )
        {
          v32 = (unsigned int)*(v29 - 1);
          *(_DWORD *)(v31 + 4) = v32;
          v33 = &v29[8 * v32];
          for ( i = v29; v33 != i; *(_QWORD *)(v30 - 8) = v39 )
          {
            v35 = *i;
            v36 = *((_BYTE *)i + 4);
            i += 8;
            v30 += 32;
            *(_DWORD *)(v30 - 32) = v35;
            *(_BYTE *)(v30 - 28) = v36 & 3 | *(_BYTE *)(v30 - 28) & 0xFC;
            v37 = *((_QWORD *)i - 3);
            *((_QWORD *)i - 3) = 0;
            *(_QWORD *)(v30 - 24) = v37;
            v38 = *((_BYTE *)i - 12);
            *(_DWORD *)(v30 - 16) = *(i - 4);
            *(_BYTE *)(v30 - 12) = v38 & 3 | *(_BYTE *)(v30 - 12) & 0xFC;
            v39 = *((_QWORD *)i - 1);
            *((_QWORD *)i - 1) = 0;
          }
          v40 = (unsigned int)*(v29 - 1);
          if ( (_DWORD)v40 )
          {
            v51 = &v29[8 * v40];
            do
            {
              v50 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v29);
              v41 = v29 + 4;
              v29 += 8;
              sub_182CBA0(v50, v41);
            }
            while ( v29 != v51 );
            v29 = (int *)a1[5];
          }
          sub_186B220(v29 - 2);
          v42 = v53;
          v17 = (_QWORD *)(v53 + 32LL * (unsigned int)v52[1]);
        }
        else
        {
          *(_DWORD *)(v28 + 4) = 0;
          v17 = (_QWORD *)(v28 + 8);
          v42 = v28 + 8;
        }
        a1[5] = v42;
        *v52 = v54;
      }
      else
      {
        v17 = (_QWORD *)(32 * v16 + v15);
      }
    }
    else
    {
      v47 = (_QWORD *)sub_186B270(0x48u);
      *v47 = 2;
      v17 = v47 + 1;
      a1[5] = v47 + 1;
    }
    *v17 = 0;
    v18 = qword_1C7F2C0;
    v17[1] = 0;
    v17[2] = 1;
    v17[3] = 0;
    if ( (a2[1] & 1) != 0 )
      sub_182C690(v18, v17, a2);
    else
      *(_DWORD *)v17 = *a2;
    if ( (a2[5] & 1) != 0 )
    {
      sub_182C690(v18, v17 + 2, a2 + 4);
    }
    else
    {
      v19 = a2[4];
      *((_BYTE *)v17 + 20) &= ~1u;
      *((_DWORD *)v17 + 4) = v19;
    }
    ++*(_DWORD *)(a1[5] - 4LL);
    v20 = sub_B200B0((__int64)a1, v10, v7);
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v22 = (_QWORD *)a1[4];
    if ( v22 )
    {
      v23 = *((_DWORD *)v22 - 1);
      if ( v23 == *((_DWORD *)v22 - 2) )
      {
        v43 = (3 * v23 + 1) >> 1;
        v44 = 8 * v43 + 8;
        if ( 8 * v23 + 8 >= (unsigned int)v44 || v23 >= v43 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v55, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v45 = (unsigned int *)sub_186B300(v22 - 1, v44);
        v46 = v45[1];
        v22 = v45 + 2;
        *v45 = v43;
        a1[4] = v45 + 2;
        LODWORD(v45) = v46;
        v26 = &v22[v46];
        v25 = (_DWORD)v45 + 1;
      }
      else
      {
        v24 = v23;
        v25 = v23 + 1;
        v26 = &v22[v24];
      }
    }
    else
    {
      v48 = (_QWORD *)sub_186B270(0x18u);
      *v48 = 2;
      v25 = 1;
      v22 = v48 + 1;
      a1[4] = v22;
      v26 = v22;
    }
    *v26 = v21;
    *((_DWORD *)v22 - 1) = v25;
LABEL_6:
    LOBYTE(v12) = 1;
  }
  return v12;
}

