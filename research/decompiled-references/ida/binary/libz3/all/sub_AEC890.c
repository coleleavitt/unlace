void __fastcall sub_AEC890(_QWORD *a1, unsigned int *a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // r13
  char **v7; // r13
  _QWORD *v8; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v15; // r8d
  unsigned int *v16; // r15
  __int64 v17; // rax
  unsigned int *v18; // r12
  __int64 v19; // rbx
  _DWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r12
  _DWORD *v29; // r13
  __int64 v30; // rbx
  _DWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 *v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rbp
  __int64 v38; // rax
  unsigned int v39; // ecx
  size_t v40; // rsi
  unsigned int v41; // r13d
  unsigned int *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // ecx
  size_t v45; // rsi
  unsigned int v46; // r15d
  unsigned int *v47; // rax
  __int64 v48; // rcx
  __int64 v52[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( !*((_BYTE *)a1 + 40) )
    return;
  v8 = (_QWORD *)a1[3];
  if ( v8 )
  {
    v11 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v11 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v12 = *v8;
        if ( *v8 )
        {
          v13 = a1[2];
          if ( (*(_DWORD *)(v12 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v11 )
          goto LABEL_9;
      }
      sub_15D7BC0(v13, v12);
      ++v8;
    }
    while ( v8 < v11 );
LABEL_9:
    v8 = (_QWORD *)a1[3];
    if ( v8 )
LABEL_10:
      *((_DWORD *)v8 - 1) = 0;
  }
  v15 = (_DWORD)a2 + 8;
  v16 = a2 + 2;
  v17 = *a2;
  v18 = &a2[v17 + 2];
  if ( v17 * 4 )
  {
    do
    {
      while ( 1 )
      {
        v25 = *v16;
        v26 = *(_QWORD *)(*a1 + 104LL);
        if ( *v16 != dword_1C7ED00 )
          break;
        v19 = *(_QWORD *)(v26 + 856);
        if ( v19 )
          goto LABEL_16;
        v20 = (_DWORD *)a1[3];
        if ( !v20 )
          goto LABEL_24;
LABEL_18:
        v21 = *(v20 - 1);
        if ( v21 == *(v20 - 2) )
        {
          v39 = (3 * v21 + 1) >> 1;
          v40 = 8 * v39 + 8;
          v41 = v39;
          if ( 8 * v21 + 8 >= (unsigned int)v40 || v21 >= v39 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v52, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v52);
            sub_233E40((__int64)v52);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (unsigned int *)sub_186B300(v20 - 2, v40);
          v43 = v42[1];
          v20 = v42 + 2;
          *v42 = v41;
          a1[3] = v42 + 2;
          LODWORD(v42) = v43;
          v24 = (__int64 *)&v20[2 * v43];
          v23 = (_DWORD)v42 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = (__int64 *)&v20[2 * v22];
        }
        ++v16;
        *v24 = v19;
        *(v20 - 1) = v23;
        if ( v18 == v16 )
          goto LABEL_25;
      }
      if ( v25 == dword_1C7ECFC )
      {
        v19 = *(_QWORD *)(v26 + 864);
        if ( v19 )
          goto LABEL_16;
      }
      else
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (v25 >> 1));
        if ( (v25 & 1) == 0 )
        {
          if ( !v19 )
            goto LABEL_17;
LABEL_16:
          ++*(_DWORD *)(v19 + 8);
          goto LABEL_17;
        }
        v19 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
        if ( v19 )
          goto LABEL_16;
      }
LABEL_17:
      v20 = (_DWORD *)a1[3];
      if ( v20 )
        goto LABEL_18;
LABEL_24:
      v27 = sub_186B270(0x18u);
      *(_QWORD *)v27 = 2;
      ++v16;
      a1[3] = v27 + 8;
      *(_QWORD *)(v27 + 8) = v19;
      *(_DWORD *)(v27 + 4) = 1;
    }
    while ( v18 != v16 );
  }
LABEL_25:
  if ( a5 )
  {
    v28 = *(_QWORD *)a5 + 4LL * *(unsigned int *)(a5 + 8);
    if ( v28 != *(_QWORD *)a5 )
    {
      v29 = *(_DWORD **)a5;
      do
      {
        while ( 1 )
        {
          v36 = *v29 ^ 1;
          v37 = *(_QWORD *)(*a1 + 104LL);
          if ( v36 != dword_1C7ED00 )
            break;
          v30 = *(_QWORD *)(v37 + 856);
          if ( v30 )
            goto LABEL_31;
          v31 = (_DWORD *)a1[3];
          if ( !v31 )
            goto LABEL_39;
LABEL_33:
          v32 = *(v31 - 1);
          if ( v32 == *(v31 - 2) )
          {
            v44 = (3 * v32 + 1) >> 1;
            v45 = 8 * v44 + 8;
            v46 = v44;
            if ( 8 * v32 + 8 >= (unsigned int)v45 || v32 >= v44 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v52, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v52);
              sub_233E40((__int64)v52);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v47 = (unsigned int *)sub_186B300(v31 - 2, v45);
            v48 = v47[1];
            v31 = v47 + 2;
            *v47 = v46;
            a1[3] = v47 + 2;
            LODWORD(v47) = v48;
            v35 = (__int64 *)&v31[2 * v48];
            v34 = (_DWORD)v47 + 1;
          }
          else
          {
            v33 = v32;
            v34 = v32 + 1;
            v35 = (__int64 *)&v31[2 * v33];
          }
          ++v29;
          *v35 = v30;
          *(v31 - 1) = v34;
          if ( (_DWORD *)v28 == v29 )
            goto LABEL_40;
        }
        if ( v36 == dword_1C7ECFC )
        {
          v30 = *(_QWORD *)(v37 + 864);
          if ( v30 )
            goto LABEL_31;
        }
        else
        {
          v30 = *(_QWORD *)(*(_QWORD *)(*a1 + 8840LL) + 8LL * (v36 >> 1));
          if ( (v36 & 1) == 0 )
          {
            if ( !v30 )
              goto LABEL_32;
LABEL_31:
            ++*(_DWORD *)(v30 + 8);
            goto LABEL_32;
          }
          v30 = sub_15E1A70(*(_QWORD *)(*a1 + 104LL));
          if ( v30 )
            goto LABEL_31;
        }
LABEL_32:
        v31 = (_DWORD *)a1[3];
        if ( v31 )
          goto LABEL_33;
LABEL_39:
        v38 = sub_186B270(0x18u);
        *(_QWORD *)v38 = 2;
        ++v29;
        a1[3] = v38 + 8;
        *(_QWORD *)(v38 + 8) = v30;
        *(_DWORD *)(v38 + 4) = 1;
      }
      while ( (_DWORD *)v28 != v29 );
    }
  }
LABEL_40:
  sub_AEAD60(a1, (__int64 *)a3, (__int64)(a1 + 2), a4, v15, a6);
}

