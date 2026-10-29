__int64 __fastcall sub_12FD4B0(__int64 (__fastcall *a1)(__int64, _DWORD *), __int64 a2, int a3, int a4)
{
  char *v4; // rbx
  size_t v5; // rax
  _DWORD v7[8]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v8; // [rsp+20h] [rbp-58h]
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v10; // [rsp+50h] [rbp-28h]

  v8 = 265;
  v7[0] = a4;
  v4 = &byte_2601800[a3];
  if ( v4 )
    v5 = strlen(&byte_2601800[a3]);
  else
    v5 = 0;
  v9[0] = v4;
  v10 = 261;
  v9[1] = v5;
  a1(a2, v9);
  return a1(a2, v7);
}
