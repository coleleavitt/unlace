__int64 __fastcall sub_859A80(__int64 a1, unsigned int *a2)
{
  char **exception; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int v6; // ecx
  __int64 *v7; // r13
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  void *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rcx
  unsigned int v29; // r13d
  unsigned int v30; // ecx
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  _QWORD v35[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 160);
  v5 = *(unsigned int *)(a1 + 168);
  v35[0] = a1;
  if ( v4 )
    v6 = *((_DWORD *)v4 - 1);
  else
    v6 = 0;
  if ( (_DWORD)v5 == v6 )
  {
    v22 = sub_186B270(0x30u);
    v4 = *(_QWORD **)(a1 + 160);
    v23 = (_QWORD *)v22;
    v24 = *(_QWORD *)(a1 + 72);
    v23[1] = 0;
    *v23 = v24;
    v23[2] = 0;
    v23[3] = 0;
    v23[4] = 0;
    v23[5] = 0;
    if ( v4 )
    {
      v25 = *((_DWORD *)v4 - 1);
      if ( v25 == *((_DWORD *)v4 - 2) )
      {
        v29 = (3 * v25 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v25 + 8 >= v30 || v25 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v36, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v36);
          sub_233E40((__int64)v36);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300(v4 - 1, v30);
        v32 = v31[1];
        v4 = v31 + 2;
        *v31 = v29;
        *(_QWORD *)(a1 + 160) = v31 + 2;
        LODWORD(v31) = v32;
        v28 = &v4[v32];
        v27 = (_DWORD)v31 + 1;
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v28 = &v4[v26];
      }
    }
    else
    {
      v33 = (_QWORD *)sub_186B270(0x18u);
      *v33 = 2;
      v27 = 1;
      v4 = v33 + 1;
      *(_QWORD *)(a1 + 160) = v4;
      v28 = v4;
    }
    *v28 = v23;
    *((_DWORD *)v4 - 1) = v27;
    v5 = *(unsigned int *)(a1 + 168);
  }
  v7 = (__int64 *)v4[v5];
  *(_DWORD *)(a1 + 168) = v5 + 1;
  v8 = (_QWORD *)v7[1];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *v7;
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_11;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_11:
    v8 = (_QWORD *)v7[1];
    if ( v8 )
LABEL_12:
      *((_DWORD *)v8 - 1) = 0;
  }
  v13 = v7[2];
  if ( v13 )
  {
    v14 = *(unsigned int *)(v13 - 4);
    if ( (_DWORD)v14 )
    {
      v15 = v13 + 32 * v14;
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13);
        v17 = v13 + 16;
        v13 += 32;
        sub_182CBA0(v16, v17);
      }
      while ( v13 != v15 );
      v13 = v7[2];
    }
    *(_DWORD *)(v13 - 4) = 0;
  }
  v18 = v7[3];
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  v19 = v7[4];
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  v20 = v7[5];
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  v35[1] = v7;
  sub_8591A0((__int64 *)a1, (__int64)a2, (__int64)v35);
  result = sub_854CC0(a1, a2, (__int64)v35);
  --*(_DWORD *)(a1 + 168);
  return result;
}

