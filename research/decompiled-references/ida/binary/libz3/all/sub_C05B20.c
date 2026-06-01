__int64 __fastcall sub_C05B20(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi

  v2 = *(unsigned int **)(sub_15D1F10(a2) + 24);
  if ( !v2 || (result = *v2, (_DWORD)result == 4) || (_DWORD)result == -1 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, a2);
  }
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
  {
    if ( (unsigned int)result < *(_DWORD *)(v4 - 4) )
    {
      v5 = *(_QWORD *)(v4 + 8 * result);
      if ( v5 )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, a2);
    }
  }
  return result;
}

