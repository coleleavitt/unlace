__int64 __fastcall sub_952BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(); // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 48LL);
  if ( v3 != sub_955E90 )
    return ((__int64 (__fastcall *)(_QWORD))v3)(*(_QWORD *)(*(_QWORD *)a1 + 1192LL));
  result = *(unsigned __int8 *)(v2 + 72);
  if ( (_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 32) + 104LL))(*(_QWORD *)(v2 + 32));
    if ( !(_BYTE)result )
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 40) + 104LL))(*(_QWORD *)(v2 + 40), a2);
  }
  return result;
}

