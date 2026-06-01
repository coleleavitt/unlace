__int64 __fastcall sub_CE6950(__int64 a1, int a2, int a3, _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-98h] BYREF
  __int128 v19; // [rsp+8h] [rbp-90h]
  int v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h] BYREF
  __int128 v26; // [rsp+48h] [rbp-50h]
  int v27; // [rsp+58h] [rbp-40h]
  __int64 v28; // [rsp+60h] [rbp-38h]
  __int64 v29; // [rsp+68h] [rbp-30h]
  __int64 v30; // [rsp+70h] [rbp-28h]
  int v31; // [rsp+78h] [rbp-20h]

  if ( a2 == 13 )
  {
    if ( a3 != 13 )
    {
      if ( a3 == 14 )
      {
        if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
          return 1;
        v16 = *(_QWORD *)(a1 + 560);
        v6 = &v18;
        v7 = &v25;
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)&v18, v16);
        v17 = *(_QWORD *)(a1 + 560);
        v26 = 0;
        v25 = 0;
        v27 = 1;
        v29 = 0;
        v28 = 0;
        v30 = 0;
        v31 = 0;
        v9 = sub_DFD980(v17, 64);
        sub_DFF520(v9);
        *(_QWORD *)(v9 + 48) = v30;
        v10 = v31;
        goto LABEL_17;
      }
      return sub_CE6C10();
    }
    if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
      return 1;
    v11 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a4;
    sub_CE52D0((__int64)&v25, v11);
    v12 = *(_QWORD *)(a1 + 560);
    v18 = 0;
    v19 = 0;
    v13 = v12;
    v20 = 1;
    v22 = sub_CDA6B0((__int64)&v25);
    v21 = 0;
LABEL_15:
    v15 = sub_DFD980(v13, 48);
    sub_DFF520(v15);
    sub_DFF560(&v18);
    sub_DFF560(&v25);
    return 1;
  }
  if ( a2 != 14 )
    return sub_CE6C10();
  if ( a3 == 13 )
  {
    if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
      return 1;
    v14 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a4;
    sub_CE6900((__int64)&v25, v14);
    v18 = 0;
    v13 = *(_QWORD *)(a1 + 560);
    v20 = 1;
    v22 = 17;
    v21 = 0;
    v19 = 0;
    goto LABEL_15;
  }
  if ( a3 == 14 )
  {
    if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
      return 1;
    v5 = *(_QWORD *)(a1 + 560);
    v6 = &v25;
    v7 = &v18;
    *(_QWORD *)(a1 + 1240) = *a4;
    sub_CE6900((__int64)&v25, v5);
    v8 = *(_QWORD *)(a1 + 560);
    v19 = 0;
    v18 = 0;
    v20 = 1;
    v22 = 0;
    v21 = 0;
    v23 = 0;
    v24 = 0;
    v9 = sub_DFD980(v8, 64);
    sub_DFF520(v9);
    *(_QWORD *)(v9 + 48) = v23;
    v10 = v24;
LABEL_17:
    *(_DWORD *)(v9 + 56) = v10;
    sub_DFF560(v7);
    sub_DFF560(v6);
    return 1;
  }
  return sub_CE6C10();
}

