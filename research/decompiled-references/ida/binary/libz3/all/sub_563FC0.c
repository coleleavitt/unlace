__int64 __fastcall sub_563FC0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char **exception; // rbx
  __int64 *v6; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r13
  int v12; // r14d
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // r9d
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  int *v20; // rsi
  unsigned int v21; // esi
  unsigned int v22; // r13d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  int v26; // r13d
  __int64 result; // rax
  __int64 v28; // rcx
  int v29; // r13d
  __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rdi
  int v33; // r14d
  __int64 v34; // r9
  __int64 *v35; // rcx
  __int64 v36; // rax
  int v37; // edi
  unsigned int v38; // edx
  char *v39; // rsi
  __int64 v40; // rdx
  __int64 *v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *v44; // rcx
  __int64 v45; // r13
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  unsigned int v48; // r14d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // [rsp+0h] [rbp-78h]
  __int64 *v54; // [rsp+0h] [rbp-78h]
  __int64 v56[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a3 + 1;
  v8 = a3;
  if ( a3 + 1 != a4 )
  {
    v9 = a3;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *v9;
        v11 = *v6;
        v12 = *(_DWORD *)(*v9 + 64);
        if ( v12 >= 0 )
          break;
LABEL_18:
        v24 = *--a4;
        *v6 = v24;
        *a4 = v11;
        *(_BYTE *)(a1 + 72) = 1;
        if ( v6 == a4 )
          goto LABEL_19;
      }
      v13 = *(_QWORD *)(v11 + 40);
      v14 = *(_QWORD *)(v10 + 40);
      v15 = 0x7FFFFFFF;
      v16 = -1;
      while ( 1 )
      {
        v17 = *(unsigned int *)(v14 + 24);
        if ( (_DWORD)v17 )
          break;
LABEL_15:
        if ( v12 == ++v16 )
          goto LABEL_18;
        v23 = v16 + 10LL;
        v13 = *(_QWORD *)(v11 + 8 * v23) & 0xFFFFFFFFFFFFFFF8LL;
        v14 = *(_QWORD *)(v10 + 8 * v23) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v53 = v11;
      v18 = 8 * v17 + 32;
      v19 = 32;
      while ( 1 )
      {
        v20 = *(int **)(v14 + v19);
        if ( *((_WORD *)v20 + 2) != 1 )
          break;
LABEL_13:
        v19 += 8;
        if ( v19 == v18 )
        {
          v11 = v53;
          goto LABEL_15;
        }
      }
      if ( !v15 )
      {
        v15 = -1;
        goto LABEL_13;
      }
      v21 = *v20;
      v22 = **(_DWORD **)(v13 + v19);
      if ( v22 >= v21 && v21 == v22 )
        break;
      v9 = v6++;
      if ( v6 == a4 )
        goto LABEL_19;
    }
    --v15;
    goto LABEL_13;
  }
LABEL_19:
  v25 = *v8;
  v26 = *(_DWORD *)(*(_QWORD *)(*v8 + 40) + 24LL);
  result = sub_645130();
  v28 = *(unsigned int *)(v25 + 64);
  v29 = v26 - result;
  if ( (_DWORD)v28 )
  {
    v54 = v8;
    v30 = v25;
    v31 = v25 + 8 * v28;
    do
    {
      v32 = *(_QWORD *)(v30 + 80);
      v30 += 8;
      v33 = *(_DWORD *)((v32 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      result = sub_645130();
      v29 += v33 - result;
    }
    while ( v30 != v31 );
    v8 = v54;
  }
  if ( v29 )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*v8 + 40) + 16LL);
    v35 = *(__int64 **)(a2 + 152);
    v36 = *(unsigned int *)(a2 + 160);
    v37 = *(_DWORD *)(v34 + 12);
    v38 = v36 - 1;
    v36 *= 8;
    v39 = (char *)v35 + v36;
    v40 = 8LL * (v37 & v38);
    v41 = &v35[(unsigned __int64)v40 / 8];
    if ( v40 != v36 )
    {
      for ( result = (__int64)&v35[(unsigned __int64)v40 / 8]; v39 != (char *)result; result += 8 )
      {
        v42 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v42 + 12) == v37 && v34 == v42 )
            goto LABEL_35;
        }
        else if ( !v42 )
        {
          goto LABEL_31;
        }
      }
    }
    for ( ; v41 != v35; ++v35 )
    {
      result = *v35;
      if ( (unsigned __int64)*v35 > 1 )
      {
        if ( *(_DWORD *)(result + 12) == v37 && v34 == result )
          goto LABEL_35;
      }
      else if ( !result )
      {
        break;
      }
    }
LABEL_31:
    result = a4 - v8;
    if ( *(_DWORD *)(a1 + 40) < (unsigned int)result )
      return sub_561B70(a1, v8, (__int64)a4);
  }
LABEL_35:
  while ( v8 != a4 )
  {
    v45 = *v8;
    sub_62A000(*(_QWORD *)(a1 + 56), *v8);
    v46 = *(_QWORD **)(a1 + 64);
    if ( v46 )
    {
      v47 = *((_DWORD *)v46 - 1);
      if ( v47 == *((_DWORD *)v46 - 2) )
      {
        v48 = (3 * v47 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v47 + 8 >= (unsigned int)v49 || v47 >= v48 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v56, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v56);
          sub_233E40((__int64)v56);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(v46 - 1, v49);
        v51 = v50[1];
        v46 = v50 + 2;
        *v50 = v48;
        *(_QWORD *)(a1 + 64) = v50 + 2;
        LODWORD(v50) = v51;
        v44 = &v46[v51];
        result = (unsigned int)((_DWORD)v50 + 1);
      }
      else
      {
        v43 = v47;
        result = v47 + 1;
        v44 = &v46[v43];
      }
    }
    else
    {
      v52 = (_QWORD *)sub_186B270(0x18u);
      v46 = v52 + 1;
      *v52 = 2;
      result = 1;
      *(_QWORD *)(a1 + 64) = v46;
      v44 = v46;
    }
    *v44 = v45;
    ++v8;
    *((_DWORD *)v46 - 1) = result;
  }
  return result;
}

