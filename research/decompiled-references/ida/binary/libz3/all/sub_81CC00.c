unsigned int *__fastcall sub_81CC00(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  char **exception; // rbx
  char *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned int *v14; // r12
  _QWORD *v15; // rbx
  _QWORD *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  unsigned int *v20; // r15
  __int64 v21; // rax
  unsigned int *v22; // r12
  __int64 v23; // rdi
  int v24; // edx
  __int64 v25; // rbx
  unsigned int *result; // rax
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // eax
  _QWORD *v34; // rsi
  __int64 v35; // rbp
  unsigned int v36; // eax
  unsigned int v37; // r8d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rsi
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 (__fastcall *v43)(__int64, __int64); // r12
  __int64 v44; // rax
  int v45; // [rsp+0h] [rbp-88h]
  int v46; // [rsp+8h] [rbp-80h]
  unsigned int v47; // [rsp+Ch] [rbp-7Ch]
  int v48[2]; // [rsp+10h] [rbp-78h]
  int v49; // [rsp+18h] [rbp-70h]
  __int64 v50; // [rsp+18h] [rbp-70h]
  int v51; // [rsp+20h] [rbp-68h]
  char v52; // [rsp+28h] [rbp-60h]
  __int64 v53; // [rsp+30h] [rbp-58h] BYREF
  int v54; // [rsp+38h] [rbp-50h]
  int v55; // [rsp+40h] [rbp-48h]
  void *v56; // [rsp+48h] [rbp-40h]

  v49 = a2;
  if ( *(int *)(a2 + 88) >> 8 == -1 )
    goto LABEL_37;
  v10 = (char *)(a2 + 88);
  while ( *(_DWORD *)(a1 + 12) != *v10 )
  {
    v10 = *((char **)v10 + 1);
    if ( !v10 )
      goto LABEL_37;
  }
  v11 = *(int *)v10 >> 8;
  if ( v11 == -1 )
  {
LABEL_37:
    v43 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 48LL);
    v44 = sub_15D1F10(*(_QWORD *)a2);
    v25 = v43(a3, v44);
    result = **(unsigned int ***)(a2 + 64);
    v27 = *result;
    if ( !v25 )
      goto LABEL_21;
    goto LABEL_20;
  }
  do
  {
    v12 = v11;
    v13 = v11;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL * v11);
  }
  while ( v13 != v11 );
  v48[0] = 0;
  v14 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * v12) + 8LL);
  if ( !*(_WORD *)(*(_QWORD *)v14 + 4LL) )
    *(_QWORD *)v48 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
  v15 = *(_QWORD **)(a1 + 384);
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *(_QWORD *)(a1 + 376);
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_16;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_16:
    v15 = *(_QWORD **)(a1 + 384);
    if ( v15 )
    {
LABEL_17:
      *((_DWORD *)v15 - 1) = 0;
      v20 = v14 + 44;
      v21 = 2LL * v14[38];
      v22 = &v14[v21 + 44];
      if ( !(v21 * 4) )
      {
LABEL_18:
        v23 = *(_QWORD *)(a1 + 72);
        v24 = *((_DWORD *)v15 - 1);
        goto LABEL_19;
      }
      do
      {
LABEL_27:
        v35 = *(_QWORD *)(a4[1] + 8LL * ***(unsigned int ***)(*(_QWORD *)v20 + 64LL));
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        if ( v15 )
        {
          v36 = *((_DWORD *)v15 - 1);
          if ( v36 == *((_DWORD *)v15 - 2) )
          {
            v37 = (3 * v36 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v53, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v53);
              sub_233E40((__int64)&v53);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v47 = (3 * v36 + 1) >> 1;
            v39 = (unsigned int *)sub_186B300(v15 - 1, v38);
            a5 = v47;
            v40 = v39[1];
            v15 = v39 + 2;
            *v39 = v47;
            LODWORD(v39) = v40;
            *(_QWORD *)(a1 + 384) = v15;
            v34 = &v15[v40];
            v33 = (_DWORD)v39 + 1;
          }
          else
          {
            v32 = v36;
            v33 = v36 + 1;
            v34 = &v15[v32];
          }
        }
        else
        {
          v41 = (_QWORD *)sub_186B270(0x18u);
          v15 = v41 + 1;
          *v41 = 2;
          v33 = 1;
          *(_QWORD *)(a1 + 384) = v15;
          v34 = v15;
        }
        v20 += 2;
        *v34 = v35;
        *((_DWORD *)v15 - 1) = v33;
      }
      while ( v22 != v20 );
      goto LABEL_18;
    }
  }
  v20 = v14 + 44;
  v42 = 2LL * v14[38];
  v22 = &v14[v42 + 44];
  if ( v42 * 4 )
    goto LABEL_27;
  v23 = *(_QWORD *)(a1 + 72);
  v24 = 0;
LABEL_19:
  v25 = sub_15DC610(v23, v48[0], v24, (int)v15, a5, a6, v45, v46, v48[0], v49, v51, v52, v53, v54, v55, v56);
  result = **(unsigned int ***)(v50 + 64);
  v27 = *result;
  if ( v25 )
LABEL_20:
    ++*(_DWORD *)(v25 + 8);
LABEL_21:
  v28 = 8 * v27;
  v29 = (__int64 *)(v28 + a4[1]);
  v30 = *v29;
  if ( *v29 )
  {
    v31 = *a4;
    v19 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v19 )
    {
      result = (unsigned int *)sub_15D7BC0(v31, v30);
      v29 = (__int64 *)(v28 + a4[1]);
    }
  }
  *v29 = v25;
  return result;
}

