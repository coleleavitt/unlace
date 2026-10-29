__int64 __fastcall sub_7173A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rbp
  _BYTE *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rbx
  int v10; // edx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // r13
  __int64 v14; // r12
  __int64 v15; // r14
  char v16; // al
  int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // ebp
  unsigned int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // ebx
  int v26; // ebp
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // rsi
  int v30; // ebx
  __int64 v31; // rbx
  __int64 v32; // rbp
  unsigned __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rbx
  _QWORD *v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE *v40; // rsi
  _BYTE *v41; // rdi
  unsigned __int16 v42; // bx
  int v43; // r14d
  _BOOL4 v44; // [rsp+30h] [rbp-1A8h]
  _QWORD *v45; // [rsp+30h] [rbp-1A8h]
  __int64 v46; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v47; // [rsp+38h] [rbp-1A0h]
  _QWORD *v48; // [rsp+48h] [rbp-190h]
  __int64 v49; // [rsp+50h] [rbp-188h]
  int v50; // [rsp+60h] [rbp-178h]
  int v51; // [rsp+68h] [rbp-170h]
  __int64 v52; // [rsp+70h] [rbp-168h]
  _QWORD *v53; // [rsp+70h] [rbp-168h]
  __int64 v54; // [rsp+70h] [rbp-168h]
  __int64 v55; // [rsp+78h] [rbp-160h]
  __int64 v56; // [rsp+88h] [rbp-150h]
  __int64 v57; // [rsp+90h] [rbp-148h] BYREF
  __int64 v58; // [rsp+98h] [rbp-140h]
  void *v59; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-130h]
  _BYTE v61[16]; // [rsp+B0h] [rbp-128h] BYREF
  void *v62; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-110h]
  _BYTE v64[16]; // [rsp+D0h] [rbp-108h] BYREF
  void *v65; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-F0h]
  _BYTE v67[32]; // [rsp+F0h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+110h] [rbp-C8h] BYREF
  _BYTE v69[184]; // [rsp+120h] [rbp-B8h] BYREF

  v3 = a1 + 169;
  v4 = a2;
  ptr[0] = v69;
  ptr[1] = (void *)0x2000000000LL;
  sub_716DB0((__int64)ptr, a1, a2);
  v5 = ptr;
  v57 = 0;
  v6 = sub_25AC3A0(a1 + 169, ptr, &v57, off_47D0CA0);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(v4 + 56);
  v10 = *(_DWORD *)(v9 + 20);
  v65 = v67;
  v11 = v10 & 0x1FFFFFFF;
  v66 = 0x400000000LL;
  if ( v11 > 4 )
  {
    v5 = v67;
    sub_25D6060(&v65, v67, v11, 8);
    v11 = *(_DWORD *)(v9 + 20) & 0x1FFFFFFF;
  }
  v12 = 8 * v11;
  v13 = (_QWORD *)(v9 + 24);
  if ( v12 )
  {
    v49 = v4;
    v48 = a1 + 169;
    v14 = v9 + v12 + 24;
    while ( 1 )
    {
      v15 = *v13;
      v16 = *(_BYTE *)(*v13 + 28LL) & 0x7F;
      if ( v16 == 65 )
      {
        if ( (*(_BYTE *)(v15 + 60) & 8) != 0 )
        {
          v17 = *(_DWORD *)(v15 + 64);
          BYTE4(v58) = 1;
          LODWORD(v58) = v17;
        }
        else
        {
          BYTE4(v58) = 0;
        }
        v18 = (unsigned __int8)sub_7D53F0(v15, v5);
        v19 = sub_7D53D0(v15);
        v20 = sub_7D53B0(v15);
        v5 = (_BYTE *)sub_6E2C00((unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL), *(_QWORD *)(a1[264] + 80LL));
        if ( v5 )
          v5 += 40;
        v21 = sub_7D4F60(a1, v5, 0, 0, v20, v19, 0, 0, v18, 0, v58);
        v22 = (unsigned int)v66;
        v23 = (unsigned int)v66 + 1LL;
        if ( HIDWORD(v66) >= v23 )
          goto LABEL_16;
      }
      else
      {
        if ( v16 == 45 )
        {
          v47 = sub_716C70(
                  a1,
                  *(_QWORD *)&byte_8[*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v15 + 48) & 7LL);
          v45 = sub_6C38B0(a1, v47, 0);
          if ( *(_BYTE *)(v15 + 81) )
          {
            v31 = *(unsigned int *)(v15 + 84);
            v59 = v61;
            v60 = 0x200000000LL;
            v62 = v64;
            v63 = 0x200000000LL;
            if ( (_DWORD)v31 )
            {
              v32 = v15;
              v33 = 2;
              v34 = 0;
              v35 = v15 + 16 * v31;
              while ( 1 )
              {
                v39 = *(_QWORD *)&byte_8[*(_QWORD *)(v32 + 88) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v32 + 88) & 7LL;
                if ( v33 < v34 + 1 )
                {
                  v52 = *(_QWORD *)&byte_8[*(_QWORD *)(v32 + 88) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v32 + 88) & 7LL;
                  sub_25D6060(&v59, v61, v34 + 1, 8);
                  v34 = (unsigned int)v60;
                  v39 = v52;
                }
                *((_QWORD *)v59 + v34) = v39;
                LODWORD(v60) = v60 + 1;
                v36 = sub_6C38B0(a1, *((_QWORD *)v59 + (unsigned int)v60 - 1), 0);
                v37 = (unsigned int)v63 + 1LL;
                if ( HIDWORD(v63) < v37 )
                {
                  v53 = v36;
                  v32 += 16;
                  sub_25D6060(&v62, v64, v37, 8);
                  *((_QWORD *)v62 + (unsigned int)v63) = v53;
                  v34 = (unsigned int)v60;
                  v38 = (unsigned int)(v63 + 1);
                  LODWORD(v63) = v63 + 1;
                  if ( v35 == v32 )
                  {
LABEL_42:
                    v40 = v59;
                    v41 = v62;
                    goto LABEL_43;
                  }
                }
                else
                {
                  v32 += 16;
                  *((_QWORD *)v62 + (unsigned int)v63) = v36;
                  v34 = (unsigned int)v60;
                  v38 = (unsigned int)(v63 + 1);
                  LODWORD(v63) = v63 + 1;
                  if ( v32 == v35 )
                    goto LABEL_42;
                }
                v33 = HIDWORD(v60);
              }
            }
            v40 = v61;
            v41 = v64;
            v38 = 0;
            v34 = 0;
LABEL_43:
            v56 = v38;
            v42 = *(_WORD *)(v15 + 70);
            v54 = (__int64)v40;
            v55 = v34;
            v43 = *(_DWORD *)(v15 + 68) & 0xFFFFF;
            v5 = (_BYTE *)sub_6E2C00(
                            (unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL),
                            *(_QWORD *)(a1[264] + 80LL));
            if ( v5 )
              v5 += 40;
            v21 = sub_7D5600(
                    (_DWORD)a1,
                    (_DWORD)v5,
                    0,
                    0,
                    v43,
                    v42 >> 4,
                    0,
                    v47,
                    (__int64)v45,
                    v54,
                    v55,
                    (__int64)v41,
                    v56);
            if ( v62 != v64 )
              free(v62);
            if ( v59 != v61 )
              free(v59);
          }
          else
          {
            v51 = *(unsigned __int8 *)(v15 + 80);
            v50 = *(_DWORD *)(v15 + 68) & 0xFFFFF;
            v30 = *(_WORD *)(v15 + 70) >> 4;
            v5 = (_BYTE *)sub_6E2C00(
                            (unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL),
                            *(_QWORD *)(a1[264] + 80LL));
            if ( v5 )
              v5 += 40;
            v21 = sub_7D5420((_DWORD)a1, (_DWORD)v5, 0, 0, v50, v30, 0, v47, v51, (__int64)v45);
          }
        }
        else
        {
          v5 = (_BYTE *)*v13;
          v21 = sub_7173A0(a1, *v13);
        }
        v22 = (unsigned int)v66;
        v23 = (unsigned int)v66 + 1LL;
        if ( HIDWORD(v66) >= v23 )
          goto LABEL_16;
      }
      v5 = v67;
      sub_25D6060(&v65, v67, v23, 8);
      v22 = (unsigned int)v66;
LABEL_16:
      ++v13;
      *((_QWORD *)v65 + v22) = v21;
      v24 = v66 + 1;
      LODWORD(v66) = v66 + 1;
      if ( (_QWORD *)v14 == v13 )
      {
        v3 = v48;
        v4 = v49;
        goto LABEL_18;
      }
    }
  }
  v24 = v66;
