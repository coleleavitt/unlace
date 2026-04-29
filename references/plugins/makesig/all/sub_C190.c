__int64 __fastcall sub_C190(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rbx

  result = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)result )
  {
    v4 = *a1;
    v5 = *(unsigned int **)a2;
    if ( (unsigned int)result <= 0xF )
    {
      return sub_BB30(v4, *(unsigned __int16 *)v5, a3, (__int64)v5);
    }
    else if ( (unsigned int)result <= 0x20 )
    {
      return sub_BC10(v4, *v5);
    }
    else if ( (unsigned int)result <= 0x40 )
    {
      v7 = *(_QWORD *)v5;
      sub_BC10(v4, HIDWORD(*(_QWORD *)v5));
      return sub_BC10(v4, v7);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 8);
      result = qfwrite(v4, v5, v6);
      if ( v6 != result )
        sub_BA80((__int64)"File write error");
    }
  }
  return result;
}
