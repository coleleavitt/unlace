__int64 __fastcall sub_12E4E70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v7; // rdi

  result = *(_QWORD *)(a1 + 16);
  v3 = (*(_QWORD *)(a1 + 24) - result) >> 3;
  if ( (_DWORD)v3 )
  {
    v4 = 8LL * (unsigned int)(v3 - 1);
    for ( i = 0; ; i += 8 )
    {
      result = *(_QWORD *)(*(_QWORD *)(result + i) + 112LL);
      v7 = *(_QWORD *)(result + 18360);
      if ( v7 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 224LL))(v7, a2);
      if ( i == v4 )
        break;
      result = *(_QWORD *)(a1 + 16);
    }
  }
  return result;
}
