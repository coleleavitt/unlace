__int64 __fastcall sub_BFD6D0(__int64 a1, unsigned int *a2, int a3, __int64 a4, int a5, double a6)
{
  char **exception; // r15
  _QWORD *v7; // rax
  unsigned int v8; // r15d
  __int64 v10; // r14
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  unsigned int *v19; // r13
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // esi
  __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  __int64 v27; // r8
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // esi
  unsigned int **v31; // r15
  unsigned int *v32; // r14
  bool v33; // zf
  int v34; // r14d
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // r15d
  unsigned int v38; // ecx
  __int64 v39; // r8
  unsigned int v40; // ecx
  __int64 v41; // rax
  unsigned int v42; // esi
  unsigned int *v43; // rsi
  __int64 v44; // r15
  unsigned int *v45; // rdx
  __int64 v46; // r14
  char v47; // al
  __int64 v48; // rcx
  _DWORD *v49; // rdx
  int v50; // edx
  unsigned int **v51; // r14
  unsigned int *v52; // r14
  int v53; // eax
  unsigned int *v54; // rdx
  int v55; // r13d
  __int64 v56; // rax
  unsigned int *v57; // rax
  __int64 v58; // rbx
  unsigned int v59; // r8d
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int *v64; // rdi
  int v65; // [rsp+0h] [rbp-A0h]
  __int64 v66; // [rsp+8h] [rbp-98h]
  __int64 v67; // [rsp+8h] [rbp-98h]
  int v68; // [rsp+10h] [rbp-90h]
  __int64 v69; // [rsp+10h] [rbp-90h]
  __int64 v70; // [rsp+10h] [rbp-90h]
  unsigned int v71; // [rsp+10h] [rbp-90h]
  int v72; // [rsp+18h] [rbp-88h]
  unsigned __int8 v74; // [rsp+1Fh] [rbp-81h]
  __int64 v76; // [rsp+20h] [rbp-80h]
  __int64 v77; // [rsp+28h] [rbp-78h]
  unsigned int *v78; // [rsp+28h] [rbp-78h]
  int v79; // [rsp+30h] [rbp-70h]
  __int64 v80; // [rsp+30h] [rbp-70h]
  __int64 v82; // [rsp+38h] [rbp-68h]
  __int64 v83; // [rsp+38h] [rbp-68h]
  int v84; // [rsp+40h] [rbp-60h]
  unsigned int *v85; // [rsp+48h] [rbp-58h] BYREF
  __int64 v86[10]; // [rsp+50h] [rbp-50h] BYREF

  v7 = *(_QWORD **)(a4 + 8);
  v79 = a4;
  if ( !v7 )
    return 0;
  if ( !*((_DWORD *)v7 - 1) )
    return 0;
  v10 = *v7;
  v77 = *v7;
  if ( !(unsigned __int8)sub_BB1010(a1) )
    return 0;
  v66 = *(_QWORD *)(a1 + 24);
  v13 = sub_15D1F10(v10);
  v14 = *(_QWORD *)(a1 + 1736);
  v15 = sub_15D2D60(v14, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v13);
  v18 = sub_15DC610(v14, v15, 0, 0, v16, v17, v65, v66, v68, v72, a3, v77, v79, a5, v84, v85);
  v19 = (unsigned int *)v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v20 = *(_QWORD *)(v82 + 8);
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = *(_QWORD *)(v80 + 8);
  if ( v22 )
    v23 = *(_DWORD *)(v22 - 4) - 1;
  else
    v23 = -1;
  if ( !(unsigned __int8)sub_BF76D0(a1, v23, v22 + 8, v21, v20) || (v8 = sub_BF7830(a1, v78, v19), !(_BYTE)v8) )
  {
    v24 = *(_QWORD *)(v82 + 8);
    if ( !v24 )
      goto LABEL_30;
    v25 = *a2;
    while ( 1 )
    {
      v26 = *(_DWORD *)(v24 - 4);
      if ( v25 >= v26 )
        break;
      if ( *(unsigned int **)(v24 + 8LL * v25) == v78 )
      {
        v8 = 0;
        goto LABEL_55;
      }
      v27 = v24 + 8LL * v25 + 8;
      v28 = v26 - v25 - 1;
      v29 = *(_QWORD *)(v80 + 8);
      if ( v29 )
        v30 = *(_DWORD *)(v29 - 4) - 1;
      else
        v30 = -1;
      if ( (unsigned __int8)sub_BF76D0(a1, v30, v29 + 8, v28, v27) )
      {
        v31 = *(unsigned int ***)(v82 + 8);
        v69 = *(_QWORD *)(a1 + 24);
        sub_15D1F10(*v31);
        if ( v25 )
          v32 = (unsigned int *)sub_15E1AF0(*(_QWORD *)(a1 + 1736));
        else
          v32 = *v31;
        if ( v32 )
          ++v32[2];
        if ( v19 )
        {
          v33 = v19[2]-- == 1;
          if ( v33 )
            sub_15D7BC0(v69, v19);
        }
        v8 = sub_BF7830(a1, v78, v32);
        if ( (_BYTE)v8 )
        {
          ++*a2;
          v19 = v32;
          goto LABEL_55;
        }
        v19 = v32;
      }
      v25 = *a2 + 1;
      *a2 = v25;
      v24 = *(_QWORD *)(v82 + 8);
      if ( !v24 )
        goto LABEL_30;
    }
    v48 = v24 + 8LL * *(unsigned int *)(v24 - 4);
    if ( v48 == v24 )
      goto LABEL_30;
    v8 = v74;
    do
    {
      while ( 1 )
      {
        if ( !*(_WORD *)(*(_QWORD *)v24 + 4LL) )
        {
          v49 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v24 + 16LL) + 24LL);
          if ( v49 )
          {
            if ( *(_DWORD *)(a1 + 1744) == *v49 )
              break;
          }
        }
        v24 += 8;
        v8 = 0;
        if ( v48 == v24 )
          goto LABEL_54;
      }
      v50 = v49[1];
      LOBYTE(v50) = v50 == 0;
      v24 += 8;
      v8 &= v50;
    }
    while ( v48 != v24 );
