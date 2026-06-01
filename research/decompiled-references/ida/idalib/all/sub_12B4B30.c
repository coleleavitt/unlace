__int64 __fastcall sub_12B4B30(_QWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  _QWORD *v5; // [rsp+0h] [rbp-10h]

  if ( a2 != 9 )
    return sub_112D160(a1, a2);
  result = a1[298];
  if ( !result )
  {
    v5 = (_QWORD *)operator new(0x20u);
    sub_112B250(v5, (__int64)"SPIR-V::Assembler", (__int64)"spirv-as", (__int64)a1);
    result = (__int64)v5;
    v4 = a1[298];
    *v5 = &off_2C40318;
    a1[298] = v5;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      return a1[298];
    }
  }
  return result;
}
