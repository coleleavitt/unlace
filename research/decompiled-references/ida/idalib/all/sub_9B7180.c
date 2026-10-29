__int64 __fastcall sub_9B7180(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = sub_9C4E10();
  v6 = sub_984EE0(a1, v1, v2, v3, v4, v5);
  result = *v6;
  if ( !*v6 )
  {
    sub_9C5CE0(v9, a1);
    result = v9[0];
    v8 = *v6;
    v9[0] = 0;
    *v6 = result;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v9[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9[0] + 8LL))(v9[0]);
      return *v6;
    }
  }
  return result;
}
