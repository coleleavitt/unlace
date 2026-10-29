/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_839CC
// Address: 0x00000000000839CC

//----- (00000000000839CC) ----------------------------------------------------
__int64 __fastcall sub_839CC(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  unsigned __int64 v6; // x8
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x11
  int v10; // w8
  int v11; // w8
  __int64 v12; // x8
  __int64 v13; // x9
  int v14; // w8
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x8
  int v18; // w8
  __int64 v19; // x9
  int v20; // w8
  __int64 v21; // x9
  __int64 v22; // x8
  __int64 v23; // x8
  unsigned __int8 v24[8]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v25; // [xsp+10h] [xbp-80h]
  unsigned __int8 v26[8]; // [xsp+18h] [xbp-78h] BYREF
  __int64 v27; // [xsp+20h] [xbp-70h]
  unsigned __int8 v28[8]; // [xsp+28h] [xbp-68h] BYREF
  __int64 v29; // [xsp+30h] [xbp-60h]
  __int64 v30; // [xsp+38h] [xbp-58h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_834A4(a1, (unsigned __int8 *)a2, a3 & 1);
  while ( 1 )
  {
    while ( 1 )
    {
      v28[0] = 1;
      v29 = 0;
      LODWORD(v6) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
      if ( (_DWORD)v6 != 45 )
        break;
      result = sub_834A4(a1, v28, 1);
      *(_QWORD *)(a2 + 8) -= v29;
    }
    if ( (_DWORD)v6 != 43 )
      break;
    result = sub_834A4(a1, v28, 1);
    *(_QWORD *)(a2 + 8) += v29;
  }
  while ( 1 )
  {
    v26[0] = 1;
    v27 = 0;
    if ( (unsigned __int16)v6 != 15420 )
      break;
    result = sub_834A4(a1, v26, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v28[0] = 1;
        v29 = 0;
        v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v10 != 45 )
          break;
        result = sub_834A4(a1, v28, 1);
        v27 -= v29;
      }
      if ( v10 != 43 )
        break;
      result = sub_834A4(a1, v28, 1);
      v27 += v29;
    }
    v6 = *(_QWORD *)(a2 + 8) << v27;
LABEL_7:
    *(_QWORD *)(a2 + 8) = v6;
    LOWORD(v6) = *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL);
  }
  if ( (unsigned __int16)v6 == 15934 )
  {
    result = sub_834A4(a1, v26, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v28[0] = 1;
        v29 = 0;
        v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v7 != 45 )
          break;
        result = sub_834A4(a1, v28, 1);
        v27 -= v29;
      }
      if ( v7 != 43 )
        break;
      result = sub_834A4(a1, v28, 1);
      v27 += v29;
    }
    v8 = *(_QWORD *)(a2 + 8);
    v9 = v8 >> v27;
    v6 = (unsigned __int64)v8 >> v27;
    if ( !*(_BYTE *)a2 )
      v6 = v9;
    goto LABEL_7;
  }
