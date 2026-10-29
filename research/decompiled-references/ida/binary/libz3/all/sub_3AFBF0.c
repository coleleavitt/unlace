__int64 __fastcall sub_3AFBF0(_DWORD *a1)
{
  int *v2; // rsi
  __int64 v3; // r12
  int **v4; // rbp
  int **v5; // r13
  int *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  bool v16; // zf
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned int v20; // r12d
  __int64 v21; // rdi
  __int64 v22; // rdi
  __m128 *v24; // [rsp+0h] [rbp-78h]
  int v25; // [rsp+0h] [rbp-78h]
  int v26; // [rsp+8h] [rbp-70h]
  int v27; // [rsp+8h] [rbp-70h]
  int v28[2]; // [rsp+8h] [rbp-70h]
  _DWORD *v29; // [rsp+10h] [rbp-68h]
  int v30; // [rsp+10h] [rbp-68h]
  int v31; // [rsp+18h] [rbp-60h]
  int v32; // [rsp+18h] [rbp-60h]
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+20h] [rbp-58h]
  char v35[8]; // [rsp+28h] [rbp-50h] BYREF
  int v36[2]; // [rsp+30h] [rbp-48h] BYREF
  int v37[2]; // [rsp+38h] [rbp-40h]
  int v38; // [rsp+40h] [rbp-38h]
  void *v39; // [rsp+48h] [rbp-30h]

  *(_QWORD *)v36 = 0;
  v24 = (__m128 *)v36;
  sub_1862370(v36, "smt.relevancy", 2);
  sub_1862300(v36, "smt.mbqi", 1);
  v2 = v36;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*(_QWORD *)a1 + 64LL) + 88LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 64LL),
    v36);
  v3 = *(_QWORD *)a1;
  v4 = *(int ***)(*(_QWORD *)a1 + 360LL);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_5;
    do
    {
      v2 = *v4;
      sub_62A410(*(_QWORD *)(v3 + 352), *v4++);
    }
    while ( v4 < v5 );
    v4 = *(int ***)(v3 + 360);
    if ( v4 )
LABEL_5:
      *((_DWORD *)v4 - 1) = 0;
  }
  sub_18572D0(v36);
  a1[10] = 4;
  v29 = a1 + 4;
  do
  {
    while ( 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 192LL))(v21);
      if ( (unsigned int)sub_180B130(v21) )
      {
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          sub_180B150(v21, v2);
          std::__ostream_insert<char,std::char_traits<char>>();
          v22 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v22, "\n");
        }
        else
        {
          sub_180B150(v21, v2);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      sub_3A1B20((__int64)a1);
      sub_EE4F40(*(_QWORD *)(*(_QWORD *)a1 + 56LL));
      sub_39B440(v24, (__int64)a1, *(_QWORD *)(*(_QWORD *)a1 + 320LL));
      v6 = *(int **)v36;
      v26 = v37[0];
      v7 = *((_QWORD *)a1 + 1);
      v8 = sub_1674700(v29, (unsigned int)a1[10]);
      v9 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      sub_180C5A0(v35, "T");
      v10 = sub_15E3510(v7, v35, 0, 0, v9, 0);
      v13 = sub_15DC610(v7, v10, 0, 0, v11, v12, (int)v24, v26, (int)v29, v31, v33, v35[0], v36[0], v37[0], v38, v39);
      if ( v9 )
      {
        v16 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v16 )
        {
          v32 = v13;
          sub_15D7BC0(v7, v9);
          LOBYTE(v13) = v32;
        }
      }
      v17 = *((_QWORD *)a1 + 1);
      v18 = sub_15DC610(v17, (int)v6, 1, (int)v35, v14, v15, v25, v27, v30, v32, v34, v13, v36[0], v37[0], v38, v39);
      v19 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      sub_E5EBF0(*(_QWORD *)(*(_QWORD *)a1 + 64LL), v18);
      v20 = sub_E60CB0(*(std::ios_base **)(*(_QWORD *)a1 + 64LL), 0, 0);
      if ( v20 == 1 )
        sub_3AE0A0((__int64)a1);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 64LL) + 200LL))(
        *(_QWORD *)(*(_QWORD *)a1 + 64LL),
        1);
      ++a1[10];
      v2 = (int *)v17;
      sub_399450(v19, v17);
      if ( v6 )
      {
        v16 = v6[2]-- == 1;
        if ( v16 )
          break;
      }
      if ( v20 != -1 )
        return v20;
    }
    v2 = v6;
    sub_15D7BC0(*(_QWORD *)v28, v6);
  }
  while ( v20 == -1 );
  return v20;
}

