__int64 __fastcall sub_7E4C20(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // r15d
  unsigned int v6; // r14d
  int v7; // ebx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r15
  __m128i v20; // rax
  __int64 v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h]
  __m128i v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]

  v4 = sub_7E3C00(a1, *(_QWORD *)(a2 + 48), a3);
  if ( (_BYTE)v4 )
  {
    v5 = *(_DWORD *)(a2 + 20);
    v6 = v4;
    v7 = 0;
    if ( v5 )
    {
      while ( (unsigned __int8)sub_7E3C00(
                                 a1,
                                 *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v7)),
                                 a3) )
      {
        if ( v5 == ++v7 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v9 = 0;
      v10 = *(unsigned int *)(a2 + 16);
      v11 = 8 * v10;
      if ( (_DWORD)v10 )
      {
        while ( (unsigned __int8)sub_7E3C00(a1, *(_QWORD *)(*(_QWORD *)(a2 + 56) + v9), a3) )
        {
          v9 += 8;
          if ( v11 == v9 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v12 = 0;
        v13 = *(unsigned int *)(a2 + 24);
        v14 = 8 * v13;
        if ( (_DWORD)v13 )
        {
          while ( (unsigned __int8)sub_7E3C00(a1, *(_QWORD *)(*(_QWORD *)(a2 + 64) + v12), a3) )
          {
            v12 += 8;
            if ( v14 == v12 )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_18:
          sub_AC4830(&v24);
          v18 = v26;
          v19 = v27;
          v23 = v25;
          v20 = _mm_load_si128(&v24);
          v22 = v20;
LABEL_19:
          if ( v18 == v20.m128i_i64[0] )
          {
LABEL_25:
            if ( v19 == v20.m128i_i64[1] )
              return v6;
          }
          v21 = v20.m128i_i8[8] & 3;
          if ( (_DWORD)v21 )
            v20.m128i_i64[0] = sub_ACE280(&v22, a2, v21, v15, v16, v17);
          while ( 1 )
          {
            a2 = *(_QWORD *)v20.m128i_i64[0];
            if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v20.m128i_i64[0], a3) )
              break;
            v20.m128i_i64[1] = v22.m128i_i64[1];
            if ( (v22.m128i_i8[8] & 3) != 0 )
            {
              if ( v22.m128i_i64[1] <= 3uLL )
              {
                a2 = 1;
                sub_ACE0F0(&v22, 1);
              }
              else
              {
                sub_ACE150(&v22);
              }
              v20 = v22;
              goto LABEL_19;
            }
            v20.m128i_i64[0] = v22.m128i_i64[0] + 8;
            v22.m128i_i64[0] = v20.m128i_i64[0];
            if ( v20.m128i_i64[0] == v18 )
              goto LABEL_25;
          }
        }
      }
    }
  }
  return 0;
}

