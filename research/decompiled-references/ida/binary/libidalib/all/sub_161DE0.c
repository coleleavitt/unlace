unsigned __int64 __fastcall sub_161DE0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __m128i v9; // [rsp+0h] [rbp-88h] BYREF
  double v10; // [rsp+10h] [rbp-78h]
  __int64 v11; // [rsp+18h] [rbp-70h]
  __int64 v12; // [rsp+20h] [rbp-68h]
  __int128 v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-38h]
  unsigned __int64 v17; // [rsp+68h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0.0;
  v11 = -1;
  v12 = 0;
  v15 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  sub_15D910((_QWORD *)a1, &v9, a2, a4, a5, a6);
  if ( !sub_161BE0(*(_QWORD *)(a1 + 96))
    || *(_DWORD *)(a1 + 32) != (_DWORD)v12
    || *(_QWORD *)(a1 + 24) != v11
    || *(double *)a1 != *(double *)v9.m128i_i64
    || *(double *)(a1 + 8) != *(double *)&v9.m128i_i64[1]
    || *(double *)(a1 + 16) != v10 )
  {
    sub_159AB0((__m128i *)a1, &v9);
    v6 = (_QWORD *)qword_2544E0;
    v7 = (_QWORD *)(qword_2544E0 + 8 * xmmword_2544E8);
    if ( (_QWORD *)qword_2544E0 != v7 )
    {
      do
      {
        if ( qword_2544D0 == *v6 )
          break;
        ++v6;
      }
      while ( v7 != v6 );
    }
    navstack_t_set_current();
  }
  if ( (_QWORD)v13 )
  {
    qfree();
    *(_QWORD *)&v13 = 0;
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
    *((_QWORD *)&v13 + 1) = 0;
    *((_QWORD *)&v14 + 1) = 0;
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( (_QWORD)v13 )
    qfree();
  return v17 - __readfsqword(0x28u);
}

