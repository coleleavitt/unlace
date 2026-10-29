__int64 __fastcall sub_E7E200(_QWORD *a1, __int64 a2, __int64 a3)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r15
  __int64 v37; // rax
  bool v38; // r10
  unsigned __int64 v39; // rax
  unsigned int v40; // edx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned int v44; // edx
  unsigned __int64 v45; // rax
  __int64 v46; // rbp
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int8 *v51; // rbp
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int8 *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  bool v77; // [rsp+0h] [rbp-178h]
  bool v78; // [rsp+0h] [rbp-178h]
  __int64 v79; // [rsp+0h] [rbp-178h]
  int v80; // [rsp+8h] [rbp-170h]
  int v81; // [rsp+8h] [rbp-170h]
  int v82; // [rsp+14h] [rbp-164h]
  __int64 v83; // [rsp+18h] [rbp-160h]
  void **v84; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v85; // [rsp+38h] [rbp-140h]
  _QWORD v86[4]; // [rsp+40h] [rbp-138h] BYREF
  void *v87[2]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v88; // [rsp+70h] [rbp-108h] BYREF
  void *v89[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v90; // [rsp+90h] [rbp-E8h] BYREF
  unsigned __int8 *v91; // [rsp+A0h] [rbp-D8h] BYREF
  char v92; // [rsp+A8h] [rbp-D0h]
  unsigned __int8 *v93[17]; // [rsp+F0h] [rbp-88h] BYREF

  v3 = 0;
  if ( a2 == a3 )
    return v3;
  sub_E78530((__int64)v87, a2);
  v6 = a3;
  sub_E78530((__int64)v89, a3);
  v8 = *(_QWORD *)(a2 + 48);
  v86[2] = a1;
  v86[0] = a2;
  v86[1] = v87;
  v84 = v89;
  v85 = a1;
  v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25;
  if ( (unsigned int)v10 > 1 )
    v9 = sub_F3F310(v9, a3, v10, v7);
  v12 = sub_E747C0(*(_QWORD *)(v9 + 24));
  v13 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 25;
  if ( (unsigned int)v14 > 1 )
  {
    v57 = sub_F3F310(v13, a3, v14, v11);
    v17 = a2;
    if ( v12 == (unsigned int)sub_E747C0(*(_QWORD *)(v57 + 24)) )
    {
LABEL_6:
      v18 = sub_B52330(v17, a3, v15, v16);
      if ( v18 )
      {
        v19 = **(_QWORD **)(a2 + 120);
        v20 = **(_QWORD **)(a3 + 120);
        if ( *(_QWORD *)(v19 + 40) == *(_QWORD *)(v20 + 40) )
        {
          v21 = 0;
          v83 = (unsigned int)(v18 - 1);
          while ( 1 )
          {
            v26 = *(_QWORD *)(v19 + 48);
            v27 = *(_QWORD *)(v20 + 48);
            v82 = v21;
            if ( v26 != v27 )
            {
              v81 = sub_E747C0(v26);
              if ( v81 != (unsigned int)sub_E747C0(v27) )
                break;
            }
            v30 = sub_B4F900(v19);
            v31 = sub_B4F900(v20);
            v36 = v31;
            if ( (v30 == 0) != (v31 == 0) )
            {
              v77 = v31 == 0;
              v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              sub_E75930((__int64)v93, (__int64)v86, *(unsigned int *)(v19 + 24), v37, 3u);
              sub_AC60B0(v93, (unsigned int)(v21 + 1), 3u);
              sub_E74100(v93, v30 == 0);
              v38 = v77;
              if ( v30 )
              {
                v39 = sub_EC8B80(v30);
                v38 = v77;
                v40 = v39;
                v41 = HIDWORD(v39);
              }
              else
              {
                LODWORD(v41) = 0;
                v40 = 0;
              }
              v78 = v38;
              v91 = (unsigned __int8 *)__PAIR64__(v41, v40);
              v92 = 1;
              sub_AC88D0((__int64 *)v93, (__int64 *)&v91);
              sub_AC6300((__int64)v93);
              v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
              sub_E759E0((__int64)v93, (_BYTE ***)&v84, v85, *(_DWORD *)(v20 + 24), v42, 3u);
              sub_AC60B0(v93, (unsigned int)(v21 + 1), 3u);
              sub_E74100(v93, v78);
              if ( v36 )
              {
                v43 = sub_EC8B80(v36);
                v44 = v43;
                v45 = HIDWORD(v43);
              }
              else
              {
                LODWORD(v45) = 0;
                v44 = 0;
              }
              v91 = (unsigned __int8 *)__PAIR64__(v45, v44);
              goto LABEL_22;
            }
            if ( v30 )
            {
              if ( v31 )
              {
                v80 = sub_E74880(v30, v6, v32, v33, v34, v35);
                if ( v80 != (unsigned int)sub_E74880(v36, v6, v22, v23, v24, v25) )
                {
                  v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                  sub_E75930((__int64)v93, (__int64)v86, *(unsigned int *)(v19 + 24), v72, 4u);
                  sub_AC60B0(v93, (unsigned int)(v21 + 1), 3u);
                  v73 = (unsigned __int8 *)sub_EC8B80(v30);
                  v92 = 1;
                  v91 = v73;
                  sub_AC88D0((__int64 *)v93, (__int64 *)&v91);
                  sub_AC6300((__int64)v93);
                  v74 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                  sub_E759E0((__int64)v93, (_BYTE ***)&v84, v85, *(_DWORD *)(v20 + 24), v74, 4u);
                  sub_AC60B0(v93, (unsigned int)(v21 + 1), 3u);
                  v91 = (unsigned __int8 *)sub_EC8B80(v36);
LABEL_22:
                  v92 = 1;
                  sub_AC88D0((__int64 *)v93, (__int64 *)&v91);
                  sub_AC6300((__int64)v93);
                  goto LABEL_28;
                }
              }
            }
            if ( v83 == v21 )
              goto LABEL_35;
            ++v21;
            v19 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v21);
            v20 = *(_QWORD *)(*(_QWORD *)(a3 + 120) + 8 * v21);
            if ( *(_QWORD *)(v20 + 40) != *(_QWORD *)(v19 + 40) )
            {
              v60 = (unsigned int)(v82 + 2);
              goto LABEL_37;
            }
          }
          v63 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
          v64 = (unsigned int)(v21 + 1);
          if ( *(_BYTE *)(v63 + 16) == 1
            || (v63 = sub_E73EC0(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL), v6, v28, v29)) != 0 )
          {
            v79 = v63;
            v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            sub_E75930((__int64)v93, (__int64)v86, *(unsigned int *)(v19 + 24), v65, 2u);
            sub_AC60B0(v93, v64, 3u);
            sub_AC60B0(v93, v26, 8u);
            sub_E74100(v93, 1);
            v66 = *(_QWORD *)(v79 + 32);
            sub_AC60B0(v93, v66, 8u);
            sub_AC6300((__int64)v93);
          }
          else
          {
            v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            sub_E75930((__int64)v93, (__int64)v86, *(unsigned int *)(v19 + 24), v71, 2u);
            sub_AC60B0(v93, v64, 3u);
            sub_AC60B0(v93, v26, 8u);
            v66 = 0;
            sub_E74100(v93, 0);
            sub_AC6300((__int64)v93);
          }
          v69 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v69 + 16) == 1
            || (v69 = sub_E73EC0(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), v66, v67, v68)) != 0 )
          {
            v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            sub_E759E0((__int64)v93, (_BYTE ***)&v84, v85, *(_DWORD *)(v20 + 24), v70, 2u);
            sub_AC60B0(v93, v64, 3u);
            sub_AC60B0(v93, v27, 8u);
            sub_E74100(v93, 1);
            sub_AC60B0(v93, *(_QWORD *)(v69 + 32), 8u);
            sub_AC6300((__int64)v93);
          }
          else
          {
            v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            sub_E759E0((__int64)v93, (_BYTE ***)&v84, v85, *(_DWORD *)(v20 + 24), v75, 2u);
            sub_AC60B0(v93, v64, 3u);
            sub_AC60B0(v93, v27, 8u);
            sub_E74100(v93, 0);
            sub_AC6300((__int64)v93);
          }
        }
        else
        {
          v60 = 1;
LABEL_37:
          v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          sub_E75930((__int64)v93, (__int64)v86, *(unsigned int *)(v19 + 24), v61, 1u);
          sub_AC60B0(v93, v60, 3u);
          sub_E74580(v93, *(_QWORD *)(v19 + 40));
          sub_AC6300((__int64)v93);
          v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          sub_E759E0((__int64)v93, (_BYTE ***)&v84, v85, *(_DWORD *)(v20 + 24), v62, 1u);
          sub_AC60B0(v93, v60, 3u);
          sub_E74580(v93, *(_QWORD *)(v20 + 40));
          sub_AC6300((__int64)v93);
        }
      }
      else
      {
LABEL_35:
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
        sub_E75930((__int64)v93, (__int64)v86, *(unsigned int *)(a2 + 24), v58, 5u);
        sub_AC6300((__int64)v93);
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
        sub_E759E0((__int64)v93, (_BYTE ***)&v84, v85, *(_DWORD *)(a3 + 24), v59, 5u);
        sub_AC6300((__int64)v93);
      }
      goto LABEL_28;
    }
  }
  else
  {
    v17 = a2;
    if ( v12 == (unsigned int)sub_E747C0(*(_QWORD *)(v13 + 24)) )
      goto LABEL_6;
  }
  v46 = sub_B538E0(v17);
  v47 = sub_B538E0(a2);
  sub_E75930((__int64)v93, (__int64)v86, v47, v46, 0);
  v49 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v50 = (unsigned int)*(unsigned __int8 *)(v49 + 16) - 25;
  if ( (unsigned int)v50 > 1 )
    v49 = sub_F3F310(v49, v86, v50, v48);
  sub_AC60B0(v93, *(_QWORD *)(v49 + 24), 8u);
  sub_AC6300((__int64)v93);
  v51 = (unsigned __int8 *)sub_B538E0(a3);
  v52 = sub_B538E0(a3);
  sub_FA3370(v93, *v85, v52, 2514);
  sub_AC84E0(v93, *v84, (signed __int64)v84[1]);
  v91 = v51;
  v92 = 1;
  sub_AC88D0((__int64 *)v93, (__int64 *)&v91);
  sub_E74100(v93, 0);
  sub_FA33B0(&v91, v93);
  sub_AC6300((__int64)v93);
  v54 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v55 = (unsigned int)*(unsigned __int8 *)(v54 + 16) - 25;
  if ( (unsigned int)v55 > 1 )
    v54 = sub_F3F310(v54, v93, v55, v53);
  sub_AC60B0(&v91, *(_QWORD *)(v54 + 24), 8u);
  sub_AC6300((__int64)&v91);
LABEL_28:
  if ( v89[0] != &v90 )
    operator delete(v89[0]);
  v3 = 1;
  if ( v87[0] != &v88 )
    operator delete(v87[0]);
  return v3;
}

