__int64 __fastcall sub_7C0530(_QWORD *a1, unsigned int *a2, unsigned int a3, double a4)
{
  __int64 v4; // r13
  _QWORD *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // ebp
  _BYTE *v9; // rcx
  unsigned int v10; // r14d
  __int64 (__fastcall *v11)(); // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int *v17; // r15
  unsigned int v18; // ebp
  unsigned int v19; // esi
  unsigned __int64 v20; // r13
  __int64 (__fastcall *v21)(_QWORD); // rax
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // esi
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // [rsp+4h] [rbp-44h]
  __int64 v28; // [rsp+8h] [rbp-40h]
  __int64 v29; // [rsp+8h] [rbp-40h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v6 = a1;
  result = a2[4];
  v8 = a2[15];
  v27 = a2[4];
  if ( v8 < a2[8] )
  {
    do
    {
      v10 = a2[v8 + 16];
      v11 = *(__int64 (__fastcall **)())(*v6 + 560LL);
      v12 = v10 >> 1;
      if ( v11 == sub_7C56E0 )
      {
        v13 = 0;
        v14 = v6[3];
        if ( !v6[20] )
          v13 = *(_DWORD *)(*(_QWORD *)(v14 + 3296) + 24 * v12);
      }
      else
      {
        v28 = a2[v8 + 16] >> 1;
        a1 = v6;
        v13 = ((__int64 (__fastcall *)(_QWORD *))v11)(v6);
        v14 = v6[3];
        v12 = v28;
      }
      v9 = (_BYTE *)(v12 + *(_QWORD *)(v14 + 3312));
      if ( !*v9 && v13 == *((_DWORD *)v6 + 197) )
      {
        *v9 = 1;
        ++*((_DWORD *)v6 + 196);
        if ( byte_1C7EBD0 )
        {
          if ( dword_1C7DF70 != -2 )
          {
            v15 = qword_1C7EBC8;
            if ( *(_DWORD *)(qword_1C7EBC8 + 4LL * ((unsigned int)dword_1C7DF70 >> 1)) < *(_DWORD *)(qword_1C7EBC8 + 4 * v12) )
            {
              sub_180B130(a1);
              if ( (unsigned __int8)sub_186A530(a4) )
              {
                sub_186A4C0(a4);
                v29 = sub_180B150(a1, v15);
                std::__ostream_insert<char,std::char_traits<char>>();
                v16 = sub_7C5DC0(v29, v10);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_186A500(v16, " is above consequent in stack\n");
              }
              else
              {
                v30 = sub_180B150(a1, v15);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_7C5DC0(v30, v10);
                std::__ostream_insert<char,std::char_traits<char>>();
              }
            }
          }
        }
      }
      a1 = v6;
      ++v8;
      result = sub_7C00D0((__int64)v6, v10, v4);
    }
    while ( v8 < a2[8] );
    v8 = a2[15];
  }
  if ( v8 )
  {
    v17 = a2 + 16;
    v18 = 0;
    do
    {
      v19 = *v17;
      ++v18;
      ++v17;
      sub_7C00D0((__int64)v6, v19, v4);
      result = a2[15];
    }
    while ( v18 < (unsigned int)result );
    if ( v27 != -2 )
    {
      v20 = result * v4;
      if ( HIDWORD(v20) )
        *((_BYTE *)v6 + 996) = 1;
      v8 = v20;
LABEL_23:
      v21 = *(__int64 (__fastcall **)(_QWORD))(*v6 + 536LL);
      if ( v21 == sub_7C55E0 )
      {
        v22 = v6[20];
        if ( v22 )
        {
          v23 = *(_DWORD *)(*(_QWORD *)(v22 + 880) + 4LL * (v27 >> 1));
          if ( v23 >= *(_DWORD *)(v22 + 888) && (((unsigned __int8)v27 ^ (unsigned __int8)v23) & 1) == 0 )
            goto LABEL_31;
          goto LABEL_26;
        }
        v26 = *(_DWORD *)(*(_QWORD *)(v6[3] + 3288LL) + 4LL * v27);
      }
      else
      {
        v26 = ((__int64 (__fastcall *)(_QWORD *, _QWORD))v21)(v6, v27);
      }
      if ( v26 == 1 )
      {
LABEL_31:
        v25 = v8;
        v24 = v27 ^ 1;
        return sub_7C03E0((__int64)v6, v24, v25, a4);
      }
LABEL_26:
      v24 = v27;
      v25 = v8;
      return sub_7C03E0((__int64)v6, v24, v25, a4);
    }
  }
  else if ( v27 != -2 )
  {
    goto LABEL_23;
  }
  return result;
}

