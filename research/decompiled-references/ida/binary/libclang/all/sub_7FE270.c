__int64 __fastcall sub_7FE270(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r12d
  unsigned int *v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r14
  __m128i v19; // rax
  __int64 v20; // rdx
  __m128i v21; // [rsp+0h] [rbp-88h] BYREF
  __int64 v22; // [rsp+10h] [rbp-78h]
  __m128i v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  __int64 v26; // [rsp+40h] [rbp-48h]

  v4 = sub_7F0C20(a1, *(_QWORD *)(a2 + 32), *(__int64 **)(a2 + 48));
  if ( (_BYTE)v4 )
  {
    v9 = v4;
    v11 = *(unsigned int **)(a2 + 24);
    if ( !v11 || (v12 = (__int64 *)(v11 + 4), v13 = (__int64)&v11[2 * *v11 + 4], v11 + 4 == (unsigned int *)v13) )
    {
LABEL_8:
      sub_AC4830(&v23);
      v17 = v25;
      v18 = v26;
      v21 = _mm_load_si128(&v23);
      v22 = v24;
      v19 = v21;
LABEL_9:
      if ( v17 == v19.m128i_i64[0] )
      {
LABEL_15:
        if ( v18 == v19.m128i_i64[1] )
          return v9;
      }
      v20 = v19.m128i_i8[8] & 3;
      if ( (_DWORD)v20 )
        v19.m128i_i64[0] = sub_ACE280(&v21, a2, v20, v14, v15, v16);
      while ( 1 )
      {
        a2 = *(_QWORD *)v19.m128i_i64[0];
        if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v19.m128i_i64[0], a3) )
          break;
        v19.m128i_i64[1] = v21.m128i_i64[1];
        if ( (v21.m128i_i8[8] & 3) != 0 )
        {
          if ( v21.m128i_i64[1] <= 3uLL )
          {
            a2 = 1;
            sub_ACE0F0(&v21, 1);
          }
          else
          {
            sub_ACE150(&v21);
          }
          v19 = v21;
          goto LABEL_9;
        }
        v19.m128i_i64[0] = v21.m128i_i64[0] + 8;
        v21.m128i_i64[0] = v19.m128i_i64[0];
        if ( v17 == v19.m128i_i64[0] )
          goto LABEL_15;
      }
    }
    else
    {
      while ( (unsigned __int8)sub_7FD860(a1, *v12, v5, v6, v7, v8) )
      {
        if ( (__int64 *)v13 == ++v12 )
          goto LABEL_8;
      }
    }
  }
  return 0;
}

