__int64 (__fastcall *__fastcall sub_1848B0(__int64 a1))(_QWORD, __int64)
{
  __int64 *v1; // rbx
  __int64 (__fastcall *result)(_QWORD, __int64); // rax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  void (*v5)(); // rdx

  v1 = *(__int64 **)(a1 + 8);
  result = (__int64 (__fastcall *)(_QWORD, __int64))v1[40];
  if ( result && *((_DWORD *)v1 + 84) == 1 )
  {
    v3 = *v1;
    v4 = *(_DWORD *)(a1 + 16);
    *((_DWORD *)v1 + 84) = 2;
    v5 = *(void (**)())(v3 + 216);
    if ( v5 == nullsub_56 )
    {
      result = (__int64 (__fastcall *)(_QWORD, __int64))result(v4, (__int64)(v1 + 31));
    }
    else
    {
      ((void (__fastcall *)(__int64 *))v5)(v1);
      result = (__int64 (__fastcall *)(_QWORD, __int64))((__int64 (__fastcall *)(_QWORD, __int64 *))v1[40])(v4, v1 + 31);
    }
    *((_DWORD *)v1 + 84) = 1;
  }
  return result;
}

