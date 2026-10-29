__int64 *__fastcall sub_5C0BB0(__int64 a1, __int64 a2, __int64 *a3)
{
  char **exception; // r12
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *result; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  _QWORD *v20; // rbp
  unsigned int *v21; // rax
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // ecx
  unsigned int v25; // edi
  unsigned int *v26; // r15
  __int64 v27; // r10
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  _QWORD *v31; // rdx
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned int v35; // r9d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-88h]
  int v42[2]; // [rsp+8h] [rbp-80h]
  __int64 v43; // [rsp+10h] [rbp-78h]
  int v44; // [rsp+18h] [rbp-70h]
  unsigned int v45; // [rsp+1Ch] [rbp-6Ch]
  int v46; // [rsp+20h] [rbp-68h]
  char v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h] BYREF
  int v49; // [rsp+38h] [rbp-50h]
  int v50; // [rsp+40h] [rbp-48h]
  void *v51; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(unsigned int *)(a1 + 96);
  v9 = *(__int64 **)(a1 + 88);
  v10 = *(_DWORD *)(v7 + 12);
  v11 = v8 - 1;
  result = (__int64 *)(16 * v8);
  v13 = (__int64 *)((char *)result + (_QWORD)v9);
  v14 = 16LL * (v10 & v11);
  v15 = &v9[(unsigned __int64)v14 / 8];
  if ( (__int64 *)v14 == result )
  {
LABEL_33:
    while ( v15 != v9 )
    {
      result = (__int64 *)*v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *((_DWORD *)result + 3) == v10 && (__int64 *)v7 == result )
        {
          result = v9;
          goto LABEL_14;
        }
      }
      else if ( !result )
      {
        break;
      }
      v9 += 2;
    }
LABEL_8:
    v17 = *a3;
    ++*(_DWORD *)(a2 + 8);
    if ( v17 )
    {
      v18 = a3[1];
      v19 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v19 )
        result = (__int64 *)sub_15D7BC0(v18, v17);
    }
    *a3 = a2;
    return result;
  }
  result = &v9[(unsigned __int64)v14 / 8];
  while ( 1 )
  {
    v16 = *result;
    if ( (unsigned __int64)*result > 1 )
      break;
    if ( !v16 )
      goto LABEL_8;
LABEL_5:
    result += 2;
    if ( v13 == result )
      goto LABEL_33;
  }
  if ( *(_DWORD *)(v16 + 12) != v10 || v7 != v16 )
    goto LABEL_5;
LABEL_14:
  v20 = nullptr;
  *(_QWORD *)v42 = result[1];
  v21 = (unsigned int *)sub_5BCCC0(a1, v7);
  v24 = 0;
  v25 = *v21;
  v26 = v21;
  if ( *v21 )
  {
    do
    {
      while ( (*(_DWORD *)(*((_QWORD *)v26 + 1) + 4LL * (v24 >> 5)) & (1 << v24)) != 0 )
      {
        if ( ++v24 >= v25 )
          goto LABEL_22;
      }
      v27 = *(_QWORD *)(a2 + 8LL * v24 + 32);
      if ( v20 )
      {
        v28 = *((_DWORD *)v20 - 1);
        if ( v28 == *((_DWORD *)v20 - 2) )
        {
          v35 = (3 * v28 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v36 || v28 >= v35 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v48, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v48);
            sub_233E40((__int64)&v48);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (3 * v28 + 1) >> 1;
          v43 = *(_QWORD *)(a2 + 8LL * v24 + 32);
          v44 = v24;
          v37 = (unsigned int *)sub_186B300(v20 - 1, v36);
          v38 = v37[1];
          v23 = v45;
          v20 = v37 + 2;
          v24 = v44;
          v27 = v43;
          *v37 = v45;
          LODWORD(v37) = v38;
          v31 = &v20[v38];
          v30 = (_DWORD)v37 + 1;
        }
        else
        {
          v29 = v28;
          v30 = v28 + 1;
          v31 = &v20[v29];
        }
      }
      else
      {
        v43 = *(_QWORD *)(a2 + 8LL * v24 + 32);
        v44 = v24;
        v39 = (_QWORD *)sub_186B270(0x18u);
        v24 = v44;
        v27 = v43;
        v20 = v39 + 1;
        *v39 = 2;
        v30 = 1;
        v31 = v20;
      }
      *v31 = v27;
      ++v24;
      *((_DWORD *)v20 - 1) = v30;
      v25 = *v26;
    }
    while ( v24 < *v26 );
LABEL_22:
    v40 = *(_QWORD *)(a1 + 32);
    if ( v20 )
      v25 = *((_DWORD *)v20 - 1);
    else
      v25 = 0;
  }
  else
  {
    v40 = *(_QWORD *)(a1 + 32);
  }
  result = (__int64 *)sub_15DC610(
                        v40,
                        v42[0],
                        v25,
                        (int)v20,
                        v22,
                        v23,
                        v41,
                        v42[0],
                        v43,
                        v44,
                        v46,
                        v47,
                        v48,
                        v49,
                        v50,
                        v51);
  v32 = (__int64)result;
  if ( result )
    ++*((_DWORD *)result + 2);
  v33 = *a3;
  if ( *a3 && (v34 = a3[1], v19 = *(_DWORD *)(v33 + 8) == 1, --*(_DWORD *)(v33 + 8), v19) )
  {
    result = (__int64 *)sub_15D7BC0(v34, v33);
    *a3 = v32;
    if ( v20 )
      return (__int64 *)sub_186B220(v20 - 1);
  }
  else
  {
    *a3 = (__int64)result;
    if ( v20 )
      return (__int64 *)sub_186B220(v20 - 1);
  }
  return result;
}

