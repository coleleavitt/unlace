__int64 __fastcall sub_567140(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1656);
  result = *(unsigned int *)(v1 + 124);
  if ( (_DWORD)result == 0x7FFFFFFF )
  {
    if ( !under_debugger )
      interr(1881);
    BUG();
  }
  *(_DWORD *)(v1 + 124) = result + 1;
  return result;
}

