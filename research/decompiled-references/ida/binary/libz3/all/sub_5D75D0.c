__int64 __fastcall sub_5D75D0(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // r12
  __int64 result; // rax
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  void **v8; // rdx
  int v9; // eax
  void **v10; // r15
  _QWORD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  void *v19; // rdi
  __int64 v20; // rdx
  int v21; // ecx
  void **v22; // r12
  __int64 *v23; // r14
  __int64 *v24; // rbx
  __int64 *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  void *v35; // rdi
  unsigned int v36; // r12d
  size_t v37; // rbx
  _OWORD *v38; // rdx
  _OWORD *v39; // rcx
  size_t v40; // rsi
  void **v41; // [rsp+8h] [rbp-70h]
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(unsigned int *)(a1 + 56);
  *(_QWORD *)a1 = &off_1C525A8;
  result = *(_QWORD *)(a1 + 48);
  v5 = (_QWORD *)(result + 16 * v3);
  if ( (_QWORD *)result != v5 )
  {
    v6 = *(_QWORD **)(a1 + 48);
    while ( *v6 <= 1u )
    {
      v6 += 2;
      if ( v5 == v6 )
        goto LABEL_65;
    }
    if ( v5 != v6 )
    {
      v7 = (_QWORD *)sub_186B270(0x18u);
      v8 = (void **)(v7 + 1);
      *v7 = 2;
      v9 = 1;
      v10 = v8;
      while ( 1 )
      {
        *v8 = (void *)*v6;
        *((_DWORD *)v10 - 1) = v9;
        v11 = v6 + 2;
        if ( v5 == v6 + 2 )
          break;
        while ( 1 )
        {
          v6 = v11;
          if ( *v11 > 1u )
            break;
          v11 += 2;
          if ( v5 == v11 )
            goto LABEL_17;
        }
        if ( v5 == v11 )
          break;
        v12 = *((_DWORD *)v10 - 1);
        if ( v12 == *((_DWORD *)v10 - 2) )
        {
          v14 = (3 * v12 + 1) >> 1;
          v15 = 8 * v14 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v15 || v12 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v42, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v42);
            sub_233E40((__int64)v42);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300(v10 - 1, v15);
          v17 = v16[1];
          v10 = (void **)(v16 + 2);
          *v16 = v14;
          LODWORD(v16) = v17;
          v8 = &v10[v17];
          v9 = (_DWORD)v16 + 1;
        }
        else
        {
          v13 = v12;
          v9 = v12 + 1;
          v8 = &v10[v13];
        }
      }
LABEL_17:
      if ( *(_DWORD *)(a1 + 60) || *(_DWORD *)(a1 + 64) )
      {
        result = *(_QWORD *)(a1 + 48);
        v18 = *(unsigned int *)(a1 + 56);
        v19 = (void *)result;
        v20 = result + 16 * v18;
        if ( result != v20 )
          goto LABEL_20;
        *(_QWORD *)(a1 + 60) = 0;
      }
      goto LABEL_26;
    }
LABEL_65:
    if ( !*(_DWORD *)(a1 + 60) )
      goto LABEL_66;
    v19 = *(void **)(a1 + 48);
    v10 = nullptr;
    v18 = *(unsigned int *)(a1 + 56);
    v20 = result + 16 * v18;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a1 + 60) )
  {
LABEL_68:
    *(_QWORD *)(a1 + 60) = 0;
    goto LABEL_44;
  }
LABEL_66:
  if ( !*(_DWORD *)(a1 + 64) )
    goto LABEL_44;
  v19 = *(void **)(a1 + 48);
  v10 = nullptr;
  v18 = *(unsigned int *)(a1 + 56);
  v20 = result + 16 * v18;
  if ( result == v20 )
    goto LABEL_68;
LABEL_20:
  v21 = 0;
  do
  {
    while ( *(_QWORD *)result )
    {
      *(_QWORD *)result = 0;
      result += 16;
      if ( v20 == result )
        goto LABEL_24;
    }
    result += 16;
    ++v21;
  }
  while ( v20 != result );
LABEL_24:
  if ( (unsigned int)v18 > 0x10 )
  {
    result = (unsigned int)(3 * v18);
    if ( (unsigned int)result < 4 * v21 )
    {
      if ( v19 )
      {
        sub_186B220(v19);
        v36 = *(_DWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = 0;
        v36 >>= 1;
        *(_DWORD *)(a1 + 56) = v36;
        v37 = v36;
        result = sub_186B270(v37 * 16);
        v38 = (_OWORD *)result;
        if ( !v36 )
        {
LABEL_62:
          *(_QWORD *)(a1 + 48) = v38;
          goto LABEL_25;
        }
      }
      else
      {
        v40 = (unsigned int)v18 >> 1;
        *(_QWORD *)(a1 + 48) = 0;
        *(_DWORD *)(a1 + 56) = v40;
        v37 = v40;
        v38 = (_OWORD *)sub_186B270(16 * v40);
      }
      v39 = &v38[v37];
      result = (__int64)v38;
      if ( ((v37 * 16) & 0x10) == 0 || (result = (__int64)(v38 + 1), *v38 = 0, v38 + 1 != v39) )
      {
        do
        {
          *(_OWORD *)result = 0;
          result += 32;
          *(_OWORD *)(result - 16) = 0;
        }
        while ( (_OWORD *)result != v39 );
      }
      goto LABEL_62;
    }
  }
LABEL_25:
  *(_QWORD *)(a1 + 60) = 0;
  if ( v10 )
  {
LABEL_26:
    v22 = v10;
    v41 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 != v41 )
    {
      do
      {
        v23 = (__int64 *)*v22;
        if ( *v22 )
        {
          v24 = (__int64 *)v23[3];
          v25 = &v24[*((unsigned int *)v23 + 8)];
          if ( v24 < v25 )
          {
            do
            {
              while ( 1 )
              {
                v26 = *v24;
                if ( *v24 )
                {
                  v27 = v23[2];
                  v28 = (*(_DWORD *)(v26 + 8))-- == 1;
                  if ( v28 )
                    break;
                }
                if ( ++v24 >= v25 )
                  goto LABEL_34;
              }
              sub_15D7BC0(v27, v26);
              ++v24;
            }
            while ( v24 < v25 );
LABEL_34:
            v24 = (__int64 *)v23[3];
          }
          if ( v24 != v23 + 5 && v24 )
            sub_186B220(v24);
          v29 = *v23;
          if ( *v23 )
          {
            v30 = v23[1];
            v28 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v28 )
              sub_15D7BC0(v30, v29);
          }
          sub_186B220(v23);
        }
        ++v22;
      }
      while ( v22 != v41 );
    }
    result = sub_186B220(v10 - 1);
  }
LABEL_44:
  v31 = *(__int64 **)(a1 + 104);
  if ( v31 )
  {
    result = *((unsigned int *)v31 - 1);
    v32 = &v31[result];
    if ( v31 >= v32 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v34 = *(_QWORD *)(a1 + 96);
          v28 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v28 )
            break;
        }
        if ( ++v31 >= v32 )
          goto LABEL_51;
      }
      result = sub_15D7BC0(v34, v33);
      ++v31;
    }
    while ( v31 < v32 );
LABEL_51:
    v31 = *(__int64 **)(a1 + 104);
    if ( v31 )
LABEL_52:
      result = sub_186B220(v31 - 1);
  }
  v35 = *(void **)(a1 + 48);
  if ( v35 )
    return sub_186B220(v35);
  return result;
}

