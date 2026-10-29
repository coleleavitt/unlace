__int64 __fastcall liblicui::license_dialog_t__::vfunc_5(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm0_8
  __int64 v14; // [rsp+0h] [rbp-98h] BYREF
  __int128 v15; // [rsp+8h] [rbp-90h]
  __int16 v16; // [rsp+18h] [rbp-80h]
  char v17; // [rsp+1Ah] [rbp-7Eh]
  char v18; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int128 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+48h] [rbp-50h]
  __int128 v23; // [rsp+60h] [rbp-38h] BYREF
  __int64 v24; // [rsp+70h] [rbp-28h]
  unsigned __int64 v25; // [rsp+78h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(a2 + 12) == 5 )
  {
    if ( *(_BYTE *)(a1 + 264) )
    {
      if ( !*(_QWORD *)(a1 + 320) )
      {
        *(_QWORD *)(a1 + 320) = 65434;
        v15 = 0;
        v14 = 0;
        sub_169A50(&v14, (__int64)"%d", 65434);
        v13 = callui(203, 15, a1, 4, (unsigned int)&v14, (unsigned int)&callui);
        if ( v14 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v14, &byte_9[6], v13);
        }
      }
    }
    v14 = 0;
    v16 = 0;
    v17 = 1;
    v18 = 0;
    v19 = 0;
    v21 = 0;
    v15 = 0;
    v20 = 0;
    v22 = 0;
    sub_5521F0(a1 + 264, (__int64)&v14);
    v24 = 0;
    v23 = 0;
    sub_5574C0(a1, &v14, (int *)&v23, 0.0, a4, a5, a6, v11, v12, a9, a10);
    sub_552450(a1);
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, (const char *)&v14);
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19, (const char *)&v14);
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, (const char *)&v14);
    }
    return 1;
  }
  return result;
}
