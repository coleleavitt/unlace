__int64 __fastcall sub_79C5C0(__int64 *a1, unsigned __int8 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rdx
  char v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  void *v11; // r13
  __int64 (*v12)(void); // rax
  __int64 v13; // rdi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  const char *v17; // rax
  size_t v18; // rax
  const char *v19; // r8
  size_t v20; // r9
  __int64 v21; // rbx
  const char *v23; // rax
  const char *v24; // rbx
  size_t v25; // rax
  size_t v26; // r12
  void *v27; // rdi
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rax
  size_t v31; // r14
  const char *src; // [rsp+8h] [rbp-70h]
  _BYTE *srcb; // [rsp+8h] [rbp-70h]
  void *srca; // [rsp+8h] [rbp-70h]
  const char *v35; // [rsp+10h] [rbp-68h]
  size_t v36; // [rsp+18h] [rbp-60h]
  void *v37[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *a1;
  v37[3] = (void *)__readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 40);
  if ( v6 != sub_79C410 )
  {
    v29 = v6();
    if ( *((_BYTE *)a1 + 57) )
    {
      v7 = 0;
      if ( !v29 )
      {
        v4 = *a1;
        goto LABEL_3;
      }
    }
    else
    {
      v7 = v29 ^ 1;
    }
LABEL_6:
    sub_79FD90(v37, a2[8]);
    (*(void (__fastcall **)(unsigned __int8 *, void **, _QWORD))(*(_QWORD *)a2 + 16LL))(
      a2,
      v37,
      *(unsigned int *)(a1[2] + 108));
    v8 = a2[8];
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1[2] + 16LL))(a1[2], v8, v37);
    v10 = (_QWORD *)a1[2];
    v11 = (void *)v9;
    if ( v9 )
    {
      v21 = sub_79E760(v10, v9);
LABEL_15:
      qfree(v11);
      if ( v37[0] )
      {
        v37[1] = nullptr;
        qfree(v37[0]);
      }
      return v21;
    }
    v12 = *(__int64 (**)(void))(*v10 + 24LL);
    if ( (char *)v12 == (char *)sub_79C400 )
      v13 = v10[12];
    else
      v13 = v12();
    if ( (unsigned int)sub_79DA60() == -15059582 )
    {
      *((_BYTE *)a1 + 57) = 1;
      callui(25, v8, (int)&callui, v14, v15, v16);
    }
    v17 = (const char *)sub_79DA70(v13);
    if ( v17 && (src = v17, v18 = strlen(v17), v19 = src, (v20 = v18) != 0) )
    {
      v27 = (void *)*a3;
      v28 = v18 + 1;
      if ( a3[2] < v18 + 1 )
      {
        v36 = v18;
        v35 = src;
        srca = (void *)(v18 + 1);
        v30 = qvector_reserve(a3, *a3, v28, 1);
        *a3 = v30;
        v20 = v36;
        v27 = (void *)v30;
        v19 = v35;
        v28 = (__int64)srca;
      }
      a3[1] = v28;
      srcb = (_BYTE *)v20;
      memmove(v27, v19, v20);
      srcb[*a3] = 0;
      if ( v7 )
LABEL_13:
        sub_365330();
      if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      {
LABEL_19:
        qerrstr(-1);
        sub_383DA0();
      }
      if ( (unsigned __int64)a3[1] > 1 )
        goto LABEL_14;
    }
    else
    {
      a3[1] = 0;
      if ( v7 )
        goto LABEL_13;
      if ( (*(_DWORD *)&debug & 0x100000) != 0 )
        goto LABEL_19;
    }
    v23 = (const char *)qerrstr(-1);
    v24 = v23;
    if ( v23 && (v25 = strlen(v23), (v26 = v25) != 0) )
    {
      v31 = v25 + 1;
      if ( a3[2] < v25 + 1 )
        *a3 = qvector_reserve(a3, *a3, v25 + 1, 1);
      a3[1] = v31;
      memmove((void *)*a3, v24, v26);
      *(_BYTE *)(*a3 + v26) = 0;
    }
    else
    {
      a3[1] = 0;
    }
LABEL_14:
    v21 = 0;
    goto LABEL_15;
  }
  if ( !*((_BYTE *)a1 + 57) )
  {
LABEL_5:
    v7 = 1;
    goto LABEL_6;
  }
LABEL_3:
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(v4 + 24))(a1, a3) )
  {
    *((_BYTE *)a1 + 57) = 0;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
    sub_383DA0();
  return 0;
}

