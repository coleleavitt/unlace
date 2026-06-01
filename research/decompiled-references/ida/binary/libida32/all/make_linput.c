__int64 __fastcall make_linput(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0;
  result = operator new(0x38u);
  *(_DWORD *)result = 1;
  *(_QWORD *)(result + 8) = a1;
  return result;
}

