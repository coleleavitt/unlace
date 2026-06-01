__int64 __fastcall sub_8EFD0(__int64 a1, __int64 a2)
{
  __int64 module_data; // r13
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD v8[6]; // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+30h] [rbp-38h]
  char v10; // [rsp+34h] [rbp-34h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  module_data = get_module_data();
  v5 = j__qalloc_or_throw(1512, a2, v3, v4);
  sub_336F00(v5, module_data);
  v6 = *(_QWORD *)(v5 + 1504);
  v8[0] = a1;
  v8[1] = a2 + a1;
  v8[2] = v5;
  v8[3] = v6;
  v8[4] = -1;
  v9 = 0;
  v10 = 0;
  v8[5] = 4;
  if ( !(unsigned __int8)sub_8C080(v5, (__int64)v8, -1) )
  {
    if ( v5 )
    {
      sub_84290(v5);
      j__qfree(v5);
    }
    return 0;
  }
  return v5;
}
