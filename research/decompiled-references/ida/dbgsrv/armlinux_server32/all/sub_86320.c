/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86320
// Address: 0x00086320

//----- (00086320) --------------------------------------------------------
_DWORD *__fastcall sub_86320(int a1)
{
  unsigned __int8 *v2; // r5
  int v3; // r3
  int v4; // r3
  int v5; // r0
  __int64 v6; // kr00_8
  unsigned __int8 *v7; // r7
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  int v11; // r2
  int v12; // r1
  _BYTE *v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r2
  int v16; // r7
  int v17; // r3
  int v18; // r1
  int v19; // r7
  __int64 v20; // kr08_8
  int v21; // r0
  unsigned __int8 *v22; // r3
  int v23; // r5
  unsigned __int8 *v24; // r2
  int v25; // lr
  __int64 v26; // kr10_8
  unsigned __int8 *v27; // r0
  int v28; // r2
  int v29; // r1
  int v30; // r5
  int v31; // r3
  int v32; // lr
  int v33; // r2
  int v34; // r1
  int v35; // r7
  int v36; // r3
  int v37; // r8
  int v38; // r0

  v2 = *(unsigned __int8 **)(a1 + 12);
  v3 = *v2;
  if ( (unsigned int)(v3 - 48) <= 9 )
  {
    v8 = sub_844C8(a1);
    if ( **(_BYTE **)(a1 + 12) != 66 )
      return v8;
    return (_DWORD *)sub_8458C(a1, (int)v8);
  }
  if ( (unsigned int)(v3 - 97) <= 0x19 )
  {
    if ( v3 == 111 && v2[1] == 110 )
      *(_DWORD *)(a1 + 12) = v2 + 2;
    v9 = sub_85FA4(a1);
    v8 = v9;
    if ( v9 )
    {
      if ( *v9 == 49 )
      {
        v11 = v9[2];
        v12 = *(_DWORD *)(v11 + 8);
        v13 = *(_BYTE **)v11;
        *(_DWORD *)(a1 + 48) += 7 + v12;
        if ( *v13 == 108 && v13[1] == 105 && !v13[2] )
        {
          v14 = sub_844C8(a1);
          v8 = (_DWORD *)sub_841E0(a1, 54, __SPAIR64__((unsigned int)v14, (unsigned int)v8));
        }
      }
    }
    goto LABEL_17;
  }
  if ( (unsigned int)(v3 - 67) <= 1 )
  {
    v15 = *(_DWORD **)(a1 + 44);
    if ( v15 && (!*v15 || *v15 == 24) )
    {
      *(_DWORD *)(a1 + 48) += v15[3];
      v3 = *v2;
    }
    if ( v3 == 67 )
    {
      if ( v2[1] != 73 )
      {
        switch ( v2[1] )
        {
          case '1':
            v19 = 1;
            *(_DWORD *)(a1 + 12) = v2 + 2;
            goto LABEL_48;
          case '2':
            v19 = 2;
            *(_DWORD *)(a1 + 12) = v2 + 2;
            goto LABEL_48;
          case '3':
            v19 = 3;
            *(_DWORD *)(a1 + 12) = v2 + 2;
            goto LABEL_48;
          case '4':
            v19 = 4;
            *(_DWORD *)(a1 + 12) = v2 + 2;
            goto LABEL_48;
          case '5':
            v19 = 5;
            *(_DWORD *)(a1 + 12) = v2 + 2;
            goto LABEL_48;
          default:
            return nullptr;
        }
      }
      *(_DWORD *)(a1 + 12) = v2 + 1;
      switch ( v2[2] )
      {
        case '1':
          v19 = 1;
          *(_DWORD *)(a1 + 12) = v2 + 3;
          goto LABEL_83;
        case '2':
          v19 = 2;
          *(_DWORD *)(a1 + 12) = v2 + 3;
          goto LABEL_83;
        case '3':
          v19 = 3;
          *(_DWORD *)(a1 + 12) = v2 + 3;
          goto LABEL_83;
        case '4':
          v19 = 4;
          *(_DWORD *)(a1 + 12) = v2 + 3;
          goto LABEL_83;
        case '5':
          v19 = 5;
          *(_DWORD *)(a1 + 12) = v2 + 3;
LABEL_83:
          sub_857B4(a1);
          v15 = *(_DWORD **)(a1 + 44);
LABEL_48:
          v20 = *(_QWORD *)(a1 + 20);
          if ( (int)v20 >= SHIDWORD(v20) )
            goto LABEL_77;
          v21 = *(_DWORD *)(a1 + 16);
          v8 = (_DWORD *)(v21 + 16 * v20);
          v8[1] = 0;
          *(_DWORD *)(a1 + 20) = v20 + 1;
          v22 = *(unsigned __int8 **)(a1 + 12);
          if ( !v15 )
            goto LABEL_78;
          v8[1] = 0;
          *(_DWORD *)(v21 + 16 * v20) = 7;
          v8[2] = v19;
          v8[3] = v15;
          v3 = *v22;
          break;
        default:
          v3 = v2[1];
          v8 = nullptr;
          break;
      }
LABEL_18:
      if ( v3 != 66 )
        return v8;
      return (_DWORD *)sub_8458C(a1, (int)v8);
    }
    if ( v3 == 68 )
    {
      switch ( v2[1] )
      {
        case '0':
          v16 = 1;
          break;
        case '1':
          v16 = 2;
          break;
        case '2':
          v16 = 3;
          break;
        case '4':
          v16 = 4;
          break;
        case '5':
          v16 = 5;
          break;
        default:
          return nullptr;
      }
      v17 = *(_DWORD *)(a1 + 20);
      v18 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 12) = v2 + 2;
      if ( v17 < v18 )
      {
        v38 = *(_DWORD *)(a1 + 16);
        v8 = (_DWORD *)(v38 + 16 * v17);
        v8[1] = 0;
        *(_DWORD *)(a1 + 20) = v17 + 1;
        if ( v15 )
        {
          v8[1] = 0;
          *(_DWORD *)(v38 + 16 * v17) = 8;
          v8[2] = v16;
          v8[3] = v15;
          v3 = v2[2];
        }
        else
        {
          v3 = v2[2];
          v8 = nullptr;
        }
      }
      else
      {
        v3 = v2[2];
        v8 = nullptr;
      }
      goto LABEL_18;
    }
    goto LABEL_29;
  }
  if ( v3 == 76 )
  {
    *(_DWORD *)(a1 + 12) = v2 + 1;
    v8 = sub_844C8(a1);
    if ( !v8 || !sub_84748(a1) )
      return nullptr;
LABEL_17:
    v3 = **(unsigned __int8 **)(a1 + 12);
    goto LABEL_18;
  }
  if ( v3 == 85 )
  {
    v4 = v2[1];
    if ( v4 == 108 )
    {
      *(_DWORD *)(a1 + 12) = v2 + 1;
      v3 = v2[1];
      if ( v3 == 108 )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        v23 = sub_8609C(a1);
        if ( !v23 )
        {
LABEL_77:
          v22 = *(unsigned __int8 **)(a1 + 12);
LABEL_78:
          v8 = nullptr;
          v3 = *v22;
          goto LABEL_18;
        }
        v24 = *(unsigned __int8 **)(a1 + 12);
        v3 = *v24;
        if ( v3 == 69 )
        {
          *(_DWORD *)(a1 + 12) = v24 + 1;
          v25 = sub_84450(a1);
          if ( v25 >= 0 )
          {
            v26 = *(_QWORD *)(a1 + 20);
            v27 = *(unsigned __int8 **)(a1 + 12);
            if ( (int)v26 < SHIDWORD(v26) )
            {
              v33 = *(_DWORD *)(a1 + 32);
              v34 = 16 * v26;
              v35 = *(_DWORD *)(a1 + 16);
              v36 = v26 + 1;
              v37 = *(_DWORD *)(a1 + 36);
              v8 = (_DWORD *)(v35 + v34);
              *(_DWORD *)(v35 + v34 + 4) = 0;
              *(_DWORD *)(a1 + 20) = v26 + 1;
              if ( v33 < v37 )
                v36 = v33 + 1;
              *(_DWORD *)(v35 + 16 * v26) = 69;
              if ( v33 < v37 )
                v34 = *(_DWORD *)(a1 + 28);
              v8[2] = v23;
              v8[3] = v25;
              if ( v33 < v37 )
              {
                *(_DWORD *)(v34 + 4 * v33) = v8;
                *(_DWORD *)(a1 + 32) = v36;
              }
              else
              {
                v8 = nullptr;
              }
              v3 = *v27;
            }
            else
            {
              v3 = *v27;
              v8 = nullptr;
            }
            goto LABEL_18;
          }
          goto LABEL_77;
        }
      }
LABEL_29:
      v8 = nullptr;
      goto LABEL_18;
    }
    if ( v4 == 116 )
    {
      *(_DWORD *)(a1 + 12) = v2 + 1;
      v3 = v2[1];
      if ( v3 == 116 )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        v5 = sub_84450(a1);
        if ( v5 >= 0 )
        {
          v6 = *(_QWORD *)(a1 + 20);
          v7 = *(unsigned __int8 **)(a1 + 12);
          if ( (int)v6 < SHIDWORD(v6) )
          {
            v28 = *(_DWORD *)(a1 + 32);
            v29 = 16 * v6;
            v30 = *(_DWORD *)(a1 + 16);
            v31 = v6 + 1;
            v32 = *(_DWORD *)(a1 + 36);
            v8 = (_DWORD *)(v30 + v29);
            *(_DWORD *)(v30 + v29 + 4) = 0;
            *(_DWORD *)(a1 + 20) = v6 + 1;
            if ( v28 < v32 )
              v31 = v28 + 1;
            *(_DWORD *)(v30 + 16 * v6) = 71;
            if ( v28 < v32 )
              v29 = *(_DWORD *)(a1 + 28);
            v8[2] = v5;
            if ( v28 < v32 )
            {
              *(_DWORD *)(v29 + 4 * v28) = v8;
              *(_DWORD *)(a1 + 32) = v31;
            }
            else
            {
              v8 = nullptr;
            }
            v3 = *v7;
          }
          else
          {
            v3 = *v7;
            v8 = nullptr;
          }
          goto LABEL_18;
        }
        goto LABEL_77;
      }
      goto LABEL_29;
    }
  }
  return nullptr;
}
