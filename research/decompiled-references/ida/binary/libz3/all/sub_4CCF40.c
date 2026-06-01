__int64 __fastcall sub_4CCF40(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  _QWORD *v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64); // rdx
  _QWORD **v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  _QWORD *v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64); // rdx
  _QWORD **v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  void *v15; // r15
  __int64 (__fastcall *v16)(__int64, __int64); // rdx
  char v17; // al
  __int64 v18; // rax
  __int64 *v19; // r15
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rsi
  unsigned int v25; // eax
  unsigned int v26; // r8d
  size_t v27; // rsi
  unsigned int v28; // r13d
  unsigned int *v29; // rax
  __int64 v30; // rsi
  void (__fastcall ***v31)(_QWORD); // rbp
  _QWORD *v34; // rax
  unsigned int *v35; // rdi
  int v36; // eax
  char **exception; // rbp
  __int64 v38; // rdx
  unsigned int v39; // [rsp+Ch] [rbp-6Ch]
  void *v40; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+18h] [rbp-60h] BYREF
  __int64 v42[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1[2];
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 200LL);
  if ( v5 == sub_4CBA50 )
  {
    v6 = (_QWORD *)a2[6];
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*v6 + 200LL);
    if ( v7 == v5 )
    {
      v8 = (_QWORD **)v6[6];
      v9 = (__int64 (__fastcall *)(__int64, __int64))(*v8)[25];
      if ( v9 == v7 )
        (*(void (__fastcall **)(void **))(*v8[6] + 200LL))(&v40);
      else
        ((void (__fastcall *)(void **))v9)(&v40);
    }
    else
    {
      ((void (__fastcall *)(void **))v7)(&v40);
    }
  }
  else
  {
    v5((__int64)&v40, (__int64)a2);
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 208LL);
  if ( v10 == sub_4CB960 )
  {
    v11 = (_QWORD *)a2[6];
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*v11 + 208LL);
    if ( v12 == v10 )
    {
      v13 = (_QWORD **)v11[6];
      v14 = (__int64 (__fastcall *)(__int64, __int64))(*v13)[26];
      if ( v14 == v12 )
        (*(void (__fastcall **)(void **))(*v13[6] + 208LL))(&ptr);
      else
        ((void (__fastcall *)(void **))v14)(&ptr);
    }
    else
    {
      ((void (__fastcall *)(void **))v12)(&ptr);
    }
  }
  else
  {
    v10((__int64)&ptr, (__int64)a2);
  }
  v39 = 0;
  while ( 1 )
  {
    v15 = ptr;
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 40LL);
    if ( v16 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v40 + 16LL))() )
        goto LABEL_17;
      v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      v17 = v16((__int64)v40, (__int64)ptr);
    }
    if ( v17 )
      break;
LABEL_17:
    v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v40 + 24LL))(v40);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 24LL))(v18, a1 + 1);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 16LL))(a1, a1 + 1) )
    {
      v19 = (__int64 *)a1[1];
      if ( v19 )
      {
        v20 = *((unsigned int *)v19 - 1);
        if ( (_DWORD)v20 )
        {
          v21 = (_QWORD *)a1[2];
          v22 = &v19[v20];
          if ( !v21 )
          {
            v34 = (_QWORD *)sub_186B270(0x18u);
            v21 = v34 + 1;
            a1[2] = v34 + 1;
            v35 = (unsigned int *)(v34 + 1);
            *v34 = 2;
            v36 = 1;
            goto LABEL_23;
          }
          do
          {
            v25 = *((_DWORD *)v21 - 1);
            if ( v25 == *((_DWORD *)v21 - 2) )
            {
              v26 = (3 * v25 + 1) >> 1;
              v27 = 8 * v26 + 8;
              v28 = v26;
              if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_DFB18(v42, "Overflow encountered when expanding vector", v38);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v42);
                sub_233E40((__int64)v42);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v29 = (unsigned int *)sub_186B300(v21 - 1, v27);
              v30 = v29[1];
              v21 = v29 + 2;
              *v29 = v28;
              a1[2] = v29 + 2;
              v35 = &v29[2 * v30 + 2];
              v36 = v30 + 1;
            }
            else
            {
              v23 = v25;
              v36 = v25 + 1;
              v35 = (unsigned int *)&v21[v23];
            }
LABEL_23:
            v24 = *v19++;
            *(_QWORD *)v35 = v24;
            *((_DWORD *)v21 - 1) = v36;
          }
          while ( v19 != v22 );
        }
      }
      ++v39;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 32LL))(v40);
  }
  v31 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 2))-- == 1 )
    {
      (**v31)(v31);
      sub_186B220(v31);
    }
  }
  sub_4C2420((void (__fastcall ***)(_QWORD))v40);
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 184LL))(a2, v39, a1[2]);
}

