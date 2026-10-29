__int64 __fastcall sub_1CA2150(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int8 *v7; // r9
  unsigned __int8 *v8; // r8
  __int64 v9; // r11
  char *v10; // rax
  char *v12; // rsi
  unsigned __int8 *v13; // r9
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // r9
  unsigned __int8 **v16; // r11
  unsigned __int8 *v17; // r8
  unsigned __int8 *v18; // r9
  unsigned __int8 *v19; // r9
  unsigned __int8 *v20; // r8
  unsigned __int8 *v21; // r9
  unsigned __int8 *v22; // r9
  unsigned __int8 *v23; // r8
  unsigned __int8 *v24; // r9
  unsigned __int8 *v25; // r9
  unsigned __int8 *v26; // rsi
  __int64 v27; // r8
  unsigned __int8 *v28; // r9
  unsigned __int8 *v29; // r9
  unsigned __int8 *v30; // rsi
  __int64 v31; // r8
  unsigned __int8 *v32; // r9
  unsigned __int8 *v33; // r9
  unsigned __int8 *v34; // rsi
  __int64 v35; // r8
  unsigned __int8 *v36; // r9
  _QWORD v37[2]; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int64 v39; // [rsp+18h] [rbp-30h]
  _BYTE v40[40]; // [rsp+20h] [rbp-28h] BYREF

  v37[0] = a1;
  v37[1] = a2;
  ptr = v40;
  v39 = 0x100000000LL;
  sub_22476F0(v37, &ptr, 46, 0xFFFFFFFFLL, 1);
  v3 = 16LL * (unsigned int)v39;
  v4 = (char *)ptr + v3;
  v5 = v3 >> 4;
  v6 = v3 >> 6;
  if ( v6 )
  {
    v7 = *((unsigned __int8 **)ptr + 1);
    if ( v7 && (v8 = *(unsigned __int8 **)ptr, v9 = **(unsigned __int8 **)ptr, (byte_2411740[2 * v9] & 0xE0) != 0) )
    {
      v12 = (char *)ptr + 64 * v6;
      v10 = (char *)ptr;
      while ( 1 )
      {
        v13 = &v7[(_QWORD)v8];
        if ( !byte_23F75C0[v9] )
          goto LABEL_5;
        v14 = v8 + 1;
        if ( v13 != v14 )
          break;
LABEL_14:
        v15 = *((unsigned __int8 **)v10 + 3);
        v16 = (unsigned __int8 **)(v10 + 16);
        if ( !v15 )
          goto LABEL_16;
        v17 = *((unsigned __int8 **)v10 + 2);
        v2 = *v17;
        if ( (byte_2411740[2 * v2] & 0xE0) == 0 )
          goto LABEL_16;
        v18 = &v15[(_QWORD)v17];
        if ( v17 != v18 )
        {
          while ( byte_23F75C0[v2] )
          {
            if ( v18 == ++v17 )
              goto LABEL_22;
            v2 = *v17;
          }
          goto LABEL_16;
        }
LABEL_22:
        v19 = *((unsigned __int8 **)v10 + 5);
        v16 = (unsigned __int8 **)(v10 + 32);
        if ( !v19 )
          goto LABEL_16;
        v20 = *((unsigned __int8 **)v10 + 4);
        v2 = *v20;
        if ( (byte_2411740[2 * v2] & 0xE0) == 0 )
          goto LABEL_16;
        v21 = &v19[(_QWORD)v20];
        if ( v20 != v21 )
        {
          while ( byte_23F75C0[v2] )
          {
            if ( v21 == ++v20 )
              goto LABEL_29;
            v2 = *v20;
          }
          goto LABEL_16;
        }
LABEL_29:
        v22 = *((unsigned __int8 **)v10 + 7);
        v16 = (unsigned __int8 **)(v10 + 48);
        if ( !v22 )
          goto LABEL_16;
        v23 = *((unsigned __int8 **)v10 + 6);
        v2 = *v23;
        if ( (byte_2411740[2 * v2] & 0xE0) == 0 )
          goto LABEL_16;
        v24 = &v22[(_QWORD)v23];
        if ( v23 != v24 )
        {
          while ( byte_23F75C0[v2] )
          {
            if ( v24 == ++v23 )
              goto LABEL_36;
            v2 = *v23;
          }
LABEL_16:
          LOBYTE(v2) = v4 == (char *)v16;
          goto LABEL_6;
        }
LABEL_36:
        v10 += 64;
        if ( v12 == v10 )
        {
          v5 = (v4 - v10) >> 4;
          goto LABEL_41;
        }
        v7 = *((unsigned __int8 **)v10 + 1);
        if ( v7 )
        {
          v8 = *(unsigned __int8 **)v10;
          v2 = **(unsigned __int8 **)v10;
          v9 = v2;
          if ( (byte_2411740[2 * v2] & 0xE0) != 0 )
            continue;
        }
        goto LABEL_5;
      }
      while ( byte_23F75C0[*v14] )
      {
        if ( v13 == ++v14 )
          goto LABEL_14;
      }
    }
    else
    {
      v10 = (char *)ptr;
    }
    goto LABEL_5;
  }
  v10 = (char *)ptr;
LABEL_41:
  switch ( v5 )
  {
    case 2LL:
LABEL_54:
      v29 = *((unsigned __int8 **)v10 + 1);
      if ( !v29 )
        goto LABEL_5;
      v30 = *(unsigned __int8 **)v10;
      v31 = **(unsigned __int8 **)v10;
      if ( (byte_2411740[2 * v31] & 0xE0) == 0 )
        goto LABEL_5;
      v32 = &v29[(_QWORD)v30];
      if ( v30 != v32 )
      {
        if ( !byte_23F75C0[v31] )
          goto LABEL_5;
        while ( v32 != ++v30 )
        {
          if ( !byte_23F75C0[*v30] )
            goto LABEL_5;
        }
      }
      v10 += 16;
LABEL_46:
      v25 = *((unsigned __int8 **)v10 + 1);
      if ( v25 )
      {
        v26 = *(unsigned __int8 **)v10;
        v27 = **(unsigned __int8 **)v10;
        if ( (byte_2411740[2 * v27] & 0xE0) != 0 )
        {
          v28 = &v25[(_QWORD)v26];
          if ( v26 == v28 )
            break;
          if ( byte_23F75C0[v27] )
          {
            while ( v28 != ++v26 )
            {
              if ( !byte_23F75C0[*v26] )
                goto LABEL_5;
            }
            break;
          }
        }
      }
LABEL_5:
      LOBYTE(v2) = v4 == v10;
      goto LABEL_6;
    case 3LL:
      v33 = *((unsigned __int8 **)v10 + 1);
      if ( !v33 )
        goto LABEL_5;
      v34 = *(unsigned __int8 **)v10;
      v35 = **(unsigned __int8 **)v10;
      if ( (byte_2411740[2 * v35] & 0xE0) == 0 )
        goto LABEL_5;
      v36 = &v33[(_QWORD)v34];
      if ( v34 != v36 )
      {
        if ( !byte_23F75C0[v35] )
          goto LABEL_5;
        while ( v36 != ++v34 )
        {
          if ( !byte_23F75C0[*v34] )
            goto LABEL_5;
        }
      }
      v10 += 16;
      goto LABEL_54;
    case 1LL:
      goto LABEL_46;
  }
  LODWORD(v2) = 1;
LABEL_6:
  if ( ptr != v40 )
    free(ptr);
  return (unsigned int)v2;
}
