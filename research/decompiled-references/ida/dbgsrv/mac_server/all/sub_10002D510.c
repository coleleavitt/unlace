/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D510
// Address: 0x000000010002D510

//----- (000000010002D510) ----------------------------------------------------
__int64 __fastcall sub_10002D510(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r15d
  _QWORD *v8; // r14
  void *v9; // rdi
  _QWORD v11[4]; // [rsp+8h] [rbp-1E8h] BYREF
  char v12; // [rsp+28h] [rbp-1C8h]
  _BYTE v13[32]; // [rsp+30h] [rbp-1C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-1A0h]
  char v15; // [rsp+58h] [rbp-198h]
  __int128 v16; // [rsp+60h] [rbp-190h]
  __int64 v17; // [rsp+70h] [rbp-180h]
  __int128 v18; // [rsp+78h] [rbp-178h]
  __int128 v19; // [rsp+88h] [rbp-168h]
  __int128 v20; // [rsp+98h] [rbp-158h]
  __int128 v21; // [rsp+A8h] [rbp-148h]
  __int128 v22; // [rsp+B8h] [rbp-138h]
  __int128 v23; // [rsp+C8h] [rbp-128h]
  int v24; // [rsp+D8h] [rbp-118h]
  char v25; // [rsp+DCh] [rbp-114h]
  int v26; // [rsp+E0h] [rbp-110h]
  char v27; // [rsp+E4h] [rbp-10Ch]
  __int128 v28; // [rsp+E8h] [rbp-108h]
  __int128 v29; // [rsp+F8h] [rbp-F8h]
  __int128 v30; // [rsp+108h] [rbp-E8h]
  __int128 v31; // [rsp+118h] [rbp-D8h]
  __int128 v32; // [rsp+128h] [rbp-C8h]
  __int128 v33; // [rsp+138h] [rbp-B8h]
  __int128 v34; // [rsp+148h] [rbp-A8h]
  __int128 v35; // [rsp+158h] [rbp-98h]
  __int128 v36; // [rsp+168h] [rbp-88h]
  __int128 v37; // [rsp+178h] [rbp-78h]
  __int128 v38; // [rsp+188h] [rbp-68h]
  __int128 v39; // [rsp+198h] [rbp-58h]
  __int64 v40; // [rsp+1A8h] [rbp-48h]
  __int128 v41; // [rsp+1B0h] [rbp-40h]
  __int64 v42; // [rsp+1C0h] [rbp-30h]
  int v43; // [rsp+1C8h] [rbp-28h]
  char v44; // [rsp+1CCh] [rbp-24h]

  v11[0] = sub_10002D4F0;
  v11[1] = 0;
  v11[2] = &off_1000A8450;
  v11[3] = &off_1000A85B0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  memset(v13, 0, 26);
  v17 = a1;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = -90;
  v26 = 0;
  v27 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v40 = a2;
  v41 = 0;
  v42 = 0;
  v43 = -1;
  v44 = a4;
  sub_10004C5C0(*(_QWORD *)(a1 + 32), (__int64)v11);
  set_qerrno();
  LOBYTE(v6) = sub_10004F510((__int64)v11, 0);
  v7 = v6;
  if ( !(_BYTE)v6 )
  {
    sub_10002D730(*(_QWORD *)(a1 + 32), (__int64)v13, a3);
    v8 = *((_QWORD **)&v23 + 1);
    if ( *((_QWORD *)&v23 + 1) )
    {
      v9 = **((void ***)&v23 + 1);
      if ( **((_QWORD **)&v23 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v23 + 1) + 8LL) = 0;
        qfree(v9);
        *v8 = 0;
        v8[2] = 0;
      }
    }
    sub_100026780((__int64)v11);
  }
  sub_10004C5C0(*(_QWORD *)(a1 + 32), 0);
  sub_10002DDF0(v11);
  return v7;
}
// 10002D677: variable 'v6' is possibly undefined
// 1000A8450: using guessed type __int64 (*off_1000A8450)[50];
// 1000A85B0: using guessed type __int64 (__fastcall *off_1000A85B0)();
