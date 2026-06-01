__int64 __fastcall sub_C8DA40(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  __int64 *v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  int v16; // r13d
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rdx
  unsigned __int8 v23; // dl
  __int64 v24; // rax
  int v25; // r12d
  int v26; // r14d
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // ebx
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r13
  unsigned __int8 v36; // dl
  __int64 v37; // rax
  unsigned int v38; // r15d
  size_t v39; // rsi
  char **exception; // rbx
  unsigned int *v41; // rax
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-78h] BYREF
  __int64 v49; // [rsp+8h] [rbp-70h] BYREF
  __int64 v50; // [rsp+10h] [rbp-68h] BYREF
  __int64 v51; // [rsp+18h] [rbp-60h] BYREF
  __int64 v52[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v52[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_C8B2F0(a1 + 7, v52);
    v18 = (_QWORD *)a1[11];
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v30 = (3 * v19 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v31 || v19 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C8AA10(v52, "Overflow encountered when expanding vector");
LABEL_53:
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v52);
          sub_233E40((__int64)v52);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v18 - 1, v31);
        v33 = v32[1];
        v18 = v32 + 2;
        *v32 = v30;
        a1[11] = v32 + 2;
        LODWORD(v32) = v33;
        v22 = &v18[v33];
        v21 = (_DWORD)v32 + 1;
      }
      else
      {
        v20 = v19;
        v21 = v19 + 1;
        v22 = &v18[v20];
      }
    }
    else
    {
      v45 = (_QWORD *)sub_186B270(0x18u);
      v18 = v45 + 1;
      *v45 = 2;
      v21 = 1;
      a1[11] = v18;
      v22 = v18;
    }
    *v22 = 0;
    *((_DWORD *)v18 - 1) = v21;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v16 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_19:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_37;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = a1[1];
      ++*(_DWORD *)(a2 + 8);
      v8 = (__int64 *)a1[18];
      v9 = *(_QWORD *)(a2 + 16);
      sub_C8A9D0(a1[62], a1[63]);
      a1[62] = 0;
      if ( (unsigned int)sub_C8AAA0(v8, v9, nullptr, a1 + 60) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v52[0] = a2;
        sub_C8B2F0(a1 + 7, v52);
        v51 = 0;
        sub_C8B230(a1 + 11, &v51);
      }
      else
      {
        v10 = a1[60];
        v50 = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        sub_C8B2F0(a1 + 7, &v50);
        v11 = a1[62];
        if ( v11 )
        {
          ++*(_DWORD *)(v11 + 8);
          v49 = v11;
          sub_C8B230(a1 + 11, &v49);
        }
        else
        {
          v47 = sub_15DE370(a1[1]);
          v48 = v47;
          if ( v47 )
            ++*(_DWORD *)(v47 + 8);
          sub_C8B230(a1 + 11, &v48);
        }
        sub_C8A9D0(a1[62], a1[63]);
        v12 = a1[61];
        v13 = a1[60];
        a1[62] = 0;
        sub_C8A9F0(v13, v12);
        a1[60] = 0;
        v14 = a1[5];
        if ( v14 )
        {
          v15 = *(_DWORD *)(v14 - 4);
          if ( v15 )
            *(_BYTE *)(v14 + 16LL * (unsigned int)(v15 - 1) + 8) |= 2u;
        }
      }
      sub_C8A9D0(a2, v7);
      return 1;
    }
    v34 = sub_1680FB0(a1[4], a2, 0);
    v35 = v34;
    if ( v34 )
    {
      v52[0] = v34;
      ++*(_DWORD *)(v34 + 8);
      sub_C8B2F0(a1 + 7, v52);
      if ( a2 != v35 )
      {
        v42 = a1[5];
        if ( v42 )
        {
          v43 = *(_DWORD *)(v42 - 4);
          if ( v43 )
            *(_BYTE *)(v42 + 16LL * (unsigned int)(v43 - 1) + 8) |= 2u;
        }
      }
      v44 = sub_1680FB0(a1[9], a2, 0);
      v52[0] = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      sub_C8B230(a1 + 11, v52);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v16 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_37:
    sub_C8D6D0(a1, a2);
    return 1;
  }
  if ( v5 != 2 )
  {
    if ( v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v36 = 3;
    if ( a3 != 3 )
      v36 = (a3 - 1) & 3;
    v37 = a1[7];
    v25 = v36;
    if ( v37 )
      v26 = *(_DWORD *)(v37 - 4);
    else
      v26 = 0;
    v27 = (_QWORD *)a1[5];
    if ( v27 )
    {
      v28 = *((unsigned int *)v27 - 1);
      if ( (_DWORD)v28 == *((_DWORD *)v27 - 2) )
      {
        v38 = (unsigned int)(3 * v28 + 1) >> 1;
        v39 = 16 * v38 + 8;
        if ( 16 * (int)v28 + 8 >= (unsigned int)v39 || (unsigned int)v28 >= v38 )
        {
LABEL_52:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C8AA10(v52, "Overflow encountered when expanding vector");
          goto LABEL_53;
        }
        goto LABEL_56;
      }
      goto LABEL_33;
    }
LABEL_68:
    v46 = (_QWORD *)sub_186B270(0x28u);
    v27 = v46 + 1;
    *v46 = 2;
    a1[5] = v46 + 1;
    v29 = (__int64)(v46 + 1);
    goto LABEL_34;
  }
  v23 = 3;
  if ( a3 != 3 )
    v23 = (a3 - 1) & 3;
  v24 = a1[7];
  v25 = v23;
  if ( v24 )
    v26 = *(_DWORD *)(v24 - 4);
  else
    v26 = 0;
  v27 = (_QWORD *)a1[5];
  if ( !v27 )
    goto LABEL_68;
  v28 = *((unsigned int *)v27 - 1);
  if ( (_DWORD)v28 == *((_DWORD *)v27 - 2) )
  {
    v38 = (unsigned int)(3 * v28 + 1) >> 1;
    v39 = 16 * v38 + 8;
    if ( 16 * (int)v28 + 8 >= (unsigned int)v39 || (unsigned int)v28 >= v38 )
      goto LABEL_52;
LABEL_56:
    v41 = (unsigned int *)sub_186B300(v27 - 1, v39);
    v27 = v41 + 2;
    a1[5] = v41 + 2;
    *v41 = v38;
    v29 = (__int64)&v41[4 * v41[1] + 2];
    goto LABEL_34;
  }
LABEL_33:
  v29 = (__int64)&v27[2 * v28];
LABEL_34:
  *(_QWORD *)v29 = a2;
  *(_DWORD *)(v29 + 12) = v26;
  *(_DWORD *)(v29 + 8) = v16 | (16 * v25);
  ++*((_DWORD *)v27 - 1);
  return 0;
}

