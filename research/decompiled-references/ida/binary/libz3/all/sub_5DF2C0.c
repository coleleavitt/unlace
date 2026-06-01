_QWORD *__fastcall sub_5DF2C0(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r13
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebp
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  char **exception; // rbp
  unsigned int v32; // [rsp+Ch] [rbp-6Ch]
  __int64 v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  v4 = sub_186B270(0x58u);
  v5 = a1[4];
  v6 = (_QWORD *)v4;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_BYTE *)(v4 + 24) = 1;
  *(_QWORD *)v4 = &off_1C68680;
  *(_QWORD *)(v4 + 32) = v5;
  sub_16669D0(v4 + 40, v5);
  v7 = a1[8];
  v6[7] = v5;
  v6[8] = 0;
  v6[9] = v5;
  v6[10] = 0;
  if ( v7 )
  {
    while ( v2 < *(_DWORD *)(v7 - 4) )
    {
      v8 = *(_QWORD *)(v7 + 8LL * v2);
      v9 = *(_QWORD *)(a1[10] + 8LL * v2);
      if ( *a2 != a2[1] )
        v8 = sub_15CFF50(a2, *(_QWORD *)(v7 + 8LL * v2));
      if ( v9 != *(_QWORD *)(v6[4] + 856LL) )
      {
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        v10 = (_QWORD *)v6[8];
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v21 = (3 * v11 + 1) >> 1;
            v22 = 8 * v21 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v22 || v11 >= v21 )
            {
LABEL_27:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v33, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v33);
              sub_233E40((__int64)v33);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v32 = (3 * v11 + 1) >> 1;
            v23 = (unsigned int *)sub_186B300(v10 - 1, v22);
            v10 = v23 + 2;
            *v23 = v32;
            v24 = v23[1];
            v6[8] = v23 + 2;
            LODWORD(v23) = v24;
            v14 = &v10[v24];
            v13 = (_DWORD)v23 + 1;
          }
          else
          {
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v10[v12];
          }
        }
        else
        {
          v29 = (_QWORD *)sub_186B270(0x18u);
          v10 = v29 + 1;
          *v29 = 2;
          v13 = 1;
          v6[8] = v10;
          v14 = v10;
        }
        *v14 = v8;
        *((_DWORD *)v10 - 1) = v13;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        v15 = (_QWORD *)v6[10];
        if ( v15 )
        {
          v16 = *((_DWORD *)v15 - 1);
          if ( v16 == *((_DWORD *)v15 - 2) )
          {
            v25 = (3 * v16 + 1) >> 1;
            v26 = 8 * v25 + 8;
            if ( 8 * v16 + 8 >= (unsigned int)v26 || v16 >= v25 )
              goto LABEL_27;
            v27 = (unsigned int *)sub_186B300(v15 - 1, v26);
            v28 = v27[1];
            v15 = v27 + 2;
            *v27 = v25;
            v6[10] = v27 + 2;
            LODWORD(v27) = v28;
            v19 = &v15[v28];
            v18 = (_DWORD)v27 + 1;
          }
          else
          {
            v17 = v16;
            v18 = v16 + 1;
            v19 = &v15[v17];
          }
        }
        else
        {
          v30 = (_QWORD *)sub_186B270(0x18u);
          v15 = v30 + 1;
          *v30 = 2;
          v18 = 1;
          v6[10] = v15;
          v19 = v15;
        }
        *v19 = v9;
        *((_DWORD *)v15 - 1) = v18;
      }
      v7 = a1[8];
      ++v2;
      if ( !v7 )
        return v6;
    }
  }
  return v6;
}

