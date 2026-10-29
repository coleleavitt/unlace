void __fastcall sub_FCB570(__int64 a1, __int64 a2)
{
  __int64 *v2; // r13
  __int64 *i; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  void **p_ptr; // r8
  int v7; // eax
  __int64 v8; // rbx
  char v9; // r12
  char v10; // r15
  __int64 v11; // r9
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+0h] [rbp-78h]
  void **v28; // [rsp+0h] [rbp-78h]
  void **v29; // [rsp+8h] [rbp-70h]
  void **v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v33; // [rsp+18h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(__int64 **)(a1 + 264);
  for ( i = *(__int64 **)(a1 + 256); v2 != i; ++*(_DWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      v4 = *i;
      if ( (*(_BYTE *)(*i + 904) & 0x20) == 0 )
        break;
      if ( v2 == ++i )
        goto LABEL_8;
    }
    v5 = *(unsigned int *)(a2 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_22134E0(a2, a2 + 16, v5 + 1, 8);
      v5 = *(unsigned int *)(a2 + 8);
    }
    ++i;
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v5) = v4;
  }
LABEL_8:
  p_ptr = &ptr;
  ptr = &v34;
  v33 = 0x400000000LL;
  v7 = *(_DWORD *)(a1 + 1040);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 8LL * (unsigned int)(v7 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 1032) + v8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 1032) + v8) & 4) != 0 )
          break;
        v13 = *(unsigned int *)(a2 + 8);
        if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v27 = v11;
          v30 = p_ptr;
          sub_22134E0(a2, a2 + 16, v13 + 1, 8);
          v13 = *(unsigned int *)(a2 + 8);
          p_ptr = v30;
          v11 = v27;
        }
        v8 += 8;
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v13) = v12;
        ++*(_DWORD *)(a2 + 8);
        if ( v11 == v8 )
          goto LABEL_18;
      }
      v10 = v9;
      if ( !v9 )
      {
        if ( v12 )
        {
          v24 = (unsigned int)v33;
          v25 = (unsigned int)v33 + 1LL;
          if ( v25 > HIDWORD(v33) )
          {
            v28 = p_ptr;
            v31 = v11;
            sub_22134E0(p_ptr, p_ptr + 2, v25, 8);
            v24 = (unsigned int)v33;
            v11 = v31;
            p_ptr = v28;
          }
          v10 = 1;
          *((_QWORD *)ptr + v24) = v12;
          LODWORD(v33) = v33 + 1;
        }
        else
        {
          LODWORD(v33) = 0;
          v9 = 1;
          v10 = 1;
        }
      }
      v8 += 8;
    }
    while ( v11 != v8 );
LABEL_18:
    if ( v10 )
    {
      v14 = *(_DWORD *)(a1 + 952);
      if ( v14 )
      {
        v15 = 0;
        v16 = a2 + 16;
        v17 = 8LL * (unsigned int)(v14 - 1) + 8;
        while ( 1 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(a1 + 944) + v15);
          if ( v9 )
            break;
          if ( (_DWORD)v33 )
          {
            v21 = *(_QWORD *)ptr;
            if ( v20 == *(_QWORD *)ptr )
              break;
            v22 = (char *)ptr + 8;
            while ( 1 )
            {
              if ( v20 )
              {
                if ( v20 == v21 )
                  goto LABEL_21;
                v23 = *(_QWORD *)(*(_QWORD *)(a1 + 944) + v15);
                while ( 1 )
                {
                  v23 = *(_QWORD *)(v23 + 40);
                  if ( !v23 )
                    break;
                  if ( v23 == v21 )
                    goto LABEL_21;
                }
              }
              if ( v22 == (char *)ptr + 8 * (unsigned int)(v33 - 1) + 8 )
                break;
              v22 += 8;
              v21 = *((_QWORD *)v22 - 1);
              if ( v20 == v21 )
              {
                v18 = *(unsigned int *)(a2 + 8);
                v19 = v18 + 1;
                if ( v18 + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
                  goto LABEL_22;
                goto LABEL_36;
              }
            }
          }
LABEL_23:
          v15 += 8;
          if ( v17 == v15 )
            goto LABEL_40;
        }
LABEL_21:
        v18 = *(unsigned int *)(a2 + 8);
        v19 = v18 + 1;
        if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
LABEL_36:
          v29 = p_ptr;
          v26 = v16;
          sub_22134E0(a2, v16, v19, 8);
          v18 = *(unsigned int *)(a2 + 8);
          p_ptr = v29;
          v16 = v26;
        }
LABEL_22:
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v18) = v20;
        ++*(_DWORD *)(a2 + 8);
        goto LABEL_23;
      }
    }
LABEL_40:
    if ( ptr != p_ptr + 2 )
      free(ptr);
  }
}

