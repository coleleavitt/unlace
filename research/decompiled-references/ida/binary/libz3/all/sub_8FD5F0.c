__int64 __fastcall sub_8FD5F0(__int64 a1, unsigned int a2, __int64 *a3, unsigned __int8 a4, __m128i a5, __m128 a6)
{
  char **exception; // r12
  __int64 (__fastcall *v9)(__int64, unsigned __int8); // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  bool v12; // cc
  __int64 *v13; // r14
  int v14; // esi
  int v15; // eax
  char *v16; // rdi
  int v17; // ecx
  char *v18; // rdx
  unsigned int v19; // esi
  char *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // r12
  void *v23; // rcx
  char *v24; // rdi
  int v25; // ecx
  __int64 v26; // rsi
  char *v27; // rax
  char *v28; // rdx
  unsigned int v29; // ebx
  __int64 v30; // r12
  __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 *v36; // r12
  int v37; // edx
  __int64 *v38; // rcx
  unsigned int v39; // edx
  _QWORD *v40; // rbx
  _QWORD *i; // r13
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 *v48; // r12
  unsigned int v49; // ebx
  unsigned __int64 v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 result; // rax
  unsigned int v55; // r13d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rax
  int v59; // edx
  __int64 v60; // rax
  _QWORD *v61; // rdx
  _QWORD *v62; // r12
  _QWORD *v63; // r13
  char j; // al
  unsigned int v65; // [rsp+0h] [rbp-78h]
  __int64 v67; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v68; // [rsp+18h] [rbp-60h]
  __int64 v69[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !(unsigned __int8)sub_8F7A60(a1, a4) )
    return 0;
  v9 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)a1 + 8LL);
  if ( v9 == sub_8E5130 )
  {
    if ( *(_BYTE *)(a1 + 176) || *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
    {
      v10 = *(_QWORD *)(a1 + 112);
      v11 = *(_DWORD *)(a1 + 184);
      if ( v11 > *(_DWORD *)(v10 + 476) )
        v11 = *(_DWORD *)(v10 + 476);
      *(_DWORD *)(a1 + 184) = v11;
    }
    else
    {
      sub_8E5080(a1, 0);
      v10 = *(_QWORD *)(a1 + 112);
    }
  }
  else
  {
    v9(a1, 0);
    v10 = *(_QWORD *)(a1 + 112);
  }
  v12 = *(_DWORD *)(v10 + 540) <= 1u;
  *(_BYTE *)(a1 + 10440) = 0;
  if ( !v12 && !*(_QWORD *)(*(_QWORD *)(a1 + 104) + 912LL) )
  {
    v69[0] = *(_QWORD *)(a1 + 104);
    v69[1] = 0;
    sub_3A6490((__int64)v69, a2, a3);
    v67 = a1;
    v65 = sub_B61920(&v67, (__int64)v69);
    sub_2334C0(v69);
    result = v65;
    goto LABEL_64;
  }
  v13 = &a3[a2];
  while ( 1 )
  {
    v14 = *(_DWORD *)(a1 + 9464);
    v15 = *(_DWORD *)(a1 + 9468);
    if ( v14 == v15 )
      goto LABEL_41;
    sub_8F73F0(a1, v14 - v15);
    if ( *(_DWORD *)(a1 + 9068) || *(_DWORD *)(a1 + 9072) )
    {
      v16 = *(char **)(a1 + 9056);
      v17 = 0;
      v18 = &v16[8 * *(unsigned int *)(a1 + 9064)];
      v19 = *(_DWORD *)(a1 + 9064);
      v20 = v16;
      if ( v16 == v18 )
        goto LABEL_25;
      do
      {
        while ( *(_QWORD *)v20 )
        {
          *(_QWORD *)v20 = 0;
          v20 += 8;
          if ( v18 == v20 )
            goto LABEL_19;
        }
        v20 += 8;
        ++v17;
      }
      while ( v18 != v20 );
LABEL_19:
      if ( v19 <= 0x10 || 3 * v19 >= 4 * v17 )
        goto LABEL_25;
      if ( v16 )
      {
        sub_186B220(v16);
        v21 = *(_DWORD *)(a1 + 9064);
        *(_QWORD *)(a1 + 9056) = 0;
        v21 >>= 1;
        *(_DWORD *)(a1 + 9064) = v21;
        v22 = v21;
        v23 = (void *)sub_186B270(8LL * v21);
        if ( !v21 )
        {
LABEL_24:
          *(_QWORD *)(a1 + 9056) = v23;
LABEL_25:
          *(_QWORD *)(a1 + 9068) = 0;
          goto LABEL_26;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 9056) = 0;
        *(_DWORD *)(a1 + 9064) = v19 >> 1;
        v22 = v19 >> 1;
        v23 = (void *)sub_186B270(8 * v22);
      }
      v23 = memset(v23, 0, 8 * v22);
      goto LABEL_24;
    }
LABEL_26:
    if ( *(_DWORD *)(a1 + 9044) || *(_DWORD *)(a1 + 9048) )
    {
      v24 = *(char **)(a1 + 9032);
      v25 = 0;
      v26 = *(unsigned int *)(a1 + 9040);
      v27 = v24;
      v28 = &v24[16 * v26];
      if ( v24 == v28 )
        goto LABEL_40;
      do
      {
        while ( *(_QWORD *)v27 )
        {
          *(_QWORD *)v27 = 0;
          v27 += 16;
          if ( v28 == v27 )
            goto LABEL_33;
        }
        v27 += 16;
        ++v25;
      }
      while ( v28 != v27 );
LABEL_33:
      if ( (unsigned int)v26 <= 0x10 || 3 * (int)v26 >= (unsigned int)(4 * v25) )
        goto LABEL_40;
      if ( v24 )
      {
        sub_186B220(v24);
        v29 = *(_DWORD *)(a1 + 9040);
        *(_QWORD *)(a1 + 9032) = 0;
        v29 >>= 1;
        v30 = v29;
        *(_DWORD *)(a1 + 9040) = v29;
        v31 = sub_186B270(16LL * v29);
        if ( !v29 )
        {
LABEL_39:
          *(_QWORD *)(a1 + 9032) = v31;
LABEL_40:
          *(_QWORD *)(a1 + 9044) = 0;
          goto LABEL_41;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 9032) = 0;
        v30 = (unsigned int)v26 >> 1;
        *(_DWORD *)(a1 + 9040) = (unsigned int)v26 >> 1;
        v31 = sub_186B270(16 * v30);
      }
      v32 = (_QWORD *)v31;
      do
      {
        *v32 = 0;
        v32 += 2;
        *((_DWORD *)v32 - 2) = 0;
      }
      while ( v32 != (_QWORD *)(v31 + 16 * v30) );
      goto LABEL_39;
    }
LABEL_41:
    v33 = *(_QWORD *)(a1 + 104);
    v68 = nullptr;
    v67 = v33;
    if ( a2 )
    {
      v34 = *a3;
      if ( *a3 )
        ++*(_DWORD *)(v34 + 8);
      v35 = (__int64 *)(sub_186B270(0x18u) + 8);
      v36 = a3;
      v37 = 1;
      *(v35 - 1) = 2;
      v38 = v35;
      v68 = v35;
      while ( 1 )
      {
        ++v36;
        *v35 = v34;
        *((_DWORD *)v38 - 1) = v37;
        if ( v36 == v13 )
          break;
        while ( 1 )
        {
          v34 = *v36;
          if ( *v36 )
            ++*(_DWORD *)(v34 + 8);
          v39 = *((_DWORD *)v38 - 1);
          if ( v39 == *((_DWORD *)v38 - 2) )
            break;
          ++v36;
          v38[v39] = v34;
          *((_DWORD *)v38 - 1) = v39 + 1;
          if ( v36 == v13 )
            goto LABEL_50;
        }
        v55 = (3 * v39 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v39 + 8 >= (unsigned int)v56 || v39 >= v55 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v69, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v69);
          sub_233E40((__int64)v69);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v38 - 1, v56);
        v38 = (__int64 *)(v57 + 2);
        *v57 = v55;
        v58 = v57[1];
        v68 = v38;
        v59 = v58;
        v35 = &v38[v58];
        v37 = v59 + 1;
      }
    }
LABEL_50:
    sub_8EA730(a1);
    v40 = *(_QWORD **)(a1 + 8688);
    if ( v40 )
    {
      for ( i = &v40[*((unsigned int *)v40 - 1)]; i != v40; ++v40 )
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v40 + 120LL))(*v40, &v67);
    }
    sub_8F5580(a1, (__int64)&v67, a5, a6);
    v42 = sub_8FD390(a1);
    v47 = sub_8F82B0(a1, v42, v43, v44, v45, v46);
    v48 = v68;
    v49 = v47;
    if ( v68 )
    {
      v50 = (unsigned __int64)&v68[*((unsigned int *)v68 - 1)];
      if ( (unsigned __int64)v68 >= v50 )
        goto LABEL_61;
      do
      {
        while ( 1 )
        {
          v51 = *v48;
          if ( *v48 )
          {
            v52 = v67;
            if ( (*(_DWORD *)(v51 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v48 >= v50 )
            goto LABEL_60;
        }
        sub_15D7BC0(v52, v51);
        ++v48;
      }
      while ( (unsigned __int64)v48 < v50 );
LABEL_60:
      v48 = v68;
      if ( v68 )
LABEL_61:
        sub_186B220(v48 - 1);
    }
    if ( v49 != -1 )
      break;
    v60 = *(_QWORD *)(a1 + 9376);
    if ( !v60 )
      break;
    if ( !*(_DWORD *)(v60 - 4) )
      break;
    v61 = *(_QWORD **)(a1 + 8688);
    if ( !v61 )
      break;
    v62 = &v61[*((unsigned int *)v61 - 1)];
    if ( v61 == v62 )
      break;
    v63 = *(_QWORD **)(a1 + 8688);
    for ( j = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v63 + 136LL))(*v63, a1 + 9368);
          !j;
          j = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v63 + 136LL))(*v63, a1 + 9368) )
    {
      if ( v62 == ++v63 )
        goto LABEL_63;
    }
  }
LABEL_63:
  result = sub_8EC600(a1, v49);
LABEL_64:
  if ( !*(_BYTE *)(a1 + 10440) )
    *(_DWORD *)(a1 + 10308) = 3;
  return result;
}

