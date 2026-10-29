void __fastcall sub_E66830(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const void *a7,
        size_t n)
{
  unsigned int v12; // eax
  char v13; // r9
  int v14; // ebp
  __int64 v15; // rcx
  void *v16; // rdi
  char *v17; // rax
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  void *v22; // r15
  unsigned int v23; // r14d
  __int64 v24; // r12
  __int64 v25; // r12
  bool v26; // al
  unsigned __int64 v27; // rax
  char *v28; // rdi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  char src; // [rsp+0h] [rbp-88h]
  char v37; // [rsp+8h] [rbp-80h]
  char v38; // [rsp+8h] [rbp-80h]
  char v39; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  char v41; // [rsp+10h] [rbp-78h]
  __int64 v42; // [rsp+18h] [rbp-70h]
  _QWORD v43[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  __int64 v45; // [rsp+38h] [rbp-50h]
  __int64 v46; // [rsp+40h] [rbp-48h]
  _QWORD v47[8]; // [rsp+48h] [rbp-40h] BYREF

  v12 = sub_E534D0(a2, a2, (__int64)a3, a4, a5, a6);
  v13 = 0;
  v14 = v12;
  if ( v12 <= 3 )
    v13 = a00fg1hij420[v12 + 4];
  v15 = a1[1];
  if ( a3 )
  {
    v16 = *(void **)(v15 + 32);
    if ( n > *(_QWORD *)(v15 + 24) - (_QWORD)v16 )
    {
      v39 = v13;
      sub_22581D0(a1[1], a7, n);
      v15 = a1[1];
      v13 = v39;
    }
    else if ( n )
    {
      v42 = a1[1];
      v41 = v13;
      memcpy(v16, a7, n);
      v13 = v41;
      *(_QWORD *)(v42 + 32) += n;
      v15 = a1[1];
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 152LL) > 0xB71AFFFu
      && a4
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16
      && (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      src = v13;
      sub_971800(v15, "M");
      sub_E608A0(a1, a5, nullptr, 0);
      v15 = a1[1];
      v13 = src;
    }
    v17 = *(char **)(v15 + 32);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(v15 + 24) )
    {
      v15 = sub_2257CD0(v15, (unsigned int)v13);
      v18 = *(_BYTE **)(v15 + 32);
      if ( (unsigned __int64)v18 < *(_QWORD *)(v15 + 24) )
        goto LABEL_14;
    }
    else
    {
      *(_QWORD *)(v15 + 32) = v17 + 1;
      *v17 = v13;
      v18 = *(_BYTE **)(v15 + 32);
      if ( (unsigned __int64)v18 < *(_QWORD *)(v15 + 24) )
      {
LABEL_14:
        *(_QWORD *)(v15 + 32) = v18 + 1;
        *v18 = 63;
LABEL_15:
        v19 = (*(__int64 (__fastcall **)(_QWORD *))(*a3 + 32LL))(a3);
        if ( (*(_QWORD *)(v19 + 80) & 0x40000LL) != 0
          || ((*(_QWORD *)(v19 + 80) >> 16) & 8) != 0
          || (unsigned int)sub_B747A0(v19) )
        {
          v20 = sub_A40AA0(*(_QWORD **)(*a1 + 8));
          sub_E56C40((__int64)v43, (__int64)a3, 0);
          v21 = v20;
          v22 = nullptr;
          sub_F59AE0(&v44, v21, v43[0], v43[1]);
          sub_E5EB50(a1, a3, v47);
          v23 = v46;
          v24 = v44;
          if ( v45 )
            v22 = *(void **)(*(_QWORD *)(sub_EBA840(*(_QWORD *)(*a1 + 8), a2) + 72) + 32LL);
          v25 = 4 * v24;
          v26 = v25 == 0;
        }
        else
        {
          v22 = nullptr;
          sub_E56C40((__int64)&v44, (__int64)a3, 0);
          sub_E5E850(a1, v44, v45, v30, v31, v32);
          sub_E56C40((__int64)&v44, (__int64)a3, 0);
          v25 = 0;
          v23 = 0;
          sub_E60470((__int64)a1, v44, v45, 1);
          v26 = 1;
        }
        if ( v14 == 2 && v26 )
        {
          v25 = 0;
          v29 = sub_A56F00(*(_QWORD *)(*a1 + 8), a2);
          sub_E56120((__int64)a1, (void *)(v23 - v29));
          goto LABEL_33;
        }
        goto LABEL_22;
      }
    }
    sub_2257CD0(v15, 63);
    goto LABEL_15;
  }
  if ( !v12 )
  {
    v34 = sub_9717A0(a1[1], a7, n);
    sub_971800(v34, "0A@");
    return;
  }
  v27 = *(_QWORD *)(v15 + 24);
  v28 = *(char **)(v15 + 32);
  v25 = -(__int64)(v14 == 3);
  if ( v27 - (unsigned __int64)v28 < n )
  {
    v38 = v13;
    v33 = sub_22581D0(a1[1], a7, n);
    v13 = v38;
    v15 = v33;
    v28 = *(char **)(v33 + 32);
    v27 = *(_QWORD *)(v33 + 24);
  }
  else if ( n )
  {
    v40 = a1[1];
    v37 = v13;
    memcpy(v28, a7, n);
    v15 = v40;
    v13 = v37;
    v28 = (char *)(*(_QWORD *)(v40 + 32) + n);
    v27 = *(_QWORD *)(v40 + 24);
    *(_QWORD *)(v40 + 32) = v28;
  }
  if ( (unsigned __int64)v28 >= v27 )
  {
    v22 = nullptr;
    v23 = 0;
    sub_2257CD0(v15, (unsigned int)v13);
LABEL_22:
    if ( v14 <= 0 )
      return;
    goto LABEL_30;
  }
  v22 = nullptr;
  v23 = 0;
  *(_QWORD *)(v15 + 32) = v28 + 1;
  *v28 = v13;
  if ( v14 > 0 )
  {
LABEL_30:
    sub_E56120((__int64)a1, (void *)v23);
    if ( v14 == 3 )
    {
      sub_E56120((__int64)a1, v22);
    }
    else if ( v14 <= 1 )
    {
      return;
    }
LABEL_33:
    sub_E56120((__int64)a1, (void *)v25);
  }
}

