__int64 __fastcall sub_E3FB0(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v4; // rbx
  int v5; // eax
  int v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+8h] [rbp-70h]
  __m128i v9; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+50h] [rbp-28h]
  unsigned __int64 v16; // [rsp+58h] [rbp-20h]

  LODWORD(v4) = (unsigned __int8)byte_245140;
  v16 = __readfsqword(0x28u);
  if ( byte_245140 )
  {
    v4 = &v9;
    v10 = a3;
    v11 = a4;
    v7 = 16;
    v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_230730, (__m128i)(unsigned __int64)&v7);
    v8 = a2;
    v12 = 0;
    v14 = 0;
    v15 = -1;
    v13 = 0;
    v5 = sub_E3740(a1, a2, 2u, (__int64)&v9, 1);
    v9.m128i_i64[0] = (__int64)&off_230730;
    LOBYTE(v4) = v5 == 1;
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
  }
  else if ( !byte_2521E8 )
  {
    byte_2521E8 = 1;
    sub_92200((__int64)"The source level debugger has been disabled.\n"
                       "To enable it, use Debugger, Use source-level debugging");
  }
  return (unsigned int)v4;
}

