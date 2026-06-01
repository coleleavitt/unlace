void __fastcall sub_E569B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void (__fastcall ***v7)(void *); // rbp
  bool v8; // zf
  void (__fastcall ***v9)(void *); // rbp
  __int64 v10; // rdi
  __int64 v11; // rbp
  unsigned int *v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // r14
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // rax
  unsigned int v19; // r14d
  size_t v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 *v26; // r10
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rax
  char **exception; // rbp
  __int64 v35; // [rsp+0h] [rbp-A8h]
  __int64 *v36; // [rsp+8h] [rbp-A0h]
  _DWORD *v37; // [rsp+10h] [rbp-98h]
  unsigned int v38; // [rsp+1Ch] [rbp-8Ch]
  __int64 v39; // [rsp+30h] [rbp-78h] BYREF
  __int128 v40; // [rsp+38h] [rbp-70h]
  unsigned int *v41; // [rsp+48h] [rbp-60h]
  __int64 v42[11]; // [rsp+50h] [rbp-58h] BYREF

  v7 = (void (__fastcall ***)(void *))a1[78];
  if ( v7 )
  {
    v8 = (*((_DWORD *)v7 + 4))-- == 1;
    if ( v8 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  v9 = (void (__fastcall ***)(void *))a1[81];
  a1[78] = 0;
  if ( v9 )
  {
    v8 = (*((_DWORD *)v9 + 2))-- == 1;
    if ( v8 )
    {
      (**v9)(v9);
      sub_186B220(v9);
    }
  }
  v10 = a1[12];
  v11 = 0;
  a1[81] = 0;
  if ( *(_DWORD *)(v10 + 712) )
  {
    v32 = sub_15DE060(v10, a2, a3, a4, a5);
    v10 = a1[12];
    v11 = v32;
  }
  *(_QWORD *)&v40 = a2;
  v12 = (unsigned int *)sub_15D3210(v10, a3);
  v13 = a1[12];
  *((_QWORD *)&v40 + 1) = v11;
  v41 = v12;
  v35 = v13;
  v39 = v13;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( v12 )
    *v12 = (*v12 + 1) & 0x3FFFFFFF | *v12 & 0xC0000000;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v14 = (_QWORD *)a1[14];
  if ( v14 )
  {
    v15 = *((_DWORD *)v14 - 1);
    if ( v15 == *((_DWORD *)v14 - 2) )
    {
      v19 = (3 * v15 + 1) >> 1;
      v38 = v19;
      v20 = 32 * v19 + 8;
      if ( 32 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = sub_186B270(v20);
      v22 = (__int64 *)a1[14];
      v37 = (_DWORD *)v21;
      v14 = (_QWORD *)(v21 + 8);
      if ( v22 )
      {
        v23 = *((unsigned int *)v22 - 1);
        v24 = v21 + 8;
        *(_DWORD *)(v21 + 4) = v23;
        v25 = v22;
        v26 = &v22[4 * v23];
        if ( v22 != v26 )
        {
          do
          {
            v27 = *v25;
            v25 += 4;
            v24 += 32;
            *(_QWORD *)(v24 - 32) = v27;
            v28 = *(v25 - 3);
            *(v25 - 3) = 0;
            *(_QWORD *)(v24 - 24) = v28;
            v29 = *(v25 - 2);
            *(v25 - 2) = 0;
            *(_QWORD *)(v24 - 16) = v29;
            v30 = *(v25 - 1);
            *(v25 - 1) = 0;
            *(_QWORD *)(v24 - 8) = v30;
          }
          while ( v26 != v25 );
        }
        v36 = &v22[4 * v23];
        if ( (_DWORD)v23 )
        {
          do
          {
            v31 = v22;
            v22 += 4;
            sub_234F80(v31);
          }
          while ( v22 != v36 );
          v22 = (__int64 *)a1[14];
        }
        sub_186B220(v22 - 1);
        v18 = &v14[4 * (unsigned int)v37[1]];
        v17 = v37[1] + 1;
      }
      else
      {
        *(_DWORD *)(v21 + 4) = 0;
        v17 = 1;
        v18 = (__int64 *)(v21 + 8);
      }
      a1[14] = v14;
      *v37 = v38;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v14[4 * v16];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x48u);
    v14 = v33 + 1;
    *v33 = 2;
    v17 = 1;
    a1[14] = v33 + 1;
    v18 = v33 + 1;
  }
  v18[1] = a2;
  v18[2] = v11;
  v18[3] = (__int64)v12;
  *v18 = v35;
  *((_DWORD *)v14 - 1) = v17;
  v41 = nullptr;
  v40 = 0;
  sub_234F80(&v39);
}

