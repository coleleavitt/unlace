__int64 __fastcall sub_7CC470(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 2392);
  if ( v1 && (v2 = &v1[*((unsigned int *)v1 - 1)], v2 != v1) )
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 288LL))(*v1);
      if ( !(_BYTE)result )
        break;
      if ( v2 == ++v1 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    sub_7F4FC0(a1);
    sub_7F5070(a1);
    sub_7F5200(a1);
    sub_13D45A0(a1 + 1592);
    return 1;
  }
  return result;
}

