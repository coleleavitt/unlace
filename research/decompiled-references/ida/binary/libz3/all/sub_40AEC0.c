__int64 __fastcall sub_40AEC0(__int64 a1, size_t a2, __int64 a3, char a4, int a5, int a6)
{
  char **exception; // r13
  unsigned int *v7; // rbx
  unsigned int *v8; // r14
  unsigned int *v9; // r13
  unsigned int v10; // r15d
  _DWORD *v11; // r12
  __int64 v12; // rbp
  unsigned int v13; // edx
  __int64 v14; // rdi
  _QWORD **v15; // r14
  _QWORD **v16; // r12
  __int64 v17; // r15
  char v18; // cl
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r15
  _QWORD *v22; // rax
  int v23; // eax
  unsigned int *v24; // rdx
  __int64 v25; // r15
  unsigned int v26; // eax
  unsigned int v28; // edx
  unsigned int v29; // r13d
  unsigned int *v30; // rax
  __int64 v31; // rdx
  __int64 v34; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v35; // [rsp+28h] [rbp-60h] BYREF
  __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(unsigned int **)(a2 + 192);
  v34 = *(_QWORD *)(a2 + 8);
  if ( v7 )
  {
    v8 = &v7[2 * *(v7 - 1)];
    if ( v7 == v8 )
    {
      v7 = nullptr;
    }
    else
    {
      v9 = v7;
      v10 = a3;
      v7 = nullptr;
      do
      {
        while ( 1 )
        {
          v11 = *(_DWORD **)v9;
          if ( *(_DWORD *)(*(_QWORD *)v9 + 96LL) >= v10 )
            break;
          v9 += 2;
          if ( v8 == v9 )
            goto LABEL_11;
        }
        sub_407990(*(_QWORD **)v9, a2, a3, a4, a5, a6);
        v12 = *((_QWORD *)v11 + 2);
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        if ( !v7 || (v13 = *(v7 - 1), v13 == *(v7 - 2)) )
        {
          v35 = v7;
          sub_23A6F0(&v35);
          v7 = v35;
          v13 = *(v35 - 1);
        }
        v14 = v13;
        v9 += 2;
        a3 = v13 + 1;
        *(_QWORD *)&v7[2 * v14] = v12;
        *(v7 - 1) = a3;
      }
      while ( v8 != v9 );
    }
  }
LABEL_11:
  if ( a4 )
  {
    v15 = *(_QWORD ***)(a2 + 200);
    if ( v15 )
    {
      v16 = &v15[*((unsigned int *)v15 - 1)];
      if ( v15 != v16 )
      {
        v17 = (__int64)*v15;
        sub_407990(*v15, a2, a3, a4, a5, a6);
        v21 = *(_QWORD *)(v17 + 16);
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        if ( v7 )
          goto LABEL_21;
        v22 = (_QWORD *)sub_186B270(0x18u);
        v7 = (unsigned int *)(v22 + 1);
        *v22 = 2;
        v23 = 1;
        v24 = v7;
        while ( 1 )
        {
          ++v15;
          *(_QWORD *)v24 = v21;
          *(v7 - 1) = v23;
          if ( v16 == v15 )
            break;
          while ( 1 )
          {
            v25 = (__int64)*v15;
            sub_407990(*v15, a2, (__int64)v24, v18, v19, v20);
            v21 = *(_QWORD *)(v25 + 16);
            if ( v21 )
              ++*(_DWORD *)(v21 + 8);
LABEL_21:
            v26 = *(v7 - 1);
            if ( v26 == *(v7 - 2) )
              break;
            ++v15;
            v24 = &v7[2 * v26];
            *(_QWORD *)v24 = v21;
            *(v7 - 1) = v26 + 1;
            if ( v16 == v15 )
              goto LABEL_23;
          }
          v28 = (3 * v26 + 1) >> 1;
          a2 = 8 * v28 + 8;
          v29 = v28;
          if ( 8 * v26 + 8 >= (unsigned int)a2 || v26 >= v28 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0(v36, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v30 = (unsigned int *)sub_186B300(v7 - 2, a2);
          v31 = v30[1];
          v7 = v30 + 2;
          *v30 = v29;
          LODWORD(v30) = v31;
          v24 = &v7[2 * v31];
          v23 = (_DWORD)v30 + 1;
        }
      }
    }
  }
LABEL_23:
  v35 = v7;
  sub_41C800(a1, &v34);
  sub_2334C0(&v34);
  return a1;
}

