__int64 __fastcall sub_52A8F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __m128 a5)
{
  char **exception; // r12
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  unsigned int v10; // edi
  int v11; // r9d
  _QWORD *v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // r11
  _QWORD *i; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // r13
  unsigned int *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // r11
  __int64 v23; // r9
  int v24; // esi
  __int64 v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 v31; // rax
  unsigned int *v32; // rax
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int v35; // r12d
  unsigned int *v36; // rax
  __int64 result; // rax
  _QWORD *v38; // rax
  __int64 v39; // [rsp-10h] [rbp-90h]
  unsigned int v41; // [rsp+8h] [rbp-78h]
  __int64 v44; // [rsp+18h] [rbp-68h]
  __int64 v45[10]; // [rsp+30h] [rbp-50h] BYREF

  v7 = *(unsigned int *)(a1 + 32);
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
  v9 = *(_QWORD **)(a1 + 24);
  v10 = v7 - 1;
  v11 = *(_DWORD *)(v8 + 12);
  v12 = &v9[2 * v7];
  v13 = 2LL * (v11 & (unsigned int)(v7 - 1));
  v14 = &v9[v13];
  if ( v13 == 2 * v7 )
  {
LABEL_9:
    if ( v9 != v14 )
    {
      for ( i = v9; v14 != i; i += 2 )
      {
        v17 = *i;
        if ( *i > 1u )
        {
          if ( *(_DWORD *)(v17 + 12) == v11 && v8 == v17 )
            goto LABEL_17;
        }
        else if ( !v17 )
        {
          break;
        }
      }
    }
LABEL_51:
    BUG();
  }
  i = &v9[v13];
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = *i;
      if ( *i > 1u )
        break;
      if ( !v16 )
        goto LABEL_51;
      i += 2;
      if ( v12 == i )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v16 + 12) == v11 && v8 == v16 )
      break;
    i += 2;
    if ( v12 == i )
      goto LABEL_9;
  }
LABEL_17:
  v18 = *(unsigned int *)(a2 + 68);
  v41 = *((_DWORD *)i + 2);
  if ( (_DWORD)v18 )
  {
    v19 = a2;
    v20 = nullptr;
    v44 = a2 + 8 * v18;
    while ( 1 )
    {
      v21 = 16 * v7;
      v22 = &v9[(unsigned __int64)v21 / 8];
      v23 = *(_QWORD *)((*(_QWORD *)(v19 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v24 = *(_DWORD *)(v23 + 12);
      v25 = 16LL * (v24 & v10);
      v26 = &v9[(unsigned __int64)v25 / 8];
      if ( v25 == v21 )
      {
LABEL_27:
        while ( v26 != v9 )
        {
          v29 = *v9;
          if ( *v9 > 1u )
          {
            if ( *(_DWORD *)(v29 + 12) == v24 && v23 == v29 )
            {
              v27 = v9;
              goto LABEL_35;
            }
          }
          else if ( !v29 )
          {
            break;
          }
          v9 += 2;
        }
LABEL_53:
        BUG();
      }
      v27 = &v9[(unsigned __int64)v25 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = *v27;
          if ( *v27 > 1u )
            break;
          if ( !v28 )
            goto LABEL_53;
          v27 += 2;
          if ( v22 == v27 )
            goto LABEL_27;
        }
        if ( *(_DWORD *)(v28 + 12) == v24 && v23 == v28 )
          break;
        v27 += 2;
        if ( v22 == v27 )
          goto LABEL_27;
      }
LABEL_35:
      v30 = *((_DWORD *)v27 + 2);
      if ( v20 )
      {
        v31 = *(v20 - 1);
        if ( (_DWORD)v31 == *(v20 - 2) )
        {
          v33 = (unsigned int)(3 * v31 + 1) >> 1;
          v34 = 4 * v33 + 8;
          v35 = v33;
          if ( 4 * (int)v31 + 8 >= (unsigned int)v34 || (unsigned int)v31 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v45, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v45);
            sub_233E40((__int64)v45);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (unsigned int *)sub_186B300(v20 - 2, v34);
          v20 = v36 + 2;
          *v36 = v35;
          v32 = &v36[v36[1] + 2];
        }
        else
        {
          v32 = &v20[v31];
        }
      }
      else
      {
        v38 = (_QWORD *)sub_186B270(0x10u);
        *v38 = 2;
        v20 = (unsigned int *)(v38 + 1);
        v32 = (unsigned int *)(v38 + 1);
      }
      *v32 = v30;
      v19 += 8;
      ++*(v20 - 1);
      if ( v44 == v19 )
        break;
      v7 = *(unsigned int *)(a1 + 32);
      v9 = *(_QWORD **)(a1 + 24);
      v10 = v7 - 1;
    }
  }
  else
  {
    v20 = nullptr;
  }
  sub_524F50(a1, a2, v41, v20, a3, 0, a5, a4);
  result = v39;
  if ( v20 )
    return sub_186B220(v20 - 2);
  return result;
}

