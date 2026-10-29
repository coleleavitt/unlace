__int64 __fastcall sub_9C6D60(__int64 a1, __int64 a2)
{
  __int64 (*v2)(); // rbx
  __int64 result; // rax
  _DWORD v4[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = *(__int64 (**)())(*(_QWORD *)a2 + 48LL);
  v4[0] = sub_EC7AA0(a1);
  result = 1;
  if ( v2 != sub_9C5900 )
    return ((unsigned int (__fastcall *)(__int64, _DWORD *))v2)(a2, v4) ^ 1;
  return result;
}

