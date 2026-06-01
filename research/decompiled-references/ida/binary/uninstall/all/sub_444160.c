__int64 __fastcall sub_444160(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v4; // rax
  int *v5; // rax
  int *v6; // rdi
  __int64 v7; // rsi
  int *v8; // rax
  __int64 v9; // rdx
  int *v10; // r14
  int j; // r15d
  int *v12; // r13
  int v13; // r12d
  int *v14; // rdx
  int *v15; // rbx
  int *v16; // rbp
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  int v27; // r8d
  int v28; // r9d
  __int64 k; // rax
  __int64 v30; // rdx
  int *v32; // [rsp+20h] [rbp-138h]
  __int64 v33; // [rsp+28h] [rbp-130h]
  __int64 v35; // [rsp+38h] [rbp-120h] BYREF
  int v36; // [rsp+40h] [rbp-118h] BYREF
  int v37; // [rsp+44h] [rbp-114h] BYREF
  __int64 v38; // [rsp+48h] [rbp-110h] BYREF
  int *v39; // [rsp+50h] [rbp-108h] BYREF
  int v40; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v41[4]; // [rsp+5Ch] [rbp-FCh] BYREF
  _DWORD v42[2]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-F0h]
  __int64 v44; // [rsp+70h] [rbp-E8h]
  _BYTE v45[32]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v46[32]; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v47[60]; // [rsp+C0h] [rbp-98h] BYREF
  int v48; // [rsp+FCh] [rbp-5Ch]
  void (__fastcall *v49)(_BYTE *, __int64, _BYTE *); // [rsp+108h] [rbp-50h]

  v33 = sub_47B0B0(a1, a2, a3);
  v36 = 0;
  sub_47CFA0(v47);
  sub_4AE1A0(&qword_65A598);
  for ( i = sub_457E20(qword_65A540, v46); i; i = sub_457DE0(v46) )
  {
    v4 = sub_48DF10(**(void ***)(i + 24), 0xFFFFFFFF);
    v49(v47, v4, v41);
  }
  sub_4AE230(&qword_65A598);
  v40 = 0;
  v5 = (int *)sub_443EA0();
  ++*v5;
  v6 = nullptr;
  v7 = (__int64)v5;
  v32 = v5;
  sub_46FB10(0, v5, &v40);
  v8 = (int *)sub_4401E0(0, v7);
  ++*v8;
  v10 = v8;
  for ( j = v40 - 1; j >= 0; --j )
  {
    v12 = (int *)sub_47B0B0(v6, v7, v9);
    v42[0] = 16;
    v42[1] = 4;
    v43 = 0;
    v13 = 0;
    v44 = 0;
    sub_46FB70(0, v32, (unsigned int)j, &v39);
    v14 = v39;
    ++*v39;
    ++*v12;
    sub_46DEA0(0, v12, v14, "*.enc", v42);
    v7 = (__int64)v12;
    sub_46FD90(0, v12, &v37, &v38);
    if ( v37 > 0 )
    {
      do
      {
        v15 = (int *)sub_482580(0, *(_QWORD *)(v38 + 8LL * v13), 1);
        v7 = (__int64)v10;
        v16 = (int *)sub_482580(0, v15, 3);
        sub_440560(0, (__int64)v10, (__int64)v16, v39, v17, v18);
        v19 = *v15 - 1;
        v20 = *v15 == 1;
        *v15 = v19;
        if ( v19 < 0 || v20 )
          sub_47B120(v15);
        v21 = *v16 - 1;
        v20 = *v16 == 1;
        *v16 = v21;
        ++v13;
        if ( v21 < 0 || v20 )
          sub_47B120(v16);
      }
      while ( v13 < v37 );
    }
    v22 = *v12 - 1;
    v20 = *v12 == 1;
    *v12 = v22;
    if ( v22 < 0 || v20 )
      sub_47B120(v12);
    v6 = v39;
    v23 = *v39 - 1;
    v20 = *v39 == 1;
    *v39 = v23;
    if ( v23 < 0 || v20 )
      sub_47B120(v6);
  }
  v24 = *v32 - 1;
  v20 = *v32 == 1;
  *v32 = v24;
  if ( v24 < 0 || v20 )
    sub_47B120(v32);
  sub_49FDD0(qword_65A500, v10, 0);
  v25 = *v10 - 1;
  v20 = *v10 == 1;
  *v10 = v25;
  if ( v25 < 0 || v20 )
    sub_47B120(v10);
  v26 = sub_49FED0(qword_65A500);
  sub_440900(0, v26, (__int64)v45, &v35, nullptr, &v36);
  while ( !v36 )
  {
    v49(v47, v35, v41);
    sub_440A10((__int64)v45, &v35, nullptr, &v36, v27, v28);
  }
  for ( k = sub_457E20(v47, v46); k; k = sub_457DE0(v46) )
  {
    v30 = k + 32;
    if ( v48 == 1 || v48 == -1 )
      v30 = *(_QWORD *)(k + 32);
    sub_46FBF0(0, v33, v30);
  }
  sub_48AFD0(a1, v33);
  return sub_457CE0(v47);
}

