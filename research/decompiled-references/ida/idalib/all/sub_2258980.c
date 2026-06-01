__int64 __fastcall sub_2258980(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp

  v3 = *(_QWORD **)(a1 + 16);
  v4 = &v3[*(unsigned int *)(a1 + 24)];
  if ( v3 == v4 )
  {
LABEL_6:
    std::_V2::generic_category((std::_V2 *)a1);
    return 2;
  }
  else
  {
    while ( 1 )
    {
      a1 = *v3;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 96LL))(*v3, a2) )
        return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v3 + 104LL))(*v3, a2, a3);
      if ( v4 == ++v3 )
        goto LABEL_6;
    }
  }
}
