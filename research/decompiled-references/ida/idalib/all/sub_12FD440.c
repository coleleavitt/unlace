__int64 __fastcall sub_12FD440(__int64 (__fastcall *a1)(__int64, _QWORD *), __int64 a2, int a3, int a4)
{
  char *v4; // rbx
  size_t v5; // rax
  __int64 v7; // [rsp+0h] [rbp-78h]
  _QWORD v8[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v9; // [rsp+50h] [rbp-28h]

  LODWORD(v7) = a4;
  v4 = &byte_2601800[a3];
  if ( v4 )
    v5 = strlen(&byte_2601800[a3]);
  else
    v5 = 0;
  v8[1] = v5;
  v8[0] = v4;
  v8[2] = v7;
  v9 = 2309;
  return a1(a2, v8);
}
