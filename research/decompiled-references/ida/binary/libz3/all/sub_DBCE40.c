__int64 __fastcall sub_DBCE40(void **a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  char **exception; // r12
  unsigned int v6; // r12d
  __int64 v7; // rbp
  _DWORD *v8; // r15
  int v9; // eax
  _DWORD *v11; // rax
  __int64 v12; // rsi
  _DWORD *v13; // rax
  __int64 v14; // r8
  __int64 i; // r14
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rbp
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  _QWORD *v31; // rax
  void *v34; // [rsp+18h] [rbp-B0h]
  unsigned int v35; // [rsp+2Ch] [rbp-9Ch]
  int v36[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v37; // [rsp+48h] [rbp-80h]
  void *v38[2]; // [rsp+50h] [rbp-78h] BYREF
  int v39; // [rsp+60h] [rbp-68h]
  __int64 v40[11]; // [rsp+70h] [rbp-58h] BYREF

  v7 = a2;
  v8 = *((_DWORD **)a1[2] + a2);
  v9 = *(_DWORD *)(a3 + 16);
  if ( v8[4] != v9 )
    return 0;
  LOBYTE(v6) = v9 == 2 && *(_WORD *)(a3 + 4) == 2;
  if ( (_BYTE)v6 )
  {
    return 0;
  }
  else if ( v8[5] == *(_DWORD *)(a3 + 20) )
  {
    v11 = (_DWORD *)sub_186B270(0x80u);
    v39 = 0;
    v12 = *(_QWORD *)(a3 + 24);
    v11[2] = 0;
    v11[6] = 0;
    v11[10] = 0;
    v11[14] = 0;
    v11[18] = 0;
    v11[22] = 0;
    v11[26] = 0;
    v11[30] = 0;
    *(_QWORD *)v11 = 0;
    *((_QWORD *)v11 + 2) = 0;
    *((_QWORD *)v11 + 4) = 0;
    *((_QWORD *)v11 + 6) = 0;
    *((_QWORD *)v11 + 8) = 0;
    *((_QWORD *)v11 + 10) = 0;
    *((_QWORD *)v11 + 12) = 0;
    *((_QWORD *)v11 + 14) = 0;
    v38[0] = v11;
    v13 = a1[3];
    v38[1] = &byte_8;
    v6 = sub_DBBD80(a1, v12, v13[v7], (__int64)v38, v14);
    if ( (_BYTE)v6 )
    {
      for ( i = 0; (unsigned int)i < v8[18]; ++i )
      {
        v20 = (unsigned int)v8[5];
        v21 = *(_DWORD *)(a3 + 20);
        *(_QWORD *)v36 = 0;
        v22 = *(_QWORD *)&v8[4 * v20 + 20 + 2 * i];
        v37 = *a1;
        sub_DBC750(a1, v22, v21, (__int64)v38, v36);
        v23 = *(_QWORD *)v36;
        v34 = v37;
        if ( *(_QWORD *)v36 )
          ++*(_DWORD *)(*(_QWORD *)v36 + 8LL);
        v24 = *(_QWORD **)(a4 + 8);
        if ( v24 )
        {
          v25 = *((_DWORD *)v24 - 1);
          if ( v25 == *((_DWORD *)v24 - 2) )
          {
            v26 = (3 * v25 + 1) >> 1;
            v27 = 8 * v26 + 8;
            if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v40, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v40);
              sub_233E40((__int64)v40);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v35 = (3 * v25 + 1) >> 1;
            v28 = (unsigned int *)sub_186B300(v24 - 1, v27);
            v24 = v28 + 2;
            *v28 = v35;
            v29 = v28[1];
            *(_QWORD *)(a4 + 8) = v28 + 2;
            LODWORD(v28) = v29;
            v18 = &v24[v29];
            v17 = (_DWORD)v28 + 1;
          }
          else
          {
            v16 = v25;
            v17 = v25 + 1;
            v18 = &v24[v16];
          }
        }
        else
        {
          v31 = (_QWORD *)sub_186B270(0x18u);
          v24 = v31 + 1;
          *v31 = 2;
          v18 = v31 + 1;
          *(_QWORD *)(a4 + 8) = v31 + 1;
          v17 = 1;
        }
        *v18 = v23;
        *((_DWORD *)v24 - 1) = v17;
        if ( v23 )
        {
          if ( (*(_DWORD *)(v23 + 8))-- == 1 )
            sub_15D7BC0(v34, v23);
        }
      }
      *a5 = v8[11];
    }
    if ( v38[0] )
      sub_186B220(v38[0]);
  }
  return v6;
}

