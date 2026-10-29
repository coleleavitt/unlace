__int64 __fastcall sub_642A10(__int64 a1, const char *a2, const char *a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 *v9; // r12
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(_QWORD, _QWORD, const char *, const char *, _QWORD, _QWORD); // rax
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-40h]

  v9 = *(__int64 **)(a1 + 24);
  if ( v9 )
  {
    if ( !strncmp(a2, &byte_22B2824, 5u) )
    {
      v11 = v9[1];
      if ( v11 )
      {
        v13 = v11 + 1;
        v12 = v9[1];
        --v11;
      }
      else
      {
        v12 = 1;
        v13 = 2;
      }
      v14 = *v9;
      if ( v9[2] < v13 )
      {
        v19 = v12;
        v18 = v11;
        v17 = v13;
        v16 = qvector_reserve(v9, v14, v13, 1);
        v12 = v19;
        v11 = v18;
        *v9 = v16;
        v13 = v17;
        v14 = v16;
      }
      v9[1] = v13;
      *(_BYTE *)(v14 + v11) = 32;
      *(_BYTE *)(*v9 + v12) = 0;
      v9 = *(__int64 **)(a1 + 24);
    }
    result = sub_642340(v9, a2, a3, a5 == 0 ? 37 : 23, a4 == 0 ? 4 : 12);
    if ( !(_BYTE)result )
      sub_640A40();
  }
  else
  {
    v15 = *(__int64 (__fastcall **)(_QWORD, _QWORD, const char *, const char *, _QWORD, _QWORD))(a1 + 8);
    if ( !v15 )
    {
      if ( !under_debugger )
        interr(3104);
      BUG();
    }
    return v15(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 36), a2, a3, a4, a5);
  }
  return result;
}

