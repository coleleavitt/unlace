__int64 __fastcall sub_184E150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rsi
  int v11; // edi
  unsigned int v12; // ecx
  __int64 *v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // rcx
  int v23; // eax
  char *v24; // rax
  char *v25; // r9
  int v26; // r10d
  __int64 result; // rax
  int v28; // edx
  int v29; // r9d
  __int64 *v30; // r12
  __int64 *v31; // r15
  char v32; // al
  __int64 v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdi
  __int64 *v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  _QWORD *v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r8
  int v57; // edx
  int v58; // edi
  unsigned int v59; // ecx
  __int64 *v60; // rdx
  __int64 v61; // r12
  char v62; // al
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // edx
  int v70; // r9d
  __int64 v71; // r12
  unsigned __int64 v72; // r12
  __int64 *v73; // rax
  __int64 *v74; // r15
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rcx
  int v78; // edx
  __int64 v79; // r8
  int v80; // esi
  unsigned int v81; // edx
  __int64 **v82; // rdi
  __int64 *v83; // r9
  _QWORD *v84; // rdi
  __int64 v85; // rax
  _QWORD *v86; // rax
  int v87; // r9d
  char *v88; // r10
  int v89; // edx
  int v90; // r9d
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  _QWORD *v97; // rax
  _QWORD *v98; // r12
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // edi
  int v104; // r10d
  __int64 *v105; // r9
  __int64 v106; // [rsp-10h] [rbp-88h]
  __int64 v107; // [rsp-8h] [rbp-80h]
  __int64 *v109[3]; // [rsp+10h] [rbp-68h] BYREF
  int v110; // [rsp+28h] [rbp-50h]
  __int64 v111; // [rsp+30h] [rbp-48h]
  __int16 v112; // [rsp+38h] [rbp-40h]

  if ( *(char *)(a3 + 28) < 0 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  v9 = *(_DWORD *)(a2 + 40);
  v10 = *(_QWORD *)(a2 + 24);
  if ( v9 )
  {
    v11 = v9 - 1;
    v12 = (v9 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v13 = (__int64 *)(v10 + 16LL * v12);
    v14 = *v13;
    if ( v8 != *v13 )
    {
      v28 = 1;
      if ( v14 == -4096 )
        goto LABEL_21;
      while ( 1 )
      {
        v29 = v28 + 1;
        v12 = v11 & (v28 + v12);
        v13 = (__int64 *)(v10 + 16LL * v12);
        v14 = *v13;
        if ( v8 == *v13 )
          break;
        v28 = v29;
        if ( v14 == -4096 )
          goto LABEL_21;
      }
    }
    v15 = (__int64 *)v13[1];
    if ( v15 )
    {
      v16 = *(unsigned int *)(a2 + 56);
      v17 = *(unsigned int *)(a2 + 60);
      if ( v16 + 1 > v17 )
      {
        sub_2237220(a2 + 48, a2 + 64, v16 + 1, 8);
        v16 = *(unsigned int *)(a2 + 56);
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v16) = v15;
      v18 = *(_QWORD *)a2;
      ++*(_DWORD *)(a2 + 56);
      if ( (unsigned __int8)sub_C01160(v15[1], *(_QWORD *)(v18 + 248), 1, v17, v14) )
      {
        v19 = *v15;
        v20 = *(_QWORD *)a2;
        v21 = (*v15 >> 1) & 3;
        if ( v21 == 1 )
        {
          v22 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          v22 = nullptr;
          if ( v21 == 2 )
            v22 = *(__int64 **)(*(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                              + 8LL * *(unsigned int *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                              - 8);
        }
        v23 = *(_DWORD *)(v20 + 3936);
        v109[0] = v22;
        if ( v23 )
        {
          v78 = *(_DWORD *)(v20 + 3944);
          v79 = *(_QWORD *)(v20 + 3928);
          if ( !v78 )
            return 0;
          v80 = v78 - 1;
          v81 = (v78 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
          v82 = (__int64 **)(v79 + 8LL * v81);
          v83 = *v82;
          if ( v22 != *v82 )
          {
            v103 = 1;
            if ( v83 == (__int64 *)-4096LL )
              return 0;
            while ( 1 )
            {
              v104 = v103 + 1;
              v81 = v80 & (v103 + v81);
              v82 = (__int64 **)(v79 + 8LL * v81);
              v105 = *v82;
              if ( v22 == *v82 )
                break;
              v103 = v104;
              if ( v105 == (__int64 *)-4096LL )
                return 0;
            }
          }
          *v82 = (__int64 *)-8192LL;
          v84 = *(_QWORD **)(v20 + 3952);
          *(_DWORD *)(v20 + 3936) = v23 - 1;
          v85 = *(unsigned int *)(v20 + 3960);
          ++*(_DWORD *)(v20 + 3940);
          v86 = sub_18382E0(v84, (__int64)&v84[v85], (__int64 *)v109);
          if ( v88 != (char *)(v86 + 1) )
          {
            memmove(v86, v86 + 1, v88 - (char *)(v86 + 1));
            v87 = *(_DWORD *)(v20 + 3960);
          }
          *(_DWORD *)(v20 + 3960) = v87 - 1;
        }
        else
        {
          v24 = (char *)sub_18382E0(
                          *(_QWORD **)(v20 + 3952),
                          *(_QWORD *)(v20 + 3952) + 8LL * *(unsigned int *)(v20 + 3960),
                          (__int64 *)v109);
          if ( v25 != v24 )
          {
            if ( v25 != v24 + 8 )
            {
              memmove(v24, v24 + 8, v25 - (v24 + 8));
              v26 = *(_DWORD *)(v20 + 3960);
            }
            *(_DWORD *)(v20 + 3960) = v26 - 1;
          }
        }
      }
      return 0;
    }
  }
LABEL_21:
  if ( !a4 )
    goto LABEL_42;
  v30 = *(__int64 **)(a4 + 56);
  v31 = &v30[*(unsigned int *)(a4 + 64)];
  while ( v31 != v30 )
  {
    v33 = *v30;
    if ( (*(_BYTE *)(*v30 + 28) & 0x7Fu) - 49 > 2 )
      goto LABEL_26;
    v34 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v33 + 16) & 4) != 0 )
      v34 = *(_QWORD *)v34;
    if ( (*(_BYTE *)(v34 + 8) & 0x7Fu) - 58 > 3 )
      BUG();
    if ( *(_BYTE *)(v34 + 9) >> 5 != 2 )
      goto LABEL_26;
    v35 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v34 - 64) + 32LL))(v34 - 64, v10);
    v10 = *(unsigned int *)(a2 + 144);
    v38 = *(_QWORD *)(a2 + 128);
    if ( (_DWORD)v10 )
    {
      v10 = (unsigned int)(v10 - 1);
      v36 = (unsigned int)v10 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
      v39 = (__int64 *)(v38 + 16 * v36);
      v40 = *v39;
      if ( *v39 != v35 )
      {
        v69 = 1;
        if ( v40 == -4096 )
          goto LABEL_35;
        while ( 1 )
        {
          v70 = v69 + 1;
          v36 = (unsigned int)v10 & (v69 + (_DWORD)v36);
          v39 = (__int64 *)(v38 + 16LL * (unsigned int)v36);
          if ( v35 == *v39 )
            break;
          if ( *v39 == -4096 )
            goto LABEL_35;
          v69 = v70;
        }
      }
      v41 = v39[1];
      if ( v41 )
      {
        v32 = v41 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
LABEL_25:
        if ( v32 )
          return 0;
        goto LABEL_26;
      }
    }
