/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001AB80
// Address: 0x000000010001AB80

//----- (000000010001AB80) ----------------------------------------------------
__int64 __fastcall sub_10001AB80(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *generic_linput; // rax
  _QWORD *v6; // r12
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rdx
  void *__p; // [rsp+18h] [rbp-3B8h]
  _QWORD v16[3]; // [rsp+20h] [rbp-3B0h] BYREF
  int v17; // [rsp+38h] [rbp-398h]
  char v18; // [rsp+3Ch] [rbp-394h]
  _QWORD v19[66]; // [rsp+40h] [rbp-390h] BYREF
  __int128 v20; // [rsp+250h] [rbp-180h]
  __int128 v21; // [rsp+260h] [rbp-170h]
  __int128 v22; // [rsp+270h] [rbp-160h]
  __int128 v23; // [rsp+280h] [rbp-150h]
  __int128 v24; // [rsp+290h] [rbp-140h]
  __int128 v25; // [rsp+2A0h] [rbp-130h]
  __int128 v26; // [rsp+2B0h] [rbp-120h]
  __int128 v27; // [rsp+2C0h] [rbp-110h]
  __int128 v28; // [rsp+2D0h] [rbp-100h]
  __int128 v29; // [rsp+2E0h] [rbp-F0h]
  __int128 v30; // [rsp+2F0h] [rbp-E0h]
  __int128 v31; // [rsp+300h] [rbp-D0h]
  __int128 v32; // [rsp+310h] [rbp-C0h]
  __int128 v33; // [rsp+320h] [rbp-B0h]
  __int64 v34; // [rsp+330h] [rbp-A0h]
  __int64 v35; // [rsp+338h] [rbp-98h]
  __int128 v36; // [rsp+340h] [rbp-90h]
  __int128 v37; // [rsp+350h] [rbp-80h]
  __int128 v38; // [rsp+360h] [rbp-70h]
  __int128 v39; // [rsp+370h] [rbp-60h]
  _BYTE v40[29]; // [rsp+380h] [rbp-50h] BYREF

  if ( !a3
    || (v4 = operator new(0x28u),
        *v4 = off_1000A80A8,
        v4[3] = a3,
        v4[4] = a1,
        v4[1] = 0xFFFFFFFFLL,
        *((_DWORD *)v4 + 4) = 0,
        generic_linput = create_generic_linput((__int64)v4),
        (__p = generic_linput) == nullptr) )
  {
    LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
  v6 = generic_linput;
  v16[0] = 0xFFFFFFFFLL;
  v16[1] = -1;
  v18 = 1;
  v7 = (unsigned int)sub_100064A90() == 8;
  v8 = -1;
  if ( !v7 )
    v8 = 0xFFFFFFFFLL;
  v16[2] = v8;
  v17 = 4 * v7 + 4;
  v19[0] = v16;
  v19[1] = v6;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = -1;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  memset(v40, 0, sizeof(v40));
  if ( (unsigned __int8)sub_1000146D0((__int64)v19, 0x41u, nullptr) )
  {
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      LODWORD(v6) = DWORD2(v20);
      if ( SDWORD2(v20) > 0 )
      {
        v9 = *(_QWORD *)(a1 + 128);
        v6 = (_QWORD *)(DWORD2(v20) & 0x7FFFFFFF);
        v10 = 8;
        do
        {
          (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(
            a2,
            v9 + *(_QWORD *)(v20 + v10 - 8),
            v9 + *(_QWORD *)(v20 + v10 - 8) + *(_QWORD *)(v20 + v10));
          v10 += 32;
          v6 = (_QWORD *)((char *)v6 - 1);
        }
        while ( v6 );
      }
    }
    LOBYTE(v6) = 1;
    if ( SDWORD2(v29) <= 0 )
      goto LABEL_16;
    v11 = DWORD2(v29) & 0x7FFFFFFF;
    v12 = 16;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v29 + v12);
      if ( v13 )
      {
        if ( !(unsigned __int8)sub_10001AB80(a1, a2, a3 + v13) )
          break;
      }
      v12 += 56;
      if ( !--v11 )
        goto LABEL_16;
    }
  }
  LODWORD(v6) = 0;
LABEL_16:
  close_linput(__p);
  sub_10001C650((__int64)v19);
  return (unsigned int)v6;
}
// 1000A80A8: using guessed type __int64 (__fastcall *off_1000A80A8[3])();
