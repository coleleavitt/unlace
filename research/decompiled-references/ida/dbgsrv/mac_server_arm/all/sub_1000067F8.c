/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000067F8
// Address: 0x00000001000067F8

//----- (00000001000067F8) ----------------------------------------------------
void __fastcall sub_1000067F8(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // w21
  size_t v6; // x0
  size_t v7; // x22
  unsigned __int64 v8; // x23
  void *v9; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  __int64 (__fastcall **v21[2])(_QWORD, _QWORD *); // [xsp+8h] [xbp-4B8h] BYREF
  __int64 (__fastcall **v22)(); // [xsp+18h] [xbp-4A8h] BYREF
  int v23; // [xsp+20h] [xbp-4A0h]
  __int64 v24; // [xsp+24h] [xbp-49Ch]
  __int64 v25; // [xsp+2Ch] [xbp-494h]
  __int64 v26; // [xsp+34h] [xbp-48Ch]
  void *v27[2]; // [xsp+40h] [xbp-480h]
  __int128 v28; // [xsp+50h] [xbp-470h]
  __int128 v29; // [xsp+60h] [xbp-460h]
  _QWORD *v30; // [xsp+70h] [xbp-450h]
  char __s[1024]; // [xsp+78h] [xbp-448h] BYREF

  v4 = a2;
  (*(void (__fastcall **)(_QWORD *, __int64, char *, __int64))(*a1 + 656LL))(a1, a2, __s, 1024);
  v6 = strlen(__s);
  if ( v6 )
  {
    v7 = v6;
    v8 = v6 + 1;
    v9 = (void *)a1[223];
    if ( a1[225] < v8 )
    {
      v9 = qvector_reserve(a1 + 223, (_QWORD *)a1[223], v8, 1u);
      a1[223] = v9;
    }
    a1[224] = v8;
    memmove(v9, __s, v7);
    *(_BYTE *)(a1[223] + v7) = 0;
  }
  else
  {
    a1[224] = 0;
  }
  v21[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *))&off_100098C08;
  v21[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *))a1;
  if ( (unsigned int)sub_100007B7C((__int64)a1, v21) != 1 )
    sub_100006388(
      (__int64)a1,
      "failed to find executable %s in the target process",
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      (char)__s);
  sub_1000069B0((__int64)a1, v4, a3);
  v23 = 4;
  v24 = 0;
  v26 = 0;
  v25 = 0;
  *(_OWORD *)v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v22 = off_100098B40;
  v30 = a1;
  sub_100005000((__int64)a1, (__int64)&v22, a1 + 221, v16, v17, v18, v19, v20);
  v22 = off_100098B90;
  if ( v27[1] )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27[1]);
  }
}
// 1000068D8: variable 'v10' is possibly undefined
// 1000068D8: variable 'v11' is possibly undefined
// 1000068D8: variable 'v12' is possibly undefined
// 1000068D8: variable 'v13' is possibly undefined
// 1000068D8: variable 'v14' is possibly undefined
// 1000068D8: variable 'v15' is possibly undefined
// 100006928: variable 'v16' is possibly undefined
// 100006928: variable 'v17' is possibly undefined
// 100006928: variable 'v18' is possibly undefined
// 100006928: variable 'v19' is possibly undefined
// 100006928: variable 'v20' is possibly undefined
// 100098B40: using guessed type __int64 (__fastcall *off_100098B40[8])();
// 100098B90: using guessed type __int64 (__fastcall *off_100098B90[8])();
// 100098C08: using guessed type __int64 (__fastcall *off_100098C08)();
