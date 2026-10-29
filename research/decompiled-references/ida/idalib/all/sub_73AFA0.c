__int64 __fastcall sub_73AFA0(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // r12
  __int64 v4; // rbp
  __m128i *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  char *v10; // rax
  char *v11; // rcx
  unsigned __int32 v12; // r8d
  unsigned __int32 v13; // eax
  __int16 v14; // ax
  unsigned int v15; // eax
  int v16; // edx

  v3 = a3;
  if ( !(_DWORD)a2 )
    goto LABEL_2;
  v6 = (__m128i *)a1;
  v4 = sub_73F190(*(_QWORD *)(a1 + 16), a2);
  if ( !v4 )
  {
    dword_2CCC638 = 17;
    return 0;
  }
  a1 = *(_QWORD *)(a1 + 8);
  a2 = (unsigned int)a2;
  v10 = sub_738E20((__m128i *)a1, a2, 0, v7, v8, v9);
  v11 = v10;
  if ( !v10 )
    goto LABEL_2;
  *(_QWORD *)v4 = v10;
  a1 = (unsigned int)*((__int16 *)v10 + 2);
  if ( (int)a1 <= 0 )
    goto LABEL_2;
  a2 = *((__int16 *)v10 + 2);
  v12 = v6->m128i_i32[0];
  a3 = v6->m128i_u32[0] / 0xBuLL;
  if ( a2 >= a3 )
    goto LABEL_2;
  v13 = *(unsigned __int16 *)&v10[6 * *((__int16 *)v10 + 2) + 10];
  *((_DWORD *)v11 - 2) = v12;
  a3 = v13;
  if ( v6->m128i_i32[0] < v13 )
  {
    v14 = -1;
    goto LABEL_12;
  }
  if ( v13 >= v12 )
  {
LABEL_2:
    if ( !v3 )
      return 0;
LABEL_19:
    sub_743130(a1, a2, a3);
  }
  v14 = v13 - 6 * (a1 + 4) - 6;
LABEL_12:
  *(_WORD *)(v4 + 8) = v14;
  *(_DWORD *)(v4 + 32) = 0;
  if ( v3 )
  {
    v15 = *(_DWORD *)(v4 + 12);
    if ( v15 < v6[363].m128i_i32[0] )
    {
      v16 = *(unsigned __int8 *)(v6[363].m128i_i64[1] + ((unsigned __int64)v15 >> 3));
      if ( !_bittest(&v16, *(_DWORD *)(v4 + 12) & 7) )
      {
        a2 = v4;
        a1 = (unsigned __int64)v6;
        if ( (unsigned __int8)sub_73AF30(v6, (__int16 *)v4) )
        {
          sub_73AAB0((__int64)v6[363].m128i_i64, *(_DWORD *)(v4 + 12));
          return v4;
        }
        goto LABEL_19;
      }
    }
  }
  return v4;
}
