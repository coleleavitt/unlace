__int64 __fastcall sub_4ED010(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int8 v7; // [rsp+Fh] [rbp-29h]

  v2 = sub_4ECEF0((_QWORD *)a1, a2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v5 = 0;
    while ( 1 )
    {
      result = sub_558790(v3, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v5), v4);
      if ( (_BYTE)result )
        break;
      if ( (unsigned int)++v5 >= *(_DWORD *)(a1 + 48) )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    result = 0;
  }
  if ( v4 )
  {
    v7 = result;
    sub_553300(v3, v4);
    return v7;
  }
  return result;
}