LABEL_35:
    v42 = *(_DWORD *)(a2 + 20);
    if ( v42 > 2 )
    {
      if ( v42 != 3 )
        goto LABEL_42;
    }
    else if ( v42 )
    {
      return 0;
    }
    v43 = *(_BYTE *)(v33 + 68) & 0xC;
    if ( (_BYTE)v43 == 12 || (*(_BYTE *)(v33 + 68) & 0xC) == 0 )
    {
      if ( !(unsigned __int8)sub_B78060(v33, v10, v43, v36, v37) )
        return 0;
      v48 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL), v10, v44, v45, v46, v47);
      v10 = v48[13];
      v49 = v48;
      sub_7052B0((__int64 *)(v10 + 96), v10, v50, v51, v52, v53);
      v32 = (unsigned __int8)~*(_BYTE *)(v49[16] + 2LL) >> 7;
      goto LABEL_25;
    }
LABEL_26:
    ++v30;
  }
LABEL_51:
  while ( (*(_BYTE *)(a3 + 68) & 0xC) != 0xC && (*(_BYTE *)(a3 + 68) & 0xC) != 0 )
  {
    v63 = *(_DWORD *)(a2 + 20);
    do
    {
      if ( v63 <= 2 )
      {
        if ( v63 )
          goto LABEL_56;
LABEL_67:
        v71 = sub_190FFF0(a1, *(unsigned int *)(*(_QWORD *)(a2 + 8) + 24LL), a3);
        result = 1;
        if ( v71 != 1 )
        {
          v72 = v71 & 0xFFFFFFFFFFFFFFFELL;
          v73 = *(__int64 **)(a3 + 48);
          v112 = 1;
          LODWORD(v109[0]) = 6;
          v109[1] = nullptr;
          v109[2] = v73;
          v110 = 0;
          v111 = a3;
          sub_1A0BDB0(a1, (__int64)v109, v72);
          v74 = (__int64 *)sub_18406C0((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 32, 3u);
          if ( a4 )
          {
            sub_B98A70((__int64)v74, *(_QWORD *)(a1 + 248), a4, 0, 0, v72, 0);
            v77 = v106;
          }
          else
          {
            sub_B98A40((__int64)v74, *(_QWORD *)(a1 + 248), a3, 0, 0, v72, 0);
            v75 = v107;
          }
          return sub_1838EF0((__int64 *)a2, v74, v75, v77, v76);
        }
        return result;
      }
      if ( v63 == 3 )
        goto LABEL_67;
LABEL_42:
      v54 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v54 = *(_QWORD *)v54;
      if ( (*(_BYTE *)(v54 + 8) & 0x7Fu) - 58 > 3 )
        BUG();
      if ( *(_BYTE *)(v54 + 9) >> 5 != 2 )
        goto LABEL_51;
      v55 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v54 - 64) + 32LL))(v54 - 64, v10);
      v57 = *(_DWORD *)(a2 + 144);
      v10 = *(_QWORD *)(a2 + 128);
      if ( v57 )
      {
        v58 = v57 - 1;
        v59 = (v57 - 1) & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
        v60 = (__int64 *)(v10 + 16LL * v59);
        v56 = *v60;
        if ( v55 != *v60 )
        {
          v89 = 1;
          if ( v56 == -4096 )
            goto LABEL_80;
          while ( 1 )
          {
            v90 = v89 + 1;
            v59 = v58 & (v89 + v59);
            v60 = (__int64 *)(v10 + 16LL * v59);
            v56 = *v60;
            if ( v55 == *v60 )
              break;
            v89 = v90;
            if ( v56 == -4096 )
              goto LABEL_80;
          }
        }
        v61 = v60[1];
        if ( v61 )
        {
          v62 = v61 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
          goto LABEL_50;
        }
      }
