__int64 __fastcall sub_B411E0(__int64 a1, unsigned int *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  __int64 result; // rax
  __int16 v8; // di
  _DWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v13; // edx
  char v14; // cl
  _DWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // esi
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  size_t v28; // rsi
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  unsigned int v35; // r12d
  unsigned int v36; // ecx
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40[7]; // [rsp+10h] [rbp-38h] BYREF

  result = sub_15D2CB0(*(_QWORD *)(a1 + 24), a2);
  if ( !(_BYTE)result )
    return result;
  v8 = *((_WORD *)a2 + 2);
  if ( v8 || (v9 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr || *v9 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    result = *(_QWORD *)(v10 + 8832);
    if ( !result )
      return result;
    v11 = *a2;
    if ( (unsigned int)v11 >= *(_DWORD *)(result - 4) )
      return result;
    v12 = 0;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
    v12 = v9[1];
    result = *(_QWORD *)(v10 + 8832);
    if ( !result || (v11 = *a2, (unsigned int)v11 >= *(_DWORD *)(result - 4)) )
    {
      if ( v12 != 6 )
        return result;
      goto LABEL_32;
    }
    LOBYTE(v12) = v12 == 6;
  }
  v13 = *(_DWORD *)(result + 4 * v11);
  result = v12 ^ 1u;
  v14 = (v12 ^ 1) & (v13 == 0x7FFFFFFF);
  if ( v14 )
    return result;
  if ( v13 != 0x7FFFFFFF )
  {
    if ( !v8 )
    {
      v15 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v15 )
      {
        if ( !*v15 )
          v14 = v15[1] == 5;
      }
    }
    v16 = *(_QWORD *)(v10 + 8848);
    v17 = 2 * v13;
    v18 = *(char *)(v16 + v17);
    if ( *(_BYTE *)(v16 + v17) && (v18 != 1 || (_BYTE)result) && (!v14 || v18 != -1) )
      return result;
    if ( v13 < *(_DWORD *)(a1 + 44) )
      goto LABEL_18;
    goto LABEL_25;
  }
LABEL_32:
  if ( !*(_BYTE *)(v10 + 10320) )
  {
    if ( *(_DWORD *)(a1 + 44) > 0x7FFFFFFFu )
    {
LABEL_18:
      v19 = *(_QWORD **)(a1 + 32);
      if ( !v19 )
      {
        v33 = (_QWORD *)sub_186B270(0x18u);
        v19 = v33 + 1;
        *v33 = 2;
        result = 1;
        *(_QWORD *)(a1 + 32) = v19;
        v27 = v19;
        goto LABEL_28;
      }
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v21 = (3 * v20 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v40, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v19 - 1, v22);
        v24 = v23 + 2;
        *(_QWORD *)(a1 + 32) = v23 + 2;
LABEL_23:
        v25 = v23[1];
        *v23 = v21;
        result = (unsigned int)(v25 + 1);
        *(_QWORD *)&v24[2 * v25] = a2;
        *(v24 - 1) = result;
        return result;
      }
LABEL_27:
      v26 = v20;
      result = v20 + 1;
      v27 = &v19[v26];
LABEL_28:
      *v27 = a2;
      *((_DWORD *)v19 - 1) = result;
      return result;
    }
LABEL_25:
    v19 = *(_QWORD **)(a1 + 48);
    if ( !v19 )
    {
      v34 = (_QWORD *)sub_186B270(0x18u);
      v19 = v34 + 1;
      *v34 = 2;
      result = 1;
      *(_QWORD *)(a1 + 48) = v19;
      v27 = v19;
      goto LABEL_28;
    }
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v21 = (3 * v20 + 1) >> 1;
      v28 = 8 * v21 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v28 || v20 >= v21 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v40, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v40);
        sub_233E40((__int64)v40);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v19 - 1, v28);
      v24 = v23 + 2;
      *(_QWORD *)(a1 + 48) = v23 + 2;
      goto LABEL_23;
    }
    goto LABEL_27;
  }
  v29 = *(_QWORD **)(a1 + 48);
  if ( v29 )
  {
    v30 = *((_DWORD *)v29 - 1);
    if ( v30 == *((_DWORD *)v29 - 2) )
    {
      v35 = (3 * v30 + 1) >> 1;
      v36 = 8 * v35 + 8;
      if ( 8 * v30 + 8 >= v36 || v30 >= v35 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v40, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v40);
        sub_233E40((__int64)v40);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int *)sub_186B300(v29 - 1, v36);
      v38 = v37[1];
      v29 = v37 + 2;
      *v37 = v35;
      *(_QWORD *)(a1 + 48) = v37 + 2;
      LODWORD(v37) = v38;
      v32 = &v29[v38];
      result = (unsigned int)((_DWORD)v37 + 1);
    }
    else
    {
      v31 = v30;
      result = v30 + 1;
      v32 = &v29[v31];
    }
  }
  else
  {
    v39 = (_QWORD *)sub_186B270(0x18u);
    *v39 = 2;
    result = 1;
    v29 = v39 + 1;
    *(_QWORD *)(a1 + 48) = v29;
    v32 = v29;
  }
  *v32 = a2;
  *((_DWORD *)v29 - 1) = result;
  return result;
}

