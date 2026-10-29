_QWORD *__fastcall sub_4C9510(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int *a8)
{
  _QWORD *v11; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int *v15; // r14
  unsigned int *v16; // r15
  unsigned int *v17; // r14
  unsigned int *v18; // rcx
  unsigned int *v19; // r15
  __int64 v20; // [rsp+0h] [rbp-60h]
  int v21; // [rsp+10h] [rbp-50h]
  __int64 v22; // [rsp+18h] [rbp-48h]
  _QWORD *v24; // [rsp+20h] [rbp-40h]

  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 96LL))(
                    *(_QWORD *)(a2 + 8),
                    a2,
                    a3);
  if ( !v11 )
  {
    v13 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a2 + 8) == v13
      || (v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, unsigned int *, unsigned int *, _QWORD, unsigned int *))(*(_QWORD *)v13 + 96LL))(
                            v13,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8)) == nullptr )
    {
      v22 = sub_4C5B40(a1, a2, a3, a4, a5, a6);
      v14 = sub_186B270(0x48u);
      v21 = a3 + 16;
      v11 = (_QWORD *)v14;
      *(_QWORD *)v14 = qword_1C65E48;
      *(_QWORD *)(v14 + 8) = 0;
      *(_DWORD *)(v14 + 16) = 0;
      v24 = (_QWORD *)(v14 + 24);
      *(_QWORD *)(v14 + 24) = 0;
      if ( a4 )
      {
        v15 = a5;
        v20 = a4;
        do
          sub_4C54F0(v24, v15++);
        while ( v15 != &a5[v20] );
        v11[4] = 0;
        v16 = a6;
        do
          sub_4C54F0(v11 + 4, v16++);
        while ( &a6[v20] != v16 );
      }
      else
      {
        *(_QWORD *)(v14 + 32) = 0;
      }
      v11[5] = 0;
      if ( a7 )
      {
        v17 = a8;
        do
          sub_4C54F0(v11 + 5, v17++);
        while ( &a8[a7] != v17 );
      }
      sub_4D8970(a2 + 16, v21, a4, (_DWORD)a5, (_DWORD)a6, a7, (__int64)a8, (__int64)(v11 + 1));
      *v11 = &off_1C4EF48;
      v11[7] = 0;
      v11[8] = 0;
      v11[6] = v22;
      if ( a7 )
      {
        v18 = a8;
        do
        {
          v19 = v18;
          sub_4C54F0(v11 + 8, v18);
          v18 = v19 + 1;
        }
        while ( &a8[a7] != v19 + 1 );
      }
    }
  }
  return v11;
}

