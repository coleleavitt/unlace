__int64 __fastcall sub_956100(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(result + 562) )
  {
    result = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 1184LL);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32));
    }
  }
  return result;
}

