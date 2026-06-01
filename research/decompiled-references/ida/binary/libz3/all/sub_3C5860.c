__int64 *__fastcall sub_3C5860(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rsi
  int v9; // r9d
  size_t *v10; // rcx
  size_t *v11; // rdx
  unsigned int v12; // eax
  size_t v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r15
  _QWORD *v17; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  __int64 *v21; // rcx
  __int64 v22; // r12
  int v23; // eax
  __int64 *v24; // r14
  bool v25; // zf
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  char **exception; // r13
  unsigned int v34; // [rsp+Ch] [rbp-94h]
  unsigned int *v35; // [rsp+28h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-70h] BYREF
  int v37; // [rsp+40h] [rbp-60h]
  char v38; // [rsp+48h] [rbp-58h]
  int v39; // [rsp+4Ch] [rbp-54h]
  __int64 v40[10]; // [rsp+50h] [rbp-50h] BYREF

  v2 = a2[1];
  sub_3C52B0((_DWORD)a1);
  v3 = *a1;
  v4 = *a2;
  if ( *a1 == *(_QWORD *)(v2 + 856) )
  {
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    sub_3BCB50(v3, a1[1]);
  }
  else
  {
    v5 = sub_15E1B70(v2);
    v4 = v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    sub_3BCB50(*a1, a1[1]);
  }
  v35 = nullptr;
  *a1 = v4;
  sub_3BF620(a2, &v35);
  v6 = v35;
  v7 = (_QWORD *)sub_186B270(0x80u);
  *v7 = 0;
  v8 = *a1;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v7[8] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[11] = 0;
  v7[12] = 0;
  v7[13] = 0;
  v7[14] = 0;
  v7[15] = 0;
  ptr[0] = v7;
  ptr[1] = &byte_8;
  v37 = 0;
  v38 = 65;
  v39 = 0;
  sub_13405C0(ptr, v8);
  if ( v6 )
  {
    LODWORD(v10) = *(v6 - 1);
    v11 = (size_t *)v6;
    v12 = (_DWORD)v10 - 1;
    LODWORD(v13) = (unsigned int)v10 >> 1;
    v14 = (_DWORD)v10 - 1 - ((unsigned int)v10 >> 1);
    if ( (unsigned int)v10 >> 1 )
    {
      do
      {
        v15 = v12;
        v13 = *v11;
        --v12;
        ++v11;
        v10 = (size_t *)&v6[2 * v15];
        *(v11 - 1) = *v10;
        *v10 = v13;
      }
      while ( v12 != v14 );
    }
    else if ( !(_DWORD)v10 )
    {
      if ( ptr[0] )
        sub_186B220(ptr[0]);
LABEL_21:
      sub_186B220(v6 - 2);
      return a1;
    }
    v16 = sub_133F920((unsigned int)ptr, v13, (_DWORD)v11, (_DWORD)v10, v14, v9);
    v17 = (_QWORD *)sub_186B270(0x18u);
    v21 = v17 + 1;
    *v17 = 2;
    v22 = 0;
    v23 = 1;
    v24 = v21;
LABEL_9:
    v25 = *(_QWORD *)&v6[2 * v22] == 0;
    *v21 = v16;
    *((_DWORD *)v24 - 1) = v23;
    if ( v25 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v6[2 * v22] = *(_QWORD *)(v2 + 840);
        v26 = *(v6 - 1);
        if ( (unsigned int)++v22 >= v26 )
          break;
LABEL_11:
        v16 = sub_133F920((unsigned int)ptr, v13, v18, (_DWORD)v21, v19, v20);
        v27 = *((_DWORD *)v24 - 1);
        if ( v27 == *((_DWORD *)v24 - 2) )
        {
          v31 = (3 * v27 + 1) >> 1;
          v13 = 8 * v31 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v13 || v27 >= v31 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3BCB70(v40, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v40);
            sub_233E40((__int64)v40);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v34 = (3 * v27 + 1) >> 1;
          v32 = (unsigned int *)sub_186B300(v24 - 1, v13);
          v24 = (__int64 *)(v32 + 2);
          *v32 = v34;
          LODWORD(v32) = v32[1];
          v21 = &v24[(unsigned int)v32];
          v23 = (_DWORD)v32 + 1;
          goto LABEL_9;
        }
        v25 = *(_QWORD *)&v6[2 * v22] == 0;
        v21 = &v24[v27];
        *v21 = v16;
        *((_DWORD *)v24 - 1) = v27 + 1;
        if ( !v25 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v26 = *(v6 - 1);
      if ( (unsigned int)++v22 < v26 )
        goto LABEL_11;
    }
    if ( v26 )
    {
      v28 = sub_15DB6A0(v2, 0, v26, v6, v24, *a1, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
      v29 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      sub_3BCB50(*a1, a1[1]);
      *a1 = v29;
    }
    if ( ptr[0] )
      sub_186B220(ptr[0]);
    sub_186B220(v24 - 1);
    goto LABEL_21;
  }
  if ( ptr[0] )
    sub_186B220(ptr[0]);
  return a1;
}

