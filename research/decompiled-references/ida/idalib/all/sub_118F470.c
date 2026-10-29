int __fastcall sub_118F470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  char *v8; // r13
  __int64 v9; // r13
  __int64 v10; // r13
  size_t v11; // r15
  size_t v12; // rax
  __int64 v13; // r13
  size_t v14; // r15
  size_t v15; // rax
  __int64 v16; // r13
  bool v17; // cf
  bool v18; // zf
  __int64 v19; // r8
  __int64 v20; // rcx
  const char *v21; // rdi
  __int64 v22; // rdx
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-90h] BYREF
  __m128 v31; // [rsp+10h] [rbp-88h] BYREF
  __int64 v32; // [rsp+20h] [rbp-78h]
  _QWORD v33[4]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v34; // [rsp+50h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 24);
  if ( !(unsigned __int8)sub_21B7850(a2, 2830, 2694, 1) || sub_10DCD30(a2, 0x992u) || sub_10DCD30(a2, 0x1ACu) )
    sub_10DC5D0(a3, (__int64)"-disable-red-zone");
  if ( !(unsigned __int8)sub_21B7850(a2, 2420, 2619, 1) )
    sub_10DC5D0(a3, (__int64)"-no-implicit-float");
  v7 = sub_10DCD30(a2, 0x8AEu);
  if ( v7 )
  {
    v8 = **(char ***)(v7 + 48);
  }
  else
  {
    v28 = *(unsigned int *)(v6 + 1804);
    if ( (unsigned int)v28 <= 0x1F && (v29 = 4160750114LL, _bittest64(&v29, v28)) )
    {
      v8 = "darwinpcs";
    }
    else
    {
      v8 = "pauthtest";
      if ( *(_DWORD *)(v6 + 1808) != 51 )
        v8 = "aapcs";
    }
  }
  sub_10DC5D0(a3, (__int64)"-target-abi");
  sub_10DC5D0(a3, (__int64)v8);
  v9 = sub_10DE660(a2, 0x95Du, 0xA33u);
  if ( v9 )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    if ( (unsigned __int8)sub_21B9810(v9, 2611) )
      sub_10DC5D0(a3, (__int64)"-aarch64-enable-global-merge=false");
    else
      sub_10DC5D0(a3, (__int64)"-aarch64-enable-global-merge=true");
  }
  v30 = a3;
  v32 = a2;
  v31 = _mm_loadh_ps((const double *)&v30);
  v10 = sub_10DCD30(a2, 0xB51u);
  if ( v10 )
  {
    v11 = j__strlen("-mvscale-max=");
    v12 = j__strlen("-mvscale-min=");
    sub_118AE30(&v31, v10, (unsigned __int64)"-mvscale-min=", v12, (__int64)"-mvscale-max=", v11);
  }
  v13 = sub_10DCD30(a2, 0xB50u);
  if ( v13 )
  {
    v14 = j__strlen("-mvscale-streaming-max=");
    v15 = j__strlen("-mvscale-streaming-min=");
    sub_118AE30(&v31, v13, (unsigned __int64)"-mvscale-streaming-min=", v15, (__int64)"-mvscale-streaming-max=", v14);
  }
  sub_118C2D0(a2, a3);
  v16 = sub_10DCD30(a2, 0xB64u);
  if ( v16 )
  {
    sub_10DC5D0(a3, (__int64)"-tune-cpu");
    v20 = 7;
    v21 = "native";
    v22 = **(_QWORD **)(v16 + 48);
    v23 = (const char *)v22;
    do
    {
      if ( !v20 )
        break;
      v17 = *v23 < (unsigned int)*v21;
      v18 = *v23++ == *v21++;
      --v20;
    }
    while ( v18 );
    if ( (!v17 && !v18) == v17 )
    {
      v24 = sub_22A33B0(v21, v23, v22, v20, v19);
      v34 = 261;
      v33[0] = v24;
      v33[1] = v25;
      v26 = sub_10DA6C0(a2, (__int64)v33);
      sub_10DC5D0(a3, v26);
    }
    else
    {
      sub_10DC5D0(a3, v22);
    }
  }
  sub_118AA90(a3);
  sub_21B73E0(a2, a3, 1664, 1311);
  sub_21B73E0(a2, a3, 1658, 1305);
  sub_21B73E0(a2, a3, 1668, 1315);
  sub_21B73E0(a2, a3, 1656, 1303);
  sub_21B73E0(a2, a3, 1670, 1317);
  sub_21B73E0(a2, a3, 1671, 1318);
  sub_21B73E0(a2, a3, 1669, 1316);
  sub_21B73E0(a2, a3, 1660, 1307);
  sub_21B73E0(a2, a3, 1661, 1308);
  sub_21B73E0(a2, a3, 1663, 1310);
  sub_21B73E0(a2, a3, 1662, 1309);
  sub_21B73E0(a2, a3, 394, 1000);
  sub_21B73E0(a2, a3, 1667, 1314);
  sub_21B73E0(a2, a3, 1666, 1313);
  sub_21B73E0(a2, a3, 1665, 1312);
  if ( *(_DWORD *)(v6 + 1808) == 51 )
  {
    if ( !sub_10DE660(a2, 0x680u, 0x51Fu) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-intrinsics");
    if ( !sub_10DE660(a2, 0x67Au, 0x519u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-calls");
    if ( !sub_10DE660(a2, 0x684u, 0x523u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-returns");
    if ( !sub_10DE660(a2, 0x678u, 0x517u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-auth-traps");
    if ( !sub_10DE660(a2, 0x686u, 0x525u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-vtable-pointer-address-discrimination");
    if ( !sub_10DE660(a2, 0x687u, 0x526u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-vtable-pointer-type-discrimination");
    if ( !sub_10DE660(a2, 0x67Du, 0x51Cu) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-indirect-gotos");
    if ( !sub_10DE660(a2, 0x67Fu, 0x51Eu) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-init-fini");
  }
  return sub_118D570(*(_QWORD *)(a1 + 24), a2, a3, 1);
}
