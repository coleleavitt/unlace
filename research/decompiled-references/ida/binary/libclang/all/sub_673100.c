__int64 __fastcall sub_673100(__int64 *a1, _QWORD *a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  __int64 *v8; // rbx
  __int64 *v9; // r12
  unsigned int v10; // r12d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // xmm0
  __int64 v16; // rbx
  __int64 v17; // r15
  __m128i v18; // rax
  __int64 v19; // rdx
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h]
  __m128i v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]

  v8 = (__int64 *)a2[3];
  v9 = &v8[a2[4]];
  if ( v8 == v9 )
  {
LABEL_7:
    v10 = sub_672CC0(a1, a2[5], a4, a5, a6, a7);
    if ( (_BYTE)v10 )
    {
      sub_AC4830(&v22);
      v15 = _mm_load_si128(&v22);
      v16 = v24;
      v17 = v25;
      v20 = v15;
      v21 = v23;
      v18 = v15;
LABEL_9:
      if ( v16 == v18.m128i_i64[0] )
      {
LABEL_15:
        if ( v17 == v18.m128i_i64[1] )
          return v10;
      }
      v19 = v18.m128i_i8[8] & 3;
      if ( (_DWORD)v19 )
        v18.m128i_i64[0] = sub_ACE280(&v20, a2, v19, v12, v13, v14);
      while ( 1 )
      {
        a2 = *(_QWORD **)v18.m128i_i64[0];
        if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v18.m128i_i64[0], a3, *(double *)v15.m128i_i64, a5, a6, a7) )
          break;
        v18.m128i_i64[1] = v20.m128i_i64[1];
        if ( (v20.m128i_i8[8] & 3) != 0 )
        {
          if ( v20.m128i_i64[1] <= 3uLL )
          {
            a2 = (_QWORD *)(&dword_0 + 1);
            sub_ACE0F0(&v20, 1);
          }
          else
          {
            sub_ACE150(&v20);
          }
          v18 = v20;
          goto LABEL_9;
        }
        v18.m128i_i64[0] = v20.m128i_i64[0] + 8;
        v20.m128i_i64[0] = v18.m128i_i64[0];
        if ( v16 == v18.m128i_i64[0] )
          goto LABEL_15;
      }
    }
  }
  else
  {
    while ( (unsigned __int8)sub_672E40(a1, *v8, a4, *(double *)a5.m128i_i64, a6, a7) )
    {
      if ( v9 == ++v8 )
        goto LABEL_7;
    }
  }
  return 0;
}

