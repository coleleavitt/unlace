__int64 __fastcall sub_6B4C60(__int64 a1)
{
  __int64 result; // rax
  void *v2; // rbp
  __int64 v3; // [rsp+0h] [rbp-20h]

  result = *(_QWORD *)(a1 + 17320);
  if ( !result )
  {
    v3 = operator new(0x28u);
    sub_8C9AD0(v3, a1);
    v2 = *(void **)(a1 + 17320);
    result = v3;
    *(_QWORD *)(a1 + 17320) = v3;
    if ( v2 )
    {
      sub_8C9C10(v2);
      operator delete(v2, 0x28u);
      return *(_QWORD *)(a1 + 17320);
    }
  }
  return result;
}

