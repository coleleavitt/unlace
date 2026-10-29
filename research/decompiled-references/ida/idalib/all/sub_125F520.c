__int64 __fastcall sub_125F520(_QWORD *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  _QWORD *v6; // [rsp+8h] [rbp-10h]
  _QWORD *v7; // [rsp+8h] [rbp-10h]

  if ( a2 == 21 )
  {
    result = a1[298];
    if ( !result )
    {
      v7 = (_QWORD *)operator new(0x20u);
      sub_112B250(v7, (__int64)"hlsl::Validator", (__int64)"dxv", (__int64)a1);
      result = (__int64)v7;
      v5 = a1[298];
      *v7 = &off_2C3C890;
      a1[298] = v7;
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        return a1[298];
      }
    }
  }
  else if ( a2 == 22 )
  {
    result = a1[299];
    if ( !result )
    {
      v6 = (_QWORD *)operator new(0x20u);
      sub_112B250(v6, (__int64)"hlsl::MetalConverter", (__int64)"metal-shaderconverter", (__int64)a1);
      result = (__int64)v6;
      v4 = a1[299];
      *v6 = &off_2C3C8F8;
      a1[299] = v6;
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        return a1[299];
      }
    }
  }
  else
  {
    return sub_112D160(a1, a2);
  }
  return result;
}
