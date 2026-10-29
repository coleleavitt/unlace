__int64 __fastcall sub_853F60(__int64 *a1, __int64 a2)
{
  __int16 v4; // ax
  __int64 v6; // rsi
  __int64 v7; // rsi
  _WORD *v8; // r12
  _WORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 (*v18)(void); // rax
  __int64 v19; // rax
  __int64 (*v20)(); // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  size_t v25; // r12
  int v26; // r13d
  __int64 v27; // rdx
  char *v28; // rsi
  __int64 v29; // rdx
  _WORD *v30; // r12
  _WORD *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 (*v38)(void); // rax
  __int64 v39; // rax
  __int64 (*v40)(); // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r12
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 (*v49)(void); // rax
  __int64 v50; // r14
  __int64 (*v51)(); // rax
  __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // rax
  _QWORD *v55; // rdi
  __int64 v56; // rax
  _QWORD *v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rdi
  __int64 v62; // [rsp+0h] [rbp-88h]
  __int64 v63; // [rsp+0h] [rbp-88h]
  __int64 v64; // [rsp+0h] [rbp-88h]
  __int64 v65; // [rsp+0h] [rbp-88h]
  __int64 v66; // [rsp+8h] [rbp-80h]
  __int64 v67; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+18h] [rbp-70h] BYREF
  __int64 v69; // [rsp+20h] [rbp-68h]
  _QWORD v70[12]; // [rsp+28h] [rbp-60h] BYREF

  v4 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0xF )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( !(unsigned __int8)sub_854640(a1, v7) )
      return 0;
    if ( !*(_DWORD *)(a2 + 4) )
      return 1;
    v8 = &sub_80C750((_WORD *)a2)[4 * *(unsigned int *)(a2 + 4) - 4];
    v9 = sub_80C750((_WORD *)a2);
    if ( v8 == v9 )
    {
LABEL_61:
      v42 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v43 = *(_QWORD *)v42;
      if ( *(_BYTE *)(*(_QWORD *)v42 + 16LL) != 32 )
        v43 = sub_B0D320(v43);
      v44 = a1[1];
      v45 = sub_B0E910(*(_QWORD *)(v43 + 40));
      v46 = *(_QWORD *)v44;
      if ( *(_QWORD *)v44 <= 7u )
        return 1;
      v47 = *(unsigned int *)(v44 + 16);
      if ( (v46 & 4) == 0 )
      {
        if ( *(unsigned int *)(v44 + 20) < (unsigned __int64)(v47 + 1) )
        {
          sub_25D6060(v44 + 8, v44 + 24, v47 + 1, 8);
          v47 = *(unsigned int *)(v44 + 16);
        }
        *(_QWORD *)(*(_QWORD *)(v44 + 8) + 8 * v47) = v45;
        ++*(_DWORD *)(v44 + 16);
        return 1;
      }
      if ( (unsigned int)v47 <= 1 )
      {
        v60 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v61 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v60 & 4) != 0 )
          v61 = (_QWORD *)*v61;
        if ( !v61 )
LABEL_110:
          BUG();
        v48 = (__int64)(v61 - 8);
      }
      else
      {
        v48 = *(_QWORD *)(*(_QWORD *)(v44 + 8) + 8 * v47 - 16);
      }
      v49 = *(__int64 (**)(void))(*(_QWORD *)v48 + 32LL);
      if ( v49 == sub_6A41B0 )
        v50 = sub_777E10(v48);
      else
        v50 = v49();
      v51 = *(__int64 (**)())(*(_QWORD *)v45 + 32LL);
      if ( v51 == sub_6A41B0 )
        v52 = sub_777E10(v45);
      else
        v52 = ((__int64 (__fastcall *)(__int64))v51)(v45);
      if ( v50 == v52 )
      {
        v53 = (*(_DWORD *)(v44 + 16))-- == 1;
        if ( v53 )
          *(_QWORD *)v44 &= ~4uLL;
        return 1;
      }
