__int64 __fastcall sub_6E3700(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rdx
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v17; // rax
  int v18; // r15d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-E8h]
  __int64 v24; // [rsp+8h] [rbp-E0h]
  __int64 v25; // [rsp+10h] [rbp-D8h]
  __int64 v26; // [rsp+18h] [rbp-D0h]
  __int64 v27; // [rsp+20h] [rbp-C8h]
  __int64 v28; // [rsp+28h] [rbp-C0h]
  __int64 v29; // [rsp+30h] [rbp-B8h]
  __int64 v30; // [rsp+38h] [rbp-B0h]
  __int64 v31; // [rsp+40h] [rbp-A8h]
  __int64 v32; // [rsp+40h] [rbp-A8h]
  __int64 v33; // [rsp+48h] [rbp-A0h]
  __int64 v34; // [rsp+50h] [rbp-98h] BYREF
  __int64 v35; // [rsp+58h] [rbp-90h]
  __int64 v36; // [rsp+60h] [rbp-88h] BYREF
  __int64 v37; // [rsp+68h] [rbp-80h]
  __int64 v38; // [rsp+70h] [rbp-78h] BYREF
  __int64 v39; // [rsp+78h] [rbp-70h]
  _QWORD v40[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v41[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v42[9]; // [rsp+A0h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  v6 = v4[3];
  v7 = *v5;
  v26 = v6;
  v30 = v4[4];
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v35 = v7;
  v37 = v7;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v39 = v7;
  sub_6E1E10(v5, a2, v4, &v34, &v36, &v38);
  v8 = v34;
  v9 = v36;
  v24 = v38;
  v29 = v39;
  v28 = v37;
  v27 = v35;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 && (*(_BYTE *)(v10 - 4) & 1) != 0 )
  {
    v25 = v9;
    v23 = v8;
  }
  else
  {
    v11 = sub_6E1C90(v5, v8, v24);
    v23 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    sub_6DE2A0(v8, v7);
    v12 = sub_6E1C90(v5, v9, v24);
    v25 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    sub_6DE2A0(v9, v7);
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
  {
    v17 = sub_6E1C90(v5, v9, v26);
    v18 = sub_6E1C90(v5, v9, v17);
    v19 = sub_6E1C90(v5, v8, v8);
    v20 = sub_6E10F0((__int64)v5, v19, v18);
    v15 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v31 = sub_6E1710((__int64)v5, v20);
    v40[0] = sub_6E1710((__int64)v5, v25);
    v40[1] = v31;
    v32 = sub_6E3580(v5, 2, v40);
    v21 = sub_6E0F30((__int64)v5);
    v33 = sub_6E1710((__int64)v5, v21);
    v41[0] = sub_6E1710((__int64)v5, v23);
    v41[1] = v33;
    v42[0] = sub_6E3580(v5, 2, v41);
    v42[1] = v32;
    v22 = sub_6E1880(v5, 2, v42);
    v14 = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    sub_6DE2A0(*a3, a3[1]);
  }
  else
  {
    v13 = sub_6E1710((__int64)v5, v23);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    sub_6DE2A0(*a3, a3[1]);
    v15 = 0;
  }
  *a3 = v14;
  sub_6DE2A0(v15, v7);
  sub_6DE2A0(v25, v7);
  sub_6DE2A0(v23, v7);
  sub_6DE2A0(v24, v29);
  sub_6DE2A0(v26, v30);
  sub_6DE2A0(v9, v28);
  return sub_6DE2A0(v8, v27);
}

