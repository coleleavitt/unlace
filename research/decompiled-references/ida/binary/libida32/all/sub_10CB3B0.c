__int64 __fastcall sub_10CB3B0(__int64 a1, __int64 a2, int a3, int a4, unsigned int **a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // r12
  unsigned int *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r13
  _QWORD *v14; // r14
  int v15; // ebx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r12
  unsigned int v19; // ebx
  char *v20; // rsi
  char *v21; // rsi
  __int64 v22; // rbx
  char *v23; // rsi
  char *v24; // rsi
  __int64 v25; // rax
  void **v26; // rbx
  __int64 v27; // rax
  _DWORD *v28; // r12
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // al
  _BYTE *v38; // rdi
  __int64 v40; // rbp
  void *v41; // rbx
  bool v42; // zf
  __int64 v43; // rax
  __int64 v44; // [rsp+8h] [rbp-190h]
  __int64 v45; // [rsp+10h] [rbp-188h]
  __int64 v46; // [rsp+20h] [rbp-178h]
  __int64 *v47; // [rsp+28h] [rbp-170h]
  int v48; // [rsp+28h] [rbp-170h]
  __int64 v49; // [rsp+38h] [rbp-160h]
  __int64 v52; // [rsp+48h] [rbp-150h]
  __int64 v55; // [rsp+78h] [rbp-120h] BYREF
  __int64 v56[2]; // [rsp+80h] [rbp-118h] BYREF
  void *v57; // [rsp+90h] [rbp-108h] BYREF
  __int64 v58; // [rsp+98h] [rbp-100h]
  _BYTE v59[32]; // [rsp+A0h] [rbp-F8h] BYREF
  void *v60[2]; // [rsp+C0h] [rbp-D8h] BYREF
  _QWORD v61[3]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v62; // [rsp+E8h] [rbp-B0h]
  __int64 v63; // [rsp+F0h] [rbp-A8h]
  _BYTE v64[24]; // [rsp+F8h] [rbp-A0h] BYREF
  void *v65; // [rsp+110h] [rbp-88h]
  __int64 v66; // [rsp+118h] [rbp-80h]
  _BYTE v67[24]; // [rsp+120h] [rbp-78h] BYREF
  void *ptr; // [rsp+138h] [rbp-60h]
  __int64 v69; // [rsp+140h] [rbp-58h]
  _BYTE v70[80]; // [rsp+148h] [rbp-50h] BYREF

  v5 = *(_DWORD *)(a1 + 80);
  v57 = v59;
  v58 = 0x300000000LL;
  if ( v5 )
  {
    v52 = 8LL * (v5 - 1) + 8;
    v45 = 0;
    do
    {
      v8 = *a5;
      v46 = (__int64)&(*a5)[*((unsigned int *)a5 + 2)];
      v9 = *(_QWORD *)(a1 + 120);
      if ( *a5 == (unsigned int *)v46 )
      {
LABEL_13:
        v44 = *(_QWORD *)(v9 + v45);
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = *v8;
            if ( (int)v10 >= a3 )
              break;
            if ( (unsigned int *)v46 == ++v8 )
              goto LABEL_13;
          }
          v6 = *(_QWORD *)(v9 + v45);
          v44 = v6;
          if ( (int)v10 > a4 )
            goto LABEL_7;
          v7 = *(_QWORD *)(a1 + 48);
          v47 = *(__int64 **)(a1 + 8);
          v49 = *v47;
          sub_220FAE0(v60);
          v60[0] = &off_2BC1238;
          v61[0] = "Constructing phase actions";
          if ( (_DWORD)v10 == 4 && *(_DWORD *)(v6 + 12) != 38 )
            break;
          LODWORD(v56[0]) = 3312;
          v11 = sub_2193060(v7, v56, 1);
          v12 = *(_QWORD *)(v7 + 8);
          v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
          v14 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
          if ( v13 == v14 )
            goto LABEL_18;
          while ( !*v13 || !(unsigned __int8)sub_2195AD0(*v13, 3312) )
          {
            if ( v14 == ++v13 )
              goto LABEL_18;
          }
          if ( v13 == v14 )
          {
LABEL_18:
            switch ( v10 )
            {
              case 0LL:
                if ( !sub_10BA920(v7, 0xBAEu, 0x9C8u) || (v19 = 62, sub_10BA920(v7, 0x927u, 0x9B4u)) )
                {
                  v19 = *(_DWORD *)(v44 + 12);
                  if ( !(unsigned __int8)sub_2193B10(v7, 1702, 1341, 0)
                    && !(unsigned __int8)sub_2193B10(v7, 1701, 1340, 0)
                    && !(unsigned __int8)sub_2193B10(v7, 619, 1102, 0)
                    && (*(_BYTE *)(v49 + 920) & 2) == 0 )
                  {
                    v19 = sub_12A8BA0(v19);
                  }
                }
                v18 = operator new(0x58u);
                sub_10AF710(v18, v44, v19);
                v56[0] = v18;
                v20 = (char *)v47[12];
                if ( v20 == (char *)v47[13] )
                {
                  sub_10C6F70((__int64)(v47 + 11), v20, v56);
                }
                else
                {
                  v56[0] = 0;
                  v21 = v20 + 8;
                  *((_QWORD *)v21 - 1) = v18;
                  v47[12] = (__int64)v21;
                }
                goto LABEL_24;
              case 1LL:
                if ( sub_10B8FF0(v7, 0x183u) )
                {
                  v18 = operator new(0x58u);
                  sub_10AF7B0(v18, v44, 65);
                  goto LABEL_23;
                }
                if ( sub_10B8FF0(v7, 0x3C1u) && !sub_10B8FF0(v7, 0xC44u) )
                {
                  v18 = v44;
                  goto LABEL_26;
                }
                v34 = sub_12A8BC0(*(unsigned int *)(v44 + 12));
                if ( v34 == 57 )
                {
                  v43 = sub_10B8FF0(v7, 0x3AFu);
                  if ( v43 )
                  {
                    if ( **(_QWORD **)(v43 + 48) )
                      v34 = 51;
                  }
                }
                if ( sub_10B8FF0(v7, 0x738u) )
                  v34 = 67;
                v18 = operator new(0x58u);
                sub_10AF850(v18, v44, v34);
                goto LABEL_23;
              case 2LL:
                if ( sub_10B8FF0(v7, 0x738u) )
                {
                  v18 = operator new(0x58u);
                  sub_10AF670(v18, v44, 67);
                  goto LABEL_23;
                }
                if ( sub_10B8FF0(v7, 0xC96u) )
                {
                  v18 = operator new(0x58u);
                  sub_10AF670(v18, v44, 54);
                  goto LABEL_23;
                }
                if ( sub_10B8FF0(v7, 0xC94u) )
                {
                  v18 = sub_10C78B0((__int64)v47, v44, 55);
                  goto LABEL_26;
                }
                if ( sub_10B8FF0(v7, 0x7Bu) )
                {
                  v18 = operator new(0x58u);
                  sub_10AF5D0(v18, v44, 53);
                  goto LABEL_23;
                }
                if ( sub_10B8FF0(v7, 0x14Du) )
                {
                  v18 = sub_10C78B0((__int64)v47, v44, 48);
                }
                else if ( sub_10B8FF0(v7, 0x14Eu) )
                {
                  v18 = sub_10C78B0((__int64)v47, v44, 47);
                }
                else if ( sub_10B8FF0(v7, 0xAE3u) )
                {
                  v18 = sub_10C78B0((__int64)v47, v44, 51);
                }
                else if ( sub_10B8FF0(v7, 0xD34u) )
                {
                  v18 = sub_10C79D0((__int64)v47, v44);
                }
                else if ( sub_10B8FF0(v7, 0x183u) )
                {
                  v18 = sub_10C7A30((__int64)v47, v44);
                }
                else
                {
                  v18 = sub_10C78B0((__int64)v47, v44, 44);
                }
                goto LABEL_26;
              case 3LL:
                if ( *(_DWORD *)(v49 + 44) )
                {
                  v15 = (sub_10B8FF0(v7, 0xCF8u) == 0) + 45;
LABEL_21:
                  v16 = operator new(0x58u);
                  v17 = v15;
                  v18 = v16;
                  goto LABEL_22;
                }
                if ( sub_10B8FF0(v7, 0x159u)
                  || (v35 = *(_QWORD *)(v44 + 80)) != 0
                  && (unsigned int)(*(_DWORD *)(v35 + 48) - 25) <= 1
                  && ((unsigned __int8)sub_2193B10(v7, 825, 1164, 0)
                   || (unsigned __int8)sub_2193B10(v7, 3088, 3017, 0) && *(_DWORD *)(v49 + 28) != 2) )
                {
                  v15 = 44;
                  if ( sub_10B8FF0(v7, 0xCF8u) )
                    v15 = (*(_DWORD *)(v49 + 28) != 2) + 43;
                  goto LABEL_21;
                }
                v36 = operator new(0x58u);
                v17 = 38;
                v18 = v36;
LABEL_22:
                sub_10AF2B0(v18, v44, v17);
LABEL_23:
                v56[0] = v18;
                sub_10C7210((__int64)(v47 + 11), v56);
LABEL_24:
                if ( v56[0] )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v56[0] + 8LL))(v56[0]);
LABEL_26:
                ++v8;
                v60[0] = &off_2BC1238;
                sub_220FB60(v60);
                *(_QWORD *)(*(_QWORD *)(a1 + 120) + v45) = v18;
                v9 = *(_QWORD *)(a1 + 120);
                if ( (unsigned int *)v46 == v8 )
                  goto LABEL_13;
                break;
              case 4LL:
                v22 = operator new(0x58u);
                sub_10AF3F0(v22, v44, 58);
                v56[0] = v22;
                v23 = (char *)v47[12];
                if ( v23 == (char *)v47[13] )
                {
                  sub_10C6F70((__int64)(v47 + 11), v23, v56);
                }
                else
                {
                  v56[0] = 0;
                  v24 = v23 + 8;
                  *((_QWORD *)v24 - 1) = v22;
                  v47[12] = (__int64)v24;
                }
                if ( v56[0] )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v56[0] + 8LL))(v56[0]);
                v44 = v22;
                goto LABEL_6;
            }
          }
          else
          {
            do
            {
              v25 = *v13;
              if ( *(_QWORD *)(*v13 + 16LL) )
                v25 = *(_QWORD *)(*v13 + 16LL);
              ++v13;
              *(_BYTE *)(v25 + 44) |= 1u;
              if ( v13 == v14 )
                break;
              while ( !*v13 || !(unsigned __int8)sub_2195AD0(*v13, 3312) )
              {
                if ( v14 == ++v13 )
                  goto LABEL_49;
              }
            }
            while ( v14 != v13 );
LABEL_49:
            v60[0] = &off_2BC1238;
            sub_220FB60(v60);
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + v45) = v44;
            if ( (_DWORD)v10 == 4 )
            {
              v44 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + v45);
              goto LABEL_7;
            }
            v9 = *(_QWORD *)(a1 + 120);
            if ( (unsigned int *)v46 == ++v8 )
              goto LABEL_13;
          }
        }
