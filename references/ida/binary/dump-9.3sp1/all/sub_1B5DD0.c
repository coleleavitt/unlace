unsigned __int64 __fastcall sub_1B5DD0(__int64 a1, __int64 *a2)
{
  __int64 module_data; // rax
  __m128 v4; // [rsp+0h] [rbp-78h] BYREF
  __int64 v5; // [rsp+10h] [rbp-68h]
  __int64 v6[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-40h]
  unsigned __int64 v9; // [rsp+48h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 8) )
  {
    module_data = get_module_data();
    sub_32F640(v6, a1, *(_QWORD *)(module_data + 1344));
    v5 = 0;
    v4 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
    sub_1B3C00(v6, a2, (__int64)&v4);
    if ( v7 )
    {
      v8 = 0;
      qfree(v7);
    }
    qfree(v6[0]);
  }
  return v9 - __readfsqword(0x28u);
}
