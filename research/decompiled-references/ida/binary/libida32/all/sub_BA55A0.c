__int64 __fastcall sub_BA55A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax

  if ( !a2 )
    return 1;
  v2 = (_QWORD *)(a2 + 24);
  v3 = a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24;
  if ( v3 == a2 + 24 )
  {
LABEL_7:
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0 && *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24) )
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 96LL))(*a1);
    else
      return 1;
  }
  else
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, *v2);
      if ( !(_BYTE)result )
        break;
      if ( (_QWORD *)v3 == ++v2 )
        goto LABEL_7;
    }
  }
  return result;
}

