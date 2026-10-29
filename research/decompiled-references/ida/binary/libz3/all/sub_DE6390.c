__int64 __fastcall sub_DE6390(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  char **exception; // rbx
  __int64 v11; // rax
  __int64 *v12; // rcx
  int v13; // edi
  unsigned int v14; // edx
  __int64 result; // rax
  char *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  _QWORD *v24; // r12
  size_t v25; // r15
  unsigned int v26; // ecx
  _QWORD *v27; // r13
  int v28; // esi
  __int64 v29; // rcx
  _QWORD *v30; // rdi
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  unsigned int v39; // r12d
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  int v44; // r8d
  char *v45; // r14
  char *v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  int v51; // [rsp+0h] [rbp-98h]
  unsigned int v52; // [rsp+0h] [rbp-98h]
  int v53; // [rsp+8h] [rbp-90h]
  _BYTE v54[32]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v55[11]; // [rsp+40h] [rbp-58h] BYREF

  v11 = *(unsigned int *)(a1 + 144);
  v12 = *(__int64 **)(a1 + 136);
  v13 = *(_DWORD *)(a2 + 12);
  v14 = v11 - 1;
  result = 8 * v11;
  v16 = (char *)v12 + result;
  v17 = 8LL * (v13 & v14);
  v18 = &v12[(unsigned __int64)v17 / 8];
  if ( v17 != result )
  {
    for ( result = (__int64)&v12[(unsigned __int64)v17 / 8]; v16 != (char *)result; result += 8 )
    {
      v19 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v19 + 12) == v13 && v19 == a2 )
          return result;
      }
      else if ( !v19 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v18 != v12; ++v12 )
  {
    result = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v13 && result == a2 )
        return result;
    }
    else if ( !result )
    {
      if ( !a4 )
        return result;
      goto LABEL_18;
    }
  }
LABEL_8:
  if ( !a4 )
    return result;
LABEL_18:
  sub_15F01E0(v54, *(_QWORD *)a1);
  result = sub_15F0480(v54, a2);
  if ( !(_BYTE)result )
    return result;
  v20 = 0;
  while ( 1 )
  {
    v21 = *a5;
    ++v20;
    ++a5;
    if ( (*(_QWORD *)(v21 + 16) & 7LL) == 1 )
      break;
    if ( v20 >= a4 )
    {
      v22 = *(_QWORD *)(a1 + 104);
      if ( v22 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, a2, a3);
      break;
    }
  }
  v23 = *(unsigned int *)(a1 + 144);
  if ( 3 * (int)v23 < (unsigned int)(4 * (*(_DWORD *)(a1 + 148) + *(_DWORD *)(a1 + 152))) )
  {
    v51 = 2 * v23;
    v25 = 8LL * (unsigned int)(2 * v23);
    v43 = (_QWORD *)sub_186B270(v25);
    v44 = v51;
    v24 = v43;
    if ( v51 )
    {
      memset(v43, 0, v25);
      v44 = v51;
    }
    v45 = *(char **)(a1 + 136);
    v26 = v44 - 1;
    v27 = &v24[v25 / 8];
    v46 = &v45[8 * *(unsigned int *)(a1 + 144)];
    if ( v45 != v46 )
    {
      do
      {
        if ( *(_QWORD *)v45 > 1u )
        {
          v47 = 8LL * (*(_DWORD *)(*(_QWORD *)v45 + 12LL) & v26);
          v48 = &v24[(unsigned __int64)v47 / 8];
          if ( v25 == v47 )
          {
LABEL_60:
            if ( v24 == v48 )
            {
LABEL_72:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v49 = v24;
            while ( *v49 )
            {
              if ( v48 == ++v49 )
                goto LABEL_72;
            }
          }
          else
          {
            v49 = &v24[(unsigned __int64)v47 / 8];
            while ( *v49 )
            {
              if ( v27 == ++v49 )
                goto LABEL_60;
            }
          }
          *v49 = *(_QWORD *)v45;
        }
        v45 += 8;
      }
      while ( v46 != v45 );
      v46 = *(char **)(a1 + 136);
    }
    if ( v46 )
    {
      v53 = v44;
      v52 = v44 - 1;
      sub_186B220(v46);
      v44 = v53;
      v26 = v52;
    }
    *(_QWORD *)(a1 + 136) = v24;
    *(_DWORD *)(a1 + 144) = v44;
    *(_DWORD *)(a1 + 152) = 0;
  }
  else
  {
    v24 = *(_QWORD **)(a1 + 136);
    v25 = 8 * v23;
    v26 = v23 - 1;
    v27 = &v24[v23];
  }
  v28 = *(_DWORD *)(a2 + 12);
  v29 = v28 & v26;
  v30 = &v24[v29];
  if ( 8 * v29 != v25 )
  {
    v31 = &v24[v29];
    v32 = nullptr;
    while ( 1 )
    {
      v33 = *v31;
      if ( *v31 > 1u )
      {
        if ( *(_DWORD *)(v33 + 12) == v28 && v33 == a2 )
        {
          *v31 = a2;
          goto LABEL_42;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_70;
          v32 = v31;
          goto LABEL_71;
        }
        v32 = v31;
      }
      if ( ++v31 == v27 )
        goto LABEL_37;
    }
  }
  v32 = nullptr;
  while ( 1 )
  {
LABEL_37:
    if ( v30 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = *v24;
    if ( *v24 <= 1u )
      break;
    if ( *(_DWORD *)(v34 + 12) == v28 && v34 == a2 )
    {
      *v24 = a2;
      goto LABEL_42;
    }
LABEL_36:
    ++v24;
  }
  if ( v34 )
  {
    v32 = v24;
    goto LABEL_36;
  }
  if ( v32 )
LABEL_70:
    --*(_DWORD *)(a1 + 152);
  else
    v32 = v24;
LABEL_71:
  *v32 = a2;
  ++*(_DWORD *)(a1 + 148);
LABEL_42:
  v35 = *(_QWORD **)(a1 + 160);
  if ( v35 )
  {
    v36 = *((_DWORD *)v35 - 1);
    if ( v36 == *((_DWORD *)v35 - 2) )
    {
      v39 = (3 * v36 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v36 + 8 >= v40 || v36 >= v39 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v55, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v55);
        sub_233E40((__int64)v55);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v35 - 1, v40);
      v42 = v41[1];
      v35 = v41 + 2;
      *v41 = v39;
      *(_QWORD *)(a1 + 160) = v41 + 2;
      LODWORD(v41) = v42;
      v38 = &v35[v42];
      result = (unsigned int)((_DWORD)v41 + 1);
    }
    else
    {
      v37 = v36;
      result = v36 + 1;
      v38 = &v35[v37];
    }
  }
  else
  {
    v50 = (_QWORD *)sub_186B270(0x18u);
    *v50 = 2;
    result = 1;
    v35 = v50 + 1;
    *(_QWORD *)(a1 + 160) = v35;
    v38 = v35;
  }
  *v38 = a2;
  *((_DWORD *)v35 - 1) = result;
  return result;
}

