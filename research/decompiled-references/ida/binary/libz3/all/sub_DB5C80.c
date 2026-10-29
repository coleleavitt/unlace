__int64 __fastcall sub_DB5C80(__int64 a1, __int64 a2, int a3)
{
  char **exception; // rbp
  char **v4; // rbp
  __int16 v7; // ax
  int v8; // r14d
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 j; // rax
  int v23; // edx
  unsigned int v24; // r8d
  int v26; // ecx
  _QWORD *v27; // r13
  unsigned int v28; // eax
  unsigned int v29; // r15d
  _QWORD *v30; // rbp
  _DWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // edi
  unsigned int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 i; // rax
  int v42; // edx
  int v43; // eax
  _QWORD *v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // ecx
  unsigned int *v48; // rax
  __int64 v49; // rax
  int v50; // eax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  unsigned int v56; // ebp
  unsigned int v57; // ecx
  unsigned int *v58; // rdx
  __int64 v59; // rdx
  unsigned int v60; // [rsp+Ch] [rbp-6Ch]
  __int64 v61[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(_WORD *)(a2 + 4);
  if ( !v7 )
  {
    v26 = *(_DWORD *)(a2 + 24);
    if ( !v26 )
      return 1;
    v27 = (_QWORD *)(a2 + 24);
    v24 = 1;
    v28 = 33 * ((4097 * a3 + 2127912214) ^ ((unsigned int)(4097 * a3 + 2127912214) >> 19) ^ 0xC761C23C);
    v29 = (9 * (((v28 + 374761393) << 9) ^ (v28 - 369570787)) - 42973499)
        ^ ((9 * (((v28 + 374761393) << 9) ^ (v28 - 369570787)) - 42973499) >> 16)
        ^ 0xB55A4F09;
    v30 = (_QWORD *)(a2 + 8LL * (unsigned int)(v26 - 1) + 32);
    while ( 1 )
    {
      v31 = (_DWORD *)*v30;
      v32 = *(unsigned int *)(a1 + 32);
      v33 = *(_QWORD *)(a1 + 24);
      v34 = 33
          * ((4097 * *(_DWORD *)*v30 + 2127912214)
           ^ ((unsigned int)(4097 * *(_DWORD *)*v30 + 2127912214) >> 19)
           ^ 0xC761C23C);
      v35 = (9 * (((v34 + 374761393) << 9) ^ (v34 - 369570787)) - 42973499)
          ^ ((9 * (((v34 + 374761393) << 9) ^ (v34 - 369570787)) - 42973499) >> 16)
          ^ 0xB55A4F09;
      v36 = (((v29 - v35) ^ (v35 << 8) ^ ((v35 - ((v29 - v35) ^ (v35 << 8))) << 16)) + ((v29 - v35) ^ (v35 << 8)) - v35)
          ^ ((v35 - ((v29 - v35) ^ (v35 << 8))) << 10);
      v37 = v32 - 1;
      v32 *= 32;
      v38 = v33 + v32;
      v39 = 32LL * (v36 & v37);
      v40 = v33 + v39;
      if ( v39 != v32 )
      {
        for ( i = v33 + v39; v38 != i; i += 32 )
        {
          v42 = *(_DWORD *)(i + 4);
          if ( v42 == 2 )
          {
            if ( *(_DWORD *)i == v36 && v31 == *(_DWORD **)(i + 8) && a3 == *(_DWORD *)(i + 16) )
              goto LABEL_23;
          }
          else if ( !v42 )
          {
            goto LABEL_34;
          }
        }
      }
      if ( v33 != v40 )
        break;
LABEL_34:
      v44 = *(_QWORD **)(a1 + 56);
      if ( v44 )
      {
        v45 = *((unsigned int *)v44 - 1);
        if ( (_DWORD)v45 == *((_DWORD *)v44 - 2) )
        {
          v47 = 16 * ((unsigned int)(3 * v45 + 1) >> 1) + 8;
          if ( 16 * (int)v45 + 8 >= v47 || (unsigned int)v45 >= (unsigned int)(3 * v45 + 1) >> 1 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v61, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v61);
            sub_233E40((__int64)v61);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v60 = (unsigned int)(3 * v45 + 1) >> 1;
          v48 = (unsigned int *)sub_186B300(v44 - 1, v47);
          v44 = v48 + 2;
          *v48 = v60;
          v49 = v48[1];
          *(_QWORD *)(a1 + 56) = v44;
          v46 = &v44[2 * v49];
        }
        else
        {
          v46 = &v44[2 * v45];
        }
      }
      else
      {
        v55 = (_QWORD *)sub_186B270(0x28u);
        *v55 = 2;
        v44 = v55 + 1;
        *(_QWORD *)(a1 + 56) = v55 + 1;
        v46 = v55 + 1;
      }
      *v46 = v31;
      v24 = 0;
      *((_DWORD *)v46 + 2) = a3;
      ++*((_DWORD *)v44 - 1);
LABEL_23:
      if ( v27 == --v30 )
        return v24;
    }
    while ( 1 )
    {
      v43 = *(_DWORD *)(v33 + 4);
      if ( v43 != 2 )
        break;
      if ( *(_DWORD *)v33 == v36 && v31 == *(_DWORD **)(v33 + 8) )
      {
        if ( a3 == *(_DWORD *)(v33 + 16) )
          goto LABEL_23;
        v33 += 32;
        if ( v40 == v33 )
          goto LABEL_34;
      }
      else
      {
LABEL_28:
        v33 += 32;
        if ( v40 == v33 )
          goto LABEL_34;
      }
    }
    if ( !v43 )
      goto LABEL_34;
    goto LABEL_28;
  }
  if ( v7 != 2 )
    return 1;
  v8 = *(_DWORD *)(a2 + 20) + a3;
  v9 = *(_DWORD **)(a2 + 24);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(unsigned int *)(a1 + 32);
  v12 = 33 * ((4097 * v8 + 2127912214) ^ ((unsigned int)(4097 * v8 + 2127912214) >> 19) ^ 0xC761C23C);
  v13 = 9 * (((v12 + 374761393) << 9) ^ (v12 - 369570787)) - 42973499;
  v14 = v13 ^ HIWORD(v13);
  v15 = 33 * ((4097 * *v9 + 2127912214) ^ ((unsigned int)(4097 * *v9 + 2127912214) >> 19) ^ 0xC761C23C);
  v16 = (9 * (((v15 + 374761393) << 9) ^ (v15 - 369570787)) - 42973499)
      ^ ((9 * (((v15 + 374761393) << 9) ^ (v15 - 369570787)) - 42973499) >> 16)
      ^ 0xB55A4F09;
  v17 = ((((v14 ^ 0xB55A4F09) - v16) ^ (v16 << 8) ^ ((v16 - (((v14 ^ 0xB55A4F09) - v16) ^ (v16 << 8))) << 16))
       + (((v14 ^ 0xB55A4F09) - v16) ^ (v16 << 8))
       - v16)
      ^ ((v16 - (((v14 ^ 0xB55A4F09) - v16) ^ (v16 << 8))) << 10);
  v18 = v11 - 1;
  v11 *= 32;
  v19 = v10 + v11;
  v20 = 32LL * (v17 & v18);
  v21 = v10 + v20;
  if ( v20 != v11 )
  {
    for ( j = v10 + v20; v19 != j; j += 32 )
    {
      v23 = *(_DWORD *)(j + 4);
      if ( v23 == 2 )
      {
        if ( *(_DWORD *)j == v17 && v9 == *(_DWORD **)(j + 8) && v8 == *(_DWORD *)(j + 16) )
          return 1;
      }
      else if ( !v23 )
      {
        goto LABEL_50;
      }
    }
  }
  for ( ; v21 != v10; v10 += 32 )
  {
    v50 = *(_DWORD *)(v10 + 4);
    if ( v50 == 2 )
    {
      if ( *(_DWORD *)v10 == v17 && v9 == *(_DWORD **)(v10 + 8) && v8 == *(_DWORD *)(v10 + 16) )
        return 1;
    }
    else if ( !v50 )
    {
      break;
    }
  }
LABEL_50:
  v51 = *(_QWORD **)(a1 + 56);
  if ( v51 )
  {
    v52 = *((unsigned int *)v51 - 1);
    if ( (_DWORD)v52 == *((_DWORD *)v51 - 2) )
    {
      v56 = (unsigned int)(3 * v52 + 1) >> 1;
      v57 = 16 * v56 + 8;
      if ( 16 * (int)v52 + 8 >= v57 || (unsigned int)v52 >= v56 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v61, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v61);
        sub_233E40((__int64)v61);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58 = (unsigned int *)sub_186B300(v51 - 1, v57);
      v51 = v58 + 2;
      *v58 = v56;
      v59 = v58[1];
      *(_QWORD *)(a1 + 56) = v51;
      v53 = &v51[2 * v59];
    }
    else
    {
      v53 = &v51[2 * v52];
    }
  }
  else
  {
    v54 = (_QWORD *)sub_186B270(0x28u);
    *v54 = 2;
    v51 = v54 + 1;
    *(_QWORD *)(a1 + 56) = v51;
    v53 = v51;
  }
  *v53 = v9;
  v24 = 0;
  *((_DWORD *)v53 + 2) = v8;
  ++*((_DWORD *)v51 - 1);
  return v24;
}

