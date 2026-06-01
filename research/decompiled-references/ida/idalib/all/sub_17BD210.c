__int64 __fastcall sub_17BD210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 v15; // rdx
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // cx
  double v20[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128 v21; // [rsp+10h] [rbp-48h] BYREF
  int v22; // [rsp+20h] [rbp-38h]

  *(_QWORD *)&v20[0] = a3;
  *(_QWORD *)&v20[1] = a2;
  v22 = a4;
  v21 = _mm_loadh_ps(v20);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 0;
  v6 = a4;
  v7 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v11 = *((unsigned int *)v7 + 2);
  v12 = *v7 + 8 * v11;
  v13 = (*(_BYTE *)(a2 + 29) & 1) != 0 ? (__int64 *)*sub_B8C3D0(a2, a2, v11, v8, v9, v10) : nullptr;
  if ( (__int64 *)v12 == v13 )
    return 0;
  if ( (unsigned int)(v6 - 4) <= 1 )
  {
    while ( 1 )
    {
      v15 = *v13;
      v16 = *(_WORD *)(*v13 + 36);
      if ( v16 == 376 )
        return sub_17BD080((__int64)&v21, a1, v15);
      if ( v16 > 0x178u )
      {
        if ( v16 <= 0x17Au )
          goto LABEL_9;
      }
      else if ( (unsigned __int16)(v16 - 157) <= 1u )
      {
        return sub_17BD080((__int64)&v21, a1, v15);
      }
      if ( v16 != 136 )
      {
        if ( v16 <= 0x88u )
        {
          if ( v16 != 100 )
            return sub_17BD080((__int64)&v21, a1, v15);
        }
        else if ( v16 != 286 )
        {
          return sub_17BD080((__int64)&v21, a1, v15);
        }
      }
LABEL_9:
      if ( (__int64 *)v12 == ++v13 )
        return 0;
    }
  }
  if ( (unsigned int)(v6 - 2) <= 1 )
  {
    while ( 1 )
    {
      v15 = *v13;
      v17 = *(_WORD *)(*v13 + 36);
      if ( v17 == 376 )
        return sub_17BD080((__int64)&v21, a1, v15);
      if ( v17 <= 0x178u )
      {
        if ( (unsigned __int16)(v17 - 157) <= 1u )
          goto LABEL_22;
      }
      else if ( v17 == 377 || v17 == 378 )
      {
        return sub_17BD080((__int64)&v21, a1, v15);
      }
      if ( v17 == 136 )
        return sub_17BD080((__int64)&v21, a1, v15);
      if ( v17 <= 0x88u )
      {
        if ( v17 != 100 )
          return sub_17BD080((__int64)&v21, a1, v15);
      }
      else if ( v17 != 286 )
      {
        return sub_17BD080((__int64)&v21, a1, v15);
      }
LABEL_22:
      if ( (__int64 *)v12 == ++v13 )
        return 0;
    }
  }
  if ( v6 == 1 )
  {
    while ( 1 )
    {
      v15 = *v13;
      v18 = *(_WORD *)(*v13 + 36);
      if ( v18 != 376 )
      {
        if ( v18 <= 0x178u )
        {
          if ( (unsigned __int16)(v18 - 157) <= 1u )
            return sub_17BD080((__int64)&v21, a1, v15);
        }
        else if ( v18 == 377 || v18 == 378 )
        {
          return sub_17BD080((__int64)&v21, a1, v15);
        }
        if ( v18 == 136 )
          return sub_17BD080((__int64)&v21, a1, v15);
        if ( v18 <= 0x88u )
        {
          if ( v18 != 100 )
            return sub_17BD080((__int64)&v21, a1, v15);
        }
        else if ( v18 != 286 && v18 != 390 )
        {
          return sub_17BD080((__int64)&v21, a1, v15);
        }
      }
      if ( (__int64 *)v12 == ++v13 )
        return 0;
    }
  }
  while ( 1 )
  {
    v15 = *v13;
    v19 = *(_WORD *)(*v13 + 36);
    if ( v19 == 376 )
      break;
    if ( v19 <= 0x178u )
    {
      if ( (unsigned __int16)(v19 - 157) <= 1u )
        return sub_17BD080((__int64)&v21, a1, v15);
    }
    else if ( v19 == 377 || v19 == 378 )
    {
      return sub_17BD080((__int64)&v21, a1, v15);
    }
    if ( v19 == 136 )
      return sub_17BD080((__int64)&v21, a1, v15);
    if ( v19 <= 0x88u )
    {
      if ( v19 != 100 )
        return sub_17BD080((__int64)&v21, a1, v15);
    }
    else if ( v19 != 286 )
    {
      return sub_17BD080((__int64)&v21, a1, v15);
    }
    if ( (__int64 *)v12 == ++v13 )
      return 0;
  }
  return sub_17BD080((__int64)&v21, a1, v15);
}
