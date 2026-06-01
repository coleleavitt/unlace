__int64 __fastcall sub_9533B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(); // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 72LL);
  if ( v3 != sub_956090 )
    return ((__int64 (__fastcall *)(_QWORD))v3)(*(_QWORD *)(*(_QWORD *)a1 + 1192LL));
  result = *(_QWORD *)(v2 + 16);
  if ( *(_BYTE *)(result + 562) )
  {
    result = *(_QWORD *)(**(_QWORD **)(v2 + 8) + 1184LL);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 32) + 64LL))(*(_QWORD *)(v2 + 32), a2, 0);
        return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2 + 40) + 64LL))(
                 *(_QWORD *)(v2 + 40),
                 a2,
                 1);
      }
    }
  }
  return result;
}

