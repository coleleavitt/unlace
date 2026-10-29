__int64 __fastcall sub_182B6A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ecx
  _BOOL4 v11; // ebp
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  unsigned int *v15; // rax
  size_t v16; // rdx
  int v17; // eax
  unsigned __int8 v18; // cl
  unsigned int v19; // eax
  unsigned int v20; // r14d
  char v21; // al
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  bool v33; // [rsp+Fh] [rbp-109h]
  unsigned __int8 v34; // [rsp+Fh] [rbp-109h]
  unsigned __int8 v35; // [rsp+Fh] [rbp-109h]
  unsigned __int64 v36; // [rsp+10h] [rbp-108h]
  __int64 v37; // [rsp+18h] [rbp-100h]
  __int64 v38; // [rsp+28h] [rbp-F0h] BYREF
  const void *v39; // [rsp+30h] [rbp-E8h] BYREF
  size_t v40; // [rsp+38h] [rbp-E0h]
  __int64 v41[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-C8h] BYREF
  int v43; // [rsp+60h] [rbp-B8h]
  int v44; // [rsp+64h] [rbp-B4h]

  if ( !*(_WORD *)(a3 + 56) || (*(_BYTE *)(a3 + 80) & 2) == 0 )
  {
    sub_168B9F0((__int64)v42, a1 + 1, *(_DWORD *)(a3 + 24), 0xC53u, 0);
    v6 = sub_15DD120((__int64)v42, a3);
    LODWORD(v39) = 1;
    v7 = sub_1587D10(v6, (int *)&v39);
    LODWORD(v41[0]) = 3;
    sub_180A710(v7, (int *)v41);
    sub_15F7200(v42);
    return 0;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
  {
    v11 = 0;
    v33 = 0;
  }
  else
  {
    v33 = !sub_B979F0((_QWORD *)a2);
    v11 = v33;
  }
  v12 = sub_B8DC30(a2, 1);
  if ( v12 )
  {
    v13 = *(unsigned __int16 *)(v12 + 22);
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
  {
    v13 = *(_DWORD *)(a2 + 80);
  }
  else
  {
    v13 = *(_DWORD *)(a2 + 104);
  }
  *(_DWORD *)(a4 + 16) = v11 + v13;
  v14 = *(_QWORD *)((*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFFCLL) + 8);
  *(_QWORD *)(a4 + 8) = v14;
  v15 = *(unsigned int **)(v14 + 16);
  v16 = *v15;
  v39 = v15 + 4;
  v40 = v16;
  if ( (unsigned __int8)sub_1805A60(&v39) )
    *(_QWORD *)(a4 + 8) = sub_6F3470(*(_QWORD *)(a1[31] + 17504), v39, v40);
  v44 = 0;
  v42[0] = v39;
  LODWORD(v41[0]) = 1;
  v42[1] = v40;
  sub_1806EE0((__int64)v42, (int *)v41, "NSString", 8);
  LODWORD(v41[0]) = 0;
  sub_1806EE0((__int64)v42, (int *)v41, "CFString", 8);
  LODWORD(v41[0]) = 2;
  sub_1806EE0((__int64)v42, (int *)v41, "strftime", 8);
  LODWORD(v41[0]) = 3;
  if ( !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "scanf", 5)
    && !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "printf", 6)
    && !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "printf0", 7) )
  {
    sub_1806EE0((__int64)v42, (int *)v41, "strfmon", 7);
  }
  LODWORD(v41[0]) = 3;
  if ( !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "cmn_err", 7)
    && !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "vcmn_err", 8) )
  {
    sub_1806EE0((__int64)v42, (int *)v41, "zcmn_err", 8);
  }
  LODWORD(v41[0]) = 3;
  if ( !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "kprintf", 7) )
    sub_1806EE0((__int64)v42, (int *)v41, "syslog", 6);
  LODWORD(v41[0]) = 3;
  sub_1806EE0((__int64)v42, (int *)v41, "freebsd_kprintf", 15);
  LODWORD(v41[0]) = 3;
  sub_1806EE0((__int64)v42, (int *)v41, "os_trace", 8);
  LODWORD(v41[0]) = 3;
  sub_1806EE0((__int64)v42, (int *)v41, "os_log", 6);
  LODWORD(v41[0]) = 4;
  if ( !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "gcc_diag", 8)
    && !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "gcc_cdiag", 9)
    && !(unsigned __int8)sub_1806EE0((__int64)v42, (int *)v41, "gcc_cxxdiag", 11) )
  {
    sub_1806EE0((__int64)v42, (int *)v41, "gcc_tdiag", 9);
  }
  if ( !(_BYTE)v44 )
  {
    *(_DWORD *)a4 = 5;
    goto LABEL_33;
  }
  v17 = v43;
  *(_DWORD *)a4 = v43;
  if ( v17 == 4 )
    return 0;
  if ( v17 == 5 )
  {
LABEL_33:
    sub_168B9F0((__int64)v42, a1 + 1, *(_DWORD *)(a3 + 24), 0x19C0u, 0);
    v29 = sub_15DD120((__int64)v42, a3);
    v30 = *(unsigned int **)(*(_QWORD *)(a4 + 8) + 16LL);
    v31 = *v30;
    v41[0] = (__int64)(v30 + 4);
    v41[1] = v31;
    sub_166BAF0(v29, (__int64)v41);
    sub_15F7200(v42);
    return 0;
  }
  v36 = *(_QWORD *)(a3 + 88) & 0xFFFFFFFFFFFFFFFCLL;
  v18 = sub_16211A0(a1, a3, v36, a4 + 20, 2, 0);
  if ( !v18 )
    return 0;
  v19 = *(_DWORD *)(a4 + 20);
  if ( !v19 || v19 > *(_DWORD *)(a4 + 16) )
  {
    sub_168B9F0((__int64)v42, a1 + 1, *(_DWORD *)(a3 + 24), 0xC54u, 0);
    v32 = sub_15DD120((__int64)v42, a3);
    LODWORD(v38) = 2;
    v27 = sub_1587D10(v32, (int *)&v38);
    v28 = sub_EEC8C0(v36, (__int64)&v38, a5);
    goto LABEL_48;
  }
  v20 = v19 - 1;
  if ( v33 )
  {
    if ( v19 != 1 )
    {
      v20 = v19 - 2;
      goto LABEL_25;
    }
    sub_168B9F0((__int64)v42, a1 + 1, *(_DWORD *)(a3 + 24), 0xF00u, 0);
    v41[0] = sub_EEC8C0(v36, (__int64)(a1 + 1), a5);
    sub_1587DB0((__int64)v42, v41);
    sub_15F7200(v42);
    return 0;
  }
