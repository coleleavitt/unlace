__int64 __fastcall sub_FA3330(__int64 a1, int a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48));
  if ( a2 == 3 )
  {
    if ( (_BYTE)result )
      ++*(_DWORD *)(a1 + 208);
  }
  return result;
}

