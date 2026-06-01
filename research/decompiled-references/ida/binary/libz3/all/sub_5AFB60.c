__int64 __fastcall sub_5AFB60(__int64 a1, __int64 *a2, __m128i a3)
{
  __int64 *v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  __int64 *i; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int v17; // r12d
  unsigned int *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  void (***v24)(void); // r13
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 (__fastcall *v28)(void (__fastcall ***)(_QWORD)); // rdx
  _QWORD *v30; // rax
  __int64 v31; // r14
  unsigned __int64 v32; // r15
  __int64 v33; // rax
  __int64 (__fastcall *v34)(void (__fastcall ***)(_QWORD)); // rdx
  void *v35; // r14
  void (***v36)(void); // rdi
  _QWORD *v37; // rax
  __int64 v38; // rax
  char **exception; // r15
  __int64 v40; // [rsp+0h] [rbp-90h]
  char v41; // [rsp+Fh] [rbp-81h]
  __int64 v42; // [rsp+10h] [rbp-80h]
  __int64 **ptr; // [rsp+18h] [rbp-78h]
  __int64 v44; // [rsp+20h] [rbp-70h]
  _QWORD *v46; // [rsp+38h] [rbp-58h] BYREF
  __int64 v47[10]; // [rsp+40h] [rbp-50h] BYREF

  ptr = (__int64 **)a2[13];
  v42 = *(_QWORD *)(a2[1] + 24);
  sub_5A3680((__int64)a2, 0, a3);
  v4 = (__int64 *)a2[14];
  v46 = nullptr;
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = *v4;
      v7 = 8 * v5;
      v8 = 0;
      if ( *v4 )
        goto LABEL_8;
LABEL_39:
      v37 = (_QWORD *)sub_186B270(0x18u);
      v13 = v37 + 1;
      *v37 = 2;
      v10 = 1;
      v46 = v13;
      for ( i = v13; ; i = &v13[v9] )
      {
        v8 += 8;
        *i = v6;
        *((_DWORD *)v13 - 1) = v10;
        if ( v7 == v8 )
          break;
        while ( 1 )
        {
          v6 = *(_QWORD *)(a2[14] + v8);
          if ( v6 )
          {
LABEL_8:
            v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6);
            v13 = v46;
            v6 = v12;
            if ( !v46 )
              goto LABEL_39;
          }
          v14 = *((_DWORD *)v13 - 1);
          if ( v14 != *((_DWORD *)v13 - 2) )
            break;
          v15 = (3 * v14 + 1) >> 1;
          v16 = 8 * v15 + 8;
          v17 = v15;
          if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v47, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v47);
            sub_233E40((__int64)v47);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = (unsigned int *)sub_186B300(v13 - 1, v16);
          v19 = v18[1];
          v13 = v18 + 2;
          *v18 = v17;
          v8 += 8;
          v46 = v13;
          v13[v19] = v6;
          v18[1] = v19 + 1;
          if ( v7 == v8 )
            goto LABEL_13;
        }
        v9 = v14;
        v10 = v14 + 1;
      }
    }
  }
LABEL_13:
  v20 = *(_QWORD *)(a1 + 24);
  if ( v20 && *(_DWORD *)(v20 - 4) )
  {
    v21 = (_QWORD *)sub_186B270(0x18u);
    v22 = *(_QWORD *)(a1 + 24);
    *v21 = off_1C52148;
    v21[2] = &v46;
    v21[1] = a1;
    if ( v22 )
      v23 = *(unsigned int *)(v22 - 4);
    else
      v23 = 0;
    v24 = (void (***)(void))(*(__int64 (__fastcall **)(__int64, __int64 **, __int64))(*(_QWORD *)v42 + 24LL))(
                              v42,
                              ptr,
                              v23);
    ptr = (__int64 **)((__int64 (__fastcall *)(void (***)(void), __int64 **))(*v24)[2])(v24, ptr);
    sub_4CFE00(v24);
    v41 = 0;
    v25 = *(_QWORD *)(a1 + 32);
    if ( !v25 )
      goto LABEL_18;
  }
  else
  {
    v41 = 1;
    v25 = *(_QWORD *)(a1 + 32);
    if ( !v25 )
      goto LABEL_18;
  }
  if ( !*(_DWORD *)(v25 - 4) || (v30 = v46) == nullptr || (v31 = *((unsigned int *)v46 - 1), !(_DWORD)v31) )
  {
LABEL_18:
    v26 = a2[11];
    goto LABEL_19;
  }
  v32 = 0;
  v26 = 0;
  v44 = 8 * v31;
  while ( 1 )
  {
    v35 = (void *)v30[v32 / 8];
    if ( v35 )
    {
      v36 = *(void (****)(void))(a1 + 40);
      if ( !v36 )
      {
        v40 = sub_4C4920(v42, (__int64)v35);
        v36 = *(void (****)(void))(a1 + 40);
        if ( (void (***)(void))v40 != v36 )
        {
          sub_4CFB00(v36);
          v36 = (void (***)(void))v40;
          *(_QWORD *)(a1 + 40) = v40;
        }
      }
      v33 = ((__int64 (__fastcall *)(void (***)(void), void *))(*v36)[2])(v36, v35);
      v46[v32 / 8] = v33;
      v34 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v35 + 16LL);
      if ( v34 == sub_4C9C10 )
      {
        (**(void (__fastcall ***)(void *))v35)(v35);
        sub_186B220(v35);
      }
      else
      {
        v34((void (__fastcall ***)(_QWORD))v35);
      }
      if ( !v26 )
        break;
    }
    v32 += 8LL;
    if ( v32 == v44 )
      goto LABEL_41;
LABEL_34:
    v30 = v46;
  }
  v38 = v46[v32 / 8];
  v32 += 8LL;
  v26 = *(_QWORD *)(v38 + 8);
  if ( v32 != v44 )
    goto LABEL_34;
LABEL_41:
  if ( !v26 )
    goto LABEL_18;
LABEL_19:
  v27 = sub_186B270(0xA0u);
  sub_5A4AC0(v27, a2[1], (__int64 *)(a1 + 8), *(char **)(a1 + 56), ptr[1], v26, -1);
  sub_5A3D20(v27, (__int64)ptr, &v46, 0, a3);
  if ( !v41 )
  {
    v28 = (__int64 (__fastcall *)(void (__fastcall ***)(_QWORD)))(*ptr)[2];
    if ( v28 == sub_4C9C30 )
    {
      ((void (__fastcall *)(__int64 **))**ptr)(ptr);
      sub_186B220(ptr);
    }
    else
    {
      v28((void (__fastcall ***)(_QWORD))ptr);
    }
  }
  if ( v46 )
    sub_186B220(v46 - 1);
  return v27;
}

