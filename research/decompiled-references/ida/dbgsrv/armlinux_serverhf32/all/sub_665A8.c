/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_665A8
// Address: 0x000665A8

//----- (000665A8) --------------------------------------------------------
int __fastcall sub_665A8(int a1, int a2, signed __int64 a3)
{
  int v3; // r9
  int v5; // r9
  int v6; // r6
  int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r3
  int v10; // r5
  int v11; // r2
  unsigned int v12; // r7
  int v13; // r1
  int v14; // lr
  unsigned __int64 v15; // kr08_8
  unsigned __int64 v16; // r10
  __suseconds_t v18; // r0
  unsigned int v19; // r1
  unsigned __int64 v20; // [sp+0h] [bp-1Ch]
  __suseconds_t v22; // [sp+8h] [bp-14h]
  int v23; // [sp+Ch] [bp-10h]

  v3 = HIDWORD(a3);
  v23 = a3;
  if ( a3 >= 0 )
  {
    v18 = sub_78DE0();
    LODWORD(a3) = ((__int64)(__PAIR64__(v19 >> 27, 32 * v19) - v19) >> 23) + __CFADD__(15872 * v19, v19);
    LODWORD(a3) = (__PAIR64__(((_DWORD)a3 << 6) | ((15873 * v19) >> 26), 1015872 * v19) - __PAIR64__(a3, 15873 * v19)) >> 32;
    LODWORD(v20) = 1000 * v3 + v18 + 1000000 * v19;
    HIDWORD(v20) = v20;
  }
  else
  {
    v20 = 0;
  }
  if ( !v23 )
    return v23;
  v5 = v23;
  v6 = a2;
  while ( 1 )
  {
    if ( v20 )
    {
      v22 = sub_78DE0();
      v9 = (__PAIR64__(v8 >> 27, 32 * v8) - v8) >> 32;
      v10 = 31 * v8;
      v11 = 15872 * v8;
      v12 = v8;
      v13 = 0;
      v14 = (v11 + v12) << 6;
      v15 = __PAIR64__(__PAIR64__(v9, v10) >> 23, v11) + v12;
      a3 = 1000;
      v16 = __PAIR64__(v15 >> 26, v14) - v15 + v12 + (unsigned int)v22;
      if ( v16 < v20 )
      {
        a3 = (v20 - v16) % 0x3E8;
        v13 = (v20 - v16) / 0x3E8;
      }
    }
    else
    {
      v13 = -1;
    }
    if ( (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 24))(a1, v13, a3) <= 0 )
      break;
    v7 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
    v6 += v7;
    if ( v7 <= 0 )
      break;
    v5 -= v7;
    if ( !v5 )
      return v23;
  }
  return v23 - v5;
}
// 665F2: variable 'v8' is possibly undefined
// 66662: variable 'a3' is possibly undefined
// 66682: variable 'v19' is possibly undefined
