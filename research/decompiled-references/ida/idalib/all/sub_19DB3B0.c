__int64 __fastcall sub_19DB3B0(__int64 *a1, unsigned int a2, unsigned __int64 a3, double a4)
{
  _QWORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
  size_t v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  _QWORD *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // [rsp+0h] [rbp-108h]
  __int64 v42; // [rsp+0h] [rbp-108h]
  __int64 v43; // [rsp+8h] [rbp-100h]
  __int64 v44; // [rsp+18h] [rbp-F0h] BYREF
  void *v45; // [rsp+20h] [rbp-E8h] BYREF
  size_t v46; // [rsp+28h] [rbp-E0h]
  _BYTE v47[16]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v48[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v50; // [rsp+60h] [rbp-A8h] BYREF
  char v51; // [rsp+B8h] [rbp-50h]
  unsigned int v52; // [rsp+C0h] [rbp-48h]
  char v53; // [rsp+C4h] [rbp-44h]

  v6 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( (unsigned __int8)sub_1A892A0(a1, a3) )
    return 1;
  v8 = v6[200];
  if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 105) & 1) != 0 )
    {
      v9 = sub_168B6E0((__int64)a1);
      v45 = v47;
      sub_19CEFE0(&v45, *(_BYTE **)(v9 + 392), *(_QWORD *)(v9 + 392) + *(_QWORD *)(v9 + 400));
      if ( v46 )
      {
        v41 = sub_6F3470(v6[2188], v45, v46);
      }
      else
      {
        v10 = v6[2188];
        v11 = j__strlen("NSConstantString");
        v41 = sub_6F3470(v10, "NSConstantString", v11);
      }
      v12 = sub_1A5B7C0(*a1, *(_QWORD *)(*a1 + 192), v41, a2, 0, 0);
      if ( v12 && (v16 = *(_BYTE *)(v12 + 28) & 0x7F, (_BYTE)v16 == 20) )
      {
        sub_A820A0((__int64)v6, v12, v16, v13, v14, v15);
        v17 = sub_A74EC0((__int64)v6, v6[200]);
      }
      else
      {
        v30 = (__int64)a1;
        sub_168B9F0((__int64)v48, a1, *(_DWORD *)(a3 + 20), 0x10B7u, 0);
        if ( v51 )
        {
          v30 = v41;
          sub_AE9DF0(&v50, v41, 5u);
        }
        else if ( v53 )
        {
          v35 = sub_168B9E0(v48);
          v39 = v49;
          if ( v49 )
          {
            v43 = v35;
            v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
            v35 = v43;
          }
          v44 = v39;
          v40 = sub_1587BC0(v35, &v44, v35, v36, v37, v38);
          v30 = v41;
          sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v52 + 8), v41, 5u);
        }
        v44 = sub_EEC8C0(a3, v30, a4);
        sub_1587DB0((__int64)v48, &v44);
        sub_15F7200(v48);
        v17 = sub_A8A430(v6, (__int64)&v44, v31, v32, v33, v34);
      }
      if ( v45 != v47 )
        operator delete(v45);
      goto LABEL_17;
    }
    v24 = sub_E935B0(a1[11], 1);
    v25 = sub_1A5B7C0(*a1, *(_QWORD *)(*a1 + 192), v24, a2, 0, 0);
    if ( v25 )
    {
      v26 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( (_BYTE)v26 == 20 )
      {
        sub_A820A0((__int64)v6, v25, v26, v27, v28, v29);
        v17 = sub_A74EC0((__int64)v6, v6[200]);
        goto LABEL_17;
      }
    }
    v8 = v6[204];
    if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v18 = sub_704780((__int64 *)(*(_QWORD *)(v6[283] + 80LL) + 72LL), *(_QWORD *)(v6[283] + 80LL), v26, v27, v28, v29);
      if ( v18 )
        v18 += 5;
      v19 = sub_BAF1C0(v6, (__int64)v18, 0, (__int64)v24, 0, 0, 0, 0);
      v23 = sub_A82070((__int64)v6, v19, 0, v20, v21, v22);
      v6[204] = v23;
      v8 = v23;
    }
  }
  v17 = sub_A74EC0((__int64)v6, v8);
LABEL_17:
  result = sub_EEE9A0(32, v6, 8u);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x1D;
  if ( unk_2CD7484 )
  {
    v42 = result;
    sub_EE9B50(29);
    result = v42;
  }
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 8) = v17;
  *(_QWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 24) = a2;
  return result;
}
