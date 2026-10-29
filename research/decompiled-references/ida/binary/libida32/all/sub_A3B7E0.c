__int64 __fastcall sub_A3B7E0(__int64 a1)
{
  __int64 result; // rax
  void *v2; // rbp
  __int64 v3; // [rsp+0h] [rbp-20h]

  result = *(_QWORD *)(a1 + 17480);
  if ( !result )
  {
    v3 = operator new(0x38u);
    sub_CC17E0(v3, a1);
    v2 = *(void **)(a1 + 17480);
    result = v3;
    *(_QWORD *)(a1 + 17480) = v3;
    if ( v2 )
    {
      sub_CC3EA0(v2);
      operator delete(v2, 0x38u);
      return *(_QWORD *)(a1 + 17480);
    }
  }
  return result;
}

