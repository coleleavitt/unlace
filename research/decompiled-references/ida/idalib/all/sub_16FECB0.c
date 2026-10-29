void __fastcall sub_16FECB0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int16 v4; // ax
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  __m128 v14; // xmm0
  int *v15; // r13
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __m128i v22; // xmm2
  __int64 v23; // rax
  __int64 *v24; // [rsp+0h] [rbp-90h] BYREF
  __m128i v25; // [rsp+8h] [rbp-88h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+18h] [rbp-78h] BYREF
  int v27; // [rsp+20h] [rbp-70h]
  __m128i v28; // [rsp+28h] [rbp-68h]
  __int128 v29; // [rsp+38h] [rbp-58h]
  __int128 v30; // [rsp+48h] [rbp-48h]

  if ( a2 && a3 )
  {
    v4 = *(_WORD *)a2 & 0x1FF;
    if ( v4 == 75 )
    {
      v5 = *(__int64 **)(*(_QWORD *)(a2 + 16) + 56LL);
      v6 = *(_QWORD *)(a2 + 24);
      v7 = v6 + 40;
      v8 = v5[7];
      v9 = v6 + 40 + 24LL * *(unsigned int *)(v6 + 36);
      if ( v6 + 40 != v9 && (*(_DWORD *)(v8 + 20) & 0x1FFFFFFF) != 0 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( (*(_DWORD *)v7 & 0x7FFFFFFF) != 1 )
            goto LABEL_8;
          v18 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( !v18 || *(_QWORD *)(v18 + 8) != a3[1] )
            goto LABEL_8;
          v19 = *(_QWORD *)(v8 + 8LL * v10 + 24);
          if ( (*(_BYTE *)(v19 + 28) & 0x7F) == 0x43 )
            break;
LABEL_9:
          v7 += 24;
          if ( v7 == v9 || v10 >= (*(_DWORD *)(v8 + 20) & 0x1FFFFFFFu) )
            return;
        }
        v20 = v5[8];
        v21 = *(_QWORD *)(v19 + 48);
        v24 = v5;
        sub_16FECB0(a1, v20, v21);
        v5 = v24;
LABEL_8:
        ++v10;
        goto LABEL_9;
      }
    }
    else if ( ((v4 + 394) & 0x1FFu) <= 1 )
    {
      if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 19 <= 1 )
      {
        sub_16FECB0(a1, *(_QWORD *)(a2 + 16), a3);
        sub_16FECB0(a1, *(_QWORD *)(a2 + 24), a3);
      }
    }
    else if ( v4 == 15 )
    {
      v11 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 48;
      v12 = v11 + 8LL * *(unsigned int *)(a2 + 20);
      if ( v12 != v11 )
      {
        v13 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 48;
        v24 = a3;
        v14 = _mm_loadh_ps((const double *)&v24);
        v24 = (__int64 *)&v26;
        v25 = (__m128i)v14;
        do
        {
          v15 = *(int **)v13;
          if ( (*(_BYTE *)(*(_QWORD *)v13 + 4LL) & 1) != 0 )
          {
            v16 = *v15;
            if ( *v15 )
            {
              if ( (unsigned int)(v16 - 1) > 1 )
              {
                if ( v16 == 3 )
                  sub_16FECB0(a1, *((_QWORD *)v15 + 1), a3);
              }
              else
              {
                v22 = _mm_load_si128(&v25);
                v26 = off_2C4F008;
                v27 = 16777472;
                v28 = v22;
                v29 = 0;
                v30 = 0;
                v23 = *((_QWORD *)v15 + 3);
                if ( (v23 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (v23 & 4) == 0 )
                {
                  *((_QWORD *)&v30 + 1) = sub_C0F1A0((_QWORD *)v15 + 3);
                  *(_QWORD *)&v30 = *((_QWORD *)v15 + 1) & 0xFFFFFFFFFFFFFFFCLL;
                }
                sub_BC97E0(v24, *((_QWORD *)v15 + 1) & 0xFFFFFFFFFFFFFFFCLL);
              }
            }
            else
            {
              v17 = *(_QWORD *)(*((_QWORD *)v15 + 1) & 0xFFFFFFFFFFFFFFF8LL);
              v27 = 16777472;
              v26 = off_2C4F008;
              v28.m128i_i64[0] = a1;
              v28.m128i_i64[1] = (__int64)a3;
              v29 = 0u;
              v30 = 0u;
              sub_BC7D30((__int64)v24, v17);
            }
          }
          v13 += 8;
        }
        while ( v12 != v13 );
      }
    }
  }
}
