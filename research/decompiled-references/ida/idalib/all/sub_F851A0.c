__int64 __fastcall sub_F851A0(__int64 a1, char *a2)
{
  __int64 *v2; // rbx
  bool v3; // zf
  __int64 v4; // r9
  char **v5; // rax
  __int64 v6; // rbx
  void **v7; // r12
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // esi
  char *v14; // rdx
  __int64 v15; // rax
  unsigned int *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  _QWORD *v26; // rdx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 *v34; // rax
  char *v35; // r12
  int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 v42; // r14
  _QWORD *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdi
  __int64 v52; // r15
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  __int64 v63; // rdx
  _QWORD *v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // [rsp+0h] [rbp-68h]
  char *v68; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v69; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v70; // [rsp+18h] [rbp-50h] BYREF
  __m128 v71[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (__int64 *)(a1 + 120);
  v68 = a2;
  v3 = (unsigned __int8)sub_F7F280((__int64 *)(a1 + 120), (__int64 *)&v68, &v70) == 0;
  v5 = (char **)v70;
  if ( !v3 )
  {
    v6 = v70[1];
    v7 = (void **)(v70 + 1);
    if ( v6 )
      return v6;
    goto LABEL_9;
  }
  v9 = *(_DWORD *)(a1 + 128);
  v71[0].m128_u64[0] = (unsigned __int64)v70;
  v10 = (unsigned int)(v9 + 1);
  v11 = *(unsigned int *)(a1 + 136);
  v12 = (unsigned int)(4 * v10);
  v13 = 2 * v11;
  if ( (unsigned int)v12 >= 3 * (int)v11 )
    goto LABEL_36;
  if ( (int)v11 - *(_DWORD *)(a1 + 132) - (int)v10 <= (unsigned int)v11 >> 3 )
  {
    v13 = *(_DWORD *)(a1 + 136);
LABEL_36:
    sub_F84EC0((__int64)v2, v13, v10, v11, v12, v4);
    sub_F7F280(v2, (__int64 *)&v68, v71);
    LODWORD(v10) = *(_DWORD *)(a1 + 128) + 1;
    v5 = (char **)v71[0].m128_u64[0];
  }
  v3 = *v5 + 4096 == nullptr;
  *(_DWORD *)(a1 + 128) = v10;
  if ( !v3 )
    --*(_DWORD *)(a1 + 132);
  v14 = v68;
  v5[1] = nullptr;
  v7 = (void **)(v5 + 1);
  *v5 = v14;
LABEL_9:
  v15 = operator new(0x38u);
  *(_OWORD *)(v15 + 16) = 0;
  v6 = v15;
  v15 += 40;
  *(_OWORD *)(v15 - 8) = 0;
  *(_QWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 - 40) = 0;
  *(_QWORD *)(v15 - 32) = 0;
  *(_QWORD *)(v6 + 24) = v15;
  v16 = (unsigned int *)*v7;
  *(_QWORD *)(v6 + 32) = 0x200000000LL;
  *v7 = (void *)v6;
  if ( v16 )
  {
    sub_F7F340((__int64)(v16 + 6));
    operator delete(*(_QWORD *)v16, 16LL * v16[4], 8);
    operator delete(v16, 0x38u);
    v6 = (__int64)*v7;
  }
  sub_F85740(a1, 1, v68, v6 + 24);
  if ( *(_QWORD *)(sub_EDE580(*(_QWORD *)(a1 + 40), v68, v17, v18, v19, v20)[9] + 56LL) )
  {
    v25 = sub_F851A0(a1);
    v26 = (_QWORD *)(*(_QWORD *)v25 + 16LL * *(unsigned int *)(v25 + 16));
    sub_F80120(v71, v26, v26, v25, 1);
    v27 = v71[0].m128_u64[0];
    if ( *(_DWORD *)(v25 + 8) )
    {
      sub_F80120(v71, *(_QWORD **)v25, (_QWORD *)(*(_QWORD *)v25 + 16LL * *(unsigned int *)(v25 + 16)), v25, 0);
    }
    else
    {
      v64 = (_QWORD *)(*(_QWORD *)v25 + 16LL * *(unsigned int *)(v25 + 16));
      sub_F80120(v71, v64, v64, v25, 1);
    }
    v28 = v71[0].m128_u64[1];
    v29 = v71[0].m128_u64[0];
    while ( v27 != v29 )
    {
      if ( (unsigned __int8)sub_B9B690((__int64 *)v6, (__int64 *)v29, &v70) )
      {
        sub_E7EDF0(v71, v70, (_QWORD *)(*(_QWORD *)v6 + 16LL * *(unsigned int *)(v6 + 16)), v6, 1);
      }
      else
      {
        v65 = sub_F82E10(v6, (__int64 *)v29, v70, v30, v31, v32);
        *v65 = *(_QWORD *)v29;
        *((_DWORD *)v65 + 2) = *(_DWORD *)(v29 + 8);
        v66 = *(unsigned int *)(v6 + 16);
        v70 = v65;
        sub_E7EDF0(v71, v65, (_QWORD *)(*(_QWORD *)v6 + 16 * v66), v6, 1);
      }
      v21 = v29 + 16;
      if ( v28 == v29 + 16 )
      {
        v29 = v28;
      }
      else
      {
        v33 = *(_QWORD *)(v29 + 16);
        if ( v33 == -8192 || v33 == -4096 )
        {
          v34 = (__int64 *)(v29 + 32);
          do
          {
            v29 = (unsigned __int64)v34;
            if ( (__int64 *)v28 == v34 )
              break;
            v21 = *v34;
            v34 += 2;
          }
          while ( v21 == -4096 || v21 == -8192 );
        }
        else
        {
          v29 += 16LL;
        }
      }
    }
  }
  v35 = v68;
  v36 = *(_DWORD *)(v6 + 8) + 1;
  sub_7052B0((__int64 *)(*((_QWORD *)v68 + 13) + 96LL), *((_QWORD *)v68 + 13), v21, v22, v23, v24);
  v41 = *((_QWORD *)v35 + 16);
  if ( (*(_BYTE *)(v41 + 32) & 1) != 0 )
    v42 = sub_B969C0(v41);
  else
    v42 = *(_QWORD *)(v41 + 32);
  sub_7052B0((__int64 *)(*((_QWORD *)v35 + 13) + 96LL), *((_QWORD *)v35 + 13), v37, v38, v39, v40);
  v43 = *((_QWORD **)v35 + 13);
  v67 = v42 + 24LL * *(unsigned int *)(*((_QWORD *)v35 + 16) + 20LL);
  sub_7052B0(v43 + 12, (__int64)v43, v44, v45, v46, v47);
  v51 = *((_QWORD *)v35 + 16);
  if ( (*(_BYTE *)(v51 + 32) & 1) != 0 )
    v52 = sub_B969C0(v51);
  else
    v52 = *(_QWORD *)(v51 + 32);
  while ( v52 != v67 )
  {
    while ( 1 )
    {
      v53 = sub_F79C60(*(__int64 **)(v52 + 16), (__int64)v43, v48, v49, v50);
      v69 = sub_F63270(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v43, v54, v55, v56, v57);
      if ( !(unsigned __int8)sub_B9B690((__int64 *)v6, (__int64 *)&v69, &v70) )
        break;
      v43 = v70;
      v52 += 24;
      sub_E7EDF0(v71, v70, (_QWORD *)(*(_QWORD *)v6 + 16LL * *(unsigned int *)(v6 + 16)), v6, 1);
      if ( v67 == v52 )
        return v6;
    }
    v52 += 24;
    v61 = sub_F82E10(v6, (__int64 *)&v69, v70, v58, v59, v60);
    v62 = v69;
    *((_DWORD *)v61 + 2) = v36;
    v43 = v61;
    ++v36;
    *v61 = v62;
    v63 = *(unsigned int *)(v6 + 16);
    v70 = v61;
    sub_E7EDF0(v71, v61, (_QWORD *)(*(_QWORD *)v6 + 16 * v63), v6, 1);
  }
  return v6;
}
