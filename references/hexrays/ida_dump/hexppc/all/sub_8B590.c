__int64 __fastcall sub_8B590(__int64 a1, __int64 a2)
{
  __int64 module_data; // r13
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD v6[6]; // [rsp+0h] [rbp-68h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  char v8; // [rsp+34h] [rbp-34h]
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4DC8D8);
  v3 = j__qalloc_or_throw(1512);
  sub_332920(v3, module_data);
  v4 = *(_QWORD *)(v3 + 1504);
  v6[0] = a1;
  v6[1] = a2 + a1;
  v6[2] = v3;
  v6[3] = v4;
  v6[4] = -1;
  v7 = 0;
  v8 = 0;
  v6[5] = 4;
  if ( !(unsigned __int8)sub_88640(v3, (__int64)v6, -1) )
  {
    if ( v3 )
    {
      sub_80850(v3);
      j__qfree(v3);
    }
    return 0;
  }
  return v3;
}
