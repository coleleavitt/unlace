__int64 __fastcall sub_6B4CD0(__int64 a1)
{
  __int64 result; // rax
  void *v2; // rbp
  __int64 v3; // [rsp+0h] [rbp-20h]

  result = *(_QWORD *)(a1 + 17328);
  if ( !result )
  {
    v3 = operator new(0x18u);
    sub_7DB0C0(v3, a1);
    v2 = *(void **)(a1 + 17328);
    result = v3;
    *(_QWORD *)(a1 + 17328) = v3;
    if ( v2 )
    {
      sub_7DB490(v2);
      operator delete(v2, 0x18u);
      return *(_QWORD *)(a1 + 17328);
    }
  }
  return result;
}

