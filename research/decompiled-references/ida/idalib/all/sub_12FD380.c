void __fastcall sub_12FD380(__int64 a1, void (__fastcall *a2)(__int64, _QWORD *), __int64 a3, int a4, char a5)
{
  size_t v6; // rax
  char *v7; // rbx
  _QWORD v8[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v9; // [rsp+20h] [rbp-28h]

  if ( a5 )
  {
    v6 = 0;
    v7 = &byte_2601800[a4];
    if ( v7 )
      v6 = strlen(&byte_2601800[a4]);
    v8[0] = v7;
    v9 = 261;
    v8[1] = v6;
    a2(a3, v8);
  }
}
