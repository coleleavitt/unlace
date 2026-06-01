unsigned __int64 __fastcall sub_1E48870(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // r13
  __int64 v15; // r9
  int v16; // r15d
  int v17; // r8d
  void **v18; // rdi
  int v19; // r12d
  int v20; // esi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void **v34; // rax
  int *v35; // r15
  int v36; // r14d
  void **v37; // r12
  int v38; // eax
  __int64 v39; // r13
  int v40; // ebx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // rdi
  unsigned __int8 v50; // al
  unsigned int v51; // ecx
  int v52; // eax
  void *v53; // rax
  unsigned __int64 (__fastcall *v54)(__int64); // rax
  int v55; // eax
  unsigned __int64 v56; // [rsp+10h] [rbp-D8h]
  int v57; // [rsp+10h] [rbp-D8h]
  int v58; // [rsp+10h] [rbp-D8h]
  int v59; // [rsp+10h] [rbp-D8h]
  int v60; // [rsp+10h] [rbp-D8h]
  int v61; // [rsp+20h] [rbp-C8h]
  int v62; // [rsp+20h] [rbp-C8h]
  int v63; // [rsp+20h] [rbp-C8h]
  int v64; // [rsp+20h] [rbp-C8h]
  int v65; // [rsp+28h] [rbp-C0h]
  char v66; // [rsp+3Ah] [rbp-AEh] BYREF
  char v67; // [rsp+3Bh] [rbp-ADh] BYREF
  int v68; // [rsp+3Ch] [rbp-ACh] BYREF
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+48h] [rbp-A0h]
  _BYTE v71[32]; // [rsp+50h] [rbp-98h] BYREF
  void *v72; // [rsp+70h] [rbp-78h] BYREF
  __int64 v73; // [rsp+78h] [rbp-70h]
  _BYTE v74[104]; // [rsp+80h] [rbp-68h] BYREF

  v6 = *(_QWORD *)(a2 + 40);
  if ( !v6 )
  {
    v8 = 0;
LABEL_21:
    v23 = sub_1DBB390((__int64)a1, v8);
    if ( !v23 )
      return 0;
    v24 = *(_DWORD *)(a2 + 24);
    v25 = a1[3];
    v26 = v23 & 0xFFFFFFFFFFFFFFFBLL;
    v27 = *(_QWORD **)(*a1 + 248);
LABEL_23:
    v28 = sub_BA5C60(v27, v25, v24, v26, *(_DWORD *)(a2 + 56), 0, nullptr, 0);
    *(_BYTE *)(v28 + 29) &= 0x9Fu;
    v22 = v28;
    v29 = *(_BYTE *)(a2 + 64) & 1;
    *(_BYTE *)(v28 + 64) = v29 | *(_BYTE *)(v28 + 64) & 0xFE;
    sub_B94AD0((__m128i *)a1[3], v28, v29, v30, v31, v32);
    return v22;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 4) == 0 || !v7 )
    goto LABEL_21;
  v9 = *a1;
  if ( (*(_BYTE *)(a2 + 64) & 1) != 0 )
  {
LABEL_26:
    v24 = *(_DWORD *)(a2 + 24);
    v25 = a1[3];
    v26 = v7 | 4;
    v27 = *(_QWORD **)(v9 + 248);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a2 + 60) )
  {
    ptr = v71;
    v70 = 0x200000000LL;
    v10 = *(_QWORD *)v7;
    sub_1E4C9B0(v9, *(_QWORD *)v7, v7 + 8, &ptr);
    v12 = *(_QWORD *)(a2 + 40);
    v13 = *(_DWORD *)(a2 + 60);
    v66 = 1;
    v14 = *a1;
    v15 = a1[4];
    v67 = 0;
    v68 = 0;
    v16 = (int)ptr;
    v17 = v70;
    if ( !v12 )
      goto LABEL_27;
    if ( (v12 & 4) != 0 )
    {
      v18 = (void **)(v12 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 )
      {
        if ( (*(_DWORD *)(a2 + 64) & 0xFFFFFFFE) != 0 )
          v19 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 8LL);
        else
          v19 = *(_DWORD *)(a2 + 56);
        v20 = v13;
        if ( !v13 )
        {
          v53 = *v18;
          v62 = v70;
          v73 = (__int64)(v18 + 1);
          v58 = v15;
          v72 = v53;
          sub_F6CE20((__int64 *)&v72);
          v20 = *(_DWORD *)(a2 + 60);
          LODWORD(v15) = v58;
          v17 = v62;
        }
LABEL_13:
        if ( !(unsigned __int8)sub_1E54D70(v14, v20, v19, v16, v17, v15, (__int64)&v66, (__int64)&v67, (__int64)&v68) )
        {
          if ( !v66 )
          {
            if ( ptr != v71 )
              free(ptr);
            v9 = *a1;
            goto LABEL_18;
          }
          v72 = v74;
          v73 = 0x600000000LL;
          if ( v68 != 1 )
          {
            v34 = (void **)v7;
            v35 = (int *)a2;
            v36 = 0;
            v37 = v34;
            while ( 1 )
            {
              v39 = *a1;
              ++v36;
              v40 = *(_DWORD *)(*a1 + 12632);
              *(_DWORD *)(*a1 + 12632) = v36;
              v41 = (unsigned __int64)sub_1DD4AE0(*a1, v37, a1[4], v35[15], 0, 0, a3, a4);
              if ( !v41 )
                break;
              v42 = sub_BA5C60(*(_QWORD **)(*a1 + 248), a1[3], v35[6], v41 | 4, v35[14], 0, nullptr, 0);
              *(_BYTE *)(v42 + 29) &= 0x9Fu;
              v56 = v42;
              sub_B94AD0((__m128i *)a1[3], v42, v43, v44, v45, v46);
              v47 = (unsigned int)v73 + 1LL;
              if ( v47 <= HIDWORD(v73) )
              {
                *((_QWORD *)v72 + (unsigned int)v73) = v56;
                LODWORD(v73) = v73 + 1;
                v38 = v68 - 1;
                *(_DWORD *)(v39 + 12632) = v40;
                if ( v38 == v36 )
                  goto LABEL_35;
              }
              else
              {
                sub_2237220(&v72, v74, v47, 8);
                *((_QWORD *)v72 + (unsigned int)v73) = v56;
                LODWORD(v73) = v73 + 1;
                v48 = v68 - 1;
                *(_DWORD *)(v39 + 12632) = v40;
                if ( v36 == v48 )
                  goto LABEL_35;
              }
            }
            *(_DWORD *)(v39 + 12632) = v40;
LABEL_35:
            if ( v72 != v74 )
              free(v72);
          }
        }
        if ( ptr != v71 )
          free(ptr);
        return 0;
      }
LABEL_27:
      if ( v13 )
      {
LABEL_28:
        v19 = *(_DWORD *)(a2 + 56);
        v20 = v13;
        goto LABEL_13;
      }
      goto LABEL_44;
    }
    if ( v13 )
      goto LABEL_28;
    v49 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v49 )
    {
LABEL_44:
      v19 = *(_DWORD *)(a2 + 56);
      v20 = 0;
      goto LABEL_13;
    }
    v50 = *(_BYTE *)(v49 + 28) & 0x7F;
    v51 = v50 - 34;
    if ( v51 > 5 )
    {
      if ( v50 == 71 )
      {
        v61 = v70;
        v57 = v15;
        v54 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL);
        if ( v54 == sub_BA57F0 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64 (__fastcall *)(__int64), _QWORD))(**(_QWORD **)(v49 + 48) + 16LL))(
            *(_QWORD *)(v49 + 48),
            v10,
            v11,
            sub_BA57F0,
            (unsigned int)v70);
          v20 = *(_DWORD *)(a2 + 60);
          LODWORD(v15) = v57;
          v17 = v61;
          v19 = *(_DWORD *)(*(_QWORD *)(v49 + 56) + 8LL);
          goto LABEL_13;
        }
        v52 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, unsigned __int64 (__fastcall *)(__int64), _QWORD))v54)(
                v49,
                v10,
                v11,
                sub_BA57F0,
                (unsigned int)v70);
