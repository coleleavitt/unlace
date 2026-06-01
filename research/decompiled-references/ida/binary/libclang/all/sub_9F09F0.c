__int64 __fastcall sub_9F09F0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 result; // rax
  unsigned __int8 **v7; // rax
  unsigned __int8 **v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 **v11; // rax
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  char v14; // [rsp+18h] [rbp-30h]

  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( !a3 || (v5 = v4, (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0) )
  {
    v12 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v7 = (unsigned __int8 **)sub_A2E1B0(a1, &v12, 2215, 0);
    v8 = v7;
    if ( v7 )
    {
      sub_9B5410(v7, 2);
      v9 = sub_A2CB40(a1);
      sub_9B58B0(v8, (*(_BYTE *)(v9 + 1) & 8) != 0);
LABEL_11:
      v10 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
      v14 = 1;
      v13 = v10;
      return sub_839C90((__int64 *)v8, &v13);
    }
    sub_A2CB40(a1);
    return sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
  }
  result = *(unsigned int *)(v5 + 48);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 2 )
    {
      if ( *(_QWORD *)(v5 + 24) )
        return result;
    }
    else if ( (_DWORD)result == 3 || *(_QWORD *)(v5 + 32) || *(_QWORD *)v5 )
    {
      return result;
    }
  }
  else if ( *(_QWORD *)(v5 + 24) )
  {
    return result;
  }
  result = sub_A2CB40(a1);
  if ( (*(_BYTE *)(result + 2) & 2) == 0 )
  {
    v12 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v11 = (unsigned __int8 **)sub_A2E1B0(a1, &v12, 2215, 0);
    v8 = v11;
    if ( v11 )
    {
      sub_9B5410(v11, 3);
      sub_8356A0(v8, (__int64)"'void *'", 1u);
      goto LABEL_11;
    }
    return sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
  }
  return result;
}

