__int64 __fastcall til_chooser_t__::vfunc_9(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  _QWORD *v4; // rdi

  v2 = *a2;
  result = 0;
  if ( (_DWORD)v2 )
  {
    v4 = *(_QWORD **)(a1 + 184);
    if ( v4[2] )
    {
      if ( v2 < v4[5] )
        return *(int *)(v4[4] + 4 * v2);
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v4 + 32LL))(v4) >= (unsigned int)v2 )
    {
      return v2 - 1;
    }
    return -1;
  }
  return result;
}
