void __fastcall sub_1896A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdx
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  _BYTE *v18; // [rsp+8h] [rbp-40h]
  _QWORD *v19; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = (_QWORD *)(v2 + v4);
        v7 = *(_QWORD *)(v2 + v4 + 128);
        if ( v7 )
        {
          v6[17] = 0;
          qfree(v7);
        }
        v8 = v6[13];
        if ( v8 )
        {
          v6[14] = 0;
          qfree(v8);
        }
        qfree(v6[11]);
        v9 = v6[8];
        if ( v9 )
        {
          v6[9] = 0;
          qfree(v9);
        }
        qfree(v6[6]);
        v10 = v6[3];
        if ( v10 )
        {
          v6[4] = 0;
          qfree(v10);
        }
        v11 = (unsigned __int64 *)v6[1];
        if ( !v11 )
          goto LABEL_24;
        v12 = *v11;
        if ( v6[2] )
          break;
        *v11 = *v11 & 3 | (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v6[1] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v6[1],
                                      (__m128i)(unsigned __int64)v6[1]);
        *(_QWORD *)v6[1] &= ~1uLL;
        *(_QWORD *)v6[1] |= 2uLL;
LABEL_22:
        v16 = v6[1];
        if ( v16 )
          qfree(v16);
LABEL_24:
        ++v5;
        v2 = *a1;
        v4 += 216;
        if ( v3 == v5 )
          goto LABEL_25;
      }
      v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_21:
        *v11 = v12 & 3 | (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v6[1] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v6[1],
                                      (__m128i)(unsigned __int64)v6[1]);
        *(_QWORD *)v6[1] &= ~1uLL;
        *(_QWORD *)v6[1] |= 2uLL;
        v6[2] = 0;
        goto LABEL_22;
      }
      v14 = (__int64 *)v13[1];
      if ( (*(_BYTE *)v14 & 2) != 0 )
      {
        v15 = (__int64 *)v13[2];
        if ( (*(_BYTE *)v15 & 2) != 0 )
          goto LABEL_29;
      }
      else
      {
        sub_187890(v14);
        v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
        v15 = *(__int64 **)((v12 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v15 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          {
LABEL_18:
            if ( v12 > 3 )
              qfree(v13);
            v11 = (unsigned __int64 *)v6[1];
            v12 = *v11;
            goto LABEL_21;
          }
LABEL_29:
          v17 = v13[4];
          if ( v17 )
          {
            v13[5] = 0;
            v19 = v13;
            qfree(v17);
            v13 = v19;
          }
          *v13 |= 2uLL;
          goto LABEL_18;
        }
      }
      v18 = v13;
      sub_187890(v15);
      v13 = v18;
      if ( (*v18 & 2) != 0 )
        goto LABEL_18;
      goto LABEL_29;
    }
LABEL_25:
    a1[1] = 0;
    qfree(v2);
  }
}
