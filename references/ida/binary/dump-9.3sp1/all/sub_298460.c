__int64 __fastcall sub_298460(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v7; // rax
  _QWORD *v8; // rdx
  int v9; // r13d
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 *v32; // r12
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-C8h]
  __int64 v37; // [rsp+0h] [rbp-C8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+0h] [rbp-C8h]
  __int64 v40; // [rsp+0h] [rbp-C8h]
  __int64 v41; // [rsp+0h] [rbp-C8h]
  __int64 v42; // [rsp+10h] [rbp-B8h]
  __int64 v43; // [rsp+10h] [rbp-B8h]
  __int64 v44; // [rsp+18h] [rbp-B0h]
  __int64 v45; // [rsp+20h] [rbp-A8h]
  __int64 v46; // [rsp+20h] [rbp-A8h]
  __int64 v47; // [rsp+28h] [rbp-A0h]
  __int64 v48; // [rsp+30h] [rbp-98h] BYREF
  __int64 v49; // [rsp+38h] [rbp-90h] BYREF
  __int64 v50; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v51[6]; // [rsp+48h] [rbp-80h]
  int v52; // [rsp+78h] [rbp-50h]
  unsigned __int64 v53; // [rsp+88h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a2 + 24);
  v3 = v2[9];
  if ( v3 )
    return 0;
  if ( *(_DWORD *)(a2 + 12) != -1 )
    return 0;
  v7 = v2[8];
  v8 = *(_QWORD **)(v7 + 24);
  if ( v8[2] != 1 )
    return 0;
  v9 = *(_DWORD *)(v7 + 12);
  if ( v9 != -1 )
    return 0;
  if ( *(_QWORD *)(*v8 + 24LL) != -4294967220LL )
    return 0;
  v36 = *v8;
  v10 = *(_QWORD *)(*v8 + 40LL);
  if ( (unsigned __int8)sub_285230(*(_QWORD *)(a2 + 24)) )
    return 0;
  if ( (unsigned __int8)sub_285230(v10) )
    return 0;
  v50 = -1;
  LODWORD(v51[0]) = 0;
  *(_QWORD *)((char *)v51 + 4) = -1;
  v52 = 0;
  v51[5] = 0;
  sub_25AFF0((__int64)&v50, v10);
  v4 = sub_287730(a1, a2, v2, (__int64)&v50);
  sub_255630((__int64)&v50);
  clear_tinfo_t();
  if ( !(_BYTE)v4 )
    return 0;
  if ( !(unsigned __int8)sub_285570(*(_QWORD *)(*(_QWORD *)(v36 + 40) + 64LL), 0)
    && (v12 = v36, v42 = *(_QWORD *)(*(_QWORD *)(v36 + 40) + 64LL), v13 = *(_QWORD *)(v42 + 24), *(_QWORD *)(v13 + 16))
    && (v14 = *(_QWORD *)(v13 + 8), v37 = v14, *(_DWORD *)(v14 + 24) == 72)
    && ((v15 = *(_DWORD *)(*(_QWORD *)(v14 + 40) + 8LL), v16 = (unsigned int)(v15 - 2), (unsigned int)v16 <= 0xD)
     || (unsigned int)(v15 - 53) <= 3) )
  {
    v45 = v12;
    v44 = j__qalloc_or_throw(64, 0, v16, v11);
    v17 = *(_QWORD *)(v45 + 40);
    v47 = v45;
    sub_25B480(v44, v17);
    v46 = j__qalloc_or_throw(64, v17, v18, v19);
    sub_25B480(v46, *(_QWORD *)(v37 + 40));
    v20 = *(_DWORD *)(v37 + 28);
    if ( v20 == -1 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(v42 + 24) + 8LL);
      v43 = *(_QWORD *)(v42 + 24);
      v34 = *(_QWORD *)v33;
      v41 = v33;
      **(_QWORD **)(v33 + 8) = *(_QWORD *)v33;
      *(_QWORD *)(v34 + 8) = *(_QWORD *)(v33 + 8);
      sub_255050(v33 + 16);
      qfree(v41);
      v21 = v47;
      --*(_QWORD *)(v43 + 16);
    }
    else
    {
      sub_296B50(v42, 79, v20);
      sub_255050(v37 + 16);
      v21 = v47;
    }
    v22 = (__int64)a1;
    v38 = v21;
    sub_283C00(&v50, a1, a2);
    v24 = v38;
    if ( *(_QWORD *)v50 != v51[0] )
    {
      v25 = *(_QWORD *)(v51[0] + 8LL);
      v51[0] = v25;
      if ( *(_DWORD *)(v25 + 24) == 72 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v25 + 40) + 8LL) - 2) <= 0xD )
      {
        v9 = *(_DWORD *)(v25 + 28);
        v35 = j__qalloc_or_throw(64, (__int64)a1, v50, v23);
        *(_QWORD *)v35 = -1;
        v3 = v35;
        *(_QWORD *)(v35 + 40) = 0;
        *(_QWORD *)(v35 + 8) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v35 + 16) = 0xFFFFFFFFLL;
        *(_QWORD *)(v35 + 48) = 0;
        *(_DWORD *)(v35 + 56) = 0;
        *(_OWORD *)(v35 + 24) = 0;
        sub_2819E0((__int64 *)v35, *(__int64 **)(v25 + 40));
        v22 = v50;
        v48 = v51[0];
        sub_298400(&v49, v50, &v48);
        v24 = v38;
      }
    }
    v26 = *(_QWORD *)(v24 + 40);
    v27 = 0;
    v28 = *(_QWORD *)(v26 + 64);
    *(_QWORD *)(v26 + 64) = 0;
    if ( v2 )
    {
      v29 = v2[8];
      if ( v29 )
      {
        v39 = v2[8];
        sub_255050(v29);
        j__qfree(v39);
      }
      v30 = v2[9];
      if ( v30 )
      {
        v40 = v2[9];
        sub_255050(v30);
        j__qfree(v40);
      }
      sub_255630((__int64)v2);
      clear_tinfo_t();
      j__qfree((__int64)v2);
    }
    *(_DWORD *)(a2 + 12) = v9;
    *(_DWORD *)(a2 + 8) = 74;
    v31 = j__qalloc_or_throw(200, v22, v27, v23);
    *(_QWORD *)v31 = -1;
    v32 = (__int64 *)v31;
    *(_DWORD *)(v31 + 8) = 0;
    *(_QWORD *)(v31 + 40) = 0;
    *(_QWORD *)(v31 + 12) = -1;
    *(_QWORD *)(v31 + 84) = -1;
    *(_QWORD *)(v31 + 48) = 0;
    *(_QWORD *)(v31 + 144) = 0xFFFFFFFF00000000LL;
    *(_DWORD *)(v31 + 56) = 0;
    *(_QWORD *)(v31 + 64) = 0;
    *(_QWORD *)(v31 + 72) = -1;
    *(_DWORD *)(v31 + 80) = 0;
    *(_QWORD *)(v31 + 112) = 0;
    *(_QWORD *)(v31 + 120) = 0;
    *(_DWORD *)(v31 + 128) = 0;
    *(_QWORD *)(v31 + 136) = -1;
    *(_QWORD *)(v31 + 152) = 0xFFFFFFFFLL;
    *(_QWORD *)(v31 + 176) = 0;
    *(_QWORD *)(v31 + 184) = 0;
    *(_DWORD *)(v31 + 192) = 0;
    *(_OWORD *)(v31 + 24) = 0;
    *(_OWORD *)(v31 + 96) = 0;
    *(_OWORD *)(v31 + 160) = 0;
    *(_QWORD *)(a2 + 24) = v31;
    if ( v3 )
      sub_255850((__int64 *)(v31 + 72), v3);
    sub_255850(v32, v44);
    sub_255850(v32 + 17, v46);
    v32[8] = v28;
  }
  else
  {
    return 0;
  }
  return v4;
}
