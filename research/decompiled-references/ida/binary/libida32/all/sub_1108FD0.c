__int64 __fastcall sub_1108FD0(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int8 v3; // bp
  __int64 v4; // rdi
  __int64 v5; // [rsp+0h] [rbp-20h]

  result = a1[210];
  if ( !result )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 192LL))(a1);
    v5 = operator new(0x30u);
    sub_11667D0(v5, a1, v3);
    v4 = a1[210];
    result = v5;
    a1[210] = v5;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      return a1[210];
    }
  }
  return result;
}

