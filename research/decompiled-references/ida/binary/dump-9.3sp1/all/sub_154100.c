__int64 __fastcall sub_154100(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  bool v4; // zf
  unsigned int v8; // ebx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r8
  char v25; // al
  __int128 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // al
  char v31; // al
  __int64 v32; // rcx
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  _DWORD *v38; // rax
  _DWORD *v39; // rax
  char v40; // al
  __int64 v41; // [rsp+8h] [rbp-B8h]
  __int64 v42; // [rsp+8h] [rbp-B8h]
  __int64 v43; // [rsp+10h] [rbp-B0h]
  __int64 v44; // [rsp+18h] [rbp-A8h]
  __int64 v45; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v46; // [rsp+18h] [rbp-A8h]
  __int64 v47; // [rsp+20h] [rbp-A0h]
  __int64 v48; // [rsp+28h] [rbp-98h]
  __int64 v49; // [rsp+28h] [rbp-98h]
  __int64 v50; // [rsp+28h] [rbp-98h]
  __int64 v51; // [rsp+30h] [rbp-90h]
  __int64 v53; // [rsp+40h] [rbp-80h] BYREF
  __int64 v54; // [rsp+48h] [rbp-78h] BYREF
  _QWORD v55[2]; // [rsp+50h] [rbp-70h] BYREF
  _BYTE v56[16]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v57[10]; // [rsp+70h] [rbp-50h] BYREF

  v57[3] = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v4 = *(_BYTE *)(a1 + 32) == 4;
  v55[1] = 0;
  v55[0] = 0xFFFFFFFF00000000LL;
  if ( v4 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( *(_DWORD *)v10 != 21 )
      goto LABEL_4;
    v51 = v10 + 48;
    if ( sub_125B60((unsigned __int8 *)(v10 + 48), a1 + 48, 0) )
    {
      v51 = v10 + 32;
    }
    else if ( !sub_125B60((unsigned __int8 *)(v10 + 32), a1 + 48, 0) )
    {
      goto LABEL_4;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 48) != 14
      || !sub_125B60(*(unsigned __int8 **)(a1 + 56), *(_QWORD *)(a1 + 56) + 16LL, 0)
      || (*(_BYTE *)(a1 + 36) & 1) != 0 )
    {
      goto LABEL_4;
    }
    v47 = *(_QWORD *)(a1 + 56);
    sub_123A40((__int64)v56, (unsigned __int8 *)(a1 + 32), v18, v19);
    sub_123A40((__int64)v57, (unsigned __int8 *)(a1 + 32), v20, v21);
    if ( !(unsigned __int8)sub_1272B0((unsigned __int64)v56, a2, *(_DWORD *)(a1 + 36) / 2, 0) )
      goto LABEL_21;
    if ( !(unsigned __int8)sub_127850((unsigned __int64)v57, a2, *(_DWORD *)(a1 + 36) / 2, 0) )
      goto LABEL_21;
    *((_QWORD *)&v22 + 1) = v56;
    *(_QWORD *)&v22 = a3;
    v53 = a4;
    v23 = sub_129440(v22, (__int64)&v53, 0);
    v24 = v23;
    if ( !v23 )
      goto LABEL_21;
    if ( *(_DWORD *)v23 != 21 )
      goto LABEL_21;
    if ( v53 != a4 )
    {
      v48 = v23;
      v25 = sub_125B60((unsigned __int8 *)(v23 + 64), (__int64)v56, 0);
      v24 = v48;
      if ( !v25 )
        goto LABEL_21;
    }
    *((_QWORD *)&v26 + 1) = v57;
    *(_QWORD *)&v26 = a3;
    v49 = v24;
    v54 = a4;
    v27 = sub_129440(v26, (__int64)&v54, 0);
    v28 = v49;
    v29 = v27;
    if ( !v27 )
      goto LABEL_21;
    if ( *(_DWORD *)v27 != 21 )
      goto LABEL_21;
    if ( v54 != a4 )
    {
      v44 = v49;
      v50 = v27;
      v30 = sub_125B60((unsigned __int8 *)(v27 + 64), (__int64)v57, 0);
      v29 = v50;
      v28 = v44;
      if ( !v30 )
        goto LABEL_21;
    }
    v41 = v29;
    v45 = v28;
    v43 = v28 + 48;
    v31 = sub_125B60((unsigned __int8 *)(v28 + 48), v47, 0);
    v32 = v41;
    if ( v31 )
    {
      v43 = v45 + 32;
    }
    else
    {
      v40 = sub_125B60((unsigned __int8 *)(v45 + 32), v47, 0);
      v32 = v41;
      if ( !v40 )
      {
LABEL_21:
        sub_11CDA0((__int64)v57);
        sub_11CDA0((__int64)v56);
        goto LABEL_4;
      }
    }
    v42 = v32;
    v46 = (unsigned __int8 *)(v32 + 48);
    if ( sub_125B60((unsigned __int8 *)(v32 + 48), v47, 0) )
    {
      v46 = (unsigned __int8 *)(v42 + 32);
    }
    else if ( !sub_125B60((unsigned __int8 *)(v42 + 32), v47, 0) )
    {
      goto LABEL_21;
    }
    if ( v53 == a4 && a4 == v54 )
    {
      if ( !(unsigned __int8)sub_12CF30(a3[4].m128i_i64[0], v43, v46, (__int64)v55, 1, v33) )
        goto LABEL_21;
    }
    else
    {
      if ( !(unsigned __int8)sub_130BC0(a3, v53, v43, v54, (__int64)v46, 0) )
        goto LABEL_21;
      sub_B1520((__int64)a3, a1, (__int64)v55, v53, v43, v54, (__int64)v46, 0);
      if ( v54 && sub_122240(v53, *(_QWORD *)(v54 + 8), 0) )
        v34 = v54;
      else
        v34 = v53;
      if ( (unsigned __int8)sub_A9CB0((__int64)a3, (__int64)v55, v34, a4) )
        goto LABEL_21;
    }
    sub_11CDA0((__int64)v57);
    sub_11CDA0((__int64)v56);
    v51 = 0;
  }
  v57[0] = a4;
  v11 = sub_30D610(a2, a3, v57);
  v12 = v11;
  if ( !v11 || (unsigned __int8)sub_A9CB0((__int64)a3, v11, v57[0], a4) )
    goto LABEL_4;
  if ( *(_BYTE *)(a1 + 32) == 4 )
  {
    v35 = v51;
    if ( *(_BYTE *)v51 == 4 )
    {
      v39 = *(_DWORD **)(v51 + 8);
      if ( *v39 == 8 )
        v35 = (__int64)(v39 + 8);
    }
    v36 = v12;
    if ( *(_BYTE *)v12 == 4 )
    {
      v38 = *(_DWORD **)(v12 + 8);
      if ( *v38 == 8 )
        v36 = (__int64)(v38 + 8);
    }
    if ( !(unsigned __int8)sub_152EE0(a2, (unsigned __int64)v55, v35, v36, *(_QWORD *)(a1 + 24), a3, a4) )
    {
      if ( *(_BYTE *)v51 != 4 )
        goto LABEL_4;
      v37 = *(_QWORD *)(v51 + 8);
      if ( *(_DWORD *)v37 != 24 || !sub_125B60((unsigned __int8 *)(v37 + 32), v12, 0) )
        goto LABEL_4;
      sub_125180((__int64)v55, (unsigned __int8 *)v51);
    }
LABEL_14:
    v14 = sub_153040(a3[4].m128i_i64[0], (__int64)v55, *(_QWORD *)(a1 + 24));
    sub_11CDA0(a1 + 32);
    v15 = HIDWORD(v55[0]);
    *(_BYTE *)(a1 + 32) = 4;
    *(_QWORD *)(a1 + 40) = v14;
    *(_DWORD *)(a1 + 36) = v15;
    sub_11CDA0(a1 + 48);
    v16 = *(_DWORD *)(a1 + 68);
    v17 = 9;
    if ( *(_DWORD *)(a1 + 36) >= v16 )
    {
      v17 = 4;
      if ( *(_DWORD *)(a1 + 36) > v16 )
        v17 = 10;
    }
    *(_DWORD *)a1 = v17;
    v8 = 1;
    goto LABEL_5;
  }
  if ( sub_152650((__int64)v55, a2, v12, v13) )
    goto LABEL_14;
LABEL_4:
  v8 = 0;
LABEL_5:
  sub_11CDA0((__int64)v55);
  return v8;
}
