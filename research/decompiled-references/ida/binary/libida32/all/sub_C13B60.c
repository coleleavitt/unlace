__int64 __fastcall sub_C13B60(__int64 *a1, __int64 a2)
{
  __int16 v4; // ax
  unsigned int v5; // r13d
  __int64 v7; // rsi
  _WORD *v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  _WORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 (*v18)(void); // rax
  __int64 v19; // rax
  __int64 (*v20)(); // rax
  __int64 v21; // rax
  char ***v22; // rdi
  _WORD *v23; // r12
  _WORD *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned int v32; // edx
  __int64 v33; // rdi
  __int64 (*v34)(void); // rax
  __int64 (*v35)(); // rax
  __int64 v36; // rax
  bool v37; // zf
  __int64 v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r14
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 (*v45)(void); // rax
  __int64 (*v46)(); // rax
  __int64 v47; // rax
  _QWORD *v48; // rdi
  _QWORD *v49; // rdi
  _QWORD *v50; // rdi
  __int64 v51; // [rsp+0h] [rbp-88h]
  __int64 v52; // [rsp+0h] [rbp-88h]
  __int64 v53; // [rsp+0h] [rbp-88h]
  __int64 v54; // [rsp+0h] [rbp-88h]
  __int64 v55; // [rsp+8h] [rbp-80h]
  void *ptr[2]; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v57[96]; // [rsp+28h] [rbp-60h] BYREF

  v4 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 0xF )
  {
    if ( (_BYTE)v4 != 16 )
    {
      if ( (_BYTE)v4 != 14 )
        return (unsigned int)sub_C52840();
      sub_C1BDB0(*a1, *(_QWORD *)(a2 + 16));
      v22 = (char ***)a1[1];
      ptr[0] = v57;
      ++v22;
      ptr[1] = (void *)0x400000000LL;
      *(v22 - 1) = nullptr;
      sub_C022A0(v22, (char ***)ptr);
      if ( ptr[0] != v57 )
        free(ptr[0]);
      return 1;
    }
    if ( !(unsigned __int8)sub_C140A0(a1, *(_QWORD *)(a2 + 16)) )
      return 0;
    v23 = sub_BD68E0((_WORD *)a2);
    v24 = &sub_BD68E0((_WORD *)a2)[4 * *(unsigned int *)(a2 + 4)];
    if ( v24 == v23 )
      return 1;
    while ( 1 )
    {
      v26 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v23 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v26 + 8) & 0xF) != 0 )
        v26 = sub_F411C0(**(_QWORD **)(*(_QWORD *)v23 + 16LL));
      v27 = sub_F3F530(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL));
      v28 = a1[1];
      v29 = v27;
      v30 = *(_QWORD *)v28;
      v31 = *(_QWORD *)v28 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v31 )
        goto LABEL_32;
      v32 = *(_DWORD *)(v28 + 16);
      if ( !v32 )
        break;
      v25 = v32;
      if ( (v30 & 4) != 0 )
        goto LABEL_29;
      if ( v32 == 1 )
      {
        v48 = (_QWORD *)(*(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v31 + 16) & 4) != 0 )
          v48 = (_QWORD *)*v48;
        if ( !v48 )
          BUG();
        v33 = (__int64)(v48 - 8);
      }
      else
      {
        v33 = *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8LL * v32 - 16);
      }
      v34 = *(__int64 (**)(void))(*(_QWORD *)v33 + 32LL);
      if ( v34 == sub_9DD400 )
        v52 = sub_B4CD20(v33);
      else
        v52 = v34();
      v35 = *(__int64 (**)())(*(_QWORD *)v29 + 32LL);
      if ( v35 == sub_9DD400 )
        v36 = sub_B4CD20(v29);
      else
        v36 = ((__int64 (__fastcall *)(__int64))v35)(v29);
      if ( v52 != v36 )
        return (unsigned int)sub_BF05D0(*a1, a2);
      --*(_DWORD *)(v28 + 16);
LABEL_32:
      v23 += 4;
      if ( v23 == v24 )
        return 1;
    }
    v25 = 0;
    *(_QWORD *)v28 = v30 | 4;