LABEL_80:
      v63 = *(_DWORD *)(a2 + 20);
      if ( v63 <= 2 && v63 )
        return 0;
      v91 = *(unsigned __int8 *)(a3 + 68);
      v92 = *(_BYTE *)(a3 + 68) & 0xC;
      if ( (_BYTE)v92 == 12 )
        break;
      v91 &= 0xCu;
    }
    while ( (_DWORD)v91 );
    if ( !(unsigned __int8)sub_B78060(a3, v10, v91, v92, v56) )
      return 0;
    v97 = sub_F63270(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), v10, v93, v94, v95, v96);
    v10 = v97[13];
    v98 = v97;
    sub_7052B0((__int64 *)(v10 + 96), v10, v99, v100, v101, v102);
    v62 = (unsigned __int8)~*(_BYTE *)(v98[16] + 2LL) >> 7;
LABEL_50:
    if ( v62 )
      return 0;
  }
LABEL_56:
  if ( (unsigned __int8)sub_1837DD0(*(_QWORD **)(a1 + 248), *(_QWORD *)(a3 + 48)) || *(_BYTE *)(a2 + 16) )
    return 0;
  v64 = *(unsigned int *)(a2 + 20);
  v65 = *(_QWORD *)(a2 + 8);
  v109[0] = nullptr;
  result = sub_184D750(*(_QWORD *)a2, v65, v64, a3, a4, (unsigned __int64 *)v109, a5);
  if ( !(_BYTE)result )
  {
    if ( v109[0] )
      return sub_1838EF0((__int64 *)a2, v109[0], v66, v67, v68);
    return 0;
  }
  return result;
}
