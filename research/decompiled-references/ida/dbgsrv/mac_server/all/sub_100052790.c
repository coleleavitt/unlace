/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052790
// Address: 0x0000000100052790

//----- (0000000100052790) ----------------------------------------------------
__int64 __fastcall sub_100052790(__int64 a1, __int64 a2)
{
  int v3; // r15d
  unsigned int v4; // r14d
  __int128 v5; // xmm0
  int v6; // eax
  unsigned int v7; // r13d
  _BYTE *v8; // rdi
  void *v9; // r12
  size_t v10; // rdx
  void *v11; // r15
  bool v13; // [rsp+Ch] [rbp-304h]
  _QWORD v14[3]; // [rsp+10h] [rbp-300h] BYREF
  unsigned __int8 v15; // [rsp+28h] [rbp-2E8h]
  void *__src[2]; // [rsp+30h] [rbp-2E0h]
  __int128 v17; // [rsp+40h] [rbp-2D0h]
  __int128 v18; // [rsp+50h] [rbp-2C0h]
  __int128 v19; // [rsp+60h] [rbp-2B0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-2A0h]
  __int64 (__fastcall **v21)(); // [rsp+80h] [rbp-290h] BYREF
  __int128 v22; // [rsp+88h] [rbp-288h]
  __int64 v23; // [rsp+98h] [rbp-278h]
  int v24; // [rsp+C8h] [rbp-248h]
  unsigned __int16 v25; // [rsp+CCh] [rbp-244h]
  unsigned __int16 v26; // [rsp+CEh] [rbp-242h]
  unsigned int v27; // [rsp+D4h] [rbp-23Ch]
  int v28; // [rsp+D8h] [rbp-238h]
  unsigned __int16 v29; // [rsp+DCh] [rbp-234h]
  int v30; // [rsp+2D0h] [rbp-40h]

  v21 = off_1000A9718;
  v22 = 0;
  v23 = 0;
  if ( !(unsigned __int8)sub_100052E40((__int64)&v21, a2, 1u, 1) )
  {
    v4 = 0;
    goto LABEL_45;
  }
  v3 = -1;
  if ( v25 <= 0x265u )
  {
    switch ( v25 )
    {
      case 0x14Cu:
      case 0x14Du:
      case 0x14Eu:
        goto LABEL_17;
      case 0x162u:
      case 0x163u:
      case 0x166u:
      case 0x168u:
      case 0x169u:
        goto LABEL_4;
      case 0x184u:
        v3 = 24;
        break;
      case 0x1A2u:
      case 0x1A3u:
      case 0x1A4u:
      case 0x1A6u:
      case 0x1A8u:
        v3 = 18;
        break;
      case 0x1C0u:
      case 0x1C2u:
      case 0x1C4u:
        goto LABEL_24;
      case 0x1F0u:
      case 0x1F1u:
      case 0x1F2u:
        v3 = 15;
        break;
      case 0x200u:
        v3 = 31;
        break;
      default:
        goto LABEL_29;
    }
    goto LABEL_29;
  }
  if ( v25 > 0x51Fu )
  {
    if ( v25 <= 0xEBBu )
    {
      if ( v25 == 1312 )
      {
        v3 = 27;
      }
      else if ( v25 == 2560 )
      {
LABEL_24:
        v3 = 13;
      }
    }
    else
    {
      switch ( v25 )
      {
        case 0xEBCu:
          v3 = 57;
          break;
        case 0x8664u:
LABEL_17:
          v3 = 0;
          break;
        case 0x9041u:
          v3 = 37;
          break;
      }
    }
    goto LABEL_29;
  }
  if ( v25 > 0x365u )
  {
    if ( v25 != 870 && v25 != 1126 )
      goto LABEL_29;
  }
  else if ( v25 != 614 )
  {
    if ( v25 == 616 )
      v3 = 7;
    goto LABEL_29;
  }
LABEL_4:
  v3 = 12;
LABEL_29:
  v5 = 0;
  v19 = 0;
  v20 = 0;
  if ( v27 )
  {
    sub_10005D380((__int64)&v19, a2, v27 + (unsigned __int64)(unsigned int)(18 * v28), 0);
    v5 = 0;
  }
  v14[0] = off_1000A97C8;
  v14[1] = a2;
  v14[2] = &v19;
  v15 = 0;
  *(_OWORD *)__src = v5;
  v17 = v5;
  v18 = v5;
  v6 = v30 + v29 + 24;
  if ( v24 == 23126 )
    v6 = v30 + 40;
  sub_10005D7E0((__int64)&v21, a2, v6, v26, (__int64)v14);
  v7 = v15;
  v8 = (_BYTE *)(a1 + 1034);
  if ( (unsigned __int64)v18 > 1 )
  {
    qstrncpy(v8, *((__int64 *)&v17 + 1), 1024);
    v4 = v15;
    v13 = (unsigned __int64)v18 >= 2;
  }
  else
  {
    *v8 = 0;
    v13 = 0;
    v4 = v7;
  }
  v9 = __src[1];
  v10 = 1024;
  if ( LODWORD(__src[1]) < 0x400 )
    v10 = LODWORD(__src[1]);
  *(_DWORD *)(a1 + 4) = v3;
  *(_WORD *)(a1 + 8) = v10;
  v11 = __src[0];
  memmove((void *)(a1 + 10), __src[0], v10);
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = v7;
  v14[0] = off_1000A97C8;
  if ( *((_QWORD *)&v17 + 1) )
  {
    *(_QWORD *)&v18 = 0;
    qfree(*((void **)&v17 + 1));
    *((_QWORD *)&v17 + 1) = 0;
    *((_QWORD *)&v18 + 1) = 0;
    v11 = __src[0];
  }
  if ( v11 )
  {
    __src[1] = nullptr;
    qfree(v11);
  }
  if ( (_QWORD)v19 )
  {
    *((_QWORD *)&v19 + 1) = 0;
    qfree((void *)v19);
  }
  LOBYTE(v4) = (v9 != nullptr) | v13 | v4;
LABEL_45:
  v21 = off_1000A9718;
  if ( (_QWORD)v22 )
  {
    *((_QWORD *)&v22 + 1) = 0;
    qfree((void *)v22);
  }
  LOBYTE(v4) = v4 & 1;
  return v4;
}
// 1000A9718: using guessed type __int64 (__fastcall *off_1000A9718[2])();
// 1000A97C8: using guessed type __int64 (__fastcall *off_1000A97C8[3])();
