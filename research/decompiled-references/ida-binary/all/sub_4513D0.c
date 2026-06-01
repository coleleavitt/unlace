__int64 __fastcall sub_4513D0(unsigned int *a1, int a2, __int64 a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // r12d
  int v6; // r13d
  __int64 v7; // r14
  const char *v11; // rsi
  unsigned __int64 v12; // r13
  _BOOL8 v13; // rdx
  void (__fastcall *v14)(__int64, _QWORD, _BOOL8); // r12
  const char *v15; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  const char *v19; // rdx
  __int64 v20; // r12
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 (*v25)(); // rcx
  unsigned int v26; // eax
  unsigned __int64 v27; // r12
  bool v28; // zf
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  const void *v31; // r14
  void *v32; // rdi
  const void *v33; // r14
  void *v34; // rdi
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp-4h] [rbp-38h]
  const char *v39; // [rsp+4h] [rbp-30h]
  int v40; // [rsp+Ch] [rbp-28h]
  int v41; // [rsp+14h] [rbp-20h]
  int v42; // [rsp+1Ch] [rbp-18h]
  int v43; // [rsp+24h] [rbp-10h]
  __int64 v44; // [rsp+2Ch] [rbp-8h]

  if ( !*((_BYTE *)a1 + 72) )
    return 1;
  v44 = v7;
  v43 = v6;
  v42 = v5;
  v41 = v4;
  v40 = v3;
  if ( a2 == -1 )
  {
    v30 = *((_QWORD *)a1 + 3);
    if ( v30 > 1 )
    {
      v33 = *((const void **)a1 + 2);
      v34 = *((void **)a1 + 6);
      if ( *((_QWORD *)a1 + 8) < v30 )
      {
        v37 = qvector_reserve(a1 + 12, v34, v30, 1);
        *((_QWORD *)a1 + 6) = v37;
        v34 = (void *)v37;
      }
      *((_QWORD *)a1 + 7) = v30;
      memmove(v34, v33, v30 - 1);
      *(_BYTE *)(*((_QWORD *)a1 + 6) + v30 - 1) = 0;
    }
    else
    {
      *((_QWORD *)a1 + 7) = 0;
    }
    if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int64))a3)(a3, 1, (__int64)(a1 + 2)) )
    {
      v12 = *((_QWORD *)a1 + 3);
      if ( !v12 )
        goto LABEL_8;
LABEL_11:
      v13 = 0;
      v14 = *(void (__fastcall **)(__int64, _QWORD, _BOOL8))(*(_QWORD *)a3 + 88LL);
      if ( v12 > 1 )
      {
        v15 = &s1;
        if ( *((_QWORD *)a1 + 7) )
          v15 = *((const char **)a1 + 6);
        v13 = strcmp(v15, *((const char **)a1 + 2)) != 0;
      }
      v14(a3, 0, v13);
      return 1;
    }
    goto LABEL_10;
  }
  v11 = (_BYTE *)(&dword_0 + 1);
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int64))a3)(a3, 1, (__int64)(a1 + 2)) )
  {
    if ( a2 != -2 )
      goto LABEL_10;
    goto LABEL_19;
  }
  v11 = &s1;
  if ( *((_QWORD *)a1 + 7) )
  {
    v12 = *((_QWORD *)a1 + 3);
    v11 = *((const char **)a1 + 6);
    if ( !v12 )
      goto LABEL_6;
    goto LABEL_17;
  }
  v12 = *((_QWORD *)a1 + 3);
  if ( v12 )
  {
LABEL_17:
    if ( a2 == -7 )
    {
      if ( !strcmp(*((const char **)a1 + 2), v11) )
        goto LABEL_11;
      goto LABEL_42;
    }
    if ( a2 != -2 )
      goto LABEL_11;
LABEL_19:
    v17 = sub_426230(a3, v11);
    v18 = sub_417080((__int64)v17);
    v19 = &s1;
    v20 = v18;
    v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 224LL);
    if ( *((_QWORD *)a1 + 3) )
    {
      v19 = *((const char **)a1 + 2);
      v22 = *a1;
      if ( v21 == vault_with_events_t__::vfunc_28 )
      {
LABEL_21:
        v23 = *(__int64 **)(v20 + 8);
        if ( v23 )
        {
          v24 = *v23;
          v25 = *(__int64 (**)())(*v23 + 480);
          if ( v25 == sub_178B60 )
          {
LABEL_23:
            v26 = (*(__int64 (__fastcall **)(__int64 *, __int64, const char *))(v24 + 192))(v23, v22, v19);
            goto LABEL_24;
          }
          v39 = v19;
          HIDWORD(v38) = v22;
          v35 = v25();
          v22 = (unsigned int)v22;
          v19 = v39;
          if ( !v35 )
          {
            v23 = *(__int64 **)(v20 + 8);
            v24 = *v23;
            goto LABEL_23;
          }
        }
        v26 = 52;
LABEL_40:
        sub_4168C0(v26, (__int64)"Failed to edit worklist");
        return 0;
      }
    }
    else
    {
      v22 = *a1;
      if ( v21 == vault_with_events_t__::vfunc_28 )
        goto LABEL_21;
    }
    v26 = ((__int64 (__fastcall *)(__int64, __int64, const char *))v21)(v20, v22, v19);
LABEL_24:
    if ( !v26 )
    {
      v27 = *((_QWORD *)a1 + 3);
      if ( v27 > 1 )
      {
        v31 = *((const void **)a1 + 2);
        v32 = *((void **)a1 + 6);
        if ( *((_QWORD *)a1 + 8) < v27 )
        {
          v36 = qvector_reserve(a1 + 12, *((_QWORD *)a1 + 6), *((_QWORD *)a1 + 3), 1);
          *((_QWORD *)a1 + 6) = v36;
          v32 = (void *)v36;
        }
        *((_QWORD *)a1 + 7) = v27;
        memmove(v32, v31, v27 - 1);
        *(_BYTE *)(*((_QWORD *)a1 + 6) + v27 - 1) = 0;
        if ( !*((_QWORD *)a1 + 10) )
          goto LABEL_10;
      }
      else
      {
        v28 = *((_QWORD *)a1 + 10) == 0;
        *((_QWORD *)a1 + 7) = 0;
        if ( v28 )
          goto LABEL_8;
      }
      v29 = sub_4A0300("Commits", v38, (int)v39, v40, v41, v42, v43, v44);
      if ( v29 )
        sub_4A4600(v29, 0, 7, 0);
LABEL_10:
      v12 = *((_QWORD *)a1 + 3);
      goto LABEL_11;
    }
    goto LABEL_40;
  }
LABEL_6:
  if ( a2 != -7 )
  {
    if ( a2 != -2 )
    {
LABEL_8:
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a3 + 88LL))(a3, 0, 0);
      return 1;
    }
    goto LABEL_19;
  }
  if ( !*v11 )
    goto LABEL_8;
LABEL_42:
  if ( sub_420C90() )
    goto LABEL_10;
  return 0;
}
