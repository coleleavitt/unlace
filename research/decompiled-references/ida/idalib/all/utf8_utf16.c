__int64 __fastcall utf8_utf16(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  unsigned __int64 v4; // rax
  int v5; // r12d
  unsigned int utf8_char; // eax
  __int16 v7; // bx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int16 v15; // bp
  unsigned __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+10h] [rbp-58h]
  unsigned __int64 v22; // [rsp+10h] [rbp-58h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  _QWORD v26[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = a3;
  v4 = a1[2];
  v26[0] = a2;
  if ( (int)a3 <= 0 )
  {
    if ( v4 > 0xF )
      goto LABEL_24;
    a3 = 16;
LABEL_23:
    *a1 = qvector_reserve(a1, *a1, a3, 2);
LABEL_24:
    if ( !v3 )
      return 1;
    goto LABEL_3;
  }
  a3 = (int)a3;
  if ( v4 < (int)a3 )
    goto LABEL_23;
LABEL_3:
  v5 = 0;
  while ( 1 )
  {
    utf8_char = get_utf8_char(v26);
    v7 = utf8_char;
    if ( !utf8_char )
    {
      if ( v3 < 0 )
        return 1;
      ++v26[0];
      v8 = a1[1];
LABEL_7:
      if ( !v8 )
        goto LABEL_17;
      goto LABEL_8;
    }
    if ( utf8_char == -1 )
      return 0;
    v13 = a1[1];
    v8 = v13;
    if ( utf8_char <= 0xFFFF )
      goto LABEL_7;
    v14 = utf8_char - (_DWORD)&stru_10000;
    v15 = ((utf8_char - (unsigned int)&stru_10000) >> 10) & 0x3FF | 0xD800;
    if ( v13 )
    {
      v16 = v13 + 1;
      v17 = 2 * v13;
      v18 = *a1;
      v13 = 2 * v13 - 2;
      if ( a1[2] >= v16 )
        goto LABEL_16;
    }
    else
    {
      v18 = *a1;
      v17 = 2;
      v16 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_16;
    }
    v25 = v13;
    v24 = v17;
    v22 = v16;
    v20 = qvector_reserve(a1, v18, v16, 2);
    v13 = v25;
    v17 = v24;
    *a1 = v20;
    v16 = v22;
    v18 = v20;
LABEL_16:
    a1[1] = v16;
    *(_WORD *)(v18 + v13) = v15;
    v7 = v14 & 0x3FF | 0xDC00;
    *(_WORD *)(*a1 + v17) = 0;
    v8 = a1[1];
    if ( !v8 )
    {
LABEL_17:
      v11 = *a1;
      v10 = 2;
      v9 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_9;
      goto LABEL_18;
    }
LABEL_8:
    v9 = v8 + 1;
    v10 = 2 * v8;
    v11 = *a1;
    v8 = 2 * v8 - 2;
    if ( a1[2] >= v9 )
      goto LABEL_9;
LABEL_18:
    v23 = v10;
    v21 = v9;
    v19 = qvector_reserve(a1, v11, v9, 2);
    v10 = v23;
    v9 = v21;
    *a1 = v19;
    v11 = v19;
LABEL_9:
    a1[1] = v9;
    ++v5;
    *(_WORD *)(v11 + v8) = v7;
    *(_WORD *)(*a1 + v10) = 0;
    if ( v3 <= v5 && v3 >= 0 )
      return 1;
  }
}
