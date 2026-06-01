__int64 __fastcall sub_6070F0(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, int a5, unsigned __int8 a6)
{
  __int64 v8; // rax
  const char *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r13
  const char *v13; // rdi
  void *v14; // rax
  int v15; // eax
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r15
  size_t v21; // rax
  size_t v22; // r13
  unsigned __int64 v23; // rax
  int v24; // ebx
  int v25; // eax
  char tinfo_attr; // bl
  __int64 v28; // rax
  void *v29; // rdi
  size_t v30; // rdx
  int v31; // ebx
  __int64 v32; // rax
  __int64 *v33; // [rsp+0h] [rbp-C8h]
  int tinfo_size; // [rsp+0h] [rbp-C8h]
  int v35; // [rsp+0h] [rbp-C8h]
  int v37; // [rsp+10h] [rbp-B8h]
  unsigned int v38; // [rsp+14h] [rbp-B4h]
  size_t v39; // [rsp+20h] [rbp-A8h]
  __int64 v42; // [rsp+30h] [rbp-98h]
  unsigned __int64 v44; // [rsp+48h] [rbp-80h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int128 v46; // [rsp+58h] [rbp-70h]
  void *v47; // [rsp+70h] [rbp-58h] BYREF
  __int128 v48; // [rsp+78h] [rbp-50h]
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v37 = 0;
  v42 = *(_QWORD *)(a1 + 1672);
  while ( v37 < a5 )
  {
    v44 = 7;
    v38 = *(_DWORD *)(*a4 + 4LL * v37);
    v8 = sub_673F50(a3, v38);
    if ( ((a6 ^ 1) & (v8 == 0)) != 0 )
    {
      clear_tinfo_t(&v44);
      return *((unsigned int *)a2 + 2);
    }
    if ( v8 )
    {
      v9 = *(const char **)(v8 + 16);
      if ( v9 )
      {
        v10 = *a2 + 80 * a2[1];
        if ( *a2 != v10 )
        {
          v33 = a2;
          v11 = *a2;
          v12 = v8;
          do
          {
            v13 = haystack;
            if ( *(_QWORD *)(v11 + 24) )
              v13 = *(const char **)(v11 + 16);
            if ( !strcmp(v13, v9) )
            {
              a2 = v33;
              v8 = v12;
              v9 = nullptr;
              goto LABEL_12;
            }
            v11 += 80;
          }
          while ( v10 != v11 );
          a2 = v33;
          v8 = v12;
        }
      }
LABEL_12:
      v14 = *(void **)(v8 + 8);
      if ( v14 )
      {
        ptr = v14;
        deserialize_tinfo(&v44, *(_QWORD *)(v42 + 8), &ptr, 0, 0, 0);
        if ( (unsigned __int8)((get_tinfo_property(v44, 2) & 0xF) - 10) > 2u )
        {
          tinfo_size = get_tinfo_size(0, v44, 0);
          v15 = sub_565920(*(_QWORD **)(a1 + 1672));
          if ( tinfo_size > v15 )
          {
            v35 = ((v15 + tinfo_size - 1) & -v15) / v15;
            if ( a4[1] - v37 >= (unsigned __int64)v35 )
            {
              if ( v35 <= 1 )
              {
                if ( v35 )
                  goto LABEL_21;
              }
              else
              {
                v16 = v37 + 1;
                while ( 1 )
                {
                  v17 = sub_673F50(a3, *(unsigned int *)(*a4 + 4LL * v16));
                  if ( v17 )
                  {
                    if ( *(_QWORD *)(v17 + 8) )
                      break;
                  }
                  if ( v37 + v35 == ++v16 )
                    goto LABEL_21;
                }
              }
            }
            v47 = &byte_7;
            copy_tinfo_t(&v44);
            clear_tinfo_t(&v47);
          }
        }
      }
      v35 = 1;
    }
    else
    {
      v35 = 1;
      v9 = nullptr;
    }
LABEL_21:
    v18 = a2[1];
    v19 = *a2;
    if ( a2[2] < (unsigned __int64)(v18 + 1) )
    {
      v28 = qvector_reserve(a2, v19, v18 + 1, 80);
      *a2 = v28;
      v18 = a2[1];
      v19 = v28;
    }
    v20 = v19 + 80 * v18;
    *(_DWORD *)v20 = 0;
    *(_QWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 40) = 0;
    *(_QWORD *)(v20 + 64) = 0;
    *(_DWORD *)(v20 + 72) = 0;
    *(_OWORD *)(v20 + 24) = 0;
    *(_OWORD *)(v20 + 48) = 0;
    ++a2[1];
    if ( v9 && (v21 = strlen(v9), (v22 = v21) != 0) )
    {
      v29 = *(void **)(v20 + 16);
      v30 = v21 + 1;
      if ( *(_QWORD *)(v20 + 32) < v21 + 1 )
      {
        v39 = v21 + 1;
        v32 = qvector_reserve(v20 + 16, *(_QWORD *)(v20 + 16), v30, 1);
        *(_QWORD *)(v20 + 16) = v32;
        v30 = v39;
        v29 = (void *)v32;
      }
      *(_QWORD *)(v20 + 24) = v30;
      memmove(v29, v9, v22);
      *(_BYTE *)(*(_QWORD *)(v20 + 16) + v22) = 0;
    }
    else
    {
      *(_QWORD *)(v20 + 24) = 0;
    }
    v46 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 14, 1);
    *(_QWORD *)&v46 = 14;
    strcpy((char *)ptr, "__org_typedef");
    if ( (unsigned __int8)get_tinfo_attr(v44, (__int64)&ptr, 0, 1u) )
    {
      if ( ptr )
      {
        *(_QWORD *)&v46 = 0;
        qfree(ptr);
      }
    }
    else
    {
      v48 = 0;
      v47 = nullptr;
      v47 = (void *)qvector_reserve(&v47, 0, 13, 1);
      *(_QWORD *)&v48 = 13;
      strcpy((char *)v47, "__org_arrdim");
      tinfo_attr = get_tinfo_attr(v44, (__int64)&v47, 0, 1u);
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      if ( ptr )
      {
        *(_QWORD *)&v46 = 0;
        qfree(ptr);
      }
      if ( !tinfo_attr )
        goto LABEL_30;
    }
    *(_DWORD *)(v20 + 72) |= 8u;
LABEL_30:
    v23 = *(_QWORD *)(v20 + 64);
    *(_QWORD *)(v20 + 64) = v44;
    v44 = v23;
    if ( v35 == 2 && a5 - 1 > v37 )
    {
      v31 = *(_DWORD *)(*a4 + 4LL * (v37 + 1));
      cleanup_argloc(v20);
      v24 = v38 | (v31 << 16);
      v25 = 4;
    }
    else
    {
      cleanup_argloc(v20);
      v24 = v38;
      v25 = 3;
    }
    *(_DWORD *)(v20 + 8) = v24;
    *(_DWORD *)v20 = v25;
    v37 += v35;
    clear_tinfo_t(&v44);
  }
  return *((unsigned int *)a2 + 2);
}