LABEL_54:
    if ( (_BYTE)v8 )
    {
LABEL_30:
      v34 = sub_BB24A0(a1, v78) ^ 1;
      v63 = sub_186B270(0x10u);
      *(_QWORD *)v63 = 2;
      v64 = (unsigned int *)(v63 + 8);
      v85 = (unsigned int *)(v63 + 8);
      *(_DWORD *)(v63 + 8) = v34;
      v35 = (unsigned int)(*(_DWORD *)(v63 + 4) + 1);
      *(_DWORD *)(v63 + 4) = v35;
      v36 = *(_QWORD *)(v82 + 8);
      if ( v36 )
      {
        v37 = 0;
        do
        {
          v38 = *(_DWORD *)(v36 - 4);
          if ( v37 >= v38 )
            break;
          v39 = v36 + 8LL * v37 + 8;
          v40 = v38 - v37 - 1;
          v41 = *(_QWORD *)(v80 + 8);
          if ( v41 )
            v42 = *(_DWORD *)(v41 - 4) - 1;
          else
            v42 = -1;
          ++v37;
          if ( (unsigned __int8)sub_BF76D0(a1, v42, v41 + 8, v40, v39) )
          {
            v51 = *(unsigned int ***)(v82 + 8);
            v70 = *(_QWORD *)(a1 + 24);
            sub_15D1F10(*v51);
            if ( v37 == 1 )
              v52 = *v51;
            else
              v52 = (unsigned int *)sub_15E1AF0(*(_QWORD *)(a1 + 1736));
            if ( v52 )
              ++v52[2];
            if ( v19 )
            {
              v33 = v19[2]-- == 1;
              if ( v33 )
                sub_15D7BC0(v70, v19);
            }
            v53 = sub_966380(a1, v78, v52);
            v54 = v85;
            v55 = v53 ^ 1;
            if ( v85 )
            {
              v56 = *(v85 - 1);
              if ( (_DWORD)v56 == *(v85 - 2) )
              {
                v59 = (unsigned int)(3 * v56 + 1) >> 1;
                v60 = 4 * v59 + 8;
                if ( 4 * (int)v56 + 8 >= v60 || (unsigned int)v56 >= v59 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v86, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v86);
                  sub_233E40((__int64)v86);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v71 = (unsigned int)(3 * v56 + 1) >> 1;
                v61 = (unsigned int *)sub_186B300(v85 - 2, v60);
                v54 = v61 + 2;
                v85 = v61 + 2;
                *v61 = v71;
                v57 = &v61[v61[1] + 2];
              }
              else
              {
                v57 = &v85[v56];
              }
            }
            else
            {
              v62 = sub_186B270(0x10u);
              *(_QWORD *)v62 = 2;
              v54 = (unsigned int *)(v62 + 8);
              v85 = (unsigned int *)(v62 + 8);
              v57 = (unsigned int *)(v62 + 8);
            }
            *v57 = v55;
            v19 = v52;
            ++*(v54 - 1);
          }
          v36 = *(_QWORD *)(v82 + 8);
        }
        while ( v36 );
        v64 = v85;
        if ( !v85 )
          goto LABEL_44;
        v35 = *(v85 - 1);
      }
      v43 = &v64[v35];
      if ( v43 != v64 )
      {
        v44 = *(_QWORD *)(a1 + 16);
        v45 = v64;
        while ( 1 )
        {
          v46 = *v45;
          v47 = *(_BYTE *)(*(_QWORD *)(v44 + 8848) + v46);
          if ( v47 == -1 )
          {
            *a2 = 0;
            v8 = 0;
            goto LABEL_46;
          }
          if ( !v47 )
            break;
          if ( v43 == ++v45 )
            goto LABEL_44;
        }
        v83 = (unsigned int)v46 >> 1;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v44 + 7488) + 48LL))(
          *(_QWORD *)(v44 + 7488),
          *(_QWORD *)(*(_QWORD *)(v44 + 8840) + 8 * v83));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v44 + 7488) + 64LL))(*(_QWORD *)(v44 + 7488));
        v58 = 16 * v83 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL);
        *(_BYTE *)(v58 + 11) = *(_BYTE *)(v58 + 11) & 0xF3 | (8 * (v46 & 1) + 4);
        *a2 = 0;
        goto LABEL_45;
      }
LABEL_44:
      sub_BC3460(a1, v76, &v85, a6);
LABEL_45:
      v64 = v85;
      v8 = v74;
      if ( v85 )
LABEL_46:
        sub_186B220(v64 - 2);
    }
  }
LABEL_55:
  if ( v19 )
  {
    v33 = v19[2]-- == 1;
    if ( v33 )
      sub_15D7BC0(v67, v19);
  }
  return v8;
}

