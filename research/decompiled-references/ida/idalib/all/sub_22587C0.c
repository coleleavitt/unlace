__int64 __fastcall sub_22587C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 16);
  v3 = &v2[*(unsigned int *)(a1 + 24)];
  if ( v2 == v3 )
  {
LABEL_6:
    std::_V2::system_category((std::_V2 *)a1);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      a1 = *v2;
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 72LL))(*v2, a2);
      if ( (_DWORD)result )
        break;
      if ( v3 == ++v2 )
        goto LABEL_6;
    }
  }
  return result;
}
