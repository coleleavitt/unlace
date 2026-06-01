__int64 __fastcall sub_BEBAF0(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
  result = *(unsigned __int8 *)(a1 + 915);
  if ( *(_DWORD *)(a1 + 916) > 1u )
    return 1;
  return result;
}

