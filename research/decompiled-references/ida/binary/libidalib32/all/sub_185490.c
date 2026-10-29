__int64 __fastcall sub_185490(__int64 *a1, unsigned int a2)
{
  __int64 (__fastcall *v2)(_QWORD, __int64); // rdx
  __int64 result; // rax
  __int64 v4; // rax
  void (*v5)(void); // rax

  v2 = (__int64 (__fastcall *)(_QWORD, __int64))a1[40];
  result = 1;
  if ( v2 && *((_DWORD *)a1 + 84) == 1 )
  {
    v4 = *a1;
    *((_DWORD *)a1 + 84) = 2;
    v5 = *(void (**)(void))(v4 + 216);
    if ( v5 == nullsub_56 )
    {
      result = v2(a2, (__int64)(a1 + 31));
    }
    else
    {
      v5();
      result = ((__int64 (__fastcall *)(_QWORD, __int64 *))a1[40])(a2, a1 + 31);
    }
    *((_DWORD *)a1 + 84) = 1;
  }
  return result;
}

