void __fastcall sub_1A323B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 *v10; // rbp
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  bool v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r14
  __int64 v39; // rax
  _QWORD *v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // r14d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  _QWORD *v47; // r15
  _WORD *v48; // rdi
  _QWORD *v49; // rbp
  __int64 v50; // r9
  _QWORD *v51; // r14
  _QWORD *v52; // rbx
  _WORD *j; // rdi
  unsigned __int64 v54; // r14
  __int64 v55; // rax
  __int64 *v56; // rbx
  __int64 *i; // r12
  _QWORD *v58; // rdi
  __int64 v59; // rbp
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // [rsp+0h] [rbp-100h]
  __int64 *k; // [rsp+8h] [rbp-F8h]
  __int64 v64; // [rsp+8h] [rbp-F8h]
  __int64 v65; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v66[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v68[11]; // [rsp+58h] [rbp-A8h] BYREF
  char v69; // [rsp+B0h] [rbp-50h]
  unsigned int v70; // [rsp+B8h] [rbp-48h]
  char v71; // [rsp+BCh] [rbp-44h]

  v5 = *(unsigned int *)(a2 + 144);
  v6 = *(_QWORD *)(a2 + 1472) & 0xFFFFFFFFFFFFFFF0LL;
  if ( (_DWORD)v5 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)v6 + 17LL) & 4) != 0 )
      return;
    v8 = a2;
    v9 = (unsigned int)v5;
    if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
    {
      v47 = *(_QWORD **)(a2 + 136);
      v48 = *(_WORD **)(*v47 + 8LL);
      if ( v48 )
      {
        v49 = sub_1A2C7C0(v48, a2);
        if ( v49 )
        {
          v51 = &v47[v9];
          v52 = v47 + 1;
          if ( v51 == v47 + 1 )
          {
LABEL_49:
            if ( v49[5] || (v61 = v49[15], (v61 & 4) == 0) && (v61 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v54 = v49[6] & 0xFFFFFFFFFFFFFFF0LL;
              if ( !v49[6] )
                v54 = sub_A7AA70(a1[31], (__int64)v49, v5, a4, a5, v50);
              v55 = *(unsigned int *)(a2 + 144);
              v56 = *(__int64 **)(a2 + 136);
              *(_QWORD *)(a2 + 1472) = v54;
              for ( i = &v56[v55]; i != v56; ++v56 )
              {
                v58 = (_QWORD *)a1[31];
                v59 = *(_QWORD *)(*v56 + 8);
                v60 = *(_QWORD *)&byte_8[*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL];
                if ( (v60 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v60 | (unsigned __int8)*(_QWORD *)(v59 + 8)) & 7) != (*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | *(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 7 | v54 & 7) )
                {
                  if ( (*(_WORD *)v59 & 0x1FF) == 0x3C )
                  {
                    *(_QWORD *)(v59 + 16) = sub_C0A3E0(v58, v54, 27, *(_QWORD *)(v59 + 16), 0, 0, 0);
                  }
                  else
                  {
                    v64 = *v56;
                    *(_QWORD *)(v64 + 8) = sub_C0A3E0(v58, v54, 27, v59, 0, 0, 0);
                  }
                }
              }
              return;
            }
          }
          else
          {
            for ( j = *(_WORD **)(v47[1] + 8LL); j; j = *(_WORD **)(*v52 + 8LL) )
            {
              if ( v49 != sub_1A2C7C0(j, a2) )
                break;
              if ( v51 == ++v52 )
                goto LABEL_49;
            }
          }
        }
        v9 = *(unsigned int *)(a2 + 144);
      }
    }
    if ( v9 != 1 )
    {
      v10 = *(__int64 **)(a2 + 136);
      for ( k = &v10[v9]; k != v10; ++v10 )
      {
        v15 = *v10;
        v16 = *(_QWORD *)(*v10 + 8);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 8);
        else
          v17 = *(_QWORD *)(a1[31] + 18632);
        v18 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v18 + 8) & 0xF) != 0 )
          v11 = (__int64 *)(sub_F64F00(v17, a2, v5, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
        else
          v11 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
        a2 = (__int64)v11;
        v62 = sub_A712D0(a1[31], *(_QWORD *)(v8 + 1472));
        if ( sub_A712D0(a1[31], (__int64)v11) == v62 )
        {
          LOWORD(v41) = sub_F6A600(*v11, (__int64)v11, v12, v13, v14);
          v42 = v41;
          LOWORD(v46) = sub_F6A600(
                          *(_QWORD *)(*(_QWORD *)(v8 + 1472) & 0xFFFFFFFFFFFFFFF0LL),
                          (__int64)v11,
                          v43,
                          v44,
                          v45);
          a4 = v46;
          LOWORD(a4) = BYTE1(v46);
          if ( BYTE1(v46) )
          {
            a4 = v42;
            LOWORD(a4) = BYTE1(v42);
            if ( !BYTE1(v42) || (unsigned __int8)v46 < (unsigned __int8)v42 )
              *(_QWORD *)(v8 + 1472) = v11;
          }
          continue;
        }
        a2 = (__int64)(a1 + 1);
        sub_168B9F0((__int64)v66, a1 + 1, *(_DWORD *)(v15 + 4), 0x14B2u, 0);
        if ( v69 )
        {
          a2 = (__int64)v11;
          sub_AE9DF0(v68, (__int64)v11, 8u);
          if ( v69 )
            goto LABEL_22;
        }
        else
        {
          if ( !v71 )
            goto LABEL_11;
          v24 = sub_168B9E0(v66);
          v25 = v67;
          if ( v67 )
            v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
          v65 = v25;
          v26 = sub_1587BC0(v24, &v65, v20, v21, v22, v23);
          a2 = (__int64)v11;
          sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v70 + 8), (__int64)v11, 8u);
          if ( v69 )
          {
LABEL_22:
            a2 = *(_QWORD *)(v8 + 1472);
            sub_AE9DF0(v68, a2, 8u);
LABEL_23:
            v19 = (*(_BYTE *)(v8 + 8) & 7) == 2;
            if ( v69 )
            {
              a2 = v19;
              sub_AE9DF0(v68, v19, 2u);
            }
            else if ( v71 )
            {
              v38 = sub_168B9E0(v66);
              v39 = v67;
              if ( v67 )
                v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
              v65 = v39;
              v40 = sub_1587BC0(v38, &v65, v34, v35, v36, v37);
              a2 = v19;
              sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v70 + 8), v19, 2u);
            }
            goto LABEL_11;
          }
        }
        if ( v71 )
        {
          v29 = sub_168B9E0(v66);
          v32 = v67;
          if ( v67 )
            v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
          v65 = v32;
          v33 = sub_1587BC0(v29, &v65, v27, v28, v30, v31);
          a2 = *(_QWORD *)(v8 + 1472);
          sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v70 + 8), a2, 8u);
          goto LABEL_23;
        }
LABEL_11:
        sub_15F7200(v66);
      }
    }
  }
  else if ( !v6 )
  {
    *(_QWORD *)(a2 + 1472) = *(_QWORD *)(a1[31] + 18632);
  }
}
