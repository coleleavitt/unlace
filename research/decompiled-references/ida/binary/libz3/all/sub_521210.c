__int64 __fastcall sub_521210(__int64 a1, unsigned int a2, int a3, unsigned int *a4, char a5, __int64 a6)
{
  char **exception; // r12
  int *v11; // rax
  int v12; // ebx
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  unsigned int v15; // ecx
  unsigned int *v16; // rax
  int *v17; // rdi
  __int64 v18; // rax
  int *v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  int *v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // r15
  __int64 v27; // rax
  unsigned int v31; // [rsp+1Ch] [rbp-84h]
  int v32; // [rsp+1Ch] [rbp-84h]
  unsigned int v33; // [rsp+20h] [rbp-80h]
  unsigned int v34; // [rsp+20h] [rbp-80h]
  void *v35; // [rsp+20h] [rbp-80h]
  int *ptr; // [rsp+28h] [rbp-78h]
  int *ptra; // [rsp+28h] [rbp-78h]
  unsigned int v38; // [rsp+3Ch] [rbp-64h] BYREF
  int *v39[12]; // [rsp+40h] [rbp-60h] BYREF

  v11 = *(int **)(*(_QWORD *)(a1 + 48) + 8LL * a2);
  ptr = v11;
  if ( !v11 )
  {
    v12 = 0;
    v20 = 0;
    v19 = nullptr;
    goto LABEL_21;
  }
  v12 = *(v11 - 1);
  if ( v12 == 1 )
  {
    v38 = a2;
    goto LABEL_23;
  }
  if ( !v12 )
  {
    ptr = nullptr;
    v20 = 0;
    v19 = nullptr;
    goto LABEL_21;
  }
  v13 = 0;
  do
  {
    if ( a3 != v13 )
    {
      v33 = v13;
      v14 = (_QWORD *)sub_186B270(0x10u);
      v15 = v33;
      *v14 = 2;
      v16 = (unsigned int *)(v14 + 1);
      ptr = (int *)v16;
      while ( 1 )
      {
        while ( 1 )
        {
          *v16 = v15;
          ++*(ptr - 1);
          if ( v12 == v15 + 1 )
          {
LABEL_20:
            v20 = *(ptr - 1);
            v19 = ptr;
            goto LABEL_21;
          }
          if ( a3 == v15 + 1 )
            break;
          v17 = ptr;
          ++v15;
          v18 = (unsigned int)*(ptr - 1);
          if ( (_DWORD)v18 != *(ptr - 2) )
            goto LABEL_11;
LABEL_16:
          v21 = (unsigned int)(3 * v18 + 1) >> 1;
          v22 = 4 * v21 + 8;
          if ( 4 * (int)v18 + 8 >= (unsigned int)v22 || (unsigned int)v18 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v39, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v39);
            sub_233E40((__int64)v39);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = v15;
          v34 = (unsigned int)(3 * v18 + 1) >> 1;
          v23 = (unsigned int *)sub_186B300(v17 - 2, v22);
          v15 = v31;
          ptr = (int *)(v23 + 2);
          *v23 = v34;
          v16 = &v23[v23[1] + 2];
        }
        v15 += 2;
        if ( v15 == v12 )
        {
          if ( !ptr )
            goto LABEL_14;
          goto LABEL_20;
        }
        v17 = ptr;
        v18 = (unsigned int)*(ptr - 1);
        if ( (_DWORD)v18 == *(ptr - 2) )
          goto LABEL_16;
LABEL_11:
        v16 = (unsigned int *)&v17[v18];
      }
    }
    v13 = a3 + 1;
  }
  while ( a3 + 1 != v12 );
  ptr = nullptr;
LABEL_14:
  v19 = ptr;
  v20 = 0;
LABEL_21:
  sub_51FB70(a1, a2, v20, v19, &v38, 0, a6);
  if ( ptr )
    sub_186B220(ptr - 2);
LABEL_23:
  v24 = **(int ***)a1;
  v39[2] = nullptr;
  v39[4] = nullptr;
  v39[3] = v24;
  v25 = sub_186B270(0x10u);
  *(_DWORD *)(v25 + 8) = a3;
  v35 = (void *)v25;
  *(_QWORD *)v25 = 0x100000002LL;
  ptra = (int *)(v25 + 8);
  v26 = (_DWORD *)sub_186B270(0x10u);
  v39[1] = v26 + 2;
  *(_QWORD *)v26 = 0x100000002LL;
  v26[2] = 0;
  v39[0] = ptra;
  v32 = v38;
  sub_520C70(a1, a2, v38, v39, a4, a5, a6);
  if ( v12 != 1 && v32 != -1 )
  {
    v27 = sub_4DAB00(v32);
    sub_52C6B0(a6, v27);
  }
  sub_186B220(v26);
  return sub_186B220(v35);
}

