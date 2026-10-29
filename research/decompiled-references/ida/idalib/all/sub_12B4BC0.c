__int64 __fastcall sub_12B4BC0(_QWORD *a1, __int64 a2)
{
  int v2; // esi
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // [rsp+0h] [rbp-10h]

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 9 )
    return sub_112D160(a1, v2);
  result = a1[298];
  if ( !result )
  {
    v6 = (_QWORD *)operator new(0x20u);
    sub_112B250(v6, (__int64)"SPIR-V::Assembler", (__int64)"spirv-as", (__int64)a1);
    result = (__int64)v6;
    v5 = a1[298];
    *v6 = &off_2C40318;
    a1[298] = v6;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      return a1[298];
    }
  }
  return result;
}
