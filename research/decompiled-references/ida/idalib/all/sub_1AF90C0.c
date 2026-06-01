_DWORD *__fastcall sub_1AF90C0(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _DWORD *result; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx

  if ( a2 == 62 )
  {
    v22 = (_QWORD *)sub_168B6C0(a1);
    v25 = v22[294];
    v22[304] += 12LL;
    v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v22[295] >= v26 + 12 && v25 )
    {
      v22[294] = v26 + 12;
      result = (_DWORD *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      result = (_DWORD *)sub_986170((__int64)(v22 + 294), 12, 12, 3, v23, v24);
    }
    *result = a3;
    result[1] = a4;
    result[2] = 62;
  }
  else
  {
    if ( a2 > 62 )
    {
      if ( a2 == 63 )
      {
        v6 = (_QWORD *)sub_168B6C0(a1);
        v9 = v6[294];
        v6[304] += 12LL;
        v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v6[295] >= v10 + 12 && v9 )
        {
          v6[294] = v10 + 12;
          result = (_DWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          result = (_DWORD *)sub_986170((__int64)(v6 + 294), 12, 12, 3, v7, v8);
        }
        *result = a3;
        result[1] = a4;
        result[2] = 63;
        return result;
      }
      if ( a2 == 64 )
      {
        v17 = (_QWORD *)sub_168B6C0(a1);
        v20 = v17[294];
        v17[304] += 12LL;
        v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17[295] >= v21 + 12 && v20 )
        {
          v17[294] = v21 + 12;
          result = (_DWORD *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          result = (_DWORD *)sub_986170((__int64)(v17 + 294), 12, 12, 3, v18, v19);
        }
        *result = a3;
        result[1] = a4;
        result[2] = 64;
        return result;
      }
      return (_DWORD *)sub_1AF92C0();
    }
    if ( a2 != 61 )
      return (_DWORD *)sub_1AF92C0();
    v12 = (_QWORD *)sub_168B6C0(a1);
    v15 = v12[294];
    v12[304] += 12LL;
    v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v12[295] >= v16 + 12 && v15 )
    {
      v12[294] = v16 + 12;
      result = (_DWORD *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      result = (_DWORD *)sub_986170((__int64)(v12 + 294), 12, 12, 3, v13, v14);
    }
    *result = a3;
    result[1] = a4;
    result[2] = 61;
  }
  return result;
}
