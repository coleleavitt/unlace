/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DE6C
// Address: 0x0006DE6C

//----- (0006DE6C) --------------------------------------------------------
int __fastcall sub_6DE6C(_DWORD *a1, signed int a2)
{
  _DWORD *v3; // r7
  int v4; // r5
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r7
  __suseconds_t v9; // r0
  unsigned int v10; // r1
  unsigned __int64 v11; // r0
  int v12; // r3
  int v13; // r6
  __int64 v14; // kr00_8
  unsigned int v15; // r1
  __suseconds_t v16; // r7
  unsigned __int64 v17; // r4
  unsigned __int64 v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  _BOOL1 v21; // cf
  int v22; // r1
  signed int v24; // [sp+8h] [bp-30h]
  unsigned int v25; // [sp+Ch] [bp-2Ch]
  int v26; // [sp+14h] [bp-24h]
  int v27; // [sp+18h] [bp-20h]
  unsigned int v28; // [sp+24h] [bp-14h]
  _DWORD *v29; // [sp+28h] [bp-10h]
  struct pollfd fds; // [sp+2Ch] [bp-Ch] BYREF

  v3 = a1;
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 76))(a1) )
  {
LABEL_2:
    v3[11] = "select";
    return -1;
  }
  v29 = v3;
  v24 = a2;
  while ( 2 )
  {
    v5 = v3[5];
    if ( v5 )
    {
      v6 = v3[4] + 24 * v5;
      v7 = *(_DWORD *)(v6 - 12);
      v8 = *(_DWORD *)(v6 - 16);
      if ( a2 < 0 )
        goto LABEL_14;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      if ( a2 < 0 )
        goto LABEL_14;
    }
    v9 = qtime64();
    LODWORD(v11) = sub_6C66C(v9, v10, a2);
    if ( v11 )
    {
      v26 = 0;
      v27 = HIDWORD(v11);
      v12 = ((v8 | v7) == 0) | (__PAIR64__(v7, v8) >= v11);
      if ( !v12 )
        HIDWORD(v11) = v7;
      v25 = v11;
      if ( !v12 )
        LODWORD(v11) = v8;
      v7 = HIDWORD(v11);
      v8 = v11;
      goto LABEL_15;
    }
LABEL_14:
    v13 = -1;
    v26 = 1;
    v25 = 0;
    v27 = 0;
    if ( v8 | v7 )
    {
LABEL_15:
      v14 = 1000000LL * v7 + v8;
      v28 = 1000000 * v7 + v8;
      v16 = qtime64();
      v17 = __PAIR64__(HIDWORD(v14), v28);
      v18 = 1000000LL * v15 + (unsigned int)v16;
      if ( v18 >= __PAIR64__(HIDWORD(v14), v28) )
        v17 = v18;
      v13 = (v17 - v18) / 0x3E8;
    }
    v3 = v29;
    v19 = v29[7];
    fds.events = 1;
    fds.fd = v19;
    while ( 1 )
    {
      v4 = poll(&fds, 1u, v13);
      if ( v4 != -1 )
        break;
      v20 = (_DWORD *)_errno(0);
      if ( *v20 != 4 )
      {
        v29[11] = "poll";
LABEL_27:
        v29[12] = *v20;
        return v4;
      }
    }
    if ( !v4 )
    {
      if ( !v26 )
      {
        v21 = qtime64() >= v25;
        if ( __CFSUB__(v22, v27, v21) )
        {
          v29[11] = "poll";
          v4 = -1;
          v29[12] = 62;
          return v4;
        }
      }
      a2 = v24;
      if ( !(*(int (__fastcall **)(_DWORD *))(*v29 + 76))(v29) )
        continue;
      goto LABEL_2;
    }
    break;
  }
  if ( v4 < 0 )
  {
    v29[11] = "poll";
    v20 = (_DWORD *)_errno("poll");
    goto LABEL_27;
  }
  return v4;
}
// 6DED6: variable 'v10' is possibly undefined
// 6DEE0: variable 'v11' is possibly undefined
// 6DF52: variable 'v15' is possibly undefined
// 6DFC4: variable 'v22' is possibly undefined
// 192F8: using guessed type int __fastcall _errno(_DWORD);