LABEL_18:
  v46 = sub_7D1E40((_DWORD)a1, 0, 0, (_DWORD)v65, v24, 0, 0);
  v25 = *(_WORD *)(v4 + 66) >> 4;
  v44 = (*(_BYTE *)(v4 + 80) & 2) != 0;
  v26 = *(_DWORD *)(v4 + 64) & 0xFFFFF;
  v27 = sub_6E2C00((unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL), *(_QWORD *)(a1[264] + 80LL));
  if ( v27 )
    LODWORD(v27) = v27 + 40;
  v7 = sub_7D5B60((_DWORD)a1, v27, 0, v26, v25, v44, 0, 0, v46);
  sub_25AC3A0(v3, ptr, &v57, off_47D0CA0);
  v28 = a1[274];
  a1[284] += 16LL;
  v29 = (_QWORD *)((v28 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)(v29 + 2) && v28 )
    a1[274] = v29 + 2;
  else
    v29 = (_QWORD *)sub_6A76A0((__int64)(a1 + 274), 16, 3);
  v29[1] = v7;
  *v29 = 0;
  sub_25AC200(v3, v29, v57, off_47D0CA0);
  if ( v65 != v67 )
    free(v65);
LABEL_3:
  if ( ptr[0] != v69 )
    free(ptr[0]);
  return v7;
}

