__int64 __fastcall sub_953490(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 (*v3)(void); // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 1056LL);
  if ( v1 && *(_DWORD *)(v1 - 4) )
    return 1;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1192LL);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 104LL);
  if ( v3 != sub_955E70 )
    return v3();
  result = *(unsigned __int8 *)(v2 + 72);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 32) + 56LL))(*(_QWORD *)(v2 + 32));
  return result;
}

