__int64 __fastcall sub_403740(_QWORD *a1, __int64 a2, int a3, void ***a4)
{
  char **exception; // rbp
  __int64 v8; // rax
  void **v9; // rbx
  void **v10; // rbp
  _QWORD *v11; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  _DWORD *v16; // rbp
  void **v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  void **v21; // rcx
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int *v25; // rax
  _QWORD *v26; // rax
  unsigned int v28; // [rsp+4h] [rbp-84h]
  unsigned __int8 v29; // [rsp+1Bh] [rbp-6Dh]
  unsigned int v30; // [rsp+1Ch] [rbp-6Ch]
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = a1[1];
  v9 = *a4;
  v31 = 0;
  v32 = v8;
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          if ( (*(_DWORD *)v11)-- == 1 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_10;
      }
      sub_3FCDD0(v11[6], v11[7]);
      sub_41D1C0(v11 + 5);
      v13 = v11[3];
      if ( v13 )
        sub_186B220((void *)(v13 - 8));
      sub_3FCDF0(v11[1], v11[2]);
      sub_186B220(v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_10:
    v9 = *a4;
    if ( *a4 )
LABEL_11:
      *((_DWORD *)v9 - 1) = 0;
  }
  v29 = sub_13608A0(a2 + 128);
  sub_1360B80(a2 + 128, 0);
  v14 = a1[27];
  if ( v14 )
  {
    v15 = v14 + 8LL * *(unsigned int *)(v14 - 4);
    if ( v15 != v14 )
    {
      v28 = a3 + 1;
      do
      {
        while ( 1 )
        {
          v16 = *(_DWORD **)v14;
          sub_43D1D0(*a1 + 8LL, *(_QWORD *)(*(_QWORD *)v14 + 48LL), 0, v28, &v31, 1);
          if ( (unsigned __int8)sub_13742D0(a2, v31) )
            break;
          v14 += 8;
          if ( v15 == v14 )
            goto LABEL_21;
        }
        v17 = *a4;
        ++*v16;
        if ( v17 )
        {
          v18 = *((_DWORD *)v17 - 1);
          if ( v18 == *((_DWORD *)v17 - 2) )
          {
            v23 = (3 * v18 + 1) >> 1;
            v24 = 8 * v23 + 8;
            if ( 8 * v18 + 8 >= (unsigned int)v24 || v18 >= v23 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0(v33, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v33);
              sub_233E40((__int64)v33);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v30 = (3 * v18 + 1) >> 1;
            v25 = (unsigned int *)sub_186B300(v17 - 1, v24);
            v17 = (void **)(v25 + 2);
            *a4 = (void **)(v25 + 2);
            *v25 = v30;
            LODWORD(v25) = v25[1];
            v21 = &v17[(unsigned int)v25];
            v20 = (_DWORD)v25 + 1;
          }
          else
          {
            v19 = v18;
            v20 = v18 + 1;
            v21 = &v17[v19];
          }
        }
        else
        {
          v26 = (_QWORD *)sub_186B270(0x18u);
          v17 = (void **)(v26 + 1);
          *v26 = 2;
          v20 = 1;
          *a4 = v17;
          v21 = v17;
        }
        v14 += 8;
        *v21 = v16;
        *((_DWORD *)v17 - 1) = v20;
      }
      while ( v15 != v14 );
    }
  }
LABEL_21:
  sub_1360B80(a2 + 128, v29);
  return sub_3FCDF0(v31, v32);
}

