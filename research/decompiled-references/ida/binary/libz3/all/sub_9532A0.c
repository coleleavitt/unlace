__int64 __fastcall sub_9532A0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (*v2)(void); // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 64LL);
  if ( v2 != sub_956100 )
    return v2();
  result = *(_QWORD *)(v1 + 16);
  if ( *(_BYTE *)(result + 562) )
  {
    result = *(_QWORD *)(**(_QWORD **)(v1 + 8) + 1184LL);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 32) + 72LL))(*(_QWORD *)(v1 + 32));
    }
  }
  return result;
}

