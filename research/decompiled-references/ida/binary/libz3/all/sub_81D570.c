__int64 __fastcall sub_81D570(_QWORD *a1, unsigned int a2, double a3)
{
  char **exception; // rbp
  __int64 *v5; // r13
  __int64 v6; // rax
  __int64 *v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  __int64 *v11; // r12
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  unsigned int *v15; // rax
  int v16; // ebp
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  int *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  _QWORD *v31; // rdi
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 (__fastcall *v36)(_QWORD *, unsigned int); // rax
  __int64 v37; // rdx
  bool v38; // si
  _QWORD *v39; // rax
  const __m128i *v40; // rdi
  unsigned __int64 *v41; // rsi
  unsigned int v42; // edx
  __m128 *v43; // rax
  _DWORD *v44; // rdx
  __int64 v45; // rbx
  unsigned int v46; // esi
  _QWORD *v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 *v52; // [rsp+0h] [rbp-78h]
  int v53; // [rsp+8h] [rbp-70h]
  unsigned int v54; // [rsp+Ch] [rbp-6Ch]
  int v55; // [rsp+10h] [rbp-68h]
  int v56; // [rsp+18h] [rbp-60h]
  __int64 v57; // [rsp+20h] [rbp-58h] BYREF
  char v58; // [rsp+28h] [rbp-50h]
  int v59; // [rsp+30h] [rbp-48h]
  int v60; // [rsp+38h] [rbp-40h]
  int v61; // [rsp+40h] [rbp-38h]
  void *v62; // [rsp+48h] [rbp-30h]

  v5 = *(__int64 **)(a1[11] + 8LL * a2);
  v52 = *(__int64 **)(a1[39] + 8LL * a2);
  v6 = sub_15D1F10(*v5);
  v7 = (__int64 *)sub_15F6BE0(a1 + 14, v6);
  v10 = *v7;
  if ( !*v7 )
  {
    *(_DWORD *)(a1[3] + 2356LL) = 214013 * *(_DWORD *)(a1[3] + 2356LL) + 2531011;
    v15 = (unsigned int *)a1[56];
    if ( v15 )
    {
      *(v15 - 1) = 0;
      goto LABEL_47;
    }
LABEL_36:
    v40 = (const __m128i *)a1[10];
    v41 = a1 + 2;
    v15 = nullptr;
    v42 = 0;
LABEL_37:
    v43 = sub_7A65F0(v40, v41, v42, v15, 0, nullptr, a3, 0, nullptr);
    v44 = (_DWORD *)a1[56];
    v45 = a1[10];
    if ( v44 )
      v46 = *(v44 - 1);
    else
      v46 = 0;
    v47 = sub_7E5EA0((__int64)a1, v46, v44, 0, 0, (__int64)v43);
    return sub_7CA490(v45, (__int64)(v47 - 1), v48, v49, v50, v51);
  }
  v11 = v7;
  v12 = a1[3];
  v13 = *(_DWORD *)(v10 - 4);
  v14 = 214013 * *(_DWORD *)(v12 + 2356) + 2531011;
  *(_DWORD *)(v12 + 2356) = v14;
  v15 = (unsigned int *)a1[56];
  v16 = HIWORD(v14) & 0x7FFF;
  if ( !v15 )
  {
    if ( v13 )
      goto LABEL_4;
    goto LABEL_36;
  }
  *(v15 - 1) = 0;
  if ( !v13 )
  {
LABEL_47:
    v40 = (const __m128i *)a1[10];
    v41 = a1 + 2;
    v42 = 0;
    goto LABEL_37;
  }
LABEL_4:
  v17 = 0;
  while ( 1 )
  {
    v18 = (v17 + v16) % v13;
    v19 = *(_QWORD *)(v10 + 8 * v18);
    if ( *(_DWORD *)(v19 + 32) )
    {
      v20 = *v52;
      if ( !*v52 )
        return sub_81C940(a1, v19, v5);
      if ( (v17 + v16) % v13 >= *(_DWORD *)(v20 - 4) )
        return sub_81C940(a1, v19, v5);
      v21 = *(_QWORD *)(v20 + 8 * v18);
      if ( !v21 )
        return sub_81C940(a1, v19, v5);
      v22 = (unsigned int)(2 * *(_DWORD *)(v21 + 28));
      result = *(_QWORD *)(*(_QWORD *)(a1[10] + 24LL) + 3288LL);
      if ( *(_DWORD *)(result + 4 * v22) != -1 )
        return result;
      v24 = (unsigned int)sub_81C940(a1, v19, v5);
      result = *(_QWORD *)(a1[3] + 3288LL);
      if ( *(_DWORD *)(result + 4 * v24) != -1 )
        return result;
      v25 = (_QWORD *)a1[56];
      v26 = v24 ^ 1;
      if ( v25 )
      {
        v27 = *((unsigned int *)v25 - 1);
        if ( (_DWORD)v27 == *((_DWORD *)v25 - 2) )
        {
          v33 = (unsigned int)(3 * v27 + 1) >> 1;
          v34 = 4 * v33 + 8;
          if ( 4 * (int)v27 + 8 >= (unsigned int)v34 || (unsigned int)v27 >= v33 )
            goto LABEL_49;
          goto LABEL_27;
        }
        goto LABEL_13;
      }
      goto LABEL_34;
    }
    v29 = sub_15DC610(a1[9], v19, 0, 0, v8, v9, (int)v52, v53, v55, v56, v57, v58, v59, v60, v61, v62);
    v30 = sub_7E58D0((__int64)a1, *v5, v29);
    v31 = (_QWORD *)a1[3];
    v32 = v30;
    result = *(unsigned int *)(v31[411] + 4LL * v30);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result == 1 )
      return result;
    if ( (_DWORD)result == -1 )
    {
      v25 = (_QWORD *)a1[56];
      v26 = v32 ^ 1;
      if ( v25 )
      {
        v27 = *((unsigned int *)v25 - 1);
        if ( (_DWORD)v27 == *((_DWORD *)v25 - 2) )
        {
          v33 = (unsigned int)(3 * v27 + 1) >> 1;
          v34 = 4 * v33 + 8;
          if ( 4 * (int)v27 + 8 >= (unsigned int)v34 || (unsigned int)v27 >= v33 )
          {
LABEL_49:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v57, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v57);
            sub_233E40((__int64)&v57);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_27:
          v54 = v33;
          v53 = v26;
          v35 = (unsigned int *)sub_186B300(v25 - 1, v34);
          v9 = v54;
          v26 = v53;
          v25 = v35 + 2;
          a1[56] = v35 + 2;
          *v35 = v54;
          v28 = (int *)&v35[v35[1] + 2];
LABEL_14:
          *v28 = v26;
          ++*((_DWORD *)v25 - 1);
          goto LABEL_15;
        }
LABEL_13:
        v28 = (int *)v25 + v27;
        goto LABEL_14;
      }
LABEL_34:
      v53 = v26;
      v39 = (_QWORD *)sub_186B270(0x10u);
      v26 = v53;
      v25 = v39 + 1;
      *v39 = 2;
      a1[56] = v39 + 1;
      v28 = (int *)(v39 + 1);
      goto LABEL_14;
    }
LABEL_15:
    if ( ++v17 >= v13 )
    {
      v15 = (unsigned int *)a1[56];
      v40 = (const __m128i *)a1[10];
      v41 = a1 + 2;
      if ( v15 )
        v42 = *(v15 - 1);
      else
        v42 = 0;
      goto LABEL_37;
    }
    v10 = *v11;
  }
  v36 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v31 + 48LL);
  if ( v36 != sub_784580 )
    return v36(v31, v32);
  v37 = v31[412];
  result = v32 >> 1;
  if ( v37 && (unsigned int)result < *(_DWORD *)(v37 - 4) )
  {
    v38 = !(v32 & 1);
    *(_BYTE *)(v31[431] + result) = v38;
    *(_BYTE *)(v31[432] + result) = v38;
  }
  return result;
}

