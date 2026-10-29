_QWORD *__fastcall sub_A3AEE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  _QWORD *v4; // r14
  __int64 v5; // rbp
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // rax

  v2 = a2 + 104;
  v3 = *(unsigned int *)(a2 + 100);
  v4 = (_QWORD *)(a2 + 104 + 8 * v3);
  v5 = (8 * v3) >> 3;
  if ( (8 * v3) >> 5 )
  {
    v6 = (_QWORD *)(a2 + 104);
    while ( !(unsigned __int8)sub_B55C60(*v6) )
    {
      if ( (unsigned __int8)sub_B55C60(v6[1]) )
      {
        v4 = v6 + 1;
        v5 = ((__int64)v6 - v2 + 8) >> 3;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_B55C60(v6[2]) )
      {
        v4 = v6 + 2;
        v5 = ((__int64)v6 - v2 + 16) >> 3;
        goto LABEL_9;
      }
      if ( (unsigned __int8)sub_B55C60(v6[3]) )
      {
        v4 = v6 + 3;
        v5 = ((__int64)v6 - v2 + 24) >> 3;
        goto LABEL_9;
      }
      v6 += 4;
      if ( (_QWORD *)(a2 + 32 * ((8 * v3) >> 5) + 104) == v6 )
      {
        v11 = v4 - v6;
        goto LABEL_18;
      }
    }
    goto LABEL_8;
  }
  v11 = (8 * v3) >> 3;
  v6 = (_QWORD *)(a2 + 104);
LABEL_18:
  if ( v11 != 2 )
  {
    if ( v11 != 3 )
    {
      if ( v11 != 1 )
        goto LABEL_9;
      goto LABEL_21;
    }
    if ( (unsigned __int8)sub_B55C60(*v6) )
    {
LABEL_8:
      v4 = v6;
      v5 = ((__int64)v6 - v2) >> 3;
      goto LABEL_9;
    }
    ++v6;
  }
  if ( (unsigned __int8)sub_B55C60(*v6) )
    goto LABEL_8;
  ++v6;
LABEL_21:
  if ( (unsigned __int8)sub_B55C60(*v6) )
    goto LABEL_8;
LABEL_9:
  v7 = v3 - v5;
  if ( v7 )
  {
    v8 = 0;
    v9 = *(_QWORD *)(*v4 + 64LL);
    if ( v9 )
    {
      v9 = sub_B77120(*v4, a2, 0);
      --v7;
      ++v4;
    }
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  *a1 = v4;
  a1[1] = v7;
  a1[2] = v9;
  a1[4] = v2;
  a1[5] = v5;
  a1[3] = v8;
  return a1;
}

