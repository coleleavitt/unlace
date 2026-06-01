// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_8E9C70(_QWORD *a1, unsigned int *a2, __int64 a3, double a4)
{
  unsigned int *v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rbp
  _BYTE v30[16]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v31[32]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v32[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v33[72]; // [rsp+40h] [rbp-48h] BYREF

  v5 = a2;
  v6 = a1;
  if ( (unsigned int)sub_180B130(a1) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v7 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v30, a2, a1[13], 0, 0, 0);
      v8 = sub_160E8B0(v7, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v32, a3, a1[13], 0, 0, 0);
      sub_160E8B0(v8, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v33);
      sub_18572D0(v31);
      sub_186A500(v31, "\n");
    }
    else
    {
      v15 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v30, a2, a1[13], 0, 0, 0);
      v16 = sub_160E8B0(v15, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v32, a3, a1[13], 0, 0, 0);
      sub_160E8B0(v16, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v33);
      sub_18572D0(v31);
    }
  }
  v9 = sub_15D1F10(a2);
  sub_B6F650((int)a1);
  v10 = *a2;
  if ( v9 != *(_QWORD *)(a1[13] + 840LL) )
  {
    v11 = a1[1082];
    if ( !v11 || (unsigned int)v10 >= *(_DWORD *)(v11 - 4) || !*(_QWORD *)(v11 + 8 * v10) )
      return;
    v12 = *(unsigned int **)(v9 + 24);
    if ( v12 )
    {
      v13 = *v12;
      if ( (_DWORD)v13 != -1 )
      {
        v14 = a1[1084];
        if ( v14 )
        {
          if ( (unsigned int)v13 < *(_DWORD *)(v14 - 4) )
          {
            a1 = *(_QWORD **)(v14 + 8 * v13);
            if ( a1 )
            {
              (*(void (__fastcall **)(_QWORD *, unsigned int *, __int64))(*a1 + 304LL))(a1, a2, a3);
              return;
            }
          }
        }
      }
    }
    if ( (unsigned int)sub_180B130(a1) <= 4 )
      return;
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v24 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v30, a2, v6[13], 0, 0, 0);
      v25 = sub_160E8B0(v24, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v32, a3, v6[13], 0, 0, 0);
      sub_160E8B0(v25, v32);
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_27;
    }
    v26 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v30, a2, v6[13], 0, 0, 0);
    v27 = sub_160E8B0(v26, v30);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v32, a3, v6[13], 0, 0, 0);
    sub_160E8B0(v27, v32);
    std::__ostream_insert<char,std::char_traits<char>>();
LABEL_33:
    sub_18572D0(v33);
    sub_18572D0(v31);
    return;
  }
  v17 = a1[1104];
  if ( !v17
    || (unsigned int)v10 >= *(_DWORD *)(v17 - 4)
    || (v18 = *(unsigned int *)(v17 + 4 * v10), (_DWORD)v18 == 0x7FFFFFFF) )
  {
    if ( (unsigned int)sub_180B130(a1) <= 4 )
      return;
    if ( (unsigned __int8)sub_186A530(a4) )
      goto LABEL_24;
    goto LABEL_35;
  }
  v19 = a1[1109] + 16 * v18;
  a2 = (unsigned int *)*(unsigned __int8 *)(v19 + 11);
  v20 = *(_BYTE *)(v19 + 11) | 4;
  *(_BYTE *)(v19 + 11) = v20;
  v21 = a1[13];
  if ( a3 == *(_QWORD *)(v21 + 856) )
  {
    *(_BYTE *)(v19 + 11) = (unsigned __int8)a2 | 0xC;
    return;
  }
  if ( a3 == *(_QWORD *)(v21 + 864) )
  {
    *(_BYTE *)(v19 + 11) = v20 & 0xF7;
    return;
  }
  if ( (unsigned int)sub_180B130(a1) > 4 )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
LABEL_24:
      sub_186A4C0(a4);
      v22 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v30, v5, a1[13], 0, 0, 0);
      v23 = sub_160E8B0(v22, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v32, a3, a1[13], 0, 0, 0);
      sub_160E8B0(v23, v32);
      std::operator<<<std::char_traits<char>>();
LABEL_27:
      sub_18572D0(v33);
      sub_18572D0(v31);
      sub_186A500(v31, "\n");
      return;
    }
LABEL_35:
    v28 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v30, v5, a1[13], 0, 0, 0);
    v29 = sub_160E8B0(v28, v30);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v32, a3, a1[13], 0, 0, 0);
    sub_160E8B0(v29, v32);
    std::operator<<<std::char_traits<char>>();
    goto LABEL_33;
  }
}

