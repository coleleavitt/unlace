__int64 __fastcall sub_8E3B40(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7)
{
  _BYTE *v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // r8
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v23; // rdx
  char v24; // al
  unsigned int v25; // [rsp+0h] [rbp-78h]
  _BYTE *v26; // [rsp+0h] [rbp-78h]
  __int16 *v27; // [rsp+10h] [rbp-68h]
  _BYTE *v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v8 = -(int)a6 & 3;
  v30 = __readfsqword(0x28u);
  if ( v8 > a7 || a7 - v8 <= 0x2EB )
    return -1;
  v10 = -46;
  if ( a4 <= 0xFF )
  {
    v11 = a6 + v8;
    *(_BYTE *)(v11 + 480) = 0;
    if ( (unsigned int)(a5 + 1) > 1 )
    {
      v13 = v11 + (unsigned int)(a5 - 1) + 482;
      v14 = v11 + 481;
      v15 = v11 - 31 + a5;
      do
      {
        v16 = v15 - v14++;
        *(_BYTE *)(v14 - 1) = v16;
      }
      while ( v13 != v14 );
    }
    if ( a4 )
    {
      v17 = 1;
      do
      {
        *(_BYTE *)(v11 + v17 + 492) = *(_BYTE *)(v11 + *(unsigned __int8 *)(a3 + 8 * v17) + 480);
        ++v17;
      }
      while ( a4 - 1 + 2LL != v17 );
    }
    if ( !a2 )
      return -70;
    v29 = 12;
    v18 = -(int)v11 & 3;
    if ( (-(int)v11 & 3) != 0 )
      return -1;
    if ( a4 <= 1 )
    {
      v10 = ((a4 + 1) >> 1) + 1;
      if ( v10 <= a2 )
      {
        *a1 = a4 + 127;
        *(_BYTE *)(v11 + a4 + 493) = 0;
        if ( !a4 )
          return v10;
        goto LABEL_29;
      }
      return -70;
    }
    v19 = sub_8E0FB0((void *)(v11 + 400), &v29, (unsigned __int8 *)(v11 + 493), a4);
    v7 = a1;
    if ( a4 == (unsigned __int64)v19 || v19 == 1 )
    {
LABEL_25:
      if ( a4 > 0x80 )
        return -1;
      v10 = ((a4 + 1) >> 1) + 1;
      if ( v10 <= a2 )
      {
        *v7 = a4 + 127;
        *(_BYTE *)(v11 + a4 + 493) = 0;
        do
        {
LABEL_29:
          v23 = ((unsigned int)v18 >> 1) + 1;
          v24 = *(_BYTE *)(v11 + v18 + 494) + 16 * *(_BYTE *)(v11 + v18 + 493);
          v18 += 2;
          v7[v23] = v24;
        }
        while ( a4 > (unsigned int)v18 );
        return v10;
      }
      return -70;
    }
    v25 = sub_8E08D0(6u, a4, v29);
    v27 = (__int16 *)(v11 + 452);
    v10 = sub_8E0950(v11 + 452, v25, v11 + 400, a4, v29, 0);
    if ( v10 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v28 = a1 + 1;
      v10 = sub_8E07F0(a1 + 1, a2 - 1, (__int64)v27, v29, v25);
      if ( v10 <= 0xFFFFFFFFFFFFFF88LL )
      {
        v20 = sub_8E0490((_WORD *)v11, v27, v29, v25, (_WORD *)(v11 + 236), 0xA4u);
        if ( v20 > 0xFFFFFFFFFFFFFF88LL )
          return v20;
        v26 = &v28[v10];
        v21 = sub_8E0D50((unsigned __int64 *)&v28[v10], a2 - 1 - v10, v11 + 493, a4, (_WORD *)v11);
        v10 = v21;
        if ( v21 <= 0xFFFFFFFFFFFFFF88LL )
        {
          v7 = a1;
          if ( v21 )
          {
            v10 = &v26[v21] - v28;
            if ( v10 > 0xFFFFFFFFFFFFFF88LL )
              return v10;
            if ( a4 >> 1 > v10 && v10 > 1 )
            {
              *a1 = v10++;
              return v10;
            }
          }
          goto LABEL_25;
        }
      }
    }
  }
  return v10;
}

