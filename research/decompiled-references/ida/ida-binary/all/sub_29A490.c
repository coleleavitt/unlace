__int64 __fastcall sub_29A490(__int64 a1, __int64 (__fastcall *a2)(__int64 a1), __int64 *a3)
{
  __int64 (__fastcall *v4)(__int64); // r13
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rax
  int *v8; // rbp
  int v9; // r12d
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // r15d
  int *v12; // rcx
  int *v13; // rax
  char *v14; // rdi
  char *v15; // rdx
  __int64 v16; // rcx
  int *v17; // rdx
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // [rsp+10h] [rbp-78h] BYREF
  __int128 v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v5 = *a3;
  v27 = __readfsqword(0x28u);
  v6 = a3;
  if ( v5 )
  {
    a3[1] = 0;
    qfree(v5, (const char *)a2);
    *v6 = 0;
    v6[2] = 0;
  }
  v7 = *((_QWORD *)a2 + 1);
  v23 = nullptr;
  v25 = 0;
  v8 = *(int **)a2;
  v24 = 0;
  v26 = 0;
  if ( 4 * v7 )
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 < 0 )
        break;
      a2 = interactive_graph_t__::vfunc_7;
      v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      if ( v10 == interactive_graph_t__::vfunc_7 )
      {
        if ( v9 >= *(_DWORD *)(a1 + 184) )
          break;
      }
      else if ( v9 >= (int)v10(a1) )
      {
        break;
      }
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * v9) & 0x7FFFFFFF;
      if ( v9 != v11 )
      {
        while ( 1 )
        {
          v12 = (int *)(v25 + 4 * v26);
          if ( (int *)v25 == v12 )
            goto LABEL_21;
          v13 = (int *)v25;
          while ( v11 != *v13 )
          {
            if ( v12 == ++v13 )
              goto LABEL_21;
          }
          if ( v13 == v12 )
          {
LABEL_21:
            if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
            {
              v25 = qvector_reserve(&v25, v25, v26 + 1, 4);
              v12 = (int *)(v25 + 4 * v26);
            }
            *v12 = v11;
            *(_QWORD *)&v26 = v26 + 1;
            sub_29A260(a1, (__int64 *)&v23, v11);
          }
          v14 = v23;
          v15 = &v23[4 * v24];
          if ( v23 != v15 )
          {
            while ( v9 != *(_DWORD *)v14 )
            {
              v14 += 4;
              if ( v15 == v14 )
                goto LABEL_19;
            }
            if ( v15 != v14 )
            {
              memmove(v14, v14 + 4, v15 - v14 - 4);
              *(_QWORD *)&v24 = v24 - 1;
            }
          }
LABEL_19:
          v9 = v11;
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * v11) & 0x7FFFFFFF) == v11 )
            break;
          v11 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * v11) & 0x7FFFFFFF;
        }
      }
      a2 = (__int64 (__fastcall *)(__int64))*v6;
      v16 = v6[1];
      v17 = (int *)(*v6 + 4 * v16);
      if ( (int *)*v6 == v17 )
        goto LABEL_31;
      v18 = (__int64 (__fastcall *)(__int64))*v6;
      while ( *(_DWORD *)v18 != v11 )
      {
        v18 = (__int64 (__fastcall *)(__int64))((char *)v18 + 4);
        if ( v17 == (int *)v18 )
          goto LABEL_31;
      }
      if ( v17 == (int *)v18 )
      {
LABEL_31:
        if ( v6[2] < (unsigned __int64)(v16 + 1) )
        {
          v21 = qvector_reserve(v6, a2, v16 + 1, 4);
          v22 = v6[1];
          *v6 = v21;
          v17 = (int *)(v21 + 4 * v22);
        }
        *v17 = v11;
        ++v6[1];
      }
      if ( ++v8 == (int *)(*(_QWORD *)v4 + 4LL * *((_QWORD *)v4 + 1)) )
      {
        v19 = v25;
        LOBYTE(v6) = (_QWORD)v24 == 0;
        goto LABEL_36;
      }
    }
    v19 = v25;
    LODWORD(v6) = 0;
LABEL_36:
    if ( v19 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v19, (const char *)a2);
    }
  }
  else
  {
    LODWORD(v6) = 1;
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, (const char *)a2);
  }
  return (unsigned int)v6;
}
