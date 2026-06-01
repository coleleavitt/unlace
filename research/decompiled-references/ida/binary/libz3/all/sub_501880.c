__int64 __fastcall sub_501880(__int64 a1, __int64 *a2, __int64 *a3)
{
  __m128 v4; // xmm1
  __m128 v5; // xmm5
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r9
  _DWORD *v11; // rdx
  unsigned int v12; // r13d
  _DWORD *v14; // rax
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  __int64 v17; // r11
  _DWORD *v18; // rdx
  _DWORD *v19; // rax
  __m128i v20; // [rsp+10h] [rbp-58h] BYREF
  _OWORD v21[4]; // [rsp+20h] [rbp-48h] BYREF

  v20 = 0;
  sub_501450(a1, a2, &v20);
  sub_501450(a1, a2 + 1, &v20.m128i_i64[1]);
  v4 = (__m128)_mm_load_si128(&v20);
  v21[0] = 0;
  v6 = _mm_movehl_ps(v5, v4).m128_u64[0];
  sub_501450(a1, a3, v21);
  sub_501450(a1, a3 + 1, (_QWORD *)v21 + 1);
  v7 = *(_QWORD *)&v21[0];
  if ( !v4.m128_u64[0] )
  {
    if ( *(_QWORD *)&v21[0] )
    {
      if ( v6 )
      {
        v15 = *(_DWORD *)(v6 - 4);
        if ( !*((_QWORD *)&v21[0] + 1) )
        {
          v8 = 0;
          goto LABEL_74;
        }
        goto LABEL_30;
      }
      if ( *((_QWORD *)&v21[0] + 1) )
        sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
      sub_186B220((void *)(v7 - 8));
    }
    else
    {
      if ( v6 )
      {
        v15 = *(_DWORD *)(v6 - 4);
        if ( !*((_QWORD *)&v21[0] + 1) )
        {
          v8 = 0;
          v17 = 0;
          if ( v15 )
            goto LABEL_41;
          goto LABEL_57;
        }
LABEL_30:
        v16 = *(_DWORD *)(*((_QWORD *)&v21[0] + 1) - 4LL);
        v8 = v15;
        if ( v16 <= v15 )
          v8 = *(_DWORD *)(*((_QWORD *)&v21[0] + 1) - 4LL);
        if ( v8 )
        {
          v17 = v8;
          v18 = (_DWORD *)v6;
          do
          {
            if ( (*v18 & ~*(_DWORD *)((char *)v18 + *((_QWORD *)&v21[0] + 1) - v6)) != 0 )
            {
LABEL_36:
              sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
              if ( v7 )
                goto LABEL_11;
              goto LABEL_26;
            }
            ++v18;
          }
          while ( v18 != (_DWORD *)(v6 + 4LL * v8) );
          if ( v16 < v15 )
            goto LABEL_41;
LABEL_68:
          sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
          if ( !v7 )
            goto LABEL_57;
LABEL_51:
          v12 = 1;
          goto LABEL_12;
        }
        v17 = 0;
        if ( !v15 )
          goto LABEL_68;
LABEL_41:
        v19 = (_DWORD *)(v6 + 4 * v17);
        do
        {
          if ( *v19 )
          {
            if ( *((_QWORD *)&v21[0] + 1) )
              goto LABEL_36;
            if ( *(_QWORD *)&v21[0] )
              sub_186B220((void *)(*(_QWORD *)&v21[0] - 8LL));
            goto LABEL_26;
          }
          ++v8;
          ++v19;
        }
        while ( v8 < v15 );
        if ( !*((_QWORD *)&v21[0] + 1) )
          goto LABEL_55;
        goto LABEL_68;
      }
      if ( *((_QWORD *)&v21[0] + 1) )
        sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
    }
    return 1;
  }
  v8 = *(_DWORD *)(v4.m128_u64[0] - 4);
  if ( *(_QWORD *)&v21[0] )
  {
    v9 = *(_DWORD *)(*(_QWORD *)&v21[0] - 4LL);
    if ( v8 <= v9 )
      v9 = *(_DWORD *)(v4.m128_u64[0] - 4);
    if ( v9 )
    {
      v10 = v9;
      v11 = (_DWORD *)v4.m128_u64[0];
      while ( (*v11 & ~*(_DWORD *)((char *)v11 + *(_QWORD *)&v21[0] - v4.m128_u64[0])) == 0 )
      {
        if ( (_DWORD *)(v4.m128_u64[0] + 4LL * v9) == ++v11 )
        {
          if ( v9 < v8 )
            goto LABEL_19;
          if ( v6 )
            goto LABEL_53;
          if ( *((_QWORD *)&v21[0] + 1) )
            goto LABEL_50;
          goto LABEL_66;
        }
      }
      goto LABEL_9;
    }
    v10 = 0;
    if ( !v8 )
    {
      if ( v6 )
      {
        v15 = *(_DWORD *)(v6 - 4);
        if ( !*((_QWORD *)&v21[0] + 1) )
        {
LABEL_74:
          v17 = 0;
          if ( !v15 )
            goto LABEL_56;
          goto LABEL_41;
        }
        goto LABEL_30;
      }
      if ( *((_QWORD *)&v21[0] + 1) )
        sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
      goto LABEL_66;
    }
    goto LABEL_19;
  }
  v9 = 0;
  v10 = 0;
  if ( v8 )
  {
LABEL_19:
    v14 = (_DWORD *)(v4.m128_u64[0] + 4 * v10);
    if ( *v14 )
    {
LABEL_9:
      if ( *((_QWORD *)&v21[0] + 1) )
      {
        v12 = 0;
        sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
        if ( !v7 )
        {
LABEL_13:
          if ( !v6 )
            goto LABEL_15;
          goto LABEL_14;
        }
        goto LABEL_11;
      }
      if ( *(_QWORD *)&v21[0] )
      {
LABEL_11:
        v12 = 0;
LABEL_12:
        sub_186B220((void *)(v7 - 8));
        goto LABEL_13;
      }
      if ( !v6 )
      {
        v12 = 0;
        goto LABEL_16;
      }
LABEL_26:
      v12 = 0;
LABEL_14:
      sub_186B220((void *)(v6 - 8));
      goto LABEL_15;
    }
    while ( (_DWORD *)(v4.m128_u64[0] + 4 * (v8 - 1 - v9 + v10) + 4) != ++v14 )
    {
      if ( *v14 )
        goto LABEL_9;
    }
    if ( v6 )
    {
LABEL_53:
      v15 = *(_DWORD *)(v6 - 4);
      if ( !*((_QWORD *)&v21[0] + 1) )
      {
        v8 = 0;
        v17 = 0;
        if ( v15 )
          goto LABEL_41;
LABEL_55:
        if ( *(_QWORD *)&v21[0] )
LABEL_56:
          sub_186B220((void *)(*(_QWORD *)&v21[0] - 8LL));
LABEL_57:
        v12 = 1;
        goto LABEL_14;
      }
      goto LABEL_30;
    }
    if ( *((_QWORD *)&v21[0] + 1) )
    {
      sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
      if ( v7 )
        goto LABEL_51;
    }
    else if ( *(_QWORD *)&v21[0] )
    {
LABEL_66:
      sub_186B220((void *)(v7 - 8));
    }
LABEL_60:
    v12 = 1;
    goto LABEL_16;
  }
  if ( v6 )
    goto LABEL_53;
  if ( !*((_QWORD *)&v21[0] + 1) )
    goto LABEL_60;
LABEL_50:
  v12 = 1;
  sub_186B220((void *)(*((_QWORD *)&v21[0] + 1) - 8LL));
  if ( v7 )
    goto LABEL_51;
LABEL_15:
  if ( v4.m128_u64[0] )
LABEL_16:
    sub_186B220((void *)(v4.m128_u64[0] - 8));
  return v12;
}

