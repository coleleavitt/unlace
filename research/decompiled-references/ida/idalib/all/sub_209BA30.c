__int64 *__fastcall sub_209BA30(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 *result; // rax
  unsigned int v9; // esi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rbp
  __int64 v16; // rax
  int v17; // edi
  _QWORD *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rdi
  __int64 *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // rbp
  __int64 v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  _BYTE *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 *v46; // r15
  _QWORD *v47; // rdx
  __int64 v48; // rax
  _QWORD *v49; // rbp
  _QWORD *v50; // rbx
  _QWORD *v51; // rax
  _QWORD *v52; // r14
  unsigned int v53; // esi
  __int64 v54; // r13
  _QWORD *v55; // rax
  _QWORD *v56; // rdi
  _QWORD *v57; // rax
  __int64 *v58; // r14
  __int64 v59; // rdx
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rax
  __int64 *v62; // rdx
  __int64 *v63; // r13
  __int64 *v64; // rbp
  char v65; // di
  __int64 v66; // rsi
  _QWORD *v67; // rcx
  __int64 v68; // rdi
  _QWORD *v69; // rdx
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // rax
  __int64 *v74; // rax
  unsigned int v75; // eax
  __int64 v76; // rdx
  int v77; // edi
  bool v78; // zf
  _QWORD *v79; // rax
  unsigned int v80; // edi
  int v81; // r10d
  _QWORD *v82; // rbx
  int v83; // edi
  _QWORD *v84; // r11
  __int64 *v85; // [rsp+0h] [rbp-198h]
  __int64 v86; // [rsp+8h] [rbp-190h]
  __int64 *v87; // [rsp+18h] [rbp-180h]
  __int64 *v88; // [rsp+30h] [rbp-168h]
  unsigned int v89; // [rsp+50h] [rbp-148h]
  int v90; // [rsp+54h] [rbp-144h]
  __int64 v91[2]; // [rsp+58h] [rbp-140h] BYREF
  __int64 v92; // [rsp+68h] [rbp-130h] BYREF
  _QWORD *v93; // [rsp+70h] [rbp-128h] BYREF
  _QWORD *v94; // [rsp+78h] [rbp-120h] BYREF
  void *v95; // [rsp+80h] [rbp-118h] BYREF
  __int64 v96; // [rsp+88h] [rbp-110h]
  _BYTE v97[96]; // [rsp+90h] [rbp-108h] BYREF
  void *ptr; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v99; // [rsp+F8h] [rbp-A0h]
  _BYTE v100[152]; // [rsp+100h] [rbp-98h] BYREF

  v6 = *(_QWORD *)(a4 + 8);
  v91[0] = a4;
  v89 = 0;
  if ( v6 )
    v89 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 376LL);
  result = &a2[a3];
  v87 = result;
  if ( result != a2 )
  {
    v85 = a2;
    v88 = (__int64 *)(a1 + 192);
    v86 = a1 + 216;
    while ( 1 )
    {
      v9 = *(_DWORD *)(a1 + 208);
      v10 = *v85;
      v92 = *v85;
      if ( !v9 )
        break;
      a6 = v9 - 1;
      a5 = *(_QWORD *)(a1 + 192);
      a4 = (unsigned int)a6 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v11 = (_QWORD *)(a5 + 16 * a4);
      v12 = *v11;
      if ( v10 == *v11 )
        goto LABEL_7;
      v81 = 1;
      v82 = nullptr;
      if ( v12 != -4096 )
      {
        while ( 1 )
        {
          if ( !v82 && v12 == -8192 )
            v82 = v11;
          a4 = (unsigned int)a6 & (v81 + (_DWORD)a4);
          v11 = (_QWORD *)(a5 + 16LL * (unsigned int)a4);
          v12 = *v11;
          if ( v10 == *v11 )
            break;
          if ( v12 == -4096 )
          {
            if ( v82 )
              v11 = v82;
            goto LABEL_119;
          }
          ++v81;
        }
LABEL_7:
        v13 = v11 + 1;
        if ( v11[1] )
        {
          v14 = sub_20993E0(v86, v11 + 1, v10, a4, a5, a6);
          v15 = v14;
          if ( *((_BYTE *)v14 + 20) )
          {
            a4 = *v14;
            v16 = *((unsigned int *)v14 + 3);
            v10 = a4 + 8 * v16;
            v17 = v16;
            if ( a4 != v10 )
            {
              v18 = (_QWORD *)a4;
              if ( v92 == *(_QWORD *)a4 )
              {
LABEL_114:
                v80 = v17 - 1;
                v10 = *(_QWORD *)(a4 + 8LL * v80);
                *((_DWORD *)v15 + 3) = v80;
                *v18 = v10;
              }
              else
              {
                while ( (_QWORD *)v10 != ++v18 )
                {
                  if ( v92 == *v18 )
                    goto LABEL_114;
                }
              }
            }
          }
          else
          {
            v79 = (_QWORD *)sub_2236570(v14, v92);
            if ( v79 )
            {
              *v79 = -2;
              ++*((_DWORD *)v15 + 4);
            }
          }
        }
        goto LABEL_14;
      }
LABEL_119:
      v83 = *(_DWORD *)(a1 + 200);
      ptr = v11;
      a4 = (unsigned int)(v83 + 1);
      a5 = (unsigned int)(4 * a4);
      if ( (unsigned int)a5 >= 3 * v9 )
        goto LABEL_125;
      a5 = v9 >> 3;
      if ( v9 - *(_DWORD *)(a1 + 204) - (unsigned int)a4 <= (unsigned int)a5 )
        goto LABEL_126;
LABEL_121:
      v78 = *v11 == -4096;
      *(_DWORD *)(a1 + 200) = a4;
      if ( !v78 )
        --*(_DWORD *)(a1 + 204);
      *v11 = v10;
      v13 = v11 + 1;
      v11[1] = 0;
LABEL_14:
      *v13 = v91[0];
      v19 = sub_20993E0(v86, v91, v10, a4, a5, a6);
      v20 = v92;
      v21 = v19;
      if ( !*((_BYTE *)v19 + 20) )
        goto LABEL_31;
      v22 = (_QWORD *)*v19;
      a5 = *((unsigned int *)v19 + 3);
      v23 = 8 * a5;
      v24 = (__int64 *)(*v19 + 8 * a5);
      if ( (__int64 *)*v19 != v24 )
      {
        v25 = (_QWORD *)*v19;
        if ( v92 == *v22 )
          goto LABEL_22;
        do
        {
          if ( v24 == ++v25 )
            break;
        }
        while ( v92 != *v25 );
      }
      if ( (unsigned int)a5 < *((_DWORD *)v21 + 2) )
      {
        a5 = (unsigned int)(a5 + 1);
        *((_DWORD *)v21 + 3) = a5;
        *v24 = v20;
        v22 = (_QWORD *)*v21;
        v20 = v92;
        v25 = (_QWORD *)(*v21 + v23);
      }
      else
      {
LABEL_31:
        v25 = (_QWORD *)sub_2236760(v21, v92);
        v20 = v92;
        v22 = (_QWORD *)*v21;
        if ( !*((_BYTE *)v21 + 20) )
        {
          a4 = (__int64)&v22[*((unsigned int *)v21 + 2)];
          goto LABEL_23;
        }
      }
LABEL_22:
      a4 = (__int64)&v22[*((unsigned int *)v21 + 3)];
LABEL_23:
      if ( (_QWORD *)a4 != v25 && *v25 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v26 = v25 + 1;
        do
        {
          v27 = v26;
          if ( (_QWORD *)a4 == v26 )
            break;
          ++v26;
        }
        while ( *v27 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v91[0] == v20 )
        goto LABEL_29;
      v28 = sub_209A570(a1, v20);
      v95 = v97;
      ptr = v100;
      v29 = *(__int64 **)(v28 + 80);
      v99 = 0xC00000000LL;
      v30 = *(unsigned int *)(v28 + 88);
      v96 = 0xC00000000LL;
      v31 = &v29[v30];
      if ( v31 != v29 )
      {
        while ( 1 )
        {
          v32 = sub_2097D10(a1, *v29);
          v33 = *(_QWORD *)(*(_QWORD *)(v32 + 8) + 24LL);
          if ( v89 == *(_DWORD *)(v33 + 376) )
            break;
          if ( v89 <= *(_DWORD *)(v33 + 376) )
          {
LABEL_35:
            if ( v31 == ++v29 )
              goto LABEL_39;
          }
          else
          {
            ++v29;
            sub_20962E0((__int64)&ptr, v32);
            if ( v31 == v29 )
            {
LABEL_39:
              v34 = v95;
              v35 = (unsigned int)v96;
              goto LABEL_40;
            }
          }
        }
        sub_20962E0((__int64)&v95, v32);
        goto LABEL_35;
      }
      v35 = 0;
      v34 = v97;
LABEL_40:
      sub_209BA30(a1, v34, v35, v91[0]);
      v40 = *(_QWORD *)(v91[0] + 8);
      if ( v40 )
      {
        v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v40 + 24) + 16LL))(*(_QWORD *)(v40 + 24));
        sub_209BA30(a1, ptr, (unsigned int)v99, v41);
      }
      v42 = sub_20993E0(v86, &v92, v36, v37, v38, v39);
      v45 = *((unsigned __int8 *)v42 + 20);
      v46 = v42;
      v47 = (_QWORD *)*v42;
      if ( (_BYTE)v45 )
      {
        v48 = *((unsigned int *)v42 + 3);
        v49 = &v47[v48];
        if ( v47 == v49 )
          goto LABEL_60;
      }
      else
      {
        v48 = *((unsigned int *)v42 + 2);
        v49 = &v47[v48];
        if ( v47 == v49 )
          goto LABEL_60;
      }
      v50 = v47;
      if ( *v47 == -2 || *v47 == -1 )
      {
        v51 = v47 + 1;
        do
        {
          v50 = v51;
          if ( v51 == v49 )
            break;
          ++v51;
        }
        while ( *v50 >= 0xFFFFFFFFFFFFFFFELL );
        if ( (_BYTE)v45 )
          v48 = *((unsigned int *)v46 + 3);
        else
          v48 = *((unsigned int *)v46 + 2);
      }
      v52 = &v47[v48];
      if ( v52 != v50 )
      {
        while ( 1 )
        {
          v47 = (_QWORD *)*v50;
          v53 = *(_DWORD *)(a1 + 208);
          v54 = v91[0];
          v93 = (_QWORD *)*v50;
          if ( !v53 )
            break;
          v44 = v53 - 1;
          v43 = *(_QWORD *)(a1 + 192);
          v45 = (unsigned int)v44 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
          v55 = (_QWORD *)(v43 + 16 * v45);
          v56 = (_QWORD *)*v55;
          if ( v47 == (_QWORD *)*v55 )
            goto LABEL_53;
          if ( v56 != (_QWORD *)-4096LL )
          {
            v90 = 1;
            v84 = nullptr;
            while ( 1 )
            {
              if ( v56 != (_QWORD *)-8192LL || v84 )
                v55 = v84;
              v45 = (unsigned int)v44 & (v90 + (_DWORD)v45);
              v56 = *(_QWORD **)(v43 + 16LL * (unsigned int)v45);
              if ( v47 == v56 )
              {
                v55 = (_QWORD *)(v43 + 16LL * (unsigned int)v45);
                goto LABEL_53;
              }
              if ( v56 == (_QWORD *)-4096LL )
                break;
              ++v90;
              v84 = v55;
              v55 = (_QWORD *)(v43 + 16LL * (unsigned int)v45);
            }
            if ( !v55 )
              v55 = (_QWORD *)(v43 + 16LL * (unsigned int)v45);
          }
          v77 = *(_DWORD *)(a1 + 200);
          v94 = v55;
          v45 = (unsigned int)(v77 + 1);
          v43 = (unsigned int)(4 * v45);
          if ( (unsigned int)v43 >= 3 * v53 )
            goto LABEL_104;
          v43 = v53 >> 3;
          if ( v53 - *(_DWORD *)(a1 + 204) - (unsigned int)v45 <= (unsigned int)v43 )
            goto LABEL_105;
LABEL_100:
          v78 = *v55 == -4096;
          *(_DWORD *)(a1 + 200) = v45;
          if ( !v78 )
            --*(_DWORD *)(a1 + 204);
          *v55 = v47;
          v55[1] = 0;
LABEL_53:
          v55[1] = v54;
          if ( v50 + 1 != v49 )
          {
            if ( v50[1] < 0xFFFFFFFFFFFFFFFELL )
            {
              ++v50;
              goto LABEL_59;
            }
            v57 = v50 + 2;
            while ( 1 )
            {
              v50 = v57;
              if ( v57 == v49 )
                break;
              ++v57;
              if ( *v50 < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_59;
            }
          }
          v50 = v49;
LABEL_59:
          if ( v50 == v52 )
            goto LABEL_60;
        }
        v94 = nullptr;
LABEL_104:
        v53 *= 2;
LABEL_105:
        sub_2098FA0((__int64)v88, v53, (__int64)v47, v45, v43, v44);
        sub_20965B0(v88, (__int64 *)&v93, &v94);
        v47 = v93;
        v45 = (unsigned int)(*(_DWORD *)(a1 + 200) + 1);
        v55 = v94;
        goto LABEL_100;
      }
LABEL_60:
      v58 = sub_20993E0(v86, v91, (__int64)v47, v45, v43, v44);
      if ( *((_BYTE *)v46 + 20) )
        v59 = *((unsigned int *)v46 + 3);
      else
        v59 = *((unsigned int *)v46 + 2);
      v60 = sub_2096730(v46, (_QWORD *)(*v46 + 8 * v59));
      v61 = sub_2096730(v46, (_QWORD *)*v46);
      v63 = v62;
      v64 = (__int64 *)v61;
      if ( v60 != v61 )
      {
        v65 = *((_BYTE *)v58 + 20);
        while ( 1 )
        {
          v66 = *v64;
          if ( v65 )
          {
            v67 = (_QWORD *)*v58;
            a5 = *((unsigned int *)v58 + 3);
            v68 = 8 * a5;
            v69 = (_QWORD *)(*v58 + 8 * a5);
            if ( (_QWORD *)*v58 != v69 )
            {
              v70 = (_QWORD *)*v58;
              if ( v66 == *v67 )
                goto LABEL_72;
              while ( v69 != ++v70 )
              {
                if ( v66 == *v70 )
                  goto LABEL_72;
              }
            }
            if ( (unsigned int)a5 < *((_DWORD *)v58 + 2) )
              break;
          }
          v70 = (_QWORD *)sub_2236760(v58, v66);
          v65 = *((_BYTE *)v58 + 20);
          v67 = (_QWORD *)*v58;
          if ( v65 )
            goto LABEL_72;
          a4 = (__int64)&v67[*((unsigned int *)v58 + 2)];
LABEL_73:
          if ( v70 != (_QWORD *)a4 && *v70 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v71 = v70 + 1;
            do
            {
              v72 = v71;
              if ( (_QWORD *)a4 == v71 )
                break;
              ++v71;
            }
            while ( *v72 >= 0xFFFFFFFFFFFFFFFELL );
          }
          v73 = v64 + 1;
          if ( v63 == v64 + 1 )
          {
            v64 = v63;
            if ( (__int64 *)v60 == v63 )
              goto LABEL_84;
          }
          else if ( (unsigned __int64)v64[1] < 0xFFFFFFFFFFFFFFFELL )
          {
            ++v64;
            if ( (_QWORD *)v60 == v73 )
              goto LABEL_84;
          }
          else
          {
            v74 = v64 + 2;
            do
            {
              v64 = v74;
              if ( v63 == v74 )
                break;
              ++v74;
            }
            while ( (unsigned __int64)*v64 >= 0xFFFFFFFFFFFFFFFELL );
            if ( (__int64 *)v60 == v64 )
              goto LABEL_84;
          }
        }
        a5 = (unsigned int)(a5 + 1);
        *((_DWORD *)v58 + 3) = a5;
        *v69 = v66;
        v67 = (_QWORD *)*v58;
        v70 = (_QWORD *)(*v58 + v68);
LABEL_72:
        v65 = 1;
        a4 = (__int64)&v67[*((unsigned int *)v58 + 3)];
        goto LABEL_73;
      }
LABEL_84:
      if ( !*((_BYTE *)v46 + 20) )
      {
        v75 = 4 * (*((_DWORD *)v46 + 3) - *((_DWORD *)v46 + 4));
        v76 = *((unsigned int *)v46 + 2);
        if ( v75 < 0x20 )
          v75 = 32;
        if ( v75 < (unsigned int)v76 )
        {
          sub_22364B0(v46);
          goto LABEL_90;
        }
        memset((void *)*v46, -1, 8 * v76);
      }
      *(__int64 *)((char *)v46 + 12) = 0;
LABEL_90:
      if ( ptr != v100 )
        free(ptr);
      if ( v95 != v97 )
        free(v95);
LABEL_29:
      result = ++v85;
      if ( v87 == v85 )
        return result;
    }
    ptr = nullptr;
LABEL_125:
    v9 *= 2;
LABEL_126:
    sub_2098FA0((__int64)v88, v9, v10, a4, a5, a6);
    sub_20965B0(v88, &v92, &ptr);
    v10 = v92;
    a4 = (unsigned int)(*(_DWORD *)(a1 + 200) + 1);
    v11 = ptr;
    goto LABEL_121;
  }
  return result;
}
