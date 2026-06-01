__int64 __fastcall sub_E31A0(_DWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // rbx
  int v5; // eax
  _DWORD v7[2]; // [rsp+8h] [rbp-70h] BYREF
  __m128i v8; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+50h] [rbp-28h]
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  LODWORD(v4) = (unsigned __int8)byte_2440E8;
  v15 = __readfsqword(0x28u);
  if ( byte_2440E8 )
  {
    v9 = a3;
    v4 = &v8;
    v10 = a4;
    v7[1] = a2;
    v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_22F6B0, (__m128i)(unsigned __int64)v7);
    v7[0] = 8;
    v11 = 0;
    v13 = 0;
    v14 = -1;
    v12 = 0;
    v5 = sub_E1F40(a1, a2, 2u, (__int64)&v8, 1);
    v8.m128i_i64[0] = (__int64)&off_22F6B0;
    LOBYTE(v4) = v5 == 1;
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  else if ( !byte_251108 )
  {
    byte_251108 = 1;
    sub_92120((__int64)"The source level debugger has been disabled.\n"
                       "To enable it, use Debugger, Use source-level debugging");
  }
  return (unsigned int)v4;
}

