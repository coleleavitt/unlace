unsigned __int64 __fastcall sub_2E060(std::string *this, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE *v7; // r13
  __int64 v8; // r12
  bool v9; // al
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  _BYTE *v13; // rax
  _BYTE *v14; // rbx
  const char *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  char v20; // [rsp+10h] [rbp-98h] BYREF
  int v21; // [rsp+14h] [rbp-94h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h] BYREF
  bool v23; // [rsp+23h] [rbp-85h] BYREF
  int v24; // [rsp+24h] [rbp-84h] BYREF
  __int64 *v25; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v26[7]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v22 = a2;
  v21 = a4;
  v20 = a5;
  v27 = __readfsqword(0x28u);
  if ( *(_WORD *)(a3 + 16) == 3 )
  {
    v7 = nullptr;
    if ( sub_BFF0(a3) )
      v7 = *(_BYTE **)sub_C020((_BYTE *)a3);
    v8 = 0;
    if ( sub_BFF0((__int64)v7) )
      v8 = *(_QWORD *)sub_C020(v7);
    if ( *(_WORD *)(v8 + 16) == 212 )
    {
      v24 = 0;
      v25 = &v22;
      v9 = 0;
      if ( v22 )
        v9 = sub_BFF0(v22) != 0;
      v23 = v9;
      v10 = *(_QWORD *)(*(_QWORD *)this - 24LL);
      if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(*(_QWORD *)this - 16LL) || *(int *)(*(_QWORD *)this - 8LL) > 0 )
        std::string::reserve(this, v10 + 1);
      *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 40;
      v11 = *(_QWORD *)this;
      if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v11 - 8) = 0;
        *(_QWORD *)(v11 - 24) = v10 + 1;
        *(_BYTE *)(v11 + v10 + 1) = 0;
      }
      v12 = sub_C050(v8);
      v13 = sub_C020((_BYTE *)v8);
      v26[1] = this;
      v26[0] = &v23;
      v26[2] = &v25;
      v26[3] = &v24;
      v26[4] = &v20;
      v26[5] = &v21;
      if ( (_BYTE *)v12 != v13 )
      {
        v14 = v13 + 8;
        sub_2DBB0((__int64)v26, *(_BYTE **)v13);
        while ( (_BYTE *)v12 != v14 )
        {
          v15 = "";
          if ( v20 )
            v15 = ", ";
          v14 += 8;
          std::string::append(this, v15, v20 != 0 ? 2 : 0);
          sub_2DBB0((__int64)v26, *((_BYTE **)v14 - 1));
        }
      }
    }
    else
    {
      if ( !v20 )
      {
        std::string::append(this, "(_:)", 4u);
        return v27 - __readfsqword(0x28u);
      }
      v18 = *(_QWORD *)(*(_QWORD *)this - 24LL);
      if ( (unsigned __int64)(v18 + 1) > *(_QWORD *)(*(_QWORD *)this - 16LL) || *(int *)(*(_QWORD *)this - 8LL) > 0 )
        std::string::reserve(this, v18 + 1);
      *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 40;
      v19 = *(_QWORD *)this;
      if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v19 - 8) = 0;
        *(_QWORD *)(v19 - 24) = v18 + 1;
        *(_BYTE *)(v19 + v18 + 1) = 0;
      }
      sub_24010(this);
    }
    v16 = *(_QWORD *)(*(_QWORD *)this - 24LL);
    if ( (unsigned __int64)(v16 + 1) > *(_QWORD *)(*(_QWORD *)this - 16LL) || *(int *)(*(_QWORD *)this - 8LL) > 0 )
      std::string::reserve(this, v16 + 1);
    *(_BYTE *)(*(_QWORD *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = 41;
    v17 = *(_QWORD *)this;
    if ( (_QWORD *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v17 - 8) = 0;
      *(_QWORD *)(v17 - 24) = v16 + 1;
      *(_BYTE *)(v17 + v16 + 1) = 0;
    }
  }
  else
  {
    *((_BYTE *)this + 81) = 0;
  }
  return v27 - __readfsqword(0x28u);
}