LABEL_22:
      sub_827830(*a1, a2, 110);
      return 0;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(**(_QWORD **)(*((_QWORD *)v8 - 1) + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
      v11 = *(_QWORD *)(v10 + 8);
      if ( (v11 & 7) != 0 || (v11 & 8) != 0 )
        v10 = sub_B0CF30(**(_QWORD **)(*((_QWORD *)v8 - 1) + 16LL), v7);
      v12 = sub_B0E910(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL));
      v13 = a1[1];
      v14 = v12;
      v15 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 <= 7u )
        goto LABEL_60;
      v16 = *(unsigned int *)(v13 + 16);
      if ( (v15 & 4) == 0 )
        break;
      if ( (unsigned int)v16 <= 1 )
      {
        v56 = *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v57 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v56 & 4) != 0 )
          v57 = (_QWORD *)*v57;
        if ( !v57 )
          goto LABEL_110;
        v17 = (__int64)(v57 - 8);
      }
      else
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * v16 - 16);
      }
      v66 = v14;
      v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 32LL);
      if ( v18 == sub_6A41B0 )
        v19 = sub_777E10(v17);
      else
        v19 = v18();
      v62 = v19;
      v20 = *(__int64 (**)())(*(_QWORD *)v66 + 32LL);
      if ( v20 == sub_6A41B0 )
        v21 = sub_777E10(v66);
      else
        v21 = ((__int64 (__fastcall *)(__int64))v20)(v66);
      if ( v62 != v21 )
        goto LABEL_22;
      v53 = (*(_DWORD *)(v13 + 16))-- == 1;
      if ( v53 )
      {
        v8 -= 4;
        *(_QWORD *)v13 &= ~4uLL;
        if ( v9 == v8 )
          goto LABEL_61;
      }
      else
      {
LABEL_60:
        v8 -= 4;
        if ( v9 == v8 )
          goto LABEL_61;
      }
    }
    if ( *(unsigned int *)(v13 + 20) < (unsigned __int64)(v16 + 1) )
    {
      v7 = v13 + 24;
      v65 = v14;
      sub_25D6060(v13 + 8, v13 + 24, v16 + 1, 8);
      v16 = *(unsigned int *)(v13 + 16);
      v14 = v65;
    }
    *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * v16) = v14;
    ++*(_DWORD *)(v13 + 16);
    goto LABEL_60;
  }
  if ( (_BYTE)v4 != 16 )
  {
    if ( (_BYTE)v4 != 14 )
      return sub_8703B0();
    sub_857160(*a1, *(_QWORD *)(a2 + 16));
    v22 = a1[1];
    src = v70;
    v69 = 0x400000000LL;
    *(_QWORD *)v22 = 0;
    v23 = src;
    if ( (void **)(v22 + 8) == &src )
      goto LABEL_84;
    if ( src != v70 )
    {
      if ( *(_QWORD *)(v22 + 8) != v22 + 24 )
      {
        free(*(void **)(v22 + 8));
        v23 = src;
      }
      *(_QWORD *)(v22 + 8) = v23;
      *(_QWORD *)(v22 + 16) = v69;
      return 1;
    }
    v24 = (unsigned int)v69;
    v25 = *(unsigned int *)(v22 + 16);
    v26 = v69;
    if ( v25 >= (unsigned int)v69 )
    {
      if ( (_DWORD)v69 )
      {
        if ( (unsigned int)v69 == 1 )
          **(_QWORD **)(v22 + 8) = v70[0];
        else
          memmove(*(void **)(v22 + 8), src, 8LL * (unsigned int)v69);
        v23 = src;
      }
      goto LABEL_83;
    }
    if ( *(unsigned int *)(v22 + 20) < (unsigned __int64)(unsigned int)v69 )
    {
      v25 = 0;
      *(_DWORD *)(v22 + 16) = 0;
      sub_25D6060(v22 + 8, v22 + 24, v24, 8);
      v23 = src;
      v27 = (unsigned int)v69;
      v28 = (char *)src;
    }
    else
    {
      if ( !*(_DWORD *)(v22 + 16) )
      {
        v29 = 8LL * (unsigned int)v69;
        v28 = (char *)v70;
        goto LABEL_82;
      }
      v25 *= 8LL;
      if ( v25 == 8 )
      {
        **(_QWORD **)(v22 + 8) = v70[0];
        v23 = src;
        v27 = (unsigned int)v69;
        v28 = (char *)src + 8;
      }
      else
      {
        memmove(*(void **)(v22 + 8), src, v25);
        v23 = src;
        v27 = (unsigned int)v69;
        v28 = (char *)src + v25;
      }
    }
    v29 = 8 * v27;
    if ( v29 == v25 )
    {
LABEL_83:
      *(_DWORD *)(v22 + 16) = v26;
LABEL_84:
      if ( v23 != v70 )
        free(v23);
      return 1;
    }
LABEL_82:
    memcpy((void *)(v25 + *(_QWORD *)(v22 + 8)), v28, v29 - v25);
    v23 = src;
    goto LABEL_83;
  }
  v6 = *(_QWORD *)(a2 + 16);
  if ( !(unsigned __int8)sub_854640(a1, v6) )
    return 0;
  v30 = sub_80C750((_WORD *)a2);
  v31 = &sub_80C750((_WORD *)a2)[4 * *(unsigned int *)(a2 + 4)];
  if ( v31 != v30 )
  {
    while ( 1 )
    {
      v32 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v30 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
      v33 = *(_QWORD *)(v32 + 8);
      if ( (v33 & 7) != 0 || (v33 & 8) != 0 )
        v32 = sub_B0CF30(**(_QWORD **)(*(_QWORD *)v30 + 16LL), v6);
      v34 = sub_B0E910(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL));
      v35 = a1[1];
      v59 = v34;
      v36 = *(_QWORD *)v35;
      if ( *(_QWORD *)v35 <= 7u )
        goto LABEL_38;
      v58 = *(unsigned int *)(v35 + 16);
      if ( !(_DWORD)v58 )
        break;
      if ( (v36 & 4) != 0 )
        goto LABEL_35;
      if ( (_DWORD)v58 == 1 )
      {
        v54 = *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v55 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v54 & 4) != 0 )
          v55 = (_QWORD *)*v55;
        if ( !v55 )
          goto LABEL_110;
        v37 = (__int64)(v55 - 8);
      }
      else
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v35 + 8) + 8 * v58 - 16);
      }
      v67 = v59;
      v38 = *(__int64 (**)(void))(*(_QWORD *)v37 + 32LL);
      if ( v38 == sub_6A41B0 )
        v39 = sub_777E10(v37);
      else
        v39 = v38();
      v63 = v39;
      v40 = *(__int64 (**)())(*(_QWORD *)v67 + 32LL);
      if ( v40 == sub_6A41B0 )
        v41 = sub_777E10(v67);
      else
        v41 = ((__int64 (__fastcall *)(__int64))v40)(v67);
      if ( v63 != v41 )
        goto LABEL_22;
      --*(_DWORD *)(v35 + 16);
LABEL_38:
      v30 += 4;
      if ( v30 == v31 )
        return 1;
    }
    *(_QWORD *)v35 = v36 | 4;
LABEL_35:
    if ( *(unsigned int *)(v35 + 20) < (unsigned __int64)(v58 + 1) )
    {
      v6 = v35 + 24;
      v64 = v59;
      sub_25D6060(v35 + 8, v35 + 24, v58 + 1, 8);
      v58 = *(unsigned int *)(v35 + 16);
      v59 = v64;
    }
    *(_QWORD *)(*(_QWORD *)(v35 + 8) + 8 * v58) = v59;
    ++*(_DWORD *)(v35 + 16);
    goto LABEL_38;
  }
  return 1;
}

