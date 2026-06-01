__int64 __fastcall sub_5A6A00(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  *(_DWORD *)a1 = *(_DWORD *)a2;
  result = a2 + 8;
  if ( a1 + 8 != a2 + 8 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    *(_QWORD *)(a1 + 8) = 0;
    result = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return result;
}

