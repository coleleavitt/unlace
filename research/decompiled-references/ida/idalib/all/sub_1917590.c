__int64 __fastcall sub_1917590(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rax
  signed __int64 v20; // r13
  __int64 v21; // r15
  unsigned __int64 v22; // rdx
  void *v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  signed __int64 v28; // r13
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // r12
  unsigned int v32; // eax
  __int64 v33; // [rsp+8h] [rbp-150h]
  __int64 v34; // [rsp+8h] [rbp-150h]
  __int64 v35; // [rsp+8h] [rbp-150h]
  unsigned int v36; // [rsp+10h] [rbp-148h]
  int v37; // [rsp+18h] [rbp-140h]
  unsigned int v38; // [rsp+1Ch] [rbp-13Ch]
  __int64 *src; // [rsp+20h] [rbp-138h]
  int v40; // [rsp+28h] [rbp-130h]
  unsigned int v41; // [rsp+2Ch] [rbp-12Ch]
  __int64 v42; // [rsp+38h] [rbp-120h] BYREF
  void *ptr; // [rsp+40h] [rbp-118h] BYREF
  __int64 v44; // [rsp+48h] [rbp-110h]
  _BYTE v45[64]; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 v46[25]; // [rsp+90h] [rbp-C8h] BYREF

  v38 = *(_DWORD *)(a4 + 20);
  v37 = a3;
  v40 = *(_DWORD *)(a4 + 16);
  if ( (*(_WORD *)a4 & 0x1FF) == 0x13 )
  {
    src = (__int64 *)(a4 + 24);
    v36 = *(_DWORD *)(a4 + 4);
  }
  else
  {
    v36 = 1;
    v42 = *(_QWORD *)(a4 + 24);
    src = &v42;
  }
  v9 = *a5;
  ptr = v45;
  v44 = 0x800000000LL;
  v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57 > 1 )
    v10 = sub_F63050(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v33 = *(_QWORD *)(v10 + 32);
  v41 = *(_DWORD *)(v10 + 20);
  v11 = sub_EEC8C0(a4, a2, *(double *)a6.m128_u64);
  if ( (unsigned __int8)sub_16AAE20(a1, v11, v9, v33) )
    goto LABEL_6;
  if ( sub_16A95D0(a1, v10) )
  {
    if ( v36 != 1 )
    {
      if ( v36 < v41 )
      {
        v18 = sub_C00A40(a4, v10, v41, v15, v16);
        sub_168B9F0((__int64)v46, (__int64 *)(a1 + 8), v18, 0xF89u, 0);
        sub_15F7200(v46);
LABEL_6:
        v12 = 1;
        goto LABEL_7;
      }
      v27 = (unsigned int)v44;
      v28 = 8LL * v36;
      v29 = (unsigned int)v44 + (v28 >> 3);
      if ( v29 > HIDWORD(v44) )
      {
        sub_2237220(&ptr, v45, v29, 8);
        v27 = (unsigned int)v44;
      }
      if ( v28 )
      {
        memcpy((char *)ptr + 8 * v27, src, v28);
        LODWORD(v27) = v44;
      }
      v30 = (v28 >> 3) + v27;
      v23 = ptr;
      v24 = v30;
      LODWORD(v44) = v30;
      goto LABEL_23;
    }
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 47LL) & 0x20) == 0 || (*(_BYTE *)(v10 + 18) & 0x78) != 0 || v36 != 1 )
  {
    v19 = (unsigned int)v44;
    v20 = 8LL * v36;
    v21 = v20 >> 3;
    v22 = (v20 >> 3) + (unsigned int)v44;
    if ( v22 > HIDWORD(v44) )
    {
      sub_2237220(&ptr, v45, v22, 8);
      v19 = (unsigned int)v44;
    }
    v23 = ptr;
    if ( v20 )
    {
      memcpy((char *)ptr + 8 * v19, src, v20);
      v23 = ptr;
      LODWORD(v19) = v44;
    }
    LODWORD(v44) = v21 + v19;
    v24 = (unsigned int)(v21 + v19);
LABEL_23:
    v34 = (__int64)v23;
    v25 = sub_EEE9A0(64, *(_QWORD **)(a1 + 248), 8u);
    v26 = v34;
    v35 = v25;
    sub_C0B340(v25, *(_QWORD **)(a1 + 248), v40, v26, v24, v38);
    *(_QWORD *)(v35 + 8) = v9;
    v12 = sub_18D9980(a1, (unsigned int)a2, a5, v37, (unsigned __int16 *)v35, *(double *)a6.m128_u64);
    goto LABEL_7;
  }
  v31 = *(_QWORD *)(v10 + 32);
  v46[0] = sub_19146F0(a1, (_QWORD *)*src, v14, v15, v16, v17, a6, a7);
  if ( v46[0] == 1 )
    goto LABEL_6;
  v32 = sub_18D1110((_QWORD *)a1, v46, v31, *(double *)a6.m128_u64, *(double *)a7.m128_u64);
  v46[0] = sub_160A600(
             a1,
             v46[0] & 0xFFFFFFFFFFFFFFFELL,
             v31,
             v32,
             0,
             0,
             *(double *)a6.m128_u64,
             *(double *)a7.m128_u64,
             0);
  v12 = sub_16B2590(a1, a2, a5, v37, (_WORD *)(v46[0] & 0xFFFFFFFFFFFFFFFELL), a6, *(double *)a7.m128_u64);
LABEL_7:
  if ( ptr != v45 )
    free(ptr);
  return v12;
}