LABEL_6:
        v60[0] = &off_2BC1238;
        sub_220FB60(v60);
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + v45) = v44;
        v44 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + v45);
      }
LABEL_7:
      if ( *(_DWORD *)(v44 + 8) == 9 && !*(_BYTE *)(a1 + 69) )
      {
        v26 = (void **)v56;
        v27 = **(_QWORD **)(v44 + 16);
        v56[0] = v44;
        v56[1] = v27;
        do
        {
          while ( 1 )
          {
            ptr = v70;
            v28 = *v26;
            v60[0] = v61;
            v62 = v64;
            v60[1] = (void *)0x300000000LL;
            v63 = 0x300000000LL;
            v66 = 0x300000000LL;
            v69 = 0x300000000LL;
            v29 = *(_QWORD *)(a1 + 72);
            v65 = v67;
            sub_10AE5F0((__int64)v60, (__int64)v28, **(_QWORD **)(a1 + 16), *(_QWORD *)(v29 + v45), 2);
            v30 = *(_QWORD *)(a1 + 8);
            v48 = v28[3];
            v31 = operator new(0x88u);
            sub_10AFA70(v31, (__int64)v60, v48);
            v55 = v31;
            sub_10C7210(v30 + 88, &v55);
            if ( v55 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
            v32 = (unsigned int)v58;
            v33 = (unsigned int)v58 + 1LL;
            if ( v33 > HIDWORD(v58) )
            {
              sub_22134E0(&v57, v59, v33, 8);
              v32 = (unsigned int)v58;
            }
            *((_QWORD *)v57 + v32) = v31;
            LODWORD(v58) = v58 + 1;
            if ( ptr != v70 )
              free(ptr);
            if ( v65 != v67 )
              free(v65);
            if ( v62 != v64 )
              free(v62);
            if ( v60[0] == v61 )
              break;
            free(v60[0]);
            if ( ++v26 == &v57 )
              goto LABEL_9;
          }
          ++v26;
        }
        while ( v26 != &v57 );
      }
LABEL_9:
      v45 += 8;
    }
    while ( v52 != v45 );
    if ( (_DWORD)v58 )
    {
      v40 = *(_QWORD *)(a1 + 8);
      v41 = (void *)operator new(0x58u);
      sub_10AEB00((__int64)v41, (__int64)&v57, 63);
      v60[0] = v41;
      sub_10C7210(v40 + 88, (__int64 *)v60);
      if ( v60[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v60[0] + 8LL))(v60[0]);
      v42 = *(_BYTE *)(a1 + 69) == 0;
      *(_QWORD *)(a1 + 160) = v41;
      if ( !v42 )
      {
        *(_DWORD *)(a1 + 128) = 0;
        v38 = v57;
LABEL_105:
        v5 = 2;
LABEL_96:
        if ( v38 != v59 )
          free(v38);
        return v5;
      }
      sub_10AE5F0(a2, (__int64)v41, **(_QWORD **)(a1 + 16), 0, 2);
      v37 = *(_BYTE *)(a1 + 69);
      *(_QWORD *)(a1 + 160) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      v38 = v57;
    }
    else
    {
      v37 = *(_BYTE *)(a1 + 69);
      v38 = v57;
    }
    v5 = 0;
    if ( !v37 )
      goto LABEL_96;
    goto LABEL_105;
  }
  if ( *(_BYTE *)(a1 + 69) )
    return 2;
  return v5;
}

