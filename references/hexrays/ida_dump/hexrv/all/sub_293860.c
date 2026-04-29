__int64 __fastcall sub_293860(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // r14
  unsigned int v4; // r15d
  __int64 v6; // rax
  _QWORD *v7; // rdx
  int v8; // r13d
  __int64 v9; // r15
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // r12
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-C8h]
  __int64 v28; // [rsp+0h] [rbp-C8h]
  __int64 v29; // [rsp+0h] [rbp-C8h]
  __int64 v30; // [rsp+0h] [rbp-C8h]
  __int64 v31; // [rsp+0h] [rbp-C8h]
  __int64 *v32; // [rsp+0h] [rbp-C8h]
  __int64 v33; // [rsp+10h] [rbp-B8h]
  __int64 v34; // [rsp+10h] [rbp-B8h]
  __int64 v35; // [rsp+18h] [rbp-B0h]
  __int64 v36; // [rsp+20h] [rbp-A8h]
  __int64 v37; // [rsp+20h] [rbp-A8h]
  __int64 v38; // [rsp+28h] [rbp-A0h]
  __int64 *v39; // [rsp+30h] [rbp-98h] BYREF
  __int64 v40; // [rsp+38h] [rbp-90h] BYREF
  __int64 v41; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v42[5]; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+70h] [rbp-58h] BYREF
  int v44; // [rsp+78h] [rbp-50h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a2 + 24);
  v3 = v2[9];
  if ( !v3
    && *(_DWORD *)(a2 + 12) == -1
    && (v6 = v2[8], v7 = *(_QWORD **)(v6 + 24), v7[2] == 1)
    && (v8 = *(_DWORD *)(v6 + 12), v8 == -1)
    && *(_QWORD *)(*v7 + 24LL) == -4294967220LL
    && (v27 = *v7, v9 = *(_QWORD *)(*v7 + 40LL), !(unsigned __int8)sub_280630(*(_QWORD *)(a2 + 24)))
    && !(unsigned __int8)sub_280630(v9)
    && (v41 = -1,
        LODWORD(v42[0]) = 0,
        *(_QWORD *)((char *)v42 + 4) = -1,
        v44 = 0,
        v43 = 0,
        sub_2563F0((__int64)&v41, v9),
        v4 = sub_282B30(a1, a2, v2, (__int64)&v41),
        sub_250A30((__int64)&v41),
        clear_tinfo_t(&v43),
        (_BYTE)v4)
    && !(unsigned __int8)sub_280970(*(_QWORD *)(*(_QWORD *)(v27 + 40) + 64LL), 0)
    && (v10 = v27, v33 = *(_QWORD *)(*(_QWORD *)(v27 + 40) + 64LL), v11 = *(_QWORD *)(v33 + 24), *(_QWORD *)(v11 + 16))
    && (v12 = *(_QWORD *)(v11 + 8), v28 = v12, *(_DWORD *)(v12 + 24) == 72)
    && ((v13 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 8LL), (unsigned int)(v13 - 2) <= 0xD) || (unsigned int)(v13 - 53) <= 3) )
  {
    v36 = v10;
    v35 = j__qalloc_or_throw(64);
    v38 = v36;
    sub_256880(v35, *(_QWORD *)(v36 + 40));
    v37 = j__qalloc_or_throw(64);
    sub_256880(v37, *(_QWORD *)(v28 + 40));
    v14 = *(_DWORD *)(v28 + 28);
    if ( v14 == -1 )
    {
      v24 = *(__int64 **)(*(_QWORD *)(v33 + 24) + 8LL);
      v34 = *(_QWORD *)(v33 + 24);
      v25 = *v24;
      v32 = v24;
      *(_QWORD *)v24[1] = *v24;
      *(_QWORD *)(v25 + 8) = v24[1];
      sub_250450((__int64)(v24 + 2));
      qfree(v32);
      v15 = v38;
      --*(_QWORD *)(v34 + 16);
    }
    else
    {
      sub_291F50(v33, 79, v14);
      sub_250450(v28 + 16);
      v15 = v38;
    }
    v29 = v15;
    sub_27F000(&v41, a1, a2);
    v16 = v29;
    if ( *(_QWORD *)v41 != v42[0] )
    {
      v17 = *(_QWORD *)(v42[0] + 8LL);
      v42[0] = v17;
      if ( *(_DWORD *)(v17 + 24) == 72 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v17 + 40) + 8LL) - 2) <= 0xD )
      {
        v8 = *(_DWORD *)(v17 + 28);
        v26 = j__qalloc_or_throw(64);
        *(_QWORD *)v26 = -1;
        v3 = v26;
        *(_QWORD *)(v26 + 40) = 0;
        *(_QWORD *)(v26 + 8) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v26 + 16) = 0xFFFFFFFFLL;
        *(_QWORD *)(v26 + 48) = 0;
        *(_DWORD *)(v26 + 56) = 0;
        *(_OWORD *)(v26 + 24) = 0;
        sub_27CDE0((__int64 *)v26, *(__int64 **)(v17 + 40));
        v39 = (__int64 *)v42[0];
        sub_293800(&v40, v41, &v39);
        v16 = v29;
      }
    }
    v18 = *(_QWORD *)(v16 + 40);
    v19 = *(_QWORD *)(v18 + 64);
    *(_QWORD *)(v18 + 64) = 0;
    if ( v2 )
    {
      v20 = v2[8];
      if ( v20 )
      {
        v30 = v2[8];
        sub_250450(v20);
        j__qfree(v30);
      }
      v21 = v2[9];
      if ( v21 )
      {
        v31 = v2[9];
        sub_250450(v21);
        j__qfree(v31);
      }
      sub_250A30((__int64)v2);
      clear_tinfo_t(v2 + 6);
      j__qfree(v2);
    }
    *(_DWORD *)(a2 + 12) = v8;
    *(_DWORD *)(a2 + 8) = 74;
    v22 = j__qalloc_or_throw(200);
    *(_QWORD *)v22 = -1;
    v23 = (__int64 *)v22;
    *(_DWORD *)(v22 + 8) = 0;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 12) = -1;
    *(_QWORD *)(v22 + 84) = -1;
    *(_QWORD *)(v22 + 48) = 0;
    *(_QWORD *)(v22 + 144) = 0xFFFFFFFF00000000LL;
    *(_DWORD *)(v22 + 56) = 0;
    *(_QWORD *)(v22 + 64) = 0;
    *(_QWORD *)(v22 + 72) = -1;
    *(_DWORD *)(v22 + 80) = 0;
    *(_QWORD *)(v22 + 112) = 0;
    *(_QWORD *)(v22 + 120) = 0;
    *(_DWORD *)(v22 + 128) = 0;
    *(_QWORD *)(v22 + 136) = -1;
    *(_QWORD *)(v22 + 152) = 0xFFFFFFFFLL;
    *(_QWORD *)(v22 + 176) = 0;
    *(_QWORD *)(v22 + 184) = 0;
    *(_DWORD *)(v22 + 192) = 0;
    *(_OWORD *)(v22 + 24) = 0;
    *(_OWORD *)(v22 + 96) = 0;
    *(_OWORD *)(v22 + 160) = 0;
    *(_QWORD *)(a2 + 24) = v22;
    if ( v3 )
      sub_250C50((__int64 *)(v22 + 72), v3);
    sub_250C50(v23, v35);
    sub_250C50(v23 + 17, v37);
    v23[8] = v19;
  }
  else
  {
    return 0;
  }
  return v4;
}
