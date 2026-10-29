void __fastcall sub_15B91E0(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 *v4; // r12
  __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 *v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rsi
  __m128 *v15; // rax
  unsigned __int64 v16; // r14
  __int64 *v17; // rcx
  _QWORD *v18; // r13
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // edx
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // r12
  _QWORD *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE *v35; // rbp
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // [rsp+0h] [rbp-178h]
  int v40; // [rsp+Ch] [rbp-16Ch]
  __int64 v41; // [rsp+20h] [rbp-158h] BYREF
  int v42; // [rsp+28h] [rbp-150h]
  __int64 v43; // [rsp+30h] [rbp-148h] BYREF
  void *v44; // [rsp+40h] [rbp-138h] BYREF
  __int64 v45; // [rsp+48h] [rbp-130h]
  _BYTE v46[48]; // [rsp+50h] [rbp-128h] BYREF
  void *ptr; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+88h] [rbp-F0h]
  _BYTE v49[48]; // [rsp+90h] [rbp-E8h] BYREF
  __m128i v50; // [rsp+C0h] [rbp-B8h] BYREF
  int v51; // [rsp+D0h] [rbp-A8h]
  int v52; // [rsp+D8h] [rbp-A0h]
  __int64 v53; // [rsp+E0h] [rbp-98h]
  __int64 v54; // [rsp+E8h] [rbp-90h]
  __int64 v55; // [rsp+F0h] [rbp-88h]
  __int64 v56; // [rsp+F8h] [rbp-80h]
  __int64 v57; // [rsp+100h] [rbp-78h]
  __int64 v58; // [rsp+108h] [rbp-70h]
  int v59; // [rsp+110h] [rbp-68h]
  __int64 v60; // [rsp+118h] [rbp-60h]
  __int64 v61; // [rsp+120h] [rbp-58h]
  __int64 v62; // [rsp+128h] [rbp-50h]
  __int64 v63; // [rsp+130h] [rbp-48h]

  v1 = a1[5];
  v2 = **a1;
  v44 = v46;
  v3 = *(_QWORD **)(v2 + 248);
  v45 = 0x600000000LL;
  v4 = &v1[3 * *((unsigned int *)a1 + 12)];
  if ( v4 == v1 )
  {
    v7 = 0;
    v8 = (__int64 *)v46;
  }
  else
  {
    v5 = v1 + 3;
    v6 = 6;
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
      {
        v38 = *(v5 - 2);
        if ( v6 < v7 + 1 )
        {
          sub_2237220(&v44, v46, v7 + 1, 8);
          v7 = (unsigned int)v45;
        }
        *((_QWORD *)v44 + v7) = v38;
        v7 = (unsigned int)(v45 + 1);
        LODWORD(v45) = v45 + 1;
      }
      else
      {
        *((_QWORD *)v44 + v7) = *(v5 - 2);
        v7 = (unsigned int)(v45 + 1);
        LODWORD(v45) = v45 + 1;
      }
      if ( v4 == v5 )
        break;
      v6 = HIDWORD(v45);
      v5 += 3;
    }
    v8 = (__int64 *)v44;
  }
  v50.m128i_i32[0] &= 0xF0000000;
  v9 = *((_BYTE *)a1 + 32) == 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v50.m128i_i64[1] = !v9;
  v10 = sub_A73610((__int64)v3, (__int64)a1[2], v8, v7, &v50, 0);
  v11 = sub_A81910(v3, v10, 0);
  v12 = (__int64)a1[1];
  v42 = 0;
  v13 = (__int64)v11;
  v41 = v12;
  sub_B85890(&v43, v12);
  v9 = *((_BYTE *)a1 + 33) == 0;
  ptr = nullptr;
  LODWORD(v48) = 0;
  v14 = (*a1)[1];
  if ( v9 )
  {
    v16 = sub_B97D00(v3, v14, 0, &v41, v10, v13, 0, 0, 0, 0, 0, (__int64)&ptr);
    a1[3] = (__int64 *)v16;
  }
  else
  {
    v15 = sub_B98D00(v3, v14, 0, &v41, v10, v13, 0, 0, 1u, 0, 0, 0, 0, (__int64)&ptr);
    a1[3] = (__int64 *)v15;
    v16 = (unsigned __int64)v15;
  }
  ptr = v49;
  v48 = 0x600000000LL;
  v17 = (__int64 *)(*(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
    v17 = (__int64 *)v17[4];
  v18 = nullptr;
  if ( *v17 & 7 | (*v17 >> 3) & 1 || *(_BYTE *)(*(_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
  {
    v19 = *((_DWORD *)a1 + 12);
    if ( v19 )
      goto LABEL_15;
LABEL_39:
    v36 = 0;
    v35 = v49;
    goto LABEL_29;
  }
  v19 = *((_DWORD *)a1 + 12);
  v18 = v17 + 1;
  if ( !v19 )
    goto LABEL_39;
LABEL_15:
  v20 = 0;
  v39 = (unsigned int)(v19 - 1);
  v40 = (*(_WORD *)(*(_QWORD *)(**a1 + 608) + 12LL) & 0x7F) << 13;
  while ( 1 )
  {
    v27 = (__int64)&a1[5][3 * v20];
    v28 = sub_A81910(v3, *(_QWORD *)(v27 + 8), 0);
    v29 = a1[3][2];
    if ( (v29 & 4) != 0 )
      v21 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v21 = v29 & 0xFFFFFFFFFFFFFFF8LL;
    v22 = sub_B74530((__int64)v3, v21, 0, 0, *(_QWORD *)v27, *(_QWORD *)(v27 + 8), (__int64)v28, 0, 0);
    v23 = *(_DWORD *)(v27 + 16);
    v24 = v22;
    if ( v23 )
    {
      v30 = sub_B30BE0((__int64)v3, 0, v23);
      sub_B8CC60(v24, v30, v31, v32, v33, v34);
    }
    *(_DWORD *)(v24 + 96) = v40 | *(_DWORD *)(v24 + 96) & 0xFFF01FFF;
    if ( v20 > 0xFE )
      sub_B74850(v24, v20);
    else
      *(_WORD *)(v24 + 98) = (16 * (unsigned __int8)v20) | *(_WORD *)(v24 + 98) & 0xF00F;
    v25 = (unsigned int)v48 + 1LL;
    if ( v25 > HIDWORD(v48) )
      sub_2237220(&ptr, v49, v25, 8);
    *((_QWORD *)ptr + (unsigned int)v48) = v24;
    v26 = v48 + 1;
    LODWORD(v48) = v48 + 1;
    v18[v20 + 2] = v24;
    if ( v20 == v39 )
      break;
    ++v20;
  }
  v16 = (unsigned __int64)a1[3];
  v35 = ptr;
  v36 = v26;
LABEL_29:
  v37 = sub_B8C330(v16);
  sub_B7C440(v16, v37, v35, v36);
  if ( ptr != v49 )
    free(ptr);
  if ( v44 != v46 )
    free(v44);
}
