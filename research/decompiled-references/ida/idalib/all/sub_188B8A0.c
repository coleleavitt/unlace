_BYTE *__fastcall sub_188B8A0(__int64 a1, __m128i *a2, double a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // r15
  unsigned int v14; // r13d
  char v15; // bp
  __int64 v16; // rax
  char v17; // al
  _BYTE *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v41; // rbx
  __int64 v42; // rsi
  _QWORD *v43; // rcx
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  unsigned int v46; // edi
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned __int64 v50; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+20h] [rbp-A8h] BYREF
  int v52; // [rsp+28h] [rbp-A0h]
  __int64 v53; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-90h]
  __int64 v55; // [rsp+40h] [rbp-88h] BYREF
  __int64 v56; // [rsp+50h] [rbp-78h] BYREF
  __int64 v57; // [rsp+58h] [rbp-70h]
  __int64 v58; // [rsp+60h] [rbp-68h]
  __int64 v59; // [rsp+68h] [rbp-60h]
  __int64 v60; // [rsp+70h] [rbp-58h]
  __int64 v61; // [rsp+78h] [rbp-50h]
  int v62; // [rsp+80h] [rbp-48h]
  int v63; // [rsp+84h] [rbp-44h]
  char v64; // [rsp+88h] [rbp-40h]

  sub_1839E60((__int64)&v56, a1, (__int64)a2, 4);
  if ( v64 )
  {
    v18 = nullptr;
    goto LABEL_17;
  }
  v9 = a2[3].m128i_i64[0];
  v10 = *(_QWORD *)(a1 + 248);
  if ( v9 )
  {
    v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v48 = sub_A7AA70(v10, (__int64)a2, v6, 0, v7, v8);
    v10 = *(_QWORD *)(a1 + 248);
    v11 = v48;
  }
  v50 = sub_A76250(v10, 6, 0, v11, 0);
  v12 = sub_15F1720(a1);
  if ( v12 )
    v50 = sub_A70E70(*(_QWORD *)(a1 + 248), v50, v12);
  v13 = sub_A73030(*(_QWORD *)(a1 + 248), v50, 1u);
  v50 = sub_A72DD0(*(_QWORD *)(a1 + 248), v50);
  v15 = sub_1888F20(a1, (__int64)a2, 4, 0, nullptr, 0);
  v16 = *(_QWORD *)(a1 + 248);
  v54 = a2[1].m128i_u32[2];
  v14 = v54;
  v53 = (v16 + 17832) | 6;
  sub_B85890(&v55, v53);
  v51 = 0;
  v52 = 0;
  v17 = sub_C1BE80((int *)(a1 + 224));
  v18 = (_BYTE *)sub_B97D00(*(_QWORD **)(a1 + 248), (__int64)a2, v14, &v53, 0, 0, 0, v17, 1, v15, 0, (__int64)&v51);
  v18[83] |= 2u;
  v18[29] = v18[29] & 0x9D | 2;
  sub_183DCE0(a1, (__int64)v18, v13, (__int64 *)&v50, 1u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    sub_17974D0(*(__int64 **)(a1 + 664), (__int64)a2, 4u, v18, 0, 0);
  v51 = sub_B74530(*(_QWORD *)(a1 + 248), (__int64)(v18 + 72), v14, v14, 0, v50, 0, 0, 0);
  v19 = sub_B8C330((__int64)v18);
  sub_B7C440((__int64)v18, v19, &v51, 1u);
  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v20, v21, v22, v23);
  if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 4) & 1) != 0 )
  {
    v33 = sub_188A5F0(a1, (__int64)v18, 4, 0, 0, a3, a4);
  }
  else
  {
    v28 = a2[6].m128i_i64[1];
    sub_7052B0((__int64 *)(v28 + 96), v28, v24, v25, v26, v27);
    if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 0x10) != 0
      || (v33 = sub_B9C100((__int64)a2, v28, v29, v30, v31, v32), (_BYTE)v33) )
    {
      sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v29, v30, v31, v32);
      v33 = (*(_WORD *)(a2[8].m128i_i64[0] + 4) & 0x800) != 0;
    }
  }
  v18[82] = ((_BYTE)v33 << 7) | v18[82] & 0x7F;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22964LL);
  v34 = sub_15F18E0(a1, (__int64)a2[4].m128i_i64, (unsigned int)(v33 << 7), v30, v31, v32);
  sub_183D9E0(a1, (__int64)v34, (__int64)v18, a3, a4);
  if ( (char)v18[28] >= 0 && (unsigned __int8)sub_1887DE0(a1, (__int64)v18, 4u, 0, 0) )
  {
    sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v35, v36, v37, v38);
    *(_BYTE *)(a2[8].m128i_i64[0] + 4) |= 0x20u;
    sub_1869020(a1, (__int64)v18, v14, 0);
  }
  if ( v34 )
    sub_17B7670(a1, (__int64)v18, (__int64)v34, 0, v37, v38);
  sub_B94AD0(a2 + 4, (__int64)v18, v35, v36, v37, v38);
  if ( !v64 )
  {
    v41 = v56;
    v42 = v57;
    if ( *(_BYTE *)(v56 + 4276) )
    {
      v43 = *(_QWORD **)(v56 + 4256);
      v44 = &v43[*(unsigned int *)(v56 + 4268)];
      if ( v43 == v44 )
      {
LABEL_25:
        sub_1DBAAE0(v41, v42);
        goto LABEL_17;
      }
      v45 = *(_QWORD **)(v56 + 4256);
      if ( v57 == *v43 )
      {
LABEL_24:
        v46 = *(_DWORD *)(v56 + 4268) - 1;
        v47 = v43[v46];
        *(_DWORD *)(v56 + 4268) = v46;
        *v45 = v47;
        v41 = v56;
        goto LABEL_25;
      }
      while ( v44 != ++v45 )
      {
        if ( v57 == *v45 )
          goto LABEL_24;
      }
    }
    else
    {
      v49 = (_QWORD *)sub_2236570(v56 + 4256, v57);
      if ( v49 )
      {
        *v49 = -2;
        ++*(_DWORD *)(v41 + 4272);
      }
    }
    sub_1DBAAE0(v56, v42);
  }
LABEL_17:
  if ( v59 )
  {
    v39 = v58;
    *(_QWORD *)(v58 + 544) = v59;
    *(_QWORD *)(v39 + 512) = v60;
    *(_QWORD *)(v39 + 9944) = v61;
    *(_DWORD *)(v39 + 80) = v62;
    *(_DWORD *)(v39 + 2632) = v63;
  }
  return v18;
}
