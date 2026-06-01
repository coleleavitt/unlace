__int64 __fastcall sub_86F5A0(__int64 a1, unsigned int *a2)
{
  char **exception; // rbp
  char *v3; // rdx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebp
  __int64 v7; // rax
  int v8; // ebx
  __int64 i; // r15
  __int64 v10; // r12
  int *v11; // rax
  int v12; // ecx
  int **v13; // r9
  int *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r10d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 *v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  void *v23; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // [rsp+0h] [rbp-B8h]
  int **v27; // [rsp+0h] [rbp-B8h]
  int v28; // [rsp+8h] [rbp-B0h]
  int v29; // [rsp+8h] [rbp-B0h]
  unsigned int v30; // [rsp+Ch] [rbp-ACh]
  unsigned int v31; // [rsp+2Ch] [rbp-8Ch] BYREF
  int v32[2]; // [rsp+30h] [rbp-88h] BYREF
  int v33[2]; // [rsp+38h] [rbp-80h]
  _QWORD v34[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v36[11]; // [rsp+60h] [rbp-58h] BYREF

  v34[0] = 0;
  v34[1] = 0;
  v35[0] = 1;
  v35[1] = 0;
  v31 = 0;
  v3 = (char *)(sub_7E4F00(a1, a2) + 88);
  if ( *(int *)v3 >> 8 == -1 )
  {
LABEL_30:
    v6 = -1;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v3 )
    {
      v3 = *((char **)v3 + 1);
      if ( !v3 )
        goto LABEL_30;
    }
    v6 = *(int *)v3 >> 8;
  }
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 128, (_DWORD)a2, (unsigned int)v34, (unsigned int)&v31, v4, v5) )
  {
    sub_1872CE0("");
    sub_1873130(114, 387);
  }
  v7 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)v33 = 0;
  *(_QWORD *)v32 = v7;
  sub_FD9D80(a1 + 272, v34, v31, v32);
  v8 = sub_86EFE0(a1);
  for ( i = 0; (unsigned int)i < v31; ++i )
  {
    v12 = v8;
    v10 = 8LL * v6;
    v13 = (int **)(v10 + *(_QWORD *)(a1 + 600));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 72) + 856LL) != *(_QWORD *)(*(_QWORD *)v33 + 8 * i) )
      v12 = v8 ^ 1;
    v14 = *v13;
    if ( *v13 )
    {
      v15 = (unsigned int)*(v14 - 1);
      if ( (_DWORD)v15 == *(v14 - 2) )
      {
        v16 = (unsigned int)(3 * v15 + 1) >> 1;
        v17 = 4 * v16 + 8;
        if ( 4 * (int)v15 + 8 >= (unsigned int)v17 || (unsigned int)v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int)(3 * v15 + 1) >> 1;
        v28 = v12;
        v26 = (_QWORD *)(v10 + *(_QWORD *)(a1 + 600));
        v18 = (unsigned int *)sub_186B300(v14 - 2, v17);
        v14 = (int *)(v18 + 2);
        v12 = v28;
        *v26 = v18 + 2;
        *v18 = v30;
        v11 = (int *)&v18[v18[1] + 2];
      }
      else
      {
        v11 = &v14[v15];
      }
    }
    else
    {
      v29 = v12;
      v27 = (int **)(v10 + *(_QWORD *)(a1 + 600));
      v25 = (_QWORD *)sub_186B270(0x10u);
      v14 = (int *)(v25 + 1);
      *v25 = 2;
      v12 = v29;
      v11 = v14;
      *v27 = v14;
    }
    *v11 = v12;
    ++*(v14 - 1);
    sub_86F240(a1, v6, i);
  }
  sub_812250(a1, v6);
  v19 = *(__int64 **)v33;
  if ( *(_QWORD *)v33 )
  {
    v20 = *(_QWORD *)v33 + 8LL * *(unsigned int *)(*(_QWORD *)v33 - 4LL);
    if ( *(_QWORD *)v33 >= v20 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          if ( (*(_DWORD *)(v21 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v19 >= v20 )
          goto LABEL_26;
      }
      sub_15D7BC0(*(_QWORD *)v32, v21);
      ++v19;
    }
    while ( (unsigned __int64)v19 < v20 );
LABEL_26:
    v19 = *(__int64 **)v33;
    if ( *(_QWORD *)v33 )
LABEL_27:
      sub_186B220(v19 - 1);
  }
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v34);
  return sub_182CBA0(v23, v35);
}

