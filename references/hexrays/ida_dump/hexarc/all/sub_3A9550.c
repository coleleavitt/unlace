void __fastcall sub_3A9550(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _BYTE *v4; // rdi
  _BYTE *v5; // rdi
  __int64 v6; // rbp
  _BYTE *v7; // rdi
  _BYTE *v8; // rdi
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r13
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r13
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  __int64 v26; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v2 & 2) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
        v9 = *(unsigned __int64 **)(a1 + 48);
        if ( v9 )
          goto LABEL_16;
        goto LABEL_27;
      }
      goto LABEL_9;
    }
    v4 = *(_BYTE **)(v2 + 8);
    if ( (*v4 & 2) != 0 )
    {
      v5 = *(_BYTE **)(v2 + 16);
      if ( (*v5 & 2) != 0 )
        goto LABEL_54;
    }
    else
    {
      sub_3A9230((__int64)v4, a2);
      v5 = *(_BYTE **)(v2 + 16);
      if ( (*v5 & 2) != 0 )
        goto LABEL_5;
    }
    sub_3A9230((__int64)v5, a2);
LABEL_5:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_6;
LABEL_54:
    v21 = *(unsigned __int64 **)(v2 + 48);
    if ( !v21 )
    {
LABEL_66:
      clear_tinfo_t(v2 + 32);
      *(_QWORD *)v2 |= 2uLL;
LABEL_6:
      if ( v2 )
        qfree(v2);
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_14:
        if ( (*(_BYTE *)a1 & 2) != 0 )
          goto LABEL_28;
        v9 = *(unsigned __int64 **)(a1 + 48);
        if ( v9 )
        {
LABEL_16:
          if ( !*(_QWORD *)(a1 + 56) )
          {
            sub_3A91F0((unsigned __int64 *)(a1 + 48));
LABEL_25:
            v14 = *(_QWORD *)(a1 + 48);
            if ( v14 )
              qfree(v14);
            goto LABEL_27;
          }
          v10 = *v9;
          v11 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v11 & 2) != 0 )
          {
LABEL_24:
            sub_3A91F0((unsigned __int64 *)(a1 + 48));
            *(_QWORD *)(a1 + 56) = 0;
            goto LABEL_25;
          }
          v12 = *(_QWORD **)(v11 + 8);
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v13 = *(_QWORD **)(v11 + 16);
            if ( (*(_BYTE *)v13 & 2) != 0 )
            {
LABEL_70:
              sub_3A51B0((__int64 *)(v11 + 32));
              *(_QWORD *)v11 |= 2uLL;
LABEL_22:
              if ( v10 > 3 )
                qfree(v11);
              goto LABEL_24;
            }
          }
          else
          {
            sub_3A8FA0(v12, a2);
            v13 = *(_QWORD **)(v11 + 16);
            if ( (*(_BYTE *)v13 & 2) != 0 )
              goto LABEL_21;
          }
          sub_3A8FA0(v13, a2);
LABEL_21:
          if ( (*(_BYTE *)v11 & 2) != 0 )
            goto LABEL_22;
          goto LABEL_70;
        }
LABEL_27:
        clear_tinfo_t(a1 + 32);
        *(_QWORD *)a1 |= 2uLL;
LABEL_28:
        if ( a1 )
          qfree(a1);
        return;
      }
LABEL_9:
      v7 = *(_BYTE **)(v6 + 8);
      if ( (*v7 & 2) != 0 )
      {
        v8 = *(_BYTE **)(v6 + 16);
        if ( (*v8 & 2) != 0 )
          goto LABEL_40;
      }
      else
      {
        sub_3A9230((__int64)v7, a2);
        v8 = *(_BYTE **)(v6 + 16);
        if ( (*v8 & 2) != 0 )
          goto LABEL_11;
      }
      sub_3A9230((__int64)v8, a2);
LABEL_11:
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_12;
LABEL_40:
      v15 = *(unsigned __int64 **)(v6 + 48);
      if ( !v15 )
      {
LABEL_53:
        clear_tinfo_t(v6 + 32);
        *(_QWORD *)v6 |= 2uLL;
LABEL_12:
        if ( v6 )
          qfree(v6);
        goto LABEL_14;
      }
      if ( !*(_QWORD *)(v6 + 56) )
      {
        sub_3A91F0((unsigned __int64 *)(v6 + 48));
LABEL_51:
        v20 = *(_QWORD *)(v6 + 48);
        if ( v20 )
          qfree(v20);
        goto LABEL_53;
      }
      v16 = *v15;
      v17 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
LABEL_50:
        *v15 = v16 & 3 | (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*(_QWORD *)(v6 + 48) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(v6 + 48),
                                                     (__m128i)*(unsigned __int64 *)(v6 + 48));
        **(_QWORD **)(v6 + 48) &= ~1uLL;
        **(_QWORD **)(v6 + 48) |= 2uLL;
        *(_QWORD *)(v6 + 56) = 0;
        goto LABEL_51;
      }
      v18 = *(_QWORD **)(v17 + 8);
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v19 = *(_QWORD **)(v17 + 16);
        if ( (*(_BYTE *)v19 & 2) != 0 )
          goto LABEL_74;
      }
      else
      {
        sub_3A8FA0(v18, a2);
        v19 = *(_QWORD **)(v17 + 16);
        if ( (*(_BYTE *)v19 & 2) != 0 )
          goto LABEL_46;
      }
      sub_3A8FA0(v19, a2);
LABEL_46:
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
LABEL_47:
        if ( v16 > 3 )
          qfree(v17);
        v15 = *(unsigned __int64 **)(v6 + 48);
        v16 = *v15;
        goto LABEL_50;
      }
LABEL_74:
      sub_3A51B0((__int64 *)(v17 + 32));
      *(_QWORD *)v17 |= 2uLL;
      goto LABEL_47;
    }
    if ( !*(_QWORD *)(v2 + 56) )
    {
      sub_3A91F0((unsigned __int64 *)(v2 + 48));
LABEL_64:
      v26 = *(_QWORD *)(v2 + 48);
      if ( v26 )
        qfree(v26);
      goto LABEL_66;
    }
    v22 = *v21;
    v23 = *v21 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
LABEL_63:
      sub_3A91F0((unsigned __int64 *)(v2 + 48));
      *(_QWORD *)(v2 + 56) = 0;
      goto LABEL_64;
    }
    v24 = *(_QWORD **)(v23 + 8);
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
      v25 = *(_QWORD **)(v23 + 16);
      if ( (*(_BYTE *)v25 & 2) != 0 )
      {
LABEL_72:
        sub_3A51B0((__int64 *)(v23 + 32));
        *(_QWORD *)v23 |= 2uLL;
LABEL_61:
        if ( v22 > 3 )
          qfree(v23);
        goto LABEL_63;
      }
    }
    else
    {
      sub_3A8FA0(v24, a2);
      v25 = *(_QWORD **)(v23 + 16);
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_60;
    }
    sub_3A8FA0(v25, a2);
LABEL_60:
    if ( (*(_BYTE *)v23 & 2) != 0 )
      goto LABEL_61;
    goto LABEL_72;
  }
}
