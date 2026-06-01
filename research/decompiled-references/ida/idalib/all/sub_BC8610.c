__int64 __fastcall sub_BC8610(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  _QWORD v7[4]; // [rsp+0h] [rbp-20h] BYREF

  v3 = *(_DWORD *)a2 & 0x7FFFFFFF;
  v7[1] = v2;
  switch ( v3 )
  {
    case 0LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
      return 1;
    case 1LL:
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 128LL))(a1, *(_QWORD *)(a2 + 8));
    case 6LL:
    case 7LL:
      sub_F22A90(v7, *(_QWORD *)(a2 + 8));
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, v7[0]);
    case 8LL:
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_QWORD *)(a2 + 8));
    case 9LL:
      v5 = *(_QWORD *)(a2 + 8);
      v6 = v5 + 24LL * *(unsigned int *)(a2 + 4);
      if ( v5 == v6 )
        return 1;
      break;
    default:
      return 1;
  }
  while ( 1 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, v5);
    if ( !(_BYTE)result )
      break;
    v5 += 24;
    if ( v6 == v5 )
      return 1;
  }
  return result;
}
