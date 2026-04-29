unsigned __int64 __fastcall sub_1B1660(__int64 a1, __int64 *a2, double a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r12
  char *v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbp
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r14
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+10h] [rbp-48h] BYREF
  __m128i v27; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v7 = *a2;
      v4 = 7;
      v5 = 6;
      v6 = "(none)";
      if ( (unsigned __int64)a2[2] >= 7 )
        goto LABEL_4;
      goto LABEL_16;
    case 1:
      v18 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)v18 != -1 )
      {
        sub_66DF0(a2, (__int64)"%a", a3);
        v18 = *(_QWORD *)(a1 + 8);
      }
      if ( *(_DWORD *)(v18 + 8) == 61 )
        sub_F5F10(a2, (__int64)"(%d)", *(char *)(*(_QWORD *)(v18 + 24) + 12LL));
      v19 = a2[1];
      if ( v19 )
      {
        v20 = v19 + 1;
        v21 = v19 + 2;
        --v19;
      }
      else
      {
        v21 = 3;
        v20 = 2;
      }
      v22 = *a2;
      if ( a2[2] < v21 )
      {
        v24 = qvector_reserve(a2, v22, v21, 1);
        *a2 = v24;
        v22 = v24;
      }
      a2[1] = v21;
      *(_BYTE *)(v22 + v20) = 0;
      *(_WORD *)(*a2 + v19) = 8250;
      v23 = *(_QWORD *)(a1 + 8);
      if ( *(int *)(v23 + 8) > 69 )
        return sub_2642E0(v23, a2, 0);
      else
        return sub_262C20(v23, a2, 0);
    case 2:
      v11 = *(_QWORD *)(get_module_data((unsigned int)dword_4C2AB8) + 1344);
      if ( v11 )
      {
        sub_25B0E0(&v26, v11, *(_QWORD *)(a1 + 8), 0);
        v12 = *a2;
        v13 = v26;
        v26 = 0;
        v14 = _mm_loadu_si128(&v27);
        v27 = 0;
        if ( v12 )
        {
          a2[1] = 0;
          v25 = v14;
          qfree(v12);
          v15 = _mm_load_si128(&v25);
          v16 = v26;
          *a2 = v13;
          *(__m128i *)(a2 + 1) = v15;
          if ( v16 )
          {
            v27.m128i_i64[0] = 0;
            qfree(v16);
          }
        }
        else
        {
          *a2 = v13;
          *(__m128i *)(a2 + 1) = v14;
        }
      }
      return v28 - __readfsqword(0x28u);
    case 3:
      v4 = 7;
      v5 = 6;
      v6 = "(func)";
      goto LABEL_3;
    case 4:
      if ( *(_QWORD *)(a1 + 8) == -1 )
        get_module_data((unsigned int)dword_4C2AB8);
      sub_66DF0(a2, (__int64)"cmt %a ", a3);
      return sub_1AABF0(a2, *(_DWORD *)(a1 + 16));
    default:
      v4 = 2;
      v5 = 1;
      v6 = "?";
LABEL_3:
      v7 = *a2;
      if ( a2[2] < v4 )
      {
LABEL_16:
        v17 = qvector_reserve(a2, v7, v4, 1);
        *a2 = v17;
        v7 = v17;
      }
LABEL_4:
      a2[1] = v4;
      v8 = 0;
      do
      {
        v9 = v8++;
        *(_BYTE *)(v7 + v9) = v6[v9];
      }
      while ( v8 < (unsigned int)v5 );
      *(_BYTE *)(*a2 + v5) = 0;
      return v28 - __readfsqword(0x28u);
  }
}
