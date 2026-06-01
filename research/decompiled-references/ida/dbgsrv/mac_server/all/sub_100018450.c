/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018450
// Address: 0x0000000100018450

//----- (0000000100018450) ----------------------------------------------------
__int64 __fastcall sub_100018450(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // r15d
  unsigned int v7; // r14d
  __int128 v9; // [rsp+0h] [rbp-250h] BYREF
  __int128 v10; // [rsp+10h] [rbp-240h]
  char v11; // [rsp+20h] [rbp-230h]
  _QWORD v12[2]; // [rsp+28h] [rbp-228h] BYREF
  __int64 v13; // [rsp+38h] [rbp-218h] BYREF
  __int128 v14; // [rsp+40h] [rbp-210h]
  int v15; // [rsp+50h] [rbp-200h]
  char v16; // [rsp+54h] [rbp-1FCh]
  __int64 v17; // [rsp+58h] [rbp-1F8h]
  char v18; // [rsp+60h] [rbp-1F0h]
  __int128 v19; // [rsp+70h] [rbp-1E0h]
  __int128 v20; // [rsp+80h] [rbp-1D0h]
  __int64 v21; // [rsp+90h] [rbp-1C0h]
  char v22; // [rsp+98h] [rbp-1B8h]
  __int64 v23; // [rsp+A0h] [rbp-1B0h]
  __int128 v24; // [rsp+A8h] [rbp-1A8h]
  __int128 v25; // [rsp+B8h] [rbp-198h]
  __int16 v26; // [rsp+C8h] [rbp-188h]
  __int128 v27; // [rsp+F0h] [rbp-160h]
  __int128 v28; // [rsp+100h] [rbp-150h]
  __int128 v29; // [rsp+110h] [rbp-140h]
  __int128 v30; // [rsp+120h] [rbp-130h]
  __int128 v31; // [rsp+130h] [rbp-120h]
  __int128 v32; // [rsp+140h] [rbp-110h]
  __int128 v33; // [rsp+150h] [rbp-100h]
  __int128 v34; // [rsp+160h] [rbp-F0h]
  __int128 v35; // [rsp+170h] [rbp-E0h]
  __int128 v36; // [rsp+180h] [rbp-D0h]
  __int128 v37; // [rsp+190h] [rbp-C0h]
  __int128 v38; // [rsp+1A0h] [rbp-B0h]
  __int128 v39; // [rsp+1B0h] [rbp-A0h]
  __int128 v40; // [rsp+1C0h] [rbp-90h]
  _BYTE v41[19]; // [rsp+1D0h] [rbp-80h] BYREF
  int v42; // [rsp+1E4h] [rbp-6Ch]
  __int128 v43; // [rsp+1E8h] [rbp-68h]
  __int128 v44; // [rsp+1F8h] [rbp-58h]
  int v45; // [rsp+208h] [rbp-48h]
  __int128 v46; // [rsp+210h] [rbp-40h]
  __int128 v47; // [rsp+220h] [rbp-30h]

  v12[0] = &off_1000A7F20;
  v12[1] = &v13;
  v13 = 0xFFFFFFFFLL;
  v14 = -1;
  v15 = 8;
  v16 = 1;
  v17 = a2;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = -1;
  v22 = 0;
  v23 = -1;
  v42 = 0;
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
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  memset(v41, 0, sizeof(v41));
  v43 = -1;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 == 13 )
  {
    v6 = (*(unsigned __int8 *)(a1 + 24) << 24) | 0xC;
  }
  else
  {
    v6 = -1;
    if ( !v5 )
      v6 = (*(unsigned __int8 *)(a1 + 24) << 24) | 7;
  }
  v7 = sub_1000186D0((__int64)v12, a4, a3, v6);
  if ( (_BYTE)v7 && (*(_BYTE *)(a4 + 8) & 4) != 0 )
  {
    v10 = 0;
    v9 = 0;
    v11 = 0;
    sub_100013750(v12, (__int64)&v9, 1u);
    sub_1000191B0((__int64 *)&v9, (_QWORD *)a4, v6);
    if ( v11 == 1 && *((_QWORD *)&v10 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    if ( (_QWORD)v9 )
    {
      *((_QWORD *)&v9 + 1) = 0;
      qfree((void *)v9);
    }
  }
  sub_10001CA40((__int64)v12);
  return v7;
}
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