LABEL_27:
  v24[0] = 1;
  v25 = 0;
  if ( (unsigned __int16)v6 <= 0x3C3Cu )
  {
    if ( (unsigned __int16)v6 == 60 )
    {
      result = sub_834A4(a1, v24, 1);
      while ( 1 )
      {
        while ( 1 )
        {
          v28[0] = 1;
          v29 = 0;
          v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
          if ( v18 != 45 )
            break;
          result = sub_834A4(a1, v28, 1);
          v25 -= v29;
        }
        if ( v18 != 43 )
          break;
        result = sub_834A4(a1, v28, 1);
        v25 += v29;
      }
      while ( 1 )
      {
        v26[0] = 1;
        v27 = 0;
        if ( (unsigned __int16)v18 == 15420 )
        {
          result = sub_834A4(a1, v26, 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v28[0] = 1;
              v29 = 0;
              v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
              if ( v18 != 45 )
                break;
              result = sub_834A4(a1, v28, 1);
              v27 -= v29;
            }
            if ( v18 != 43 )
              break;
            result = sub_834A4(a1, v28, 1);
            v27 += v29;
          }
          v19 = v25 << v27;
        }
        else
        {
          if ( (unsigned __int16)v18 != 15934 )
          {
            v22 = *(_QWORD *)(a2 + 8);
            if ( *(_BYTE *)a2 || v24[0] )
              v6 = v22 < (unsigned __int64)v25;
            else
              v6 = v22 < v25;
            goto LABEL_26;
          }
          result = sub_834A4(a1, v26, 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v28[0] = 1;
              v29 = 0;
              v18 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
              if ( v18 != 45 )
                break;
              result = sub_834A4(a1, v28, 1);
              v27 -= v29;
            }
            if ( v18 != 43 )
              break;
            result = sub_834A4(a1, v28, 1);
            v27 += v29;
          }
          v19 = (unsigned __int64)v25 >> v27;
          if ( !v24[0] )
            v19 = v25 >> v27;
        }
        v25 = v19;
      }
    }
    if ( (unsigned __int16)v6 == 62 )
    {
      result = sub_834A4(a1, v24, 1);
      while ( 1 )
      {
        v28[0] = 1;
        v29 = 0;
        v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v11 == 45 )
        {
          result = sub_834A4(a1, v28, 1);
          v12 = v25 - v29;
        }
        else
        {
          if ( v11 != 43 )
          {
            while ( 1 )
            {
              v26[0] = 1;
              v27 = 0;
              if ( (unsigned __int16)v11 == 15420 )
              {
                result = sub_834A4(a1, v26, 1);
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v28[0] = 1;
                    v29 = 0;
                    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
                    if ( v11 != 45 )
                      break;
                    result = sub_834A4(a1, v28, 1);
                    v27 -= v29;
                  }
                  if ( v11 != 43 )
                    break;
                  result = sub_834A4(a1, v28, 1);
                  v27 += v29;
                }
                v13 = v25 << v27;
              }
              else
              {
                if ( (unsigned __int16)v11 != 15934 )
                {
                  v16 = *(_QWORD *)(a2 + 8);
                  if ( *(_BYTE *)a2 || v24[0] )
                    v6 = v16 > (unsigned __int64)v25;
                  else
                    v6 = v16 > v25;
                  goto LABEL_26;
                }
                result = sub_834A4(a1, v26, 1);
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v28[0] = 1;
                    v29 = 0;
                    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
                    if ( v11 != 45 )
                      break;
                    result = sub_834A4(a1, v28, 1);
                    v27 -= v29;
                  }
                  if ( v11 != 43 )
                    break;
                  result = sub_834A4(a1, v28, 1);
                  v27 += v29;
                }
                v13 = (unsigned __int64)v25 >> v27;
                if ( !v24[0] )
                  v13 = v25 >> v27;
              }
              v25 = v13;
            }
          }
          result = sub_834A4(a1, v28, 1);
          v12 = v29 + v25;
        }
        v25 = v12;
      }
    }
    return result;
  }
  if ( (unsigned __int16)v6 == 15421 )
  {
    result = sub_834A4(a1, v24, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v28[0] = 1;
        v29 = 0;
        v20 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v20 != 45 )
          break;
        result = sub_834A4(a1, v28, 1);
        v25 -= v29;
      }
      if ( v20 != 43 )
        break;
      result = sub_834A4(a1, v28, 1);
      v25 += v29;
    }
    while ( 1 )
    {
      v26[0] = 1;
      v27 = 0;
      if ( (unsigned __int16)v20 == 15420 )
      {
        result = sub_834A4(a1, v26, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v28[0] = 1;
            v29 = 0;
            v20 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
            if ( v20 != 45 )
              break;
            result = sub_834A4(a1, v28, 1);
            v27 -= v29;
          }
          if ( v20 != 43 )
            break;
          result = sub_834A4(a1, v28, 1);
          v27 += v29;
        }
        v21 = v25 << v27;
      }
      else
      {
        if ( (unsigned __int16)v20 != 15934 )
        {
          v23 = *(_QWORD *)(a2 + 8);
          if ( *(_BYTE *)a2 || v24[0] )
            v6 = v23 <= (unsigned __int64)v25;
          else
            v6 = v23 <= v25;
LABEL_26:
          *(_QWORD *)(a2 + 8) = v6;
          *(_BYTE *)a2 = 0;
          LOWORD(v6) = *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL);
          goto LABEL_27;
        }
        result = sub_834A4(a1, v26, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v28[0] = 1;
            v29 = 0;
            v20 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
            if ( v20 != 45 )
              break;
            result = sub_834A4(a1, v28, 1);
            v27 -= v29;
          }
          if ( v20 != 43 )
            break;
          result = sub_834A4(a1, v28, 1);
          v27 += v29;
        }
        v21 = (unsigned __int64)v25 >> v27;
        if ( !v24[0] )
          v21 = v25 >> v27;
      }
      v25 = v21;
    }
  }
  if ( (unsigned __int16)v6 == 15933 )
  {
    result = sub_834A4(a1, v24, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v28[0] = 1;
        v29 = 0;
        v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
        if ( v14 != 45 )
          break;
        result = sub_834A4(a1, v28, 1);
        v25 -= v29;
      }
      if ( v14 != 43 )
        break;
      result = sub_834A4(a1, v28, 1);
      v25 += v29;
    }
    while ( 1 )
    {
      v26[0] = 1;
      v27 = 0;
      if ( (unsigned __int16)v14 == 15420 )
      {
        result = sub_834A4(a1, v26, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v28[0] = 1;
            v29 = 0;
            v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
            if ( v14 != 45 )
              break;
            result = sub_834A4(a1, v28, 1);
            v27 -= v29;
          }
          if ( v14 != 43 )
            break;
          result = sub_834A4(a1, v28, 1);
          v27 += v29;
        }
        v15 = v25 << v27;
      }
      else
      {
        if ( (unsigned __int16)v14 != 15934 )
        {
          v17 = *(_QWORD *)(a2 + 8);
          if ( *(_BYTE *)a2 || v24[0] )
            v6 = v17 >= (unsigned __int64)v25;
          else
            v6 = v17 >= v25;
          goto LABEL_26;
        }
        result = sub_834A4(a1, v26, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v28[0] = 1;
            v29 = 0;
            v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
            if ( v14 != 45 )
              break;
            result = sub_834A4(a1, v28, 1);
            v27 -= v29;
          }
          if ( v14 != 43 )
            break;
          result = sub_834A4(a1, v28, 1);
          v27 += v29;
        }
        v15 = (unsigned __int64)v25 >> v27;
        if ( !v24[0] )
          v15 = v25 >> v27;
      }
      v25 = v15;
    }
  }
  return result;
}
