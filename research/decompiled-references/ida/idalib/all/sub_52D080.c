__int64 __fastcall sub_52D080(__int64 a1)
{
  __int64 (__fastcall **v1)(); // rbp
  __int64 result; // rax
  _QWORD *v3; // r12
  _QWORD *v4; // rbx

  v1 = &off_2B2E050;
  result = *(_QWORD *)(a1 + 1584);
  v3 = (_QWORD *)(result + 8);
  do
  {
    while ( 1 )
    {
      v4 = (_QWORD *)*v3;
      if ( !*v3 )
        goto LABEL_3;
      if ( !(unsigned __int8)sub_77A920(*v4) )
        break;
      result = sub_77FEE0(v4);
LABEL_3:
      v1 += 4;
      ++v3;
      if ( v1 == off_2B2E130 )
        return result;
    }
    if ( *v1 )
    {
      ((void (__fastcall *)(__int64, _QWORD *))*v1)(a1, v4);
      save_dirtree(*v4);
    }
    v1 += 4;
    ++v3;
    result = sub_77A930(*v4, 1);
  }
  while ( v1 != off_2B2E130 );
  return result;
}
