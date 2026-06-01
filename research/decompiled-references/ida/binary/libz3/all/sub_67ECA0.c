__int64 *__fastcall sub_67ECA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  unsigned __int64 v13; // rdx
  __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rdx
  int v20; // eax
  __int64 *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // edx
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r14
  _QWORD *v29; // rax
  char **exception; // r14
  __int64 v31; // rdx
  __int64 v32; // [rsp+10h] [rbp-E0h]
  __int64 v33; // [rsp+20h] [rbp-D0h]
  unsigned int v34; // [rsp+2Ch] [rbp-C4h]
  __int64 v35; // [rsp+30h] [rbp-C0h]
  __int64 v36; // [rsp+38h] [rbp-B8h]
  __int64 v37; // [rsp+48h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+58h] [rbp-98h]
  __int64 v39; // [rsp+58h] [rbp-98h]
  __int64 v40; // [rsp+68h] [rbp-88h] BYREF
  __int64 v41; // [rsp+70h] [rbp-80h] BYREF
  int v42[2]; // [rsp+78h] [rbp-78h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-70h] BYREF
  int v44[2]; // [rsp+90h] [rbp-60h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-50h] BYREF
  char v46; // [rsp+A8h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a3 + 16);
  *a1 = 0;
  v32 = v4;
  a1[1] = v4;
  v6 = v5 + 40LL * *(unsigned int *)(a3 + 24);
  if ( v6 == v5 )
  {
LABEL_48:
    v7 = nullptr;
    v35 = 0;
    v36 = v32;
    goto LABEL_16;
  }
  while ( *(_DWORD *)(v5 + 4) != 2 )
  {
    v5 += 40;
    if ( v6 == v5 )
      goto LABEL_48;
  }
  v37 = v6;
  v7 = nullptr;
  v35 = 0;
  v36 = v32;
  if ( v5 != v6 )
  {
    while ( 1 )
    {
      sub_675770(v43, *(__int64 **)(a2 + 24), *(_QWORD *)(v5 + 16));
      v8 = v43[0];
      v33 = v43[1];
      v9 = *a1;
      if ( !*a1 )
        break;
      if ( v43[0] != v35 )
      {
        if ( v7 )
        {
          v13 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
          if ( (unsigned __int64)v7 < v13 )
          {
            v14 = v7;
            do
            {
              while ( 1 )
              {
                v15 = *v14;
                if ( *v14 )
                {
                  v10 = (*(_DWORD *)(v15 + 8))-- == 1;
                  if ( v10 )
                    break;
                }
                if ( (unsigned __int64)++v14 >= v13 )
                  goto LABEL_24;
              }
              v38 = v13;
              sub_15D7BC0(v36, v15);
              v13 = v38;
              ++v14;
            }
            while ( (unsigned __int64)v14 < v38 );
LABEL_24:
            v9 = *a1;
            *((_DWORD *)v7 - 1) = 0;
            v40 = v9;
            if ( v9 )
LABEL_25:
              ++*(_DWORD *)(v9 + 8);
            *(_QWORD *)v42 = v7;
            v41 = v36;
            sub_6761A0((unsigned int **)v42, &v40);
            v16 = *(__int64 **)v42;
            v17 = *(_QWORD *)(v5 + 16);
            if ( *(_DWORD *)(v17 + 24) > 1u )
            {
              sub_675770(v44, *(__int64 **)(a2 + 24), *(_QWORD *)(v17 + 40));
              v39 = *(_QWORD *)v44;
              if ( v16 )
              {
                v18 = 1;
                goto LABEL_32;
              }
              v29 = (_QWORD *)sub_186B270(0x18u);
              v18 = 1;
              *v29 = 2;
              v16 = v29 + 1;
              v20 = 1;
              v21 = v16;
              while ( 1 )
              {
                ++v18;
                *v21 = v39;
                *((_DWORD *)v16 - 1) = v20;
                v22 = *(_QWORD *)(v5 + 16);
                if ( v18 >= *(_DWORD *)(v22 + 24) )
                  break;
                sub_675770(v44, *(__int64 **)(a2 + 24), *(_QWORD *)(v22 + 8LL * v18 + 32));
                v39 = *(_QWORD *)v44;
LABEL_32:
                v23 = *((_DWORD *)v16 - 1);
                if ( v23 == *((_DWORD *)v16 - 2) )
                {
                  v24 = (3 * v23 + 1) >> 1;
                  v25 = 8 * v24 + 8;
                  if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_107EF6(&v45, "Overflow encountered when expanding vector", v31);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, &v45);
                    sub_233E40((__int64)&v45);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v34 = (3 * v23 + 1) >> 1;
                  v26 = (unsigned int *)sub_186B300(v16 - 1, v25);
                  v16 = (__int64 *)(v26 + 2);
                  *v26 = v34;
                  LODWORD(v26) = v26[1];
                  v21 = &v16[(unsigned int)v26];
                  v20 = (_DWORD)v26 + 1;
                }
                else
                {
                  v19 = v23;
                  v20 = v23 + 1;
                  v21 = &v16[v19];
                }
              }
            }
            v45 = v8;
            if ( v8 )
              ++*(_DWORD *)(v8 + 8);
            *(_QWORD *)v42 = v16;
            sub_6761A0((unsigned int **)v42, &v45);
            v7 = *(__int64 **)v42;
            v36 = v41;
            v27 = sub_15DCAD0(*(_QWORD *)(a2 + 152), v42[0], 0);
            if ( v27 )
LABEL_39:
              ++*(_DWORD *)(v27 + 8);
LABEL_40:
            sub_675460(*a1, a1[1]);
            *a1 = v27;
            goto LABEL_8;
          }
          *((_DWORD *)v7 - 1) = 0;
        }
        v40 = v9;
        goto LABEL_25;
      }
LABEL_8:
      if ( v8 )
      {
        v10 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v33, v8);
      }
      v11 = v5 + 40;
      if ( v37 != v5 + 40 )
      {
        while ( 1 )
        {
          v5 = v11;
          if ( *(_DWORD *)(v11 + 4) == 2 )
            break;
          v11 += 40;
          if ( v37 == v11 )
            goto LABEL_16;
        }
        if ( v37 != v11 )
          continue;
      }
      goto LABEL_16;
    }
    v28 = sub_15D1F10(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 32LL));
    if ( v8 != v35 )
    {
      sub_675460(v35, v32);
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v35 = v8;
    }
    v45 = v28;
    v46 = 1;
    *(_QWORD *)v44 = v35;
    v27 = sub_15DCAD0(*(_QWORD *)(a2 + 152), (int)v44, 0);
    sub_15D0DF0(&v45);
    if ( v27 )
      goto LABEL_39;
    goto LABEL_40;
  }
LABEL_16:
  *(_QWORD *)v42 = v7;
  v41 = v36;
  sub_2334C0(&v41);
  sub_675460(v35, v32);
  return a1;
}

