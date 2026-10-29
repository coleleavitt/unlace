__int64 __fastcall sub_4658A0(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, int a5, int a6)
{
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned __int8 v10; // [rsp+Ch] [rbp-Ch]

  v7 = *(_DWORD *)(a1 + 80);
  if ( v7 )
    return sub_1674520(a1 + 56, a2, v7);
  v8 = *(_QWORD *)(a1 + 48);
  if ( !v8 )
  {
    v10 = a3;
    sub_16669E0(a1 + 40);
    v8 = *(_QWORD *)(a1 + 48);
    a3 = v10;
  }
  return sub_166A700(v8, a2, a3, a4, a5, a6);
}

