/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100014470
// Address: 0x0000000100014470

//----- (0000000100014470) ----------------------------------------------------
__int64 __fastcall sub_100014470(char **a1, __int128 *a2)
{
  char *v2; // rax
  char *v3; // rcx
  __int64 v4; // rcx
  __int128 v5; // xmm0
  _OWORD v7[2]; // [rsp+8h] [rbp-B8h] BYREF
  int v8; // [rsp+28h] [rbp-98h]
  void *v9; // [rsp+30h] [rbp-90h]
  __int64 v10; // [rsp+38h] [rbp-88h]
  __int64 v11; // [rsp+40h] [rbp-80h]
  int v12; // [rsp+48h] [rbp-78h]
  void *v13; // [rsp+50h] [rbp-70h]
  __int64 v14; // [rsp+58h] [rbp-68h]
  __int64 v15; // [rsp+60h] [rbp-60h]
  void *v16; // [rsp+68h] [rbp-58h]
  __int64 v17; // [rsp+70h] [rbp-50h]
  __int64 v18; // [rsp+78h] [rbp-48h]
  void *v19; // [rsp+80h] [rbp-40h]
  __int64 v20; // [rsp+88h] [rbp-38h]
  __int64 v21; // [rsp+90h] [rbp-30h]
  __int128 v22; // [rsp+98h] [rbp-28h]
  __int64 v23; // [rsp+A8h] [rbp-18h]

  sub_10001DE10((__int64)v7, a2);
  v2 = *a1;
  v3 = a1[1];
  if ( a1[2] < v3 + 1 )
  {
    v2 = (char *)qvector_reserve((__int64)a1, v2, (unsigned __int64)(v3 + 1), 0xA8u);
    *a1 = v2;
    v3 = a1[1];
  }
  v4 = 168LL * (_QWORD)v3;
  *(_DWORD *)&v2[v4 + 32] = v8;
  v5 = v7[0];
  *(_OWORD *)&v2[v4 + 16] = v7[1];
  *(_OWORD *)&v2[v4] = v5;
  *(_QWORD *)&v2[v4 + 40] = v9;
  v9 = nullptr;
  *(_QWORD *)&v2[v4 + 48] = v10;
  v10 = 0;
  *(_QWORD *)&v2[v4 + 56] = v11;
  v11 = 0;
  *(_DWORD *)&v2[v4 + 64] = v12;
  *(_QWORD *)&v2[v4 + 72] = v13;
  v13 = nullptr;
  *(_QWORD *)&v2[v4 + 80] = v14;
  v14 = 0;
  *(_QWORD *)&v2[v4 + 88] = v15;
  v15 = 0;
  *(_QWORD *)&v2[v4 + 96] = v16;
  v16 = nullptr;
  *(_QWORD *)&v2[v4 + 104] = v17;
  v17 = 0;
  *(_QWORD *)&v2[v4 + 112] = v18;
  v18 = 0;
  *(_QWORD *)&v2[v4 + 120] = v19;
  v19 = nullptr;
  *(_QWORD *)&v2[v4 + 128] = v20;
  v20 = 0;
  *(_QWORD *)&v2[v4 + 136] = v21;
  v21 = 0;
  *(_QWORD *)&v2[v4 + 160] = v23;
  *(_OWORD *)&v2[v4 + 144] = v22;
  ++a1[1];
  if ( v19 )
  {
    v20 = 0;
    qfree(v19);
    v19 = nullptr;
    v21 = 0;
  }
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
    v16 = nullptr;
    v18 = 0;
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13);
    v13 = nullptr;
    v15 = 0;
  }
  if ( v9 )
  {
    v10 = 0;
    qfree(v9);
  }
  return __stack_chk_guard;
}
