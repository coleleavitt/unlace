__int64 __fastcall sub_C6F20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  result = *(_QWORD *)(a2 + 224);
  if ( result )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = result;
      result = *(_QWORD *)(result + 8);
      if ( a1 == v4 )
        break;
      v3 = v4;
      if ( !result )
        return result;
    }
    if ( v3 )
      *(_QWORD *)(v3 + 8) = result;
    else
      *(_QWORD *)(a2 + 224) = result;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}

