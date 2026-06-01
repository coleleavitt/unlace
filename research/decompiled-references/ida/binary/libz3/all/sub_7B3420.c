unsigned __int64 __fastcall sub_7B3420(_QWORD *a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // [rsp+0h] [rbp-58h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+18h] [rbp-40h]

  result = (unsigned int)(*(_DWORD *)(a2 + 60) + 1);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 32) )
    return result;
  v5 = a2;
  v6 = (__int64)a1;
  v7 = a3 ^ 1;
  v8 = *(__int64 (__fastcall **)())(*a1 + 576LL);
  if ( v8 == sub_7C57A0 )
  {
    v9 = a1[20];
    v10 = 8 * v7;
    v11 = (__int64 *)(v9 ? *(_QWORD *)(v9 + 896) + v10 : *(_QWORD *)(a1[3] + 3280LL) + v10);
    v23 = v11;
    result = (unsigned __int64)v11;
  }
  else
  {
    v30 = v5;
    result = ((__int64 (__fastcall *)(_QWORD *, __int64))v8)(a1, v7);
    v5 = v30;
    v23 = (__int64 *)result;
  }
  v12 = *(_QWORD *)result;
  if ( !*(_QWORD *)result )
    return result;
  v13 = 16LL * *(unsigned int *)(v12 - 4);
  v14 = v12 + v13;
  if ( v12 + v13 != v12 )
  {
    v15 = *(_QWORD *)result;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v15 + 8);
      if ( (v16 & 3) != 0 )
        break;
      v17 = *(_QWORD *)v15;
      v18 = (unsigned int)*(_QWORD *)v15;
      if ( *(_DWORD *)(*(_QWORD *)(v6 + 24) + 3848LL) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 3840LL) + 4 * v18) )
        break;
      ++*(_DWORD *)(v6 + 188);
      v24 = v5;
      v19 = sub_180B130(a1);
      v5 = v24;
      if ( v19 > 0x13 )
      {
        if ( (unsigned __int8)sub_186A530(a4) )
        {
          sub_186A4C0(a4);
          v21 = sub_180B150(a1, v18);
          v32 = v24;
          v26 = sub_7E42B0(v21, v24);
          std::__ostream_insert<char,std::char_traits<char>>();
          v27 = sub_7C5DC0(v26, a3);
          std::__ostream_insert<char,std::char_traits<char>>();
          a1 = (_QWORD *)sub_7C5DC0(v27, (unsigned int)v17);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(a1, ")\n");
        }
        else
        {
          v22 = sub_180B150(a1, v18);
          v32 = v24;
          v28 = sub_7E42B0(v22, v24);
          std::__ostream_insert<char,std::char_traits<char>>();
          v29 = sub_7C5DC0(v28, a3);
          std::__ostream_insert<char,std::char_traits<char>>();
          a1 = (_QWORD *)sub_7C5DC0(v29, (unsigned int)v17);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v5 = v32;
      }
      if ( (v16 & 4) != 0 )
      {
LABEL_12:
        v15 += 16;
        if ( v15 == v14 )
          goto LABEL_18;
      }
      else
      {
        a1 = (_QWORD *)v6;
        v15 += 16;
        v25 = v5;
        sub_7B33B0(v6, v5);
        v5 = v25;
        if ( v15 == v14 )
        {
LABEL_18:
          result = (unsigned __int64)v23;
          v20 = *v23;
          if ( *v23 )
          {
            v12 = (v12 - v20) >> 4;
            goto LABEL_20;
          }
          return result;
        }
      }
    }
    if ( v15 != v12 )
    {
      *(_QWORD *)v12 = *(_QWORD *)v15;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v15 + 8);
    }
    v12 += 16;
    goto LABEL_12;
  }
  v20 = v12 + v13;
  LODWORD(v12) = 0;
LABEL_20:
  *(_DWORD *)(v20 - 4) = v12;
  return result;
}

