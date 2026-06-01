__int64 __fastcall sub_1DFF5F0(__int64 *a1, unsigned __int64 *a2, __m128 a3, __m128 a4)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  void **v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int16 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  char *v30; // rdi
  unsigned __int16 *v31; // r12
  __int64 v32; // rbx
  __int64 v33; // r15
  void **v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rdx
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rbx
  unsigned __int8 v39; // al
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v45; // [rsp+10h] [rbp-120h]
  __int64 v46; // [rsp+18h] [rbp-118h]
  __int64 v47; // [rsp+20h] [rbp-110h]
  int v48; // [rsp+28h] [rbp-108h]
  int v49; // [rsp+2Ch] [rbp-104h]
  __int64 *v50; // [rsp+30h] [rbp-100h]
  __int64 v51; // [rsp+30h] [rbp-100h]
  __int64 v52; // [rsp+50h] [rbp-E0h]
  __int64 v53; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+70h] [rbp-C0h]
  __int64 v55; // [rsp+78h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+80h] [rbp-B0h]
  void *ptr; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-70h]
  __int64 v59; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-60h]
  __int16 v61; // [rsp+D8h] [rbp-58h]
  char v62; // [rsp+DAh] [rbp-56h]
  __int64 v63; // [rsp+E0h] [rbp-50h]

  result = 0;
  if ( *a2 )
  {
    v5 = a1;
    v6 = *a1;
    sub_18C74E0(*a1, 4, 0, 4);
    v7 = *a2;
    v8 = a1[2];
    sub_18C74E0(v8, 6, 0, 4);
    v9 = a1[1];
    v10 = sub_BFBAE0(v7);
    if ( (*(_WORD *)v10 & 0x1FF) == 0x47 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_QWORD *)v9;
      if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x2B )
      {
        v13 = *(_QWORD *)(v9 + 16);
        if ( v12 )
          v12 += 72;
        v14 = *(_QWORD *)(v13 + 544);
        *(_QWORD *)(v13 + 544) = v12;
        v46 = v14;
        v15 = *(_QWORD *)(v13 + 512);
        *(_QWORD *)(v13 + 512) = 0;
        v47 = v15;
        v16 = *(_QWORD *)(v13 + 9944);
        *(_QWORD *)(v13 + 9944) = 0;
        v52 = v16;
        v48 = *(_DWORD *)(v13 + 80);
        v49 = *(_DWORD *)(v13 + 2632);
        *(_DWORD *)(v13 + 80) = *(_DWORD *)(v13 + 40);
        *(_DWORD *)(v13 + 2632) = *(_DWORD *)(v13 + 3688);
        v17 = *(_QWORD *)(v9 + 16);
        v54 = 1;
        v53 = v17;
        v18 = (void **)&v55;
        do
        {
          *v18 = (void *)-4096LL;
          v18 += 2;
        }
        while ( v18 != &ptr );
        ptr = &v59;
        v58 = 0x100000000LL;
        v19 = *(_QWORD *)(v17 + 11280);
        v62 = 0;
        v60 = v19;
        v61 = 0;
        v63 = 0;
        *(_QWORD *)(v17 + 11280) = &v53;
        v20 = sub_B76070(*(_QWORD *)v9, v11, -4096, (__int64)&v53);
        v24 = (unsigned __int8)(*(_WORD *)(v11 + 98) >> 4);
        if ( v24 == 255 )
        {
          if ( v20 <= (unsigned int)sub_B74880(v11) )
          {
LABEL_12:
            v26 = v7;
            v27 = sub_1DF2070(*(_QWORD *)(v9 + 16), v7, *(_QWORD *)(v9 + 24), v21, v22, v23, a3, a4);
            v30 = (char *)ptr;
            v31 = v27;
            if ( !(_BYTE)v61 )
            {
              v30 = (char *)ptr;
              if ( (_DWORD)v58 )
              {
                v45 = v13;
                v50 = v5;
                v32 = 0;
                v33 = 8LL * (unsigned int)(v58 - 1) + 8;
                do
                {
                  v34 = *(void ***)&v30[v32];
                  if ( v34 )
                  {
                    if ( *v34 != v34 + 2 )
                      free(*v34);
                    v26 = 48;
                    operator delete(v34, 0x30u);
                    v30 = (char *)ptr;
                  }
                  v32 += 8;
                }
                while ( v33 != v32 );
                v13 = v45;
                v5 = v50;
              }
              *(_QWORD *)(v53 + 11280) = v60;
              LOBYTE(v61) = 1;
            }
            if ( v30 != (char *)&v59 )
              free(v30);
            if ( (v54 & 1) == 0 )
            {
              v26 = 16LL * v56;
              operator delete(v55, v26, 8);
            }
            if ( v46 )
            {
              *(_QWORD *)(v13 + 544) = v46;
              *(_QWORD *)(v13 + 512) = v47;
              *(_QWORD *)(v13 + 9944) = v52;
              *(_DWORD *)(v13 + 80) = v48;
              *(_DWORD *)(v13 + 2632) = v49;
              if ( v31 != (unsigned __int16 *)((char *)&dword_0 + 1) )
                goto LABEL_28;
              goto LABEL_35;
            }
LABEL_34:
            if ( v31 != (unsigned __int16 *)((char *)&dword_0 + 1) )
            {
LABEL_28:
              v35 = v5[2];
              v36 = 0;
              v37 = (unsigned __int64)v31 & 0xFFFFFFFFFFFFFFFELL;
              if ( v37 )
                v36 = (unsigned int)sub_C00A40(v37, v26, 0, v28, v29);
              v38 = sub_19B4A30(v35, v37, v36, 0, 0, 0, a3, a4);
              sub_190D5E0(v8, a3);
              if ( v38 > 1 )
              {
                *a2 = v38 & 0xFFFFFFFFFFFFFFFELL;
                sub_190D5E0(v6, a3);
                return 0;
              }
              goto LABEL_36;
            }
LABEL_35:
            sub_190D5E0(v8, a3);
LABEL_36:
            sub_190D5E0(v6, a3);
            return 1;
          }
          v25 = *(_QWORD *)v9;
          v24 = (unsigned __int8)(*(_WORD *)(v11 + 98) >> 4);
          if ( v24 == 255 )
          {
            v51 = *(_QWORD *)v9;
            v24 = sub_B74880(v11);
            v25 = v51;
          }
        }
        else
        {
          if ( v20 <= v24 )
            goto LABEL_12;
          v25 = *(_QWORD *)v9;
        }
        sub_1DC20B0((__int64)&v53, v11, *(_QWORD *)(*(_QWORD *)(v25 + 120) + 8LL * v24), v21);
        goto LABEL_12;
      }
    }
    else
    {
      v12 = *(_QWORD *)v9;
    }
    v39 = sub_B72F20(v12);
    sub_19A2CD0((__int64)&v53, *(_QWORD *)(v9 + 16), *(_QWORD *)(v9 + 8), 0, v39, v40);
    v26 = v7;
    v31 = sub_1DF2070(*(_QWORD *)(v9 + 16), v7, *(_QWORD *)(v9 + 24), v41, v42, v43, a3, a4);
    sub_19A2DA0(&v53);
    goto LABEL_34;
  }
  return result;
}
