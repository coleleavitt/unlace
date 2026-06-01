__int64 __fastcall sub_C701E0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(__int64 **)(a1 + 16);
  if ( !v1 )
    return *(unsigned int *)(a1 + 4);
  v2 = *v1;
  v4[1] = v1 + 1;
  v4[0] = v2;
  return sub_F48F70(v4);
}

