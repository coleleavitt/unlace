/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410DB0
// Address: 0x0000000000410DB0

//----- (0000000000410DB0) ----------------------------------------------------
__int64 __fastcall sub_410DB0(__int64 a1, signed int a2, __int64 a3, unsigned __int8 a4)
{
  int v7; // w24
  _QWORD *v8; // x22
  char *v9; // x0
  char *v10; // x1
  unsigned __int64 v12; // x26
  __int64 v13; // x0
  __int64 v14; // x0
  signed int v16; // w0
  __int64 v17; // x2
  __int64 v18; // x4
  signed int v19; // w1
  __int64 v20; // x4
  __int64 v21; // x0
  int *v22; // x0
  const char *v23; // x0
  const void *v24; // x22
  void *v25; // x0
  _QWORD v26[2]; // [xsp+50h] [xbp-170h] BYREF
  __int64 v27; // [xsp+60h] [xbp-160h] BYREF
  __int64 v28; // [xsp+68h] [xbp-158h]
  char v29; // [xsp+70h] [xbp-150h]
  int v30; // [xsp+74h] [xbp-14Ch]
  void *dest; // [xsp+78h] [xbp-148h] BYREF
  unsigned __int64 v32; // [xsp+80h] [xbp-140h]
  unsigned __int64 v33; // [xsp+88h] [xbp-138h]
  __int64 v34; // [xsp+90h] [xbp-130h]
  __int64 v35; // [xsp+98h] [xbp-128h]
  __int64 v36; // [xsp+A0h] [xbp-120h]
  char v37; // [xsp+A8h] [xbp-118h] BYREF
  __int64 v38; // [xsp+1A8h] [xbp-18h]

  v7 = a4;
  v8 = sub_40F6F8(a1, a2);
  v9 = *(char **)(a1 + 1984);
  v10 = &v9[4 * *(_QWORD *)(a1 + 1992)];
  if ( v9 == v10 )
  {
LABEL_20:
    v16 = sub_417EA0(a1, (int *)v26, a2, -1);
    if ( v16 == -1 )
    {
      v22 = __errno_location();
      v23 = (const char *)sub_492F00(*v22);
      sub_40AAF0(a1, (__int64)"Finish attaching to %d thread: %s\n", a2, v23);
      return 0;
    }
    if ( v16 == a2 && LOBYTE(v26[0]) == 127 )
    {
      if ( *(_BYTE *)(a1 + 2054) )
      {
        if ( SLODWORD(v26[0]) >> 16 == 128 )
          goto LABEL_6;
      }
      else if ( BYTE1(v26[0]) == 19 )
      {
        goto LABEL_6;
      }
    }
    v17 = *(_QWORD *)(a1 + 1928);
    if ( !v17 )
      goto LABEL_47;
    v18 = a1 + 1920;
    do
    {
      while ( *(_DWORD *)(v17 + 32) >= a2 )
      {
        v18 = v17;
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_26;
      }
      v17 = *(_QWORD *)(v17 + 24);
    }
    while ( v17 );
LABEL_26:
    if ( a1 + 1920 == v18 )
    {
LABEL_47:
      v20 = 0;
    }
    else
    {
      v19 = *(_DWORD *)(v18 + 32);
      v20 = v18 + 40;
      if ( v19 > a2 )
        v20 = 0;
    }
    *(_BYTE *)(v20 + 24) = 1;
    if ( v16 > 0 )
      sub_40B2C8(a1, v16, v26[0]);
  }
  else
  {
    while ( *(_DWORD *)v9 != a2 )
    {
      v9 += 4;
      if ( v10 == v9 )
        goto LABEL_20;
    }
    memmove(v9, v9 + 4, ((v10 - v9) & 0xFFFFFFFFFFFFFFFCLL) - 4);
    --*(_QWORD *)(a1 + 1992);
  }
LABEL_6:
  dest = nullptr;
  v32 = 0;
  v27 = 0xFFFFFFFFLL;
  v28 = -1;
  v29 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v30 = 0;
  sub_482FB0((__int64)&v27, 3u);
  if ( (v30 & 0xFFFFFFFu) - 9 <= 1 || (v30 & 0xFFFFFFF) == 3 )
  {
    if ( &dest != v8 + 4 )
    {
      v12 = v8[5];
      if ( v12 > 1 )
      {
        v24 = (const void *)v8[4];
        v25 = dest;
        if ( v12 > v33 )
        {
          v25 = sub_491288((__int64)&dest, dest, v12, 1u);
          dest = v25;
        }
        v32 = v12;
        memmove(v25, v24, v12 - 1);
        *((_BYTE *)dest + v12 - 1) = 0;
      }
      else
      {
        v32 = 0;
      }
    }
    LODWORD(v27) = *(_DWORD *)(a1 + 2044);
    HIDWORD(v27) = a2;
    if ( !v7 )
      goto LABEL_15;
  }
  else
  {
    if ( !under_debugger )
      sub_492270(3297);
    __break(0x3E8u);
  }
  a3 = -1;
  v26[0] = &v37;
  v26[1] = 272;
  if ( sub_408438(a2) )
  {
    v21 = ptrace(PTRACE_GETREGSET, (unsigned int)a2, 1, v26);
    a3 = v38;
    if ( v21 )
      a3 = -1;
  }
LABEL_15:
  v28 = a3;
  v29 = 1;
  if ( (v30 & 0xFFFFFFF) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 136);
    if ( v13 == *(_QWORD *)(a1 + 144) )
    {
      sub_410CC8((_QWORD *)(a1 + 120), (__int64)&v27);
    }
    else
    {
      *(_QWORD *)(v13 - 72) = 0xFFFFFFFFLL;
      v14 = v13 - 72;
      *(_QWORD *)(v14 + 8) = -1;
      *(_BYTE *)(v14 + 16) = 0;
      *(_DWORD *)(v14 + 20) = 0;
      sub_483128(v14, (__int64)&v27);
      *(_QWORD *)(a1 + 136) -= 72LL;
    }
    *(_BYTE *)(a1 + 2116) = 0;
  }
  sub_482ED0((__int64)&v27);
  return 1;
}
// 410DB0: could not find valid save-restore pair for x25
// 52451C: using guessed type char under_debugger;
