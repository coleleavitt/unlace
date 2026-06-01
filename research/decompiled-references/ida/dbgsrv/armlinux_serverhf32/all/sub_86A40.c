/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86A40
// Address: 0x00086A40

//----- (00086A40) --------------------------------------------------------
int *__fastcall sub_86A40(int a1)
{
  _BYTE *v1; // r2
  _BYTE *v2; // r3
  int v4; // r1
  bool v5; // zf
  _DWORD *v6; // r0
  unsigned __int8 *v7; // r2
  unsigned __int8 *v8; // r6
  int v9; // r3
  int v10; // r1
  _BYTE *v11; // r3
  int v12; // r4
  __int64 v13; // kr00_8
  int v14; // lr
  int v15; // r12
  _BOOL4 v16; // r7
  __int64 v17; // r2
  int *result; // r0
  int v19; // r2
  int v20; // r3

  v1 = *(_BYTE **)(a1 + 12);
  if ( *v1 == 76 )
  {
    v2 = v1 + 1;
    *(_DWORD *)(a1 + 12) = v1 + 1;
    v4 = (unsigned __int8)v1[1];
    v5 = v4 == 90;
    if ( v4 != 90 )
      v5 = v4 == 95;
    if ( v5 )
    {
      if ( v4 != 95 || (v2 = v1 + 2, *(_DWORD *)(a1 + 12) = v1 + 2, v19 = (unsigned __int8)v1[2], v19 == 90) )
      {
        *(_DWORD *)(a1 + 12) = v2 + 1;
        result = sub_864F4(a1, 0);
        v2 = *(_BYTE **)(a1 + 12);
        v19 = (unsigned __int8)*v2;
      }
      else
      {
        result = nullptr;
      }
      if ( v19 == 69 )
      {
LABEL_29:
        *(_DWORD *)(a1 + 12) = v2 + 1;
        return result;
      }
    }
    else
    {
      v6 = sub_85668(a1);
      if ( v6 )
      {
        if ( *v6 == 39 )
        {
          v20 = v6[2];
          v7 = *(unsigned __int8 **)(v20 + 16);
          if ( v7 )
          {
            v7 = *(unsigned __int8 **)(v20 + 4);
            *(_DWORD *)(a1 + 48) -= v7;
          }
        }
        v8 = *(unsigned __int8 **)(a1 + 12);
        v9 = *v8;
        if ( v9 == 110 )
        {
          v7 = v8 + 1;
          v10 = 61;
          *(_DWORD *)(a1 + 12) = v8 + 1;
        }
        else
        {
          v10 = 60;
        }
        if ( v9 == 110 )
        {
          v9 = v8[1];
          v8 = v7;
        }
        if ( v9 == 69 )
        {
          v12 = 0;
          goto LABEL_18;
        }
        if ( v9 )
        {
          v11 = v8;
          while ( 1 )
          {
            *(_DWORD *)(a1 + 12) = ++v11;
            if ( *v11 == 69 )
              break;
            if ( !*v11 )
              return nullptr;
          }
          v12 = v11 - v8;
LABEL_18:
          v13 = *(_QWORD *)(a1 + 20);
          if ( (int)v13 >= SHIDWORD(v13)
            || ((v14 = *(_DWORD *)(a1 + 16), v15 = 16 * v13, !v8) ? (v16 = 1) : (v16 = v12 == 0),
                HIDWORD(v17) = v14 + v15,
                *(_DWORD *)(v14 + v15 + 4) = 0,
                *(_DWORD *)(a1 + 20) = v13 + 1,
                v16) )
          {
            HIDWORD(v17) = 0;
          }
          else
          {
            *(_DWORD *)(HIDWORD(v17) + 4) = 0;
            *(_DWORD *)(v14 + 16 * v13) = 0;
            *(_DWORD *)(HIDWORD(v17) + 8) = v8;
            *(_DWORD *)(HIDWORD(v17) + 12) = v12;
          }
          LODWORD(v17) = v6;
          result = (int *)sub_84094(a1, v10, v17);
          v2 = *(_BYTE **)(a1 + 12);
          if ( *v2 != 69 )
            return nullptr;
          goto LABEL_29;
        }
      }
    }
    return nullptr;
  }
  return nullptr;
}
// 86A7E: variable 'v7' is possibly undefined
