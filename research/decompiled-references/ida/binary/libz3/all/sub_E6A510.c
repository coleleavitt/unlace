void __fastcall sub_E6A510(unsigned __int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  unsigned int *v3; // rbp
  unsigned int *v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int *v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rbx
  void *v17; // r14
  __int64 v18; // rsi
  void *v19; // rbx
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  char **exception; // rbx
  _QWORD *v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 *v28; // [rsp+10h] [rbp-68h]
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 552);
  v26 = (_QWORD *)a1;
  if ( !v1 )
    return;
  v2 = *(unsigned int *)(v1 - 4);
  if ( !(_DWORD)v2 )
    goto LABEL_23;
  v27 = v1 + 8 * v2;
  v28 = (__int64 *)(a1 + 16);
  do
  {
    v3 = *(unsigned int **)v1;
    v4 = *(unsigned int **)(*(_QWORD *)v1 + 72LL);
    if ( v4 )
    {
      a1 = *v26 + 648LL;
      sub_234C20((__int64 *)a1, v4);
    }
    v5 = *v3;
    v6 = v26[97];
    if ( v6 )
    {
      if ( v5 < *(_DWORD *)(v6 - 4) )
      {
        v7 = (unsigned int *)(v6 + 4LL * v5);
        v8 = *v7;
        if ( *v7 != -1 )
        {
          v9 = v26[98];
          *v7 = -1;
          if ( v9 )
          {
            v10 = (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
            if ( v8 == (_DWORD)v10 )
            {
LABEL_13:
              *(_DWORD *)(v9 - 4) = v10;
              v5 = *v3;
              goto LABEL_14;
            }
            v11 = 8 * v10;
          }
          else
          {
            v11 = 0x7FFFFFFF8LL;
          }
          v10 = *(_QWORD *)(v9 + v11);
          a1 = v8;
          *(_QWORD *)(v9 + 8LL * v8) = v10;
          *(_DWORD *)(v6 + 4LL * *(unsigned int *)v10) = v8;
          LODWORD(v10) = *(_DWORD *)(v9 - 4) - 1;
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    if ( !(unsigned __int8)sub_186AF10(a1) )
    {
      v12 = (_QWORD *)v26[90];
      if ( v12 )
      {
        v13 = *((unsigned int *)v12 - 1);
        if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
        {
          v20 = (unsigned int)(3 * v13 + 1) >> 1;
          v21 = 4 * v20 + 8;
          if ( 4 * (int)v13 + 8 >= (unsigned int)v21 || (unsigned int)v13 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_E65BE0(v29, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v29);
            sub_233E40((__int64)v29);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v12 - 1, v21);
          v12 = v22 + 2;
          *v22 = v20;
          v23 = v22[1];
          v26[90] = v12;
          v14 = (unsigned int *)v12 + v23;
        }
        else
        {
          v14 = (unsigned int *)v12 + v13;
        }
      }
      else
      {
        v24 = (_QWORD *)sub_186B270(0x10u);
        v12 = v24 + 1;
        *v24 = 2;
        v26[90] = v24 + 1;
        v14 = (unsigned int *)(v24 + 1);
      }
      *v14 = v5;
      ++*((_DWORD *)v12 - 1);
    }
    v15 = *((_QWORD *)v3 + 4);
    v16 = v15 + 32LL * v3[2];
    while ( v16 != v15 )
    {
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v15);
      v18 = v15 + 16;
      v15 += 32;
      sub_182CBA0(v17, v18);
    }
    v19 = qword_1C7F2C0;
    v1 += 8;
    sub_182CBA0(qword_1C7F2C0, v3 + 10);
    sub_182CBA0(v19, v3 + 14);
    a1 = (unsigned __int64)v28;
    sub_17E9C40(v28, 4 * (9 * v3[2] + (v3[1] & 0x1FFFFFFF) + 20), v3);
  }
  while ( v1 != v27 );
  v1 = v26[69];
  if ( v1 )
LABEL_23:
    *(_DWORD *)(v1 - 4) = 0;
}

