unsigned __int64 __fastcall sub_1B2390(__int64 a1, __int64 *a2, double a3, double a4)
{
  __int64 module_data; // rax
  __m128 v6; // [rsp+0h] [rbp-78h] BYREF
  __int64 v7; // [rsp+10h] [rbp-68h]
  _QWORD v8[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 8) )
  {
    module_data = get_module_data((unsigned int)dword_4DC8D8);
    sub_32B1F0(v8, a1, *(_QWORD *)(module_data + 1344));
    v7 = 0;
    v6 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4DC8D8) + 1344));
    sub_1B01C0(v8, a2, (__int64)&v6, *(double *)v6.m128_u64, a4);
    if ( v9 )
    {
      v10 = 0;
      qfree(v9);
    }
    qfree(v8[0]);
  }
  return v11 - __readfsqword(0x28u);
}