LABEL_29:
    if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(v28 + 20) )
    {
      sub_22134E0(v28 + 8, v28 + 24, v25 + 1, 8);
      v25 = *(unsigned int *)(v28 + 16);
    }
    *(_QWORD *)(*(_QWORD *)(v28 + 8) + 8 * v25) = v29;
    ++*(_DWORD *)(v28 + 16);
    goto LABEL_32;
  }
  v7 = *(_QWORD *)(a2 + 16);
  v5 = sub_C140A0(a1, v7);
  if ( !(_BYTE)v5 )
    return 0;
  if ( !*(_DWORD *)(a2 + 4) )
    return 1;
  v8 = &sub_BD68E0((_WORD *)a2)[4 * *(unsigned int *)(a2 + 4) - 4];
  v12 = sub_BD68E0((_WORD *)a2);
  if ( v8 != v12 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(**(_QWORD **)(*((_QWORD *)v8 - 1) + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v13 + 8) & 0xF) != 0 )
        v13 = sub_F411C0(**(_QWORD **)(*((_QWORD *)v8 - 1) + 16LL));
      v14 = sub_F3F530(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
      v15 = a1[1];
      v16 = v14;
      v9 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        goto LABEL_48;
      v10 = *(unsigned int *)(v15 + 16);
      if ( (*(_QWORD *)v15 & 4) != 0 )
      {
        if ( v10 <= 1 )
        {
          v49 = (_QWORD *)(*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
            v49 = (_QWORD *)*v49;
          if ( !v49 )
            BUG();
          v17 = (__int64)(v49 - 8);
        }
        else
        {
          v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * v10 - 16);
        }
        v55 = v14;
        v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 32LL);
        if ( v18 == sub_9DD400 )
          v19 = sub_B4CD20(v17);
        else
          v19 = v18();
        v51 = v19;
        v20 = *(__int64 (**)())(*(_QWORD *)v55 + 32LL);
        if ( v20 == sub_9DD400 )
          v21 = sub_B4CD20(v55);
        else
          v21 = ((__int64 (__fastcall *)(__int64))v20)(v55);
        if ( v51 != v21 )
          return (unsigned int)sub_BF05D0(*a1, a2);
        v37 = (*(_DWORD *)(v15 + 16))-- == 1;
        if ( v37 )
          *(_QWORD *)v15 &= ~4uLL;
LABEL_48:
        v8 -= 4;
        if ( v12 == v8 )
          break;
      }
      else
      {
        v9 = v10 + 1;
        if ( v10 + 1 > *(unsigned int *)(v15 + 20) )
        {
          v7 = v15 + 24;
          v54 = v14;
          sub_22134E0(v15 + 8, v15 + 24, v9, 8);
          v10 = *(unsigned int *)(v15 + 16);
          v16 = v54;
        }
        v8 -= 4;
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * v10) = v16;
        ++*(_DWORD *)(v15 + 16);
        if ( v12 == v8 )
          break;
      }
    }
  }
  v38 = a1[1];
  v39 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v40 = *(_QWORD *)v39;
  if ( *(_BYTE *)(*(_QWORD *)v39 + 16LL) != 33 )
    v40 = sub_F3F310(v40, v7, v9, v10);
  v41 = sub_F3DED0(v40, v7, v9, v10, v11);
  v42 = *(_QWORD *)v38 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v42 )
    return 1;
  v43 = *(unsigned int *)(v38 + 16);
  if ( (*(_QWORD *)v38 & 4) != 0 )
  {
    if ( v43 <= 1 )
    {
      v50 = (_QWORD *)(*(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v42 + 16) & 4) != 0 )
        v50 = (_QWORD *)*v50;
      if ( !v50 )
        JUMPOUT(0x2E41B4);
      v44 = (__int64)(v50 - 8);
    }
    else
    {
      v44 = *(_QWORD *)(*(_QWORD *)(v38 + 8) + 8 * v43 - 16);
    }
    v45 = *(__int64 (**)(void))(*(_QWORD *)v44 + 32LL);
    if ( v45 == sub_9DD400 )
      v53 = sub_B4CD20(v44);
    else
      v53 = v45();
    v46 = *(__int64 (**)())(*(_QWORD *)v41 + 32LL);
    if ( v46 == sub_9DD400 )
      v47 = sub_B4CD20(v41);
    else
      v47 = ((__int64 (__fastcall *)(__int64))v46)(v41);
    if ( v53 != v47 )
      return (unsigned int)sub_BF05D0(*a1, a2);
    v37 = (*(_DWORD *)(v38 + 16))-- == 1;
    if ( v37 )
    {
      *(_QWORD *)v38 &= ~4uLL;
      return v5;
    }
    return 1;
  }
  if ( v43 + 1 > *(unsigned int *)(v38 + 20) )
  {
    sub_22134E0(v38 + 8, v38 + 24, v43 + 1, 8);
    v43 = *(unsigned int *)(v38 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(v38 + 8) + 8 * v43) = v41;
  ++*(_DWORD *)(v38 + 16);
  return v5;
}

