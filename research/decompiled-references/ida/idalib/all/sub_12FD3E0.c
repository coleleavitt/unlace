__int64 __fastcall sub_12FD3E0(__int64 (__fastcall *a1)(__int64, _QWORD *), __int64 a2, int a3, __int64 a4)
{
  char *v5; // rbx
  size_t v6; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v9; // [rsp+20h] [rbp-38h]

  v5 = &byte_2601800[a3];
  if ( v5 )
    v6 = strlen(&byte_2601800[a3]);
  else
    v6 = 0;
  v8[1] = v6;
  v8[0] = v5;
  v8[2] = a4;
  v9 = 1029;
  return a1(a2, v8);
}
