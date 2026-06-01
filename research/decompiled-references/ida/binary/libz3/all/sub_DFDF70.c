__int64 __fastcall sub_DFDF70(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char **exception; // r13
  unsigned int v6; // r14d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // edx
  _DWORD *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  int *v16; // r12
  unsigned int v17; // ebp
  __int64 *v19; // r13
  __int64 v20; // rax
  int *v21; // rdx
  __int64 i; // r12
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  int *v30; // [rsp+0h] [rbp-A8h]
  unsigned int v31; // [rsp+Ch] [rbp-9Ch]
  _QWORD v33[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v34; // [rsp+38h] [rbp-70h] BYREF
  void *v35; // [rsp+40h] [rbp-68h]
  __int64 v36[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = 0;
  v8 = (_QWORD *)sub_186B270(0x18u);
  v34 = 0;
  v8[1] = a4;
  v9 = v8 + 1;
  *v8 = 0x100000002LL;
  v10 = 1;
  v35 = nullptr;
  do
  {
    while ( 1 )
    {
      v16 = (int *)v9[v6];
      v17 = *v16;
      if ( *v16 >= (unsigned int)v34 )
        break;
      v11 = v35;
      if ( (*((_DWORD *)v35 + (v17 >> 5)) & (1 << v17)) == 0 )
        goto LABEL_3;
      if ( ++v6 >= v10 )
        goto LABEL_11;
    }
    sub_186B510(&v34, v17 + 1, 0);
    v11 = v35;
LABEL_3:
    v11[v17 >> 5] |= 1 << v17;
    sub_13615B0(v33, a3, v16);
    std::__ostream_insert<char,std::char_traits<char>>();
    v12 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_DFBCB0(a1);
    sub_1648CA0(v12, *(_QWORD *)(a1 + 296), v16, 1);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_160EBE0(v12, v33);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( !*((_WORD *)v16 + 2) )
    {
      v19 = (__int64 *)(v16 + 8);
      v20 = 2LL * (unsigned int)v16[6];
      v21 = &v16[v20 + 8];
      if ( v20 * 4 )
      {
        for ( i = *((_QWORD *)v16 + 4); ; i = *v19 )
        {
          v26 = *((_DWORD *)v9 - 1);
          if ( v26 == *((_DWORD *)v9 - 2) )
          {
            v27 = (3 * v26 + 1) >> 1;
            v28 = 8 * v27 + 8;
            if ( 8 * v26 + 8 >= (unsigned int)v28 || v26 >= v27 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_DF63A0(v36, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v36);
              sub_233E40((__int64)v36);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (3 * v26 + 1) >> 1;
            v30 = v21;
            v29 = (unsigned int *)sub_186B300(v9 - 1, v28);
            v9 = v29 + 2;
            v21 = v30;
            *v29 = v31;
            LODWORD(v29) = v29[1];
            v25 = &v9[(unsigned int)v29];
            v24 = (_DWORD)v29 + 1;
          }
          else
          {
            v23 = v26;
            v24 = v26 + 1;
            v25 = &v9[v23];
          }
          ++v19;
          *v25 = i;
          *((_DWORD *)v9 - 1) = v24;
          if ( v21 == (int *)v19 )
            break;
        }
      }
    }
    v13 = v33[0];
    if ( v33[0] )
    {
      v14 = v33[1];
      if ( (*(_DWORD *)(v33[0] + 8LL))-- == 1 )
        sub_15D7BC0(v14, v13);
    }
    v10 = *((_DWORD *)v9 - 1);
    ++v6;
  }
  while ( v6 < v10 );
LABEL_11:
  if ( v35 )
    sub_186B220(v35);
  return sub_186B220(v9 - 1);
}

