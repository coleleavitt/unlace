__int64 __fastcall sub_712C90(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // r13
  __int64 result; // rax
  char v13; // al
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // r13
  char v17; // al
  __int64 v18; // r13
  char v19; // al
  __int64 v20; // r13
  char v21; // al
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rbx
  _QWORD v29[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = v3;
  v5 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*v3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) != 13 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) == 13 )
      goto LABEL_8;
    return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 56 <= 1 )
    goto LABEL_3;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(v9 + 16);
  if ( (unsigned int)(v10 - 56) > 1 )
  {
LABEL_7:
    if ( (_BYTE)v10 == 13 )
    {
LABEL_8:
      v11 = *v4;
      if ( (unsigned int)*(unsigned __int8 *)(*v4 + 16) - 56 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 <= 1
        && (v11 = sub_B0D320(*v4)) != 0 )
      {
        switch ( (*(_BYTE *)(v11 + 18) >> 3) & 0xF )
        {
          case 0:
          case 8:
            if ( (unsigned __int8)sub_B08710(*v5) )
            {
              v24 = sub_6F6DE0((__int64)a1, *v4);
              if ( v24 == sub_707CF0(a1, v9) )
              {
                sub_6CE900((__int64)v29, a1, v9);
                if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v11 + 32) & 7LL) == (*(_QWORD *)&byte_8[v29[0] & 0xFFFFFFFFFFFFFFF0LL] | v29[0] & 7) )
                  goto LABEL_31;
              }
            }
            return 0;
          case 9:
            sub_6CE900((__int64)v29, a1, v9);
            if ( (unsigned __int8)sub_B08710(*v5) )
            {
              if ( v29[0] == a1[2310] )
              {
                v26 = sub_6F6DE0((__int64)a1, *v4);
                if ( v26 == sub_707CF0(a1, v9) )
                  goto LABEL_31;
              }
            }
            return 0;
          case 0xA:
            sub_6CE900((__int64)v29, a1, v9);
            if ( (unsigned __int8)sub_B08710(*v5) )
            {
              if ( v29[0] == a1[2310] )
              {
                v28 = sub_6F6DE0((__int64)a1, *v4);
                if ( v28 == 8 * sub_707CF0(a1, v9) )
                  goto LABEL_31;
              }
            }
            return 0;
          case 0xB:
            sub_6CE900((__int64)v29, a1, v9);
            if ( (unsigned __int8)sub_B08710(*v5) )
            {
              if ( v29[0] == a1[2310] )
              {
                v27 = sub_6F6DE0((__int64)a1, *v4);
                if ( v27 == 4 * sub_707CF0(a1, v9) )
                  goto LABEL_31;
              }
            }
            return 0;
          case 0xC:
            sub_6CE900((__int64)v29, a1, v9);
            if ( (unsigned __int8)sub_B08710(*v5) )
            {
              if ( v29[0] == a1[2310] )
              {
                v25 = sub_6F6DE0((__int64)a1, *v4);
                if ( v25 == 2 * sub_707CF0(a1, v9) )
                  goto LABEL_31;
              }
            }
            return 0;
          default:
            return 0;
        }
      }
    }
    return 0;
  }
  v6 = sub_B0D320(v6);
  if ( !v6 )
  {
LABEL_6:
    v9 = *(_QWORD *)(*(_QWORD *)(*v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v10) = *(_BYTE *)(v9 + 16);
    goto LABEL_7;
  }
LABEL_3:
  switch ( (*(_BYTE *)(v6 + 18) >> 3) & 0xF )
  {
    case 0:
    case 8:
      v13 = sub_B08710(*v3);
      v14 = *v5;
      if ( !v13 )
        goto LABEL_15;
      v23 = sub_6F6DE0((__int64)a1, v14);
      if ( v23 == sub_707CF0(a1, v8) )
      {
        sub_6CE900((__int64)v29, a1, v8);
        if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v6 + 32) & 7LL) == (*(_QWORD *)&byte_8[v29[0] & 0xFFFFFFFFFFFFFFF0LL] | v29[0] & 7) )
          goto LABEL_31;
      }
      goto LABEL_6;
    case 9:
      sub_6CE900((__int64)v29, a1, v8);
      v21 = sub_B08710(*v3);
      v14 = *v5;
      if ( !v21 || v29[0] != a1[2310] )
        goto LABEL_15;
      v22 = sub_6F6DE0((__int64)a1, v14);
      if ( v22 == sub_707CF0(a1, v8) )
        goto LABEL_31;
      goto LABEL_6;
    case 0xA:
      sub_6CE900((__int64)v29, a1, v8);
      v19 = sub_B08710(*v3);
      v14 = *v5;
      if ( !v19 || v29[0] != a1[2310] )
        goto LABEL_15;
      v20 = sub_6F6DE0((__int64)a1, v14);
      if ( v20 == 8 * sub_707CF0(a1, v8) )
        goto LABEL_31;
      goto LABEL_6;
    case 0xB:
      sub_6CE900((__int64)v29, a1, v8);
      v17 = sub_B08710(*v3);
      v14 = *v5;
      if ( !v17 || v29[0] != a1[2310] )
        goto LABEL_15;
      v18 = sub_6F6DE0((__int64)a1, v14);
      if ( v18 == 4 * sub_707CF0(a1, v8) )
        goto LABEL_31;
      goto LABEL_6;
    case 0xC:
      sub_6CE900((__int64)v29, a1, v8);
      v15 = sub_B08710(*v3);
      v14 = *v5;
      if ( !v15 || v29[0] != a1[2310] )
      {
LABEL_15:
        v9 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v10) = *(_BYTE *)(v9 + 16);
        goto LABEL_7;
      }
      v16 = sub_6F6DE0((__int64)a1, v14);
      if ( v16 != 2 * sub_707CF0(a1, v8) )
        goto LABEL_6;
LABEL_31:
      result = 1;
      break;
    default:
      goto LABEL_6;
  }
  return result;
}

