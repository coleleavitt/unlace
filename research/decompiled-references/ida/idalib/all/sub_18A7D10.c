unsigned __int64 __fastcall sub_18A7D10(
        __int64 *a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 **a5,
        __m128 a6,
        __m128i a7,
        __int64 a8,
        int a9)
{
  __int64 *v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int8 v15; // al
  __int64 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r15
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r14
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  unsigned int v44; // eax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  __int64 v48; // rax
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 v52; // [rsp+10h] [rbp-168h]
  _QWORD *v53; // [rsp+18h] [rbp-160h]
  __int64 v54; // [rsp+48h] [rbp-130h]
  __int64 v55; // [rsp+50h] [rbp-128h] BYREF
  __int64 v56; // [rsp+58h] [rbp-120h] BYREF
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  __int64 v58; // [rsp+68h] [rbp-110h]
  _BYTE v59[64]; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v60[200]; // [rsp+B0h] [rbp-C8h] BYREF

  v12 = (__int64 *)v59;
  v53 = (_QWORD *)sub_168B6C0((__int64)a1);
  ptr = v59;
  v58 = 0x800000000LL;
  if ( a9 )
  {
    v52 = (__int64)&a3[(unsigned int)(a9 - 1) + 1];
    while ( 1 )
    {
      v31 = *a1;
      v32 = sub_1A3A250(*a1);
      v18 = *(_QWORD *)(*a1 + 192);
      v33 = sub_1A5B7C0(v31, v18, *a3, *a4, 0, v32);
      v34 = v33;
      if ( !v33 )
        break;
      v15 = *(_BYTE *)(v33 + 28) & 0x7F;
      if ( v15 == 20 )
      {
        v22 = *a3;
        goto LABEL_17;
      }
      if ( (unsigned int)v15 - 64 > 2
        || ((v16 = (__int64 *)(*(_QWORD *)(v34 + 80) & 0xFFFFFFFFFFFFFFF8LL), (*(_QWORD *)(v34 + 80) & 4) != 0)
          ? (v17 = v16[1])
          : (v17 = *v16),
            (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                       + 16LL)
                            - 35) > 1u) )
      {
        sub_168B9F0((__int64)v60, a1, a2, 0x1328u, 0);
        sub_169D880((__int64)v60, a3);
        sub_15F7200(v60);
        v18 = (__int64)a1;
        sub_168B9F0((__int64)v60, a1, *(_DWORD *)(v34 + 24), 0x71u, 0);
        sub_15F7200(v60);
        v22 = *a3;
        if ( (*(_BYTE *)(v34 + 28) & 0x7F) != 0x14 )
          goto LABEL_9;
LABEL_17:
        v35 = *(_QWORD *)(v34 + 40);
        v55 = v22;
        if ( (v35 & 7) != 0 )
        {
          v36 = 0;
          if ( v22 )
          {
LABEL_19:
            v55 = v36;
            goto LABEL_20;
          }
          v37 = *a5;
          if ( !*a5 )
            goto LABEL_30;
LABEL_21:
          v38 = sub_BAE550((__int64 *)v34, v18, v19, v22, v20, v21);
          if ( v38 )
          {
            if ( (unsigned __int8)sub_18A64C0(*a1, v38, (__int64)v37, 0, v41, v42, a6, a7) )
              v37 = nullptr;
          }
          else
          {
            v48 = *(_QWORD *)(v34 + 120);
            if ( !v48 )
            {
              sub_A794E0((__int64 *)(*(_QWORD *)(v34 + 96) + 88LL), *(_QWORD *)(v34 + 96), v39, v40, v41, v42);
              v48 = *(_QWORD *)(v34 + 120);
            }
            v49 = (__int64 *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v49 )
            {
              v54 = *v49;
              if ( *v49 )
              {
                sub_168B9F0((__int64)v60, a1, *a4, 0x1117u, 0);
                v50 = sub_169D880((__int64)v60, &v55);
                v56 = *v37;
                sub_1587DB0(v50, &v56);
                sub_15F7200(v60);
                sub_168B9F0((__int64)v60, a1, *(_DWORD *)(v54 + 24), 0x170Bu, 0);
                sub_169D880((__int64)v60, &v55);
                v37 = nullptr;
                sub_15F7200(v60);
              }
            }
          }
          v43 = sub_BAF1C0(v53, *(_QWORD *)(*a1 + 544), a2, v55, (__int64)v37, v34, *a4, 0);
        }
        else
        {
          v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v22 != v36 )
            goto LABEL_19;
LABEL_20:
          v37 = *a5;
          if ( *a5 )
            goto LABEL_21;
LABEL_30:
          v43 = sub_BAF1C0(v53, *(_QWORD *)(*a1 + 544), a2, v36, 0, v34, *a4, 0);
        }
        v27 = v43;
        v44 = *a4;
        *(_DWORD *)(v27 + 80) = *a4;
        *(_DWORD *)(v27 + 84) = v44;
        sub_17C44D0((__int64 *)*a1, (__int64 *)v27, v34, 1u);
LABEL_10:
        sub_17B7670(*a1, v27, *(_QWORD *)(*a1 + 192), 1, v25, v26);
        sub_18954B0(a1, v27);
        v29 = (unsigned int)v58;
        v13 = HIDWORD(v58);
        v30 = (unsigned int)v58 + 1LL;
        if ( v30 > HIDWORD(v58) )
        {
          sub_2237220(&ptr, v59, v30, 8);
          v29 = (unsigned int)v58;
        }
        *((_QWORD *)ptr + v29) = v27;
        LODWORD(v58) = v58 + 1;
        goto LABEL_13;
      }
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
        break;
      sub_168B9F0((__int64)v60, a1, a2, 0x1B1Du, 0);
      sub_169D880((__int64)v60, a3);
      sub_15F7200(v60);
      sub_168B9F0((__int64)v60, a1, *(_DWORD *)(v34 + 24), 0x71u, 0);
      sub_15F7200(v60);
LABEL_13:
      ++a3;
      ++a4;
      ++a5;
      if ( a3 == (__int64 *)v52 )
      {
        v12 = (__int64 *)ptr;
        v45 = (unsigned int)v58;
        goto LABEL_33;
      }
    }
    v22 = *a3;
LABEL_9:
    v23 = *a1;
    v24 = (__int64)*a5;
    v55 = v22;
    v27 = sub_BAF1C0(v53, *(_QWORD *)(v23 + 544), a2, v22, v24, 0, *a4, 0);
    v28 = *a4;
    *(_DWORD *)(v27 + 80) = *a4;
    *(_DWORD *)(v27 + 84) = v28;
    goto LABEL_10;
  }
  v45 = 0;
LABEL_33:
  v46 = sub_17B2ED0(*a1, v12, v45, v13, v14, a6);
  if ( ptr != v59 )
    free(ptr);
  return v46;
}
