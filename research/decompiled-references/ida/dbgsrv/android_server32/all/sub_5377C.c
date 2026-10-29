/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5377C
// Address: 0x0005377C

//----- (0005377C) --------------------------------------------------------
int __fastcall sub_5377C(int a1, unsigned __int8 *a2, int a3)
{
  int v5; // r1
  bool v6; // cf
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r5
  __int64 v14; // r0
  int v15; // r2
  int v16; // r1
  int v18; // [sp+1Ch] [bp-3Ch]
  _DWORD *v19; // [sp+24h] [bp-34h]
  int v20; // [sp+2Ch] [bp-2Ch]
  int v21; // [sp+30h] [bp-28h]
  _BYTE v22[8]; // [sp+34h] [bp-24h] BYREF
  __int64 v23; // [sp+3Ch] [bp-1Ch]
  _BYTE v24[8]; // [sp+44h] [bp-14h] BYREF
  __int64 v25; // [sp+4Ch] [bp-Ch]
  int v26; // [sp+54h] [bp-4h]

  sub_53528(a1, (int)a2, a3);
  v20 = a1;
  v21 = a1 + 444;
  v19 = a2 + 8;
  while ( 1 )
  {
    while ( 1 )
    {
      v24[0] = 1;
      v25 = 0;
      v7 = *(_DWORD *)v21;
      v8 = *(unsigned __int16 *)(*(_DWORD *)v21 + 12);
      if ( v8 != 45 )
        break;
      sub_53528(a1, (int)v24, 1);
      v5 = HIDWORD(v25);
      v6 = *v19 >= (unsigned int)v25;
      *v19 -= v25;
      *((_DWORD *)a2 + 3) -= v5 + !v6;
    }
    if ( v8 != 43 )
      break;
    sub_53528(a1, (int)v24, 1);
    v9 = HIDWORD(v25);
    v6 = __CFADD__((_DWORD)v25, *v19);
    *v19 += v25;
    *((_DWORD *)a2 + 3) += v9 + v6;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v22[0] = 1;
      v23 = 0;
      v10 = *(unsigned __int16 *)(v7 + 12);
      if ( v10 != 15420 )
        break;
      sub_53528(v20, (int)v22, 1);
      while ( 1 )
      {
        while ( 1 )
        {
          v24[0] = 1;
          v25 = 0;
          v12 = *(unsigned __int16 *)(*(_DWORD *)v21 + 12);
          if ( v12 != 45 )
            break;
          sub_53528(v20, (int)v24, 1);
          v23 -= v25;
        }
        if ( v12 != 43 )
          break;
        sub_53528(v20, (int)v24, 1);
        v23 += v25;
      }
      *(_QWORD *)v19 <<= v23;
      v7 = *(_DWORD *)v21;
    }
    if ( v10 != 15934 )
      break;
    sub_53528(v20, (int)v22, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v24[0] = 1;
        v25 = 0;
        v11 = *(unsigned __int16 *)(*(_DWORD *)v21 + 12);
        if ( v11 != 45 )
          break;
        sub_53528(v20, (int)v24, 1);
        v23 -= v25;
      }
      if ( v11 != 43 )
        break;
      sub_53528(v20, (int)v24, 1);
      v23 += v25;
    }
    v13 = (unsigned __int64)(*(__int64 *)v19 >> v23) >> 32;
    v18 = *(__int64 *)v19 >> v23;
    v14 = *(_QWORD *)v19 >> v23;
    v15 = *a2;
    if ( *a2 )
      v13 = *(_QWORD *)v19 >> v23 >> 32;
    *((_DWORD *)a2 + 3) = v13;
    v16 = v18;
    if ( v15 )
      v16 = v14;
    *v19 = v16;
    v7 = *(_DWORD *)v21;
  }
  return _stack_chk_guard - v26;
}