LABEL_25:
  v34 = v18;
  v37 = sub_18064C0(a2, v20);
  v21 = sub_1A88BD0(a1[92], v37, 1);
  v8 = v34;
  if ( !v21 )
  {
    v23 = sub_1A88D60(a1[92], v37, v22, v34);
    v8 = v34;
    if ( !v23 )
    {
      v24 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
      v25 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v25 + 16) != 42 )
        goto LABEL_31;
      if ( *(_BYTE *)(v24 + 16) != 42 )
      {
        v24 = sub_F63050(v24, v37, v25, v34);
        LOBYTE(v8) = v34;
      }
      v35 = v8;
      v26 = sub_F57EE0(*(_QWORD *)(*(_QWORD *)(v24 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      v8 = v35;
      if ( !v26 )
      {
LABEL_31:
        sub_168B9F0((__int64)v42, a1 + 1, *(_DWORD *)(a3 + 24), 0xF01u, 0);
        v38 = sub_EEC8C0(v36, (__int64)(a1 + 1), a5);
        v27 = sub_1587DB0((__int64)v42, &v38);
        v28 = sub_1806530(a2, v20);
LABEL_48:
        v41[0] = v28;
        sub_1587DB0(v27, v41);
        sub_15F7200(v42);
        return 0;
      }
    }
  }
  return v8;
}
