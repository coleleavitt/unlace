__int64 __fastcall sub_8E8C20(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 112);
  if ( *(_DWORD *)(result + 512) == 6 )
  {
    result = *(_QWORD *)(a1 + 8864);
    ++*(_DWORD *)(result + 4LL * a2);
  }
  return result;
}

