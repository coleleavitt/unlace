__int64 __fastcall sub_EA1F40(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  bool v30; // r10
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // edx
  unsigned __int64 v37; // rax
  __int64 v38; // rbp
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int8 *v43; // rbp
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // r9
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r14
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int8 *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  bool v69; // [rsp+0h] [rbp-178h]
  bool v70; // [rsp+0h] [rbp-178h]
  __int64 v71; // [rsp+0h] [rbp-178h]
  int v72; // [rsp+8h] [rbp-170h]
  int v73; // [rsp+8h] [rbp-170h]
  int v74; // [rsp+14h] [rbp-164h]
  __int64 v75; // [rsp+18h] [rbp-160h]
  void **v76; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v77; // [rsp+38h] [rbp-140h]
  _QWORD v78[4]; // [rsp+40h] [rbp-138h] BYREF
  void *v79[2]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v80; // [rsp+70h] [rbp-108h] BYREF
  void *v81[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v82; // [rsp+90h] [rbp-E8h] BYREF
  unsigned __int8 *v83; // [rsp+A0h] [rbp-D8h] BYREF
  char v84; // [rsp+A8h] [rbp-D0h]
  unsigned __int8 *v85[17]; // [rsp+F0h] [rbp-88h] BYREF

  v3 = 0;
  if ( a2 == a3 )
    return v3;
  sub_E9C270((__int64)v79, a2);
  v6 = a3;
  sub_E9C270((__int64)v81, a3);
  v8 = *(_QWORD *)(a2 + 48);
  v78[2] = a1;
  v78[0] = a2;
  v78[1] = v79;
  v76 = v81;
  v77 = a1;
  v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25;
  if ( (unsigned int)v10 > 1 )
    v9 = sub_F63050(v9, a3, v10, v7);
  v12 = sub_E98500(*(_QWORD *)(v9 + 24));
  v13 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 25;
  if ( (unsigned int)v14 > 1 )
  {
    v49 = sub_F63050(v13, a3, v14, v11);
    v17 = a2;
    if ( v12 == (unsigned int)sub_E98500(*(_QWORD *)(v49 + 24)) )
    {
LABEL_6:
      v18 = sub_B76070(v17, a3, v15, v16);
      if ( v18 )
      {
        v19 = **(_QWORD **)(a2 + 120);
        v20 = **(_QWORD **)(a3 + 120);
        if ( *(_QWORD *)(v19 + 40) == *(_QWORD *)(v20 + 40) )
        {
          v21 = 0;
          v75 = (unsigned int)(v18 - 1);
          while ( 1 )
          {
            v22 = *(_QWORD *)(v19 + 48);
            v23 = *(_QWORD *)(v20 + 48);
            v74 = v21;
            if ( v22 != v23 )
            {
              v73 = sub_E98500(v22);
              if ( v73 != (unsigned int)sub_E98500(v23) )
                break;
            }
            v26 = sub_B73640(v19);
            v27 = sub_B73640(v20);
            v28 = v27;
            if ( (v26 == 0) != (v27 == 0) )
            {
              v69 = v27 == 0;
              v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              sub_E99670((__int64)v85, (__int64)v78, *(unsigned int *)(v19 + 24), v29, 3u);
              sub_AE9DF0(v85, (unsigned int)(v21 + 1), 3u);
              sub_E97E40(v85, v26 == 0);
              v30 = v69;
              if ( v26 )
              {
                v31 = sub_EEC8C0(v26);
                v30 = v69;
                v32 = v31;
                v33 = HIDWORD(v31);
              }
              else
              {
                LODWORD(v33) = 0;
                v32 = 0;
              }
              v70 = v30;
              v83 = (unsigned __int8 *)__PAIR64__(v33, v32);
              v84 = 1;
              sub_AEC610((__int64 *)v85, (__int64 *)&v83);
              sub_AEA040((__int64)v85);
              v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
              sub_E99720((__int64)v85, (_BYTE ***)&v76, v77, *(_DWORD *)(v20 + 24), v34, 3u);
              sub_AE9DF0(v85, (unsigned int)(v21 + 1), 3u);
              sub_E97E40(v85, v70);
              if ( v28 )
              {
                v35 = sub_EEC8C0(v28);
                v36 = v35;
                v37 = HIDWORD(v35);
              }
              else
              {
                LODWORD(v37) = 0;
                v36 = 0;
              }
              v83 = (unsigned __int8 *)__PAIR64__(v37, v36);
              goto LABEL_22;
            }
            if ( v26 )
            {
              if ( v27 )
              {
                v72 = sub_E985C0(v26);
                if ( v72 != (unsigned int)sub_E985C0(v28) )
                {
                  v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                  sub_E99670((__int64)v85, (__int64)v78, *(unsigned int *)(v19 + 24), v64, 4u);
                  sub_AE9DF0(v85, (unsigned int)(v21 + 1), 3u);
                  v65 = (unsigned __int8 *)sub_EEC8C0(v26);
                  v84 = 1;
                  v83 = v65;
                  sub_AEC610((__int64 *)v85, (__int64 *)&v83);
                  sub_AEA040((__int64)v85);
                  v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                  sub_E99720((__int64)v85, (_BYTE ***)&v76, v77, *(_DWORD *)(v20 + 24), v66, 4u);
                  sub_AE9DF0(v85, (unsigned int)(v21 + 1), 3u);
                  v83 = (unsigned __int8 *)sub_EEC8C0(v28);
LABEL_22:
                  v84 = 1;
                  sub_AEC610((__int64 *)v85, (__int64 *)&v83);
                  sub_AEA040((__int64)v85);
                  goto LABEL_28;
                }
              }
            }
            if ( v75 == v21 )
              goto LABEL_35;
            ++v21;
            v19 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v21);
            v20 = *(_QWORD *)(*(_QWORD *)(a3 + 120) + 8 * v21);
            if ( *(_QWORD *)(v20 + 40) != *(_QWORD *)(v19 + 40) )
            {
              v52 = (unsigned int)(v74 + 2);
              goto LABEL_37;
            }
          }
          v55 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
          v56 = (unsigned int)(v21 + 1);
          if ( *(_BYTE *)(v55 + 16) == 1
            || (v55 = sub_E97C00(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), v6, v24, v25)) != 0 )
          {
            v71 = v55;
            v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            sub_E99670((__int64)v85, (__int64)v78, *(unsigned int *)(v19 + 24), v57, 2u);
            sub_AE9DF0(v85, v56, 3u);
            sub_AE9DF0(v85, v22, 8u);
            sub_E97E40(v85, 1);
            v58 = *(_QWORD *)(v71 + 32);
            sub_AE9DF0(v85, v58, 8u);
            sub_AEA040((__int64)v85);
          }
          else
          {
            v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            sub_E99670((__int64)v85, (__int64)v78, *(unsigned int *)(v19 + 24), v63, 2u);
            sub_AE9DF0(v85, v56, 3u);
            sub_AE9DF0(v85, v22, 8u);
            v58 = 0;
            sub_E97E40(v85, 0);
            sub_AEA040((__int64)v85);
          }
          v61 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v61 + 16) == 1
            || (v61 = sub_E97C00(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL), v58, v59, v60)) != 0 )
          {
            v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            sub_E99720((__int64)v85, (_BYTE ***)&v76, v77, *(_DWORD *)(v20 + 24), v62, 2u);
            sub_AE9DF0(v85, v56, 3u);
            sub_AE9DF0(v85, v23, 8u);
            sub_E97E40(v85, 1);
            sub_AE9DF0(v85, *(_QWORD *)(v61 + 32), 8u);
            sub_AEA040((__int64)v85);
          }
          else
          {
            v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            sub_E99720((__int64)v85, (_BYTE ***)&v76, v77, *(_DWORD *)(v20 + 24), v67, 2u);
            sub_AE9DF0(v85, v56, 3u);
            sub_AE9DF0(v85, v23, 8u);
            sub_E97E40(v85, 0);
            sub_AEA040((__int64)v85);
          }
        }
        else
        {
          v52 = 1;
LABEL_37:
          v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          sub_E99670((__int64)v85, (__int64)v78, *(unsigned int *)(v19 + 24), v53, 1u);
          sub_AE9DF0(v85, v52, 3u);
          sub_E982C0(v85, *(_QWORD *)(v19 + 40));
          sub_AEA040((__int64)v85);
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          sub_E99720((__int64)v85, (_BYTE ***)&v76, v77, *(_DWORD *)(v20 + 24), v54, 1u);
          sub_AE9DF0(v85, v52, 3u);
          sub_E982C0(v85, *(_QWORD *)(v20 + 40));
          sub_AEA040((__int64)v85);
        }
      }
      else
      {
LABEL_35:
        v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
        sub_E99670((__int64)v85, (__int64)v78, *(unsigned int *)(a2 + 24), v50, 5u);
        sub_AEA040((__int64)v85);
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
        sub_E99720((__int64)v85, (_BYTE ***)&v76, v77, *(_DWORD *)(a3 + 24), v51, 5u);
        sub_AEA040((__int64)v85);
      }
      goto LABEL_28;
    }
  }
  else
  {
    v17 = a2;
    if ( v12 == (unsigned int)sub_E98500(*(_QWORD *)(v13 + 24)) )
      goto LABEL_6;
  }
  v38 = sub_B77620(v17);
  v39 = sub_B77620(a2);
  sub_E99670((__int64)v85, (__int64)v78, v39, v38, 0);
  v41 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v42 = (unsigned int)*(unsigned __int8 *)(v41 + 16) - 25;
  if ( (unsigned int)v42 > 1 )
    v41 = sub_F63050(v41, v78, v42, v40);
  sub_AE9DF0(v85, *(_QWORD *)(v41 + 24), 8u);
  sub_AEA040((__int64)v85);
  v43 = (unsigned __int8 *)sub_B77620(a3);
  v44 = sub_B77620(a3);
  sub_FC70B0(v85, *v77, v44, 2514);
  sub_AEC220(v85, *v76, (signed __int64)v76[1]);
  v83 = v43;
  v84 = 1;
  sub_AEC610((__int64 *)v85, (__int64 *)&v83);
  sub_E97E40(v85, 0);
  sub_FC70F0(&v83, v85);
  sub_AEA040((__int64)v85);
  v46 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v47 = (unsigned int)*(unsigned __int8 *)(v46 + 16) - 25;
  if ( (unsigned int)v47 > 1 )
    v46 = sub_F63050(v46, v85, v47, v45);
  sub_AE9DF0(&v83, *(_QWORD *)(v46 + 24), 8u);
  sub_AEA040((__int64)&v83);
LABEL_28:
  if ( v81[0] != &v82 )
    operator delete(v81[0]);
  v3 = 1;
  if ( v79[0] != &v80 )
    operator delete(v79[0]);
  return v3;
}
