__int64 *__fastcall sub_21A3AE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v6; // rbp
  unsigned __int8 *v7; // rax
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  char *v12; // rsi
  char *v13; // rax
  unsigned __int8 *v14; // rcx
  unsigned __int8 *v15; // rdx
  __int32 v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbp
  char *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rax
  char *v25; // rdx
  _DWORD *v26; // rax
  int v27; // edx
  int v28; // eax
  __m128i v29[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v30; // [rsp+20h] [rbp-98h]
  __m128i v31[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v32; // [rsp+50h] [rbp-68h]
  __m128i v33[5]; // [rsp+60h] [rbp-58h] BYREF

  v6 = *(unsigned __int8 **)(a3 + 8);
  *(_BYTE *)a2 = 0;
  v7 = *(unsigned __int8 **)(a3 + 8);
  if ( *(unsigned __int8 **)(a3 + 16) == v7 )
    goto LABEL_21;
  *(_QWORD *)(a3 + 8) = v7 + 1;
  v10 = *v7;
  *(_BYTE *)(a2 + 8) = v10;
  if ( v10 == 66 )
  {
    v24 = sub_21A2AC0((char **)(a3 + 8), *(char **)(a3 + 16));
    v23 = *(_BYTE *)a2 == 0;
    v12 = *(char **)(a3 + 16);
    *(_QWORD *)(a2 + 16) = v24;
    if ( !v23 )
      goto LABEL_11;
  }
  else if ( v10 <= 0x42u )
  {
    if ( v10 == 35 )
    {
      v28 = sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
      v12 = *(char **)(a3 + 16);
      *(_DWORD *)(a2 + 16) = v28;
    }
    else
    {
      if ( v10 != 65 )
        goto LABEL_10;
      v17 = sub_21A2AC0((char **)(a3 + 8), *(char **)(a3 + 16));
      if ( (unsigned __int64)(v17 + 0x80000000LL) > 0xFFFFFFFF )
        sub_2221C70("LEB is outside Varint32 range", 1);
      *(_DWORD *)(a2 + 16) = v17;
      v12 = *(char **)(a3 + 16);
    }
    if ( *(_BYTE *)a2 )
      goto LABEL_11;
  }
  else if ( v10 == 68 )
  {
    v20 = *(char **)(a3 + 8);
    v12 = *(char **)(a3 + 16);
    v21 = v20 + 8;
    if ( v12 < v20 + 8 )
LABEL_50:
      sub_21A2980();
    v22 = *(_QWORD *)v20;
    *(_QWORD *)(a3 + 8) = v21;
    v23 = *(_BYTE *)a2 == 0;
    *(_QWORD *)(a2 + 16) = v22;
    if ( !v23 )
      goto LABEL_11;
  }
  else if ( v10 < 0x44u )
  {
    v25 = *(char **)(a3 + 8);
    v12 = *(char **)(a3 + 16);
    v26 = v25 + 4;
    if ( v12 < v25 + 4 )
      goto LABEL_61;
    v27 = *(_DWORD *)v25;
    *(_QWORD *)(a3 + 8) = v26;
    v23 = *(_BYTE *)a2 == 0;
    *(_DWORD *)(a2 + 16) = v27;
    if ( !v23 )
      goto LABEL_11;
  }
  else
  {
    if ( v10 != 0xD0 )
    {
LABEL_10:
      *(_BYTE *)a2 = 1;
      v12 = *(char **)(a3 + 16);
      goto LABEL_11;
    }
    v11 = sub_21A2A40(a3);
    sub_21A2B80(a3, v11);
    v12 = *(char **)(a3 + 16);
    if ( *(_BYTE *)a2 )
      goto LABEL_11;
  }
  v13 = *(char **)(a3 + 8);
  if ( v13 == v12 )
LABEL_21:
    sub_21A2960();
  *(_QWORD *)(a3 + 8) = v13 + 1;
  if ( *v13 != 11 )
    goto LABEL_10;
  if ( *(_BYTE *)a2 )
  {
LABEL_11:
    *(_QWORD *)(a3 + 8) = v6;
    v14 = v6;
LABEL_12:
    if ( v14 == (unsigned __int8 *)v12 )
      goto LABEL_21;
    while ( 1 )
    {
      v15 = v14++;
      *(_QWORD *)(a3 + 8) = v14;
      v16 = *v15;
      if ( (unsigned __int8)v16 > 0x42u )
      {
        if ( (unsigned __int8)v16 <= 0x7Eu )
        {
          if ( (unsigned __int8)v16 < 0x7Cu )
          {
            if ( (_BYTE)v16 == 68 )
            {
              v14 = v15 + 9;
              if ( v15 + 9 > (unsigned __int8 *)v12 )
                goto LABEL_50;
LABEL_40:
              *(_QWORD *)(a3 + 8) = v14;
            }
            else
            {
              if ( (unsigned __int8)v16 < 0x44u )
              {
                v14 = v15 + 5;
                if ( v15 + 5 <= (unsigned __int8 *)v12 )
                  goto LABEL_40;
LABEL_61:
                sub_21A2980();
              }
              if ( (unsigned __int8)(v16 - 106) > 2u )
              {
LABEL_30:
                v32 = 265;
                v31[0].m128i_i32[0] = v16;
                v30 = 259;
                v29[0].m128i_i64[0] = (__int64)"invalid opcode in init_expr: ";
                sub_A41580(v33, v29, v31, 259, a5, a6);
                v18 = operator new(0x38u);
                sub_2195A00(v18, (__int64)v33, 3);
                *a1 = v18;
                return a1;
              }
            }
          }
          goto LABEL_12;
        }
        if ( (_BYTE)v16 != 0xD2 )
        {
          if ( (_BYTE)v16 == 0xFB )
            goto LABEL_12;
          if ( (_BYTE)v16 != 0xD0 )
            goto LABEL_30;
        }
      }
      else if ( (unsigned __int8)v16 < 0x41u )
      {
        if ( (unsigned __int8)v16 <= 7u )
        {
          if ( (unsigned __int8)v16 < 6u && (unsigned __int8)v16 > 1u )
            goto LABEL_30;
        }
        else
        {
          if ( (_BYTE)v16 == 11 )
          {
            *(_QWORD *)(a2 + 24) = v6;
            *(_QWORD *)(a2 + 32) = v14 - v6;
            *a1 = 0;
            return a1;
          }
          if ( (unsigned __int8)v16 > 0xBu )
          {
            if ( (_BYTE)v16 == 28 )
              goto LABEL_12;
            if ( (_BYTE)v16 != 35 )
              goto LABEL_30;
          }
          else
          {
            if ( (_BYTE)v16 != 8 )
              goto LABEL_30;
            sub_21A29A0((char **)(a3 + 8), v12);
            v12 = *(char **)(a3 + 16);
          }
        }
      }
      sub_21A29A0((char **)(a3 + 8), v12);
      v12 = *(char **)(a3 + 16);
      v14 = *(unsigned __int8 **)(a3 + 8);
      if ( v14 == (unsigned __int8 *)v12 )
        goto LABEL_21;
    }
  }
  *a1 = 0;
  return a1;
}
