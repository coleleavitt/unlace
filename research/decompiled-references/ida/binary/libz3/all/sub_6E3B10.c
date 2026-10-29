__int64 __fastcall sub_6E3B10(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // rdx
  __int64 *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rax
  int v17; // r12d
  int v18; // eax
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v29; // [rsp+8h] [rbp-B0h]
  __int64 v30; // [rsp+10h] [rbp-A8h]
  __int64 v31; // [rsp+18h] [rbp-A0h]
  __int64 v32; // [rsp+20h] [rbp-98h]
  __int64 v33; // [rsp+28h] [rbp-90h]
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h] BYREF
  __int64 v37; // [rsp+48h] [rbp-70h]
  __int64 v38; // [rsp+50h] [rbp-68h] BYREF
  __int64 v39; // [rsp+58h] [rbp-60h]
  __int64 v40; // [rsp+60h] [rbp-58h] BYREF
  __int64 v41; // [rsp+68h] [rbp-50h]
  _QWORD v42[9]; // [rsp+70h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  v6 = v4[3];
  v7 = *v5;
  v34 = v4[4];
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v37 = v7;
  v39 = v7;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v41 = v7;
  sub_6E1E10(v5, a2, v4, &v36, &v38, &v40);
  v12 = v36;
  v32 = v40;
  v33 = v41;
  v29 = v38;
  v31 = v39;
  v30 = v37;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) )
  {
    v16 = sub_6E1C90(v5, v38, v6);
    v17 = sub_6E1C90(v5, v29, v16);
    v18 = sub_6E1C90(v5, v12, v12);
    v19 = sub_6E10F0((__int64)v5, v18, v17);
    v24 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v35 = sub_6E15B0((_DWORD)v5, v19, v20, v21, v22, v23);
    v25 = sub_6E1C90(v5, v12, v29);
    v42[0] = sub_6E1710((__int64)v5, v25);
    v42[1] = v35;
    v26 = sub_6E3580(v5, 2, v42);
    v27 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    sub_6DE2A0(*a3, a3[1]);
    *a3 = v27;
    if ( v24 )
    {
      if ( (*(_DWORD *)(v24 + 8))-- == 1 )
        sub_15D7BC0(v7, v24);
    }
  }
  else
  {
    v13 = sub_6E15B0((_DWORD)v5, v36, v8, v9, v10, v11);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    sub_6DE2A0(*a3, a3[1]);
    *a3 = v14;
  }
  sub_6DE2A0(v32, v33);
  sub_6DE2A0(v6, v34);
  sub_6DE2A0(v29, v31);
  return sub_6DE2A0(v12, v30);
}

