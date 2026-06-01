void __fastcall sub_B32AD0(unsigned int *a1, unsigned int a2, _QWORD *a3)
{
  char **exception; // rbp
  __int64 v6; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rcx
  _QWORD *v13; // rdx
  char v14; // cl
  int v15; // r13d
  __int64 (__fastcall *v16)(unsigned int *, __int64, __int64 *); // rcx
  __int64 v17; // r15
  __int64 v18; // r15
  unsigned __int64 v19; // rbx
  _DWORD *v20; // rax
  unsigned int v21; // edi
  __int64 (__fastcall *v22)(_DWORD *, _QWORD *); // rax
  _QWORD *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rcx
  _QWORD *v35; // rbx
  _QWORD *i; // r14
  __int64 (__fastcall *v37)(unsigned int *, _QWORD *); // rax
  _QWORD *v38; // rax
  __int64 v39; // rsi
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // r15d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *((_QWORD *)a1 + 33);
  if ( *(_BYTE *)(v6 + 17) && (_QWORD *)a3[3] != a3 )
    return;
  do
  {
    v8 = a2;
    v9 = a2;
    a2 = *(_DWORD *)(*((_QWORD *)a1 + 43) + 4LL * a2);
  }
  while ( v9 != a2 );
  v10 = *(__int64 **)(*((_QWORD *)a1 + 32) + 8 * v8);
  v11 = *(_QWORD *)a1;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 416LL);
  if ( v12 == sub_B307D0 )
  {
    v13 = (_QWORD *)*v10;
    v14 = *(_BYTE *)(v6 + 18);
    if ( *v10 )
    {
      v15 = *((_DWORD *)v13 - 1);
      if ( !v15 && !v14 )
      {
        v15 = 0;
LABEL_46:
        if ( !*((_DWORD *)v13 - 2) )
          goto LABEL_58;
        v24 = 0;
        goto LABEL_20;
      }
      v16 = *(__int64 (__fastcall **)(unsigned int *, __int64, __int64 *))(v11 + 408);
      v13 = (_QWORD *)*v10;
      if ( v16 == sub_B30FF0 )
      {
LABEL_10:
        v17 = *((unsigned int *)v13 - 1);
        if ( (_DWORD)v17 )
        {
          v18 = 8 * v17;
          v19 = 0;
          while ( 1 )
          {
            v22 = *(__int64 (__fastcall **)(_DWORD *, _QWORD *))(v11 + 400);
            v23 = (_QWORD *)v13[v19 / 8];
            if ( v22 == sub_B307F0 )
            {
              v20 = *(_DWORD **)(*(_QWORD *)(*v23 + 16LL) + 24LL);
              if ( v20 )
              {
                v21 = a1[2];
                if ( v21 == *v20 && !v20[1] )
                {
                  v41 = sub_B39350(v23[14], v21);
                  (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 392LL))(a1, v41);
                  v13 = (_QWORD *)*v10;
                }
              }
              v19 += 8LL;
              if ( v18 == v19 )
                goto LABEL_18;
            }
            else
            {
              v19 += 8LL;
              ((void (__fastcall *)(unsigned int *, _QWORD *, _QWORD *, __int64 (__fastcall *)(_DWORD *, _QWORD *)))v22)(
                a1,
                v23,
                v13,
                sub_B307F0);
              v13 = (_QWORD *)*v10;
              if ( v18 == v19 )
                goto LABEL_18;
            }
            v11 = *(_QWORD *)a1;
          }
        }
        goto LABEL_46;
      }
    }
    else
    {
      v15 = 0;
      if ( !v14
        || (v16 = *(__int64 (__fastcall **)(unsigned int *, __int64, __int64 *))(v11 + 408), v15 = 0, v16 == sub_B30FF0) )
      {
LABEL_44:
        v50 = (_QWORD *)sub_186B270(0x18u);
        v13 = v50 + 1;
        *v50 = 2;
        v26 = 1;
        *v10 = (__int64)v13;
        v27 = v13;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v15 = v12((__int64)a1, a2, v10);
    if ( !*(_BYTE *)(*((_QWORD *)a1 + 33) + 18LL) && !v15 )
      goto LABEL_55;
    v11 = *(_QWORD *)a1;
    v16 = *(__int64 (__fastcall **)(unsigned int *, __int64, __int64 *))(*(_QWORD *)a1 + 408LL);
    if ( v16 == sub_B30FF0 )
    {
      v13 = (_QWORD *)*v10;
      if ( *v10 )
        goto LABEL_10;
      goto LABEL_44;
    }
  }
  v16(a1, a2, v10);
LABEL_55:
  v13 = (_QWORD *)*v10;
LABEL_18:
  if ( !v13 )
    goto LABEL_44;
  v24 = *((_DWORD *)v13 - 1);
  if ( *((_DWORD *)v13 - 2) != v24 )
  {
LABEL_20:
    v25 = v24;
    v26 = v24 + 1;
    v27 = &v13[v25];
    goto LABEL_21;
  }
  v46 = (3 * v24 + 1) >> 1;
  v47 = 8 * v46 + 8;
  if ( 8 * v24 + 8 >= (unsigned int)v47 || v24 >= v46 )
    goto LABEL_58;
  v48 = (unsigned int *)sub_186B300(v13 - 1, v47);
  v49 = v48[1];
  v13 = v48 + 2;
  *v10 = (__int64)(v48 + 2);
  *v48 = v46;
  LODWORD(v48) = v49;
  v27 = &v13[v49];
  v26 = (_DWORD)v48 + 1;
LABEL_21:
  *v27 = a3;
  *((_DWORD *)v13 - 1) = v26;
  v28 = (_QWORD *)sub_180C100(a1 + 100, 16);
  v29 = *((_QWORD **)a1 + 48);
  v30 = v28;
  *v28 = off_1C56E28;
  v28[1] = v10;
  if ( v29 )
  {
    v31 = *((_DWORD *)v29 - 1);
    if ( v31 != *((_DWORD *)v29 - 2) )
    {
      v32 = v31;
      v33 = v31 + 1;
      v34 = &v29[v32];
      goto LABEL_24;
    }
    v42 = (3 * v31 + 1) >> 1;
    v43 = 8 * v42 + 8;
    if ( 8 * v31 + 8 < (unsigned int)v43 && v31 < v42 )
    {
      v44 = (unsigned int *)sub_186B300(v29 - 1, v43);
      v45 = v44[1];
      v29 = v44 + 2;
      *v44 = v42;
      *((_QWORD *)a1 + 48) = v44 + 2;
      LODWORD(v44) = v45;
      v34 = &v29[v45];
      v33 = (_DWORD)v44 + 1;
      goto LABEL_24;
    }
LABEL_58:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v52, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v52);
    sub_233E40((__int64)v52);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v51 = (_QWORD *)sub_186B270(0x18u);
  v29 = v51 + 1;
  *v51 = 2;
  v33 = 1;
  *((_QWORD *)a1 + 48) = v29;
  v34 = v29;
LABEL_24:
  *v34 = v30;
  v35 = (_QWORD *)v10[1];
  *((_DWORD *)v29 - 1) = v33;
  if ( v35 )
  {
    for ( i = &v35[*((unsigned int *)v35 - 1)]; i != v35; ++v35 )
    {
      if ( (unsigned __int8)sub_BE3B20(a1, a3, *v35) )
        ++a1[69];
    }
  }
  if ( *(_BYTE *)(*((_QWORD *)a1 + 33) + 18LL) || v15 )
  {
    v37 = *(__int64 (__fastcall **)(unsigned int *, _QWORD *))(*(_QWORD *)a1 + 400LL);
    if ( v37 == sub_B307F0 )
    {
      v38 = *(_QWORD **)(*(_QWORD *)(*a3 + 16LL) + 24LL);
      if ( v38 )
      {
        v39 = a1[2];
        if ( *v38 == (unsigned int)v39 )
        {
          v40 = sub_B39350(a3[14], v39);
          (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a1 + 392LL))(a1, v40);
        }
      }
    }
    else
    {
      v37(a1, a3);
    }
  }
}

