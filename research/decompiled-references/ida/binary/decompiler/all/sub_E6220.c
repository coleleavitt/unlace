__int64 __fastcall sub_E6220(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v5; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r15d
  int v11; // eax
  int v12; // r13d
  __int64 v13; // rdi
  _DWORD *v14; // rsi
  unsigned int v15; // r13d
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-118h] BYREF
  __int64 v20; // [rsp+8h] [rbp-110h]
  __int128 v21; // [rsp+10h] [rbp-108h]
  __int64 v22; // [rsp+20h] [rbp-F8h]
  __int128 v23; // [rsp+28h] [rbp-F0h]
  __int128 v24; // [rsp+38h] [rbp-E0h]
  __int64 v25; // [rsp+48h] [rbp-D0h]
  __int64 v26; // [rsp+50h] [rbp-C8h]
  unsigned int *v27; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v28; // [rsp+60h] [rbp-B8h]
  unsigned int *v29; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+78h] [rbp-A0h]
  __int64 v31; // [rsp+88h] [rbp-90h]
  _QWORD v32[2]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-68h]
  __int128 v35; // [rsp+B8h] [rbp-60h]
  int v36; // [rsp+C8h] [rbp-50h]
  __int16 v37; // [rsp+CCh] [rbp-4Ch]
  unsigned __int64 v38; // [rsp+D8h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 72);
  v38 = __readfsqword(0x28u);
  if ( v5 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      return 0;
  }
  else if ( v5 != 176 )
  {
    return 0;
  }
  if ( (unsigned __int64)getinf() <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag() )
      return 0;
    netnode_check();
    v15 = netnode_altval();
    if ( v15 <= 0x74 )
      return 0;
    v16 = *(_DWORD *)(get_ph() + 4);
    if ( v16 )
    {
      v17 = (unsigned int)(v16 - 13);
      if ( (unsigned int)v17 > 0x3B )
        return 0;
      v18 = 0x800000000000005LL;
      if ( !_bittest64(&v18, v17) || v15 == 117 )
        return 0;
    }
  }
  v8 = sub_1D25F0(a1);
  v9 = *(_QWORD *)(v8 + 480);
  v31 = v8;
  v21 = 0;
  v26 = v9;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v32[0] = 0;
  v32[1] = 0;
  v33[0] = 0;
  v33[1] = 0;
  v34 = 0;
  v36 = -1;
  v37 = 0;
  v23 = 0;
  v24 = 0;
  v28 = 0;
  v30 = 0;
  v35 = 0;
  sub_DFB70((__int64)&v19, 0xB0u, 0, 16);
  v10 = sub_642A0(v32, 0);
  v11 = sub_642A0(v33, 0);
  v12 = v11;
  if ( (_BYTE)a3 || (unsigned __int64)(v10 + (__int64)v11) > 1 || (LOBYTE(a3) = v11 != 0 && v10 != 0, (_BYTE)a3) )
  {
    v13 = a2[2];
    a2[1] = 0;
    if ( v13 )
    {
      a2[3] = 0;
      qfree();
      a2[2] = 0;
      a2[4] = 0;
    }
    v14 = *(_DWORD **)(a1 + 1504);
    if ( v10 )
    {
      sub_CE7B0(a2, v14, &v27, (unsigned int *)v10);
      v14 = *(_DWORD **)(a1 + 1504);
    }
    if ( v12 )
      sub_CE7B0(a2, v14, &v29, (unsigned int *)v12);
    a3 = 1;
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return a3;
}