LABEL_43:
        v19 = v52;
        v20 = *(_DWORD *)(a2 + 60);
        LODWORD(v15) = v57;
        v17 = v61;
        goto LABEL_13;
      }
      if ( v50 != 72 )
      {
        if ( v51 > 0x11
          || (v65 = v70,
              v63 = v15,
              v59 = *(_DWORD *)(v49 + 64),
              v55 = sub_B73090(v49),
              LODWORD(v15) = v63,
              v17 = v65,
              v59 == v55) )
        {
          v64 = v17;
          v60 = v15;
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v49 + 16LL))(v49);
          v19 = *(_DWORD *)(a2 + 56);
          v20 = *(_DWORD *)(a2 + 60);
          LODWORD(v15) = v60;
          v17 = v64;
          goto LABEL_13;
        }
      }
    }
    v61 = v17;
    v57 = v15;
    v52 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v49 + 16LL))(v49);
    goto LABEL_43;
  }
LABEL_18:
  v21 = (unsigned __int64)sub_1DD4AE0(v9, (void **)v7, a1[4], *(_DWORD *)(a2 + 24), 0, 0, a3, a4);
  if ( v21 )
  {
    v9 = *a1;
    v7 = v21 & 0xFFFFFFFFFFFFFFFBLL;
    goto LABEL_26;
  }
  return 0;
}
