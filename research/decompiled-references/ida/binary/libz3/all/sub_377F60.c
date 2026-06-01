__int64 __fastcall sub_377F60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void (*v3)(); // rdx
  __int64 v4; // [rsp+8h] [rbp-10h]

  result = sub_379730(a1, a2);
  v3 = *(void (**)())(*(_QWORD *)result + 112LL);
  if ( v3 != nullsub_93 )
  {
    v4 = result;
    ((void (__fastcall *)(__int64, __int64))v3)(result, a2);
    return v4;
  }
  return result;
}

