void __fastcall sub_686950(
        const __m128i *a1,
        __int64 a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int *v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]

  if ( a3 == 1 )
  {
    if ( !*(_WORD *)(a2 + 4)
      && (v13 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
      && a1[9].m128i_i32[0] == *v13
      && v13[1] == 1 )
    {
      v14 = *(_QWORD *)(a2 + 32);
      sub_676260((__int64)&v18, a1[1].m128i_i64[0], a1[1].m128i_i64[1], v14);
      v15 = sub_15D1F10(v14);
      sub_681BA0(a1, (__int64)v18, (unsigned int *)a2, v15, a4, a5, a6, a7, v16, v17, a10, a11);
      sub_675460((__int64)v18, v19);
    }
    else
    {
      sub_67E720(a1, a2);
    }
  }
  else if ( a3 == 2 )
  {
    if ( !*(_WORD *)(a2 + 4) )
    {
      v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v12 )
      {
        if ( a1[9].m128i_i32[0] == *v12 )
        {
          if ( v12[1] )
          {
            if ( v12[1] == 1 )
              sub_6831C0((__int64)a1, a2);
          }
          else
          {
            sub_685F00((__int64)a1, a2);
          }
        }
      }
    }
  }
  else if ( !a3 && !*(_WORD *)(a2 + 4) )
  {
    v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v11 )
    {
      if ( a1[9].m128i_i32[0] == *v11 )
      {
        if ( v11[1] == 1 )
        {
          sub_6828A0((__int64)a1, a2);
        }
        else if ( !v11[1] )
        {
          sub_676260((__int64)&v18, a1[1].m128i_i64[0], a1[1].m128i_i64[1], a2);
          sub_67A980((__int64)a1, v18);
          sub_675460((__int64)v18, v19);
          sub_682E70((__int64)a1, a2);
        }
      }
    }
  }
}

