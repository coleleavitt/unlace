/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88D20
// Address: 0x0000000000088D20

//----- (0000000000088D20) ----------------------------------------------------
unsigned __int64 __fastcall sub_88D20(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  bool v14; // al
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char v23[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h]
  char v25[8]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  char v27[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-38h]
  unsigned __int64 v29; // [rsp+38h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  sub_887D0(a1, a2, a3, a4, a5);
  while ( 1 )
  {
    while ( 1 )
    {
      v27[0] = 1;
      v28 = 0;
      v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
      if ( v5 != 45 )
        break;
      sub_887D0(a1, (__int64)v27, 1, a4, a5);
      *(_QWORD *)(a2 + 8) -= v28;
    }
    if ( (unsigned __int16)v5 != 43 )
      break;
    sub_887D0(a1, (__int64)v27, 1, a4, a5);
    *(_QWORD *)(a2 + 8) += v28;
  }
  while ( 1 )
  {
    v25[0] = 1;
    v26 = 0;
    if ( (unsigned __int16)v5 != 15420 )
      break;
    sub_887D0(a1, (__int64)v25, 1, a4, a5);
    while ( 1 )
    {
      while ( 1 )
      {
        v27[0] = 1;
        v28 = 0;
        v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        if ( v8 != 45 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v26 -= v28;
      }
      if ( (unsigned __int16)v8 != 43 )
        break;
      sub_887D0(a1, (__int64)v27, 1, a4, a5);
      v26 += v28;
    }
    *(_QWORD *)(a2 + 8) <<= v26;
LABEL_7:
    LOWORD(v5) = *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL);
  }
  if ( (unsigned __int16)v5 == 15934 )
  {
    sub_887D0(a1, (__int64)v25, 1, a4, a5);
    while ( 1 )
    {
      while ( 1 )
      {
        v27[0] = 1;
        v28 = 0;
        v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        if ( v6 != 45 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v26 -= v28;
      }
      if ( (unsigned __int16)v6 != 43 )
        break;
      sub_887D0(a1, (__int64)v27, 1, a4, a5);
      v26 += v28;
    }
    v7 = *(_QWORD *)(a2 + 8) >> v26;
    if ( !*(_BYTE *)a2 )
      v7 = *(__int64 *)(a2 + 8) >> v26;
    *(_QWORD *)(a2 + 8) = v7;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v23[0] = 1;
    v24 = 0;
    if ( (__int16)v5 > 15420 )
      break;
    if ( (unsigned __int16)v5 == 60 )
    {
      sub_887D0(a1, (__int64)v23, 1, a4, a5);
      while ( 1 )
      {
        while ( 1 )
        {
          v27[0] = 1;
          v28 = 0;
          v16 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
          if ( v16 != 45 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v24 -= v28;
        }
        if ( (unsigned __int16)v16 != 43 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v24 += v28;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v25[0] = 1;
          v26 = 0;
          if ( (unsigned __int16)v16 != 15420 )
            break;
          sub_887D0(a1, (__int64)v25, 1, a4, a5);
          while ( 1 )
          {
            while ( 1 )
            {
              v27[0] = 1;
              v28 = 0;
              v16 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
              if ( v16 != 45 )
                break;
              sub_887D0(a1, (__int64)v27, 1, a4, a5);
              v26 -= v28;
            }
            if ( (unsigned __int16)v16 != 43 )
              break;
            sub_887D0(a1, (__int64)v27, 1, a4, a5);
            v26 += v28;
          }
          v24 <<= v26;
        }
        if ( (unsigned __int16)v16 != 15934 )
          break;
        sub_887D0(a1, (__int64)v25, 1, a4, a5);
        while ( 1 )
        {
          while ( 1 )
          {
            v27[0] = 1;
            v28 = 0;
            v16 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
            if ( v16 != 45 )
              break;
            sub_887D0(a1, (__int64)v27, 1, a4, a5);
            v26 -= v28;
          }
          if ( (unsigned __int16)v16 != 43 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v26 += v28;
        }
        v17 = (unsigned __int64)v24 >> v26;
        if ( !v23[0] )
          v17 = v24 >> v26;
        v24 = v17;
      }
      v20 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 || v23[0] )
        v14 = v20 < (unsigned __int64)v24;
      else
        v14 = v20 < v24;
    }
    else
    {
      if ( (unsigned __int16)v5 != 62 )
        return __readfsqword(0x28u);
      sub_887D0(a1, (__int64)v23, 1, a4, a5);
      while ( 1 )
      {
        while ( 1 )
        {
          v27[0] = 1;
          v28 = 0;
          v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
          if ( v9 != 45 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v24 -= v28;
        }
        if ( (unsigned __int16)v9 != 43 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v24 += v28;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v25[0] = 1;
          v26 = 0;
          if ( (unsigned __int16)v9 != 15420 )
            break;
          sub_887D0(a1, (__int64)v25, 1, a4, a5);
          while ( 1 )
          {
            while ( 1 )
            {
              v27[0] = 1;
              v28 = 0;
              v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
              if ( v9 != 45 )
                break;
              sub_887D0(a1, (__int64)v27, 1, a4, a5);
              v26 -= v28;
            }
            if ( (unsigned __int16)v9 != 43 )
              break;
            sub_887D0(a1, (__int64)v27, 1, a4, a5);
            v26 += v28;
          }
          v24 <<= v26;
        }
        if ( (unsigned __int16)v9 != 15934 )
          break;
        sub_887D0(a1, (__int64)v25, 1, a4, a5);
        while ( 1 )
        {
          while ( 1 )
          {
            v27[0] = 1;
            v28 = 0;
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
            if ( v9 != 45 )
              break;
            sub_887D0(a1, (__int64)v27, 1, a4, a5);
            v26 -= v28;
          }
          if ( (unsigned __int16)v9 != 43 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v26 += v28;
        }
        v10 = (unsigned __int64)v24 >> v26;
        if ( !v23[0] )
          v10 = v24 >> v26;
        v24 = v10;
      }
      v13 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 || v23[0] )
        v14 = v13 > (unsigned __int64)v24;
      else
        v14 = v13 > v24;
    }
LABEL_26:
    *(_QWORD *)(a2 + 8) = v14;
    *(_BYTE *)a2 = 0;
    LOWORD(v5) = *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL);
  }
  if ( (unsigned __int16)v5 == 15421 )
  {
    sub_887D0(a1, (__int64)v23, 1, a4, a5);
    while ( 1 )
    {
      while ( 1 )
      {
        v27[0] = 1;
        v28 = 0;
        v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        if ( v18 != 45 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v24 -= v28;
      }
      if ( (unsigned __int16)v18 != 43 )
        break;
      sub_887D0(a1, (__int64)v27, 1, a4, a5);
      v24 += v28;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v25[0] = 1;
        v26 = 0;
        if ( (unsigned __int16)v18 != 15420 )
          break;
        sub_887D0(a1, (__int64)v25, 1, a4, a5);
        while ( 1 )
        {
          while ( 1 )
          {
            v27[0] = 1;
            v28 = 0;
            v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
            if ( v18 != 45 )
              break;
            sub_887D0(a1, (__int64)v27, 1, a4, a5);
            v26 -= v28;
          }
          if ( (unsigned __int16)v18 != 43 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v26 += v28;
        }
        v24 <<= v26;
      }
      if ( (unsigned __int16)v18 != 15934 )
        break;
      sub_887D0(a1, (__int64)v25, 1, a4, a5);
      while ( 1 )
      {
        while ( 1 )
        {
          v27[0] = 1;
          v28 = 0;
          v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
          if ( v18 != 45 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v26 -= v28;
        }
        if ( (unsigned __int16)v18 != 43 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v26 += v28;
      }
      v19 = (unsigned __int64)v24 >> v26;
      if ( !v23[0] )
        v19 = v24 >> v26;
      v24 = v19;
    }
    v21 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)a2 || v23[0] )
      v14 = v21 <= (unsigned __int64)v24;
    else
      v14 = v21 <= v24;
    goto LABEL_26;
  }
  if ( (unsigned __int16)v5 == 15933 )
  {
    sub_887D0(a1, (__int64)v23, 1, a4, a5);
    while ( 1 )
    {
      while ( 1 )
      {
        v27[0] = 1;
        v28 = 0;
        v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        if ( v11 != 45 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v24 -= v28;
      }
      if ( (unsigned __int16)v11 != 43 )
        break;
      sub_887D0(a1, (__int64)v27, 1, a4, a5);
      v24 += v28;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v25[0] = 1;
        v26 = 0;
        if ( (unsigned __int16)v11 != 15420 )
          break;
        sub_887D0(a1, (__int64)v25, 1, a4, a5);
        while ( 1 )
        {
          while ( 1 )
          {
            v27[0] = 1;
            v28 = 0;
            v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
            if ( v11 != 45 )
              break;
            sub_887D0(a1, (__int64)v27, 1, a4, a5);
            v26 -= v28;
          }
          if ( (unsigned __int16)v11 != 43 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v26 += v28;
        }
        v24 <<= v26;
      }
      if ( (unsigned __int16)v11 != 15934 )
        break;
      sub_887D0(a1, (__int64)v25, 1, a4, a5);
      while ( 1 )
      {
        while ( 1 )
        {
          v27[0] = 1;
          v28 = 0;
          v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
          if ( v11 != 45 )
            break;
          sub_887D0(a1, (__int64)v27, 1, a4, a5);
          v26 -= v28;
        }
        if ( (unsigned __int16)v11 != 43 )
          break;
        sub_887D0(a1, (__int64)v27, 1, a4, a5);
        v26 += v28;
      }
      v12 = (unsigned __int64)v24 >> v26;
      if ( !v23[0] )
        v12 = v24 >> v26;
      v24 = v12;
    }
    v15 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)a2 || v23[0] )
      v14 = v15 >= (unsigned __int64)v24;
    else
      v14 = v15 >= v24;
    goto LABEL_26;
  }
  return __readfsqword(0x28u);
}
