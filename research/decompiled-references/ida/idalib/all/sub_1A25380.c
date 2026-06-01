void __fastcall sub_1A25380(
        _BYTE *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9)
{
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r10
  _WORD *v17; // r12
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  _DWORD *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  char v25; // cl
  unsigned __int8 v26; // al
  char v27; // si
  bool v28; // zf
  __int64 *v29; // r12
  int v30; // r13d
  unsigned int v31; // eax
  _BYTE *v32; // rdi
  __int32 v33; // eax
  __int64 v34; // rax
  __int64 *v35; // r15
  unsigned int v36; // eax
  __int64 v37; // r15
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 *v40; // r14
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r14
  unsigned __int8 v44; // si
  __int64 v45; // [rsp+0h] [rbp-E8h]
  __int64 v46; // [rsp+0h] [rbp-E8h]
  __int64 v47; // [rsp+8h] [rbp-E0h] BYREF
  bool v48; // [rsp+17h] [rbp-D1h] BYREF
  __int64 v49; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v50[200]; // [rsp+20h] [rbp-C8h] BYREF

  v12 = *(_QWORD *)(a3 + 24);
  v13 = *a5;
  v47 = a4;
  v14 = *(_QWORD *)(a3 + 16);
  if ( v13 >= (unsigned int)((v12 - v14) >> 3) )
  {
    v25 = a1[9];
    v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL);
    v27 = v26 & 8;
    if ( !v25 )
    {
      if ( !v27 )
      {
LABEL_27:
        a1[8] = v25;
        *a5 = v13 + 1;
        ++*a9;
        return;
      }
      v28 = !sub_F58260(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL));
      v29 = (__int64 *)(*(_QWORD *)a1 + 8LL);
      v30 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0);
      if ( v28 )
      {
        v31 = sub_BFB1C0(a3);
        sub_168B9F0((__int64)v50, v29, v31, (v30 & 0xFFFFF421) + 6764, 0);
        v32 = v50;
        v49 = sub_EEC8C0(a3, (__int64)v29, *(double *)a7.m128_u64);
      }
      else
      {
        v39 = sub_BFB1C0(a3);
        sub_168B9F0((__int64)v50, v29, v39, (v30 & 0xFFFFF421) + 6765, 0);
        v32 = (_BYTE *)sub_1605D30((__int64)v50, &v47);
        v49 = sub_EEC8C0(a3, (__int64)&v47, *(double *)a7.m128_u64);
      }
      sub_1587DB0((__int64)v32, &v49);
      sub_15F7200(v50);
      v13 = *a5;
      v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL);
      v27 = v26 & 8;
    }
    v25 = 0;
    if ( v27 )
      v25 = ((v26 >> 4) ^ 1) & 1;
    goto LABEL_27;
  }
  v15 = a2;
  v17 = *(_WORD **)(v14 + 8LL * v13);
  v18 = *v17 & 0x1FF;
  if ( v18 == 53 )
  {
    if ( !a1[9] )
    {
      v35 = (__int64 *)(*(_QWORD *)a1 + 8LL);
      v36 = sub_BFB1C0(*(_QWORD *)(v14 + 8LL * v13));
      sub_168B9F0((__int64)v50, v35, v36, 0x15E4u, 0);
      v48 = sub_F58260(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL));
      v37 = sub_1588420((__int64)v50, (unsigned __int8 *)&v48);
      v49 = sub_EEC8C0((unsigned __int64)v17, (__int64)&v48, *(double *)a7.m128_u64);
      sub_1587DB0(v37, &v49);
      sub_15F7200(v50);
      LODWORD(v15) = a2;
    }
    sub_1A25380((_DWORD)a1, v15, (_DWORD)v17, v47, (_DWORD)a5, a6, (__int64)a9);
    return;
  }
  if ( v18 != 68 )
  {
    if ( v18 == 66 )
    {
      v19 = a2;
      v45 = a2;
      a2 = (__int64)v17;
      v20 = sub_1A0A810((__int64)a1, (__int64)v17, v19);
      v15 = v45;
      v17 = (_WORD *)v20;
    }
    v21 = *(_QWORD *)a1;
    if ( a1[9] )
    {
      if ( !(unsigned __int8)sub_1A19380(*(_QWORD *)a1, v15, (__int64)v17, a7, a8) )
        goto LABEL_12;
      v34 = sub_1A0A760(*(_QWORD *)a1, (__int64)(a1 + 24));
    }
    else
    {
      v46 = v15;
      v33 = sub_EEB7E0((unsigned __int64)v17, a2, *(double *)a7.m128_u64);
      v34 = sub_1A24E20(v21, v46, v33, (__int64)v17, 1u, 0, a7, a8);
    }
    if ( v34 != 1 )
    {
      v22 = (_DWORD *)(v34 & 0xFFFFFFFFFFFFFFFELL);
      if ( (_WORD *)(v34 & 0xFFFFFFFFFFFFFFFELL) == v17 )
      {
        v22 = v17;
      }
      else if ( !a1[9] )
      {
        if ( *((_QWORD *)a1 + 5) )
        {
          if ( !a6 )
          {
LABEL_16:
            v23 = *((_QWORD *)a1 + 4);
            if ( v23 )
            {
              v24 = *(unsigned int *)(v23 + 8);
              if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 12) )
              {
                sub_2237220(v23, v23 + 16, v24 + 1, 8);
                v24 = *(unsigned int *)(v23 + 8);
              }
              *(_QWORD *)(*(_QWORD *)v23 + 8 * v24) = v47;
              ++*(_DWORD *)(v23 + 8);
            }
            return;
          }
          goto LABEL_14;
        }
        v38 = *a5;
        *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8 * v38) = v22;
        if ( !v22 )
        {
          if ( !a6 )
          {
LABEL_36:
            *a5 = v38 + 1;
            goto LABEL_16;
          }
          goto LABEL_14;
        }
        v44 = ((*v22 >> 14) | (*(_DWORD *)a3 >> 14)) & 0x1F;
        *(_BYTE *)(a3 + 1) = (v44 << 6) | *(_BYTE *)(a3 + 1) & 0x3F;
        *(_BYTE *)(a3 + 2) = *(_BYTE *)(a3 + 2) & 0xF8 | (v44 >> 2);
      }
LABEL_13:
      if ( !a6 )
      {
LABEL_15:
        if ( *((_QWORD *)a1 + 5) )
          goto LABEL_16;
        LODWORD(v38) = *a5;
        goto LABEL_36;
      }
LABEL_14:
      sub_1A11640(a1, a6, a9, v22, *(double *)a7.m128_u64);
      goto LABEL_15;
    }
LABEL_12:
    a1[8] = 1;
    v22 = nullptr;
    goto LABEL_13;
  }
  if ( !a1[9] )
  {
    v40 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    v41 = sub_EEB7E0(*(_QWORD *)(v14 + 8LL * v13), a2, *(double *)a7.m128_u64);
    sub_168B9F0((__int64)v50, v40, v41, 0xE5Bu, 0);
    v48 = sub_F58260(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL));
    v42 = sub_1588420((__int64)v50, (unsigned __int8 *)&v48);
    v43 = sub_1605D30(v42, &v47);
    v49 = sub_EEC8C0((unsigned __int64)v17, (__int64)&v47, *(double *)a7.m128_u64);
    sub_1587DB0(v43, &v49);
    sub_15F7200(v50);
    v13 = *a5;
  }
  a1[8] = 1;
  *a5 = v13 + 1;
  ++*a9;
}
