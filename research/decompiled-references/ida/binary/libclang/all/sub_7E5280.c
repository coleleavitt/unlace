__int64 __fastcall sub_7E5280(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // r15
  __m128i v14; // rax
  __int64 v15; // rdx
  __m128i v16; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+10h] [rbp-78h]
  __m128i v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-48h]

  v4 = sub_ACBC90(a2);
  v5 = *a1;
  v18.m128i_i64[0] = v4;
  v6 = sub_7E09C0((__int64)a1, v4, v4, v18.m128i_i64, a1, v5);
  if ( (_BYTE)v6 )
  {
    v7 = v6;
    sub_AC4830(&v18);
    v12 = v20;
    v13 = v21;
    v17 = v19;
    v14 = _mm_load_si128(&v18);
    v16 = v14;
LABEL_5:
    if ( v12 == v14.m128i_i64[0] )
    {
LABEL_11:
      if ( v13 == v14.m128i_i64[1] )
        return v7;
    }
    v15 = v14.m128i_i8[8] & 3;
    if ( (_DWORD)v15 )
      v14.m128i_i64[0] = sub_ACE280(&v16, a2, v15, v9, v10, v11);
    while ( 1 )
    {
      a2 = *(_QWORD *)v14.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v14.m128i_i64[0], a3) )
        break;
      v14.m128i_i64[1] = v16.m128i_i64[1];
      if ( (v16.m128i_i8[8] & 3) != 0 )
      {
        if ( v16.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v16, 1);
        }
        else
        {
          sub_ACE150(&v16);
        }
        v14 = v16;
        goto LABEL_5;
      }
      v14.m128i_i64[0] = v16.m128i_i64[0] + 8;
      v16.m128i_i64[0] = v14.m128i_i64[0];
      if ( v14.m128i_i64[0] == v12 )
        goto LABEL_11;
    }
  }
  return 0;
}

