__int64 __fastcall sub_F4CA0(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v7; // r13
  unsigned int *v8; // r14
  unsigned int *v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // r13d
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-108h] BYREF
  __int64 v16; // [rsp+8h] [rbp-100h]
  __int64 v17; // [rsp+10h] [rbp-F8h]
  __int64 v18; // [rsp+20h] [rbp-E8h]
  __int64 v19; // [rsp+28h] [rbp-E0h]
  unsigned int *v20[3]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v21[4]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v22[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v23[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h]
  __int128 v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+C8h] [rbp-40h]
  __int16 v27; // [rsp+CCh] [rbp-3Ch]
  unsigned __int64 v28; // [rsp+D8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 72);
  v28 = __readfsqword(0x28u);
  if ( v4 <= 0x10 )
  {
    if ( (unsigned int)getinf(99) != 176 )
      return 0;
  }
  else if ( v4 != 176 )
  {
    return 0;
  }
  if ( (unsigned __int64)getinf(88) <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag(3, 4) )
      return 0;
    netnode_check(&v15, "$ golang", 0, 0);
    v11 = netnode_altval(v15, 0, 65);
    if ( v11 <= 0x74 )
      return 0;
    v12 = *(_DWORD *)(get_ph() + 4);
    if ( v12 )
    {
      v13 = (unsigned int)(v12 - 13);
      if ( (unsigned int)v13 > 0x3B )
        return 0;
      v14 = 0x800000000000005LL;
      if ( !_bittest64(&v14, v13) || v11 == 117 )
        return 0;
    }
  }
  v7 = sub_1D15B0(a1);
  sub_CD670((__int64)&v15, *(_QWORD *)(v7 + 480), 0);
  v21[3] = (unsigned int *)v7;
  v22[0] = 0;
  v22[1] = 0;
  v23[0] = 0;
  v23[1] = 0;
  v24 = 0;
  v26 = -1;
  v27 = 0;
  v25 = 0;
  sub_DB110((__int64)&v15, 0xB0u, 0, 16);
  v8 = (unsigned int *)(int)sub_61160(v22, 0);
  v9 = (unsigned int *)(int)sub_61160(v23, 0);
  if ( (_BYTE)a3
    || (char *)v9 + (unsigned __int64)v8 > &byte_1
    || (LOBYTE(a3) = v9 != nullptr && v8 != nullptr, (_BYTE)a3) )
  {
    v10 = a2[2];
    a2[1] = 0;
    if ( v10 )
    {
      a2[3] = 0;
      qfree(v10);
      a2[2] = 0;
      a2[4] = 0;
    }
    sub_CCB60(a2, *(_DWORD **)(a1 + 1504), v20, v8);
    sub_CCB60(a2, *(_DWORD **)(a1 + 1504), v21, v9);
    a3 = 1;
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  qfree(v23[0]);
  qfree(v22[0]);
  if ( v21[0] )
  {
    v21[1] = nullptr;
    qfree(v21[0]);
  }
  if ( v20[0] )
  {
    v20[1] = nullptr;
    qfree(v20[0]);
  }
  if ( v18 )
  {
    v19 = 0;
    qfree(v18);
  }
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
  }
  return a3;
}
