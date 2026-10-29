__int64 __fastcall sub_55D710(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  void *v3; // rdi
  __int64 v4; // [rsp+8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 40);
  result = *(_QWORD *)(v1 + 40);
  if ( !result )
  {
    result = (**(__int64 (__fastcall ***)(_QWORD))v1)(*(_QWORD *)(a1 + 40));
    v3 = *(void **)(v1 + 40);
    if ( v3 )
    {
      if ( (void *)result != v3 )
      {
        v4 = result;
        sub_4D63E0(v3);
        result = v4;
      }
    }
    *(_QWORD *)(v1 + 40) = result;
  }
  return result;
}

