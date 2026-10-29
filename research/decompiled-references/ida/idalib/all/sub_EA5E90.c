void __fastcall sub_EA5E90(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // r12d
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // r12
  int v15; // r13d
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  void **v34; // r14
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int8 v39; // dl
  int v40; // edx
  int v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // eax
  void **v54; // [rsp+8h] [rbp-80h]
  unsigned __int64 v55; // [rsp+8h] [rbp-80h]
  int v56; // [rsp+8h] [rbp-80h]
  bool v57; // [rsp+17h] [rbp-71h]
  __int64 v58; // [rsp+18h] [rbp-70h]
  int v59; // [rsp+18h] [rbp-70h]
  __int64 v60; // [rsp+18h] [rbp-70h]
  __int64 v61; // [rsp+18h] [rbp-70h]
  __int64 v62; // [rsp+18h] [rbp-70h]
  unsigned __int64 v63; // [rsp+18h] [rbp-70h]
  __int64 v64; // [rsp+28h] [rbp-60h]
  unsigned __int64 v65; // [rsp+28h] [rbp-60h]
  unsigned int v66; // [rsp+28h] [rbp-60h]
  _QWORD v67[2]; // [rsp+30h] [rbp-58h] BYREF
  void *v68; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v69; // [rsp+48h] [rbp-40h]

  v3 = a1 + 176;
  v4 = *(unsigned int *)(a1 + 184);
  v5 = *a2;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v4 + 1, 4);
    v4 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v4) = v5;
  v6 = *a2;
  ++*(_DWORD *)(a1 + 184);
  if ( v6 != 7 )
  {
    if ( v6 == 12 )
    {
      v18 = sub_A51390((__int64)a2);
      sub_EA58C0(a1, v18);
      v19 = sub_B8C330(v18);
      v20 = sub_A8CAF0(v19, (__int64)a2);
      v21 = *(unsigned int *)(a1 + 184);
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
      {
        v55 = v20;
        sub_2237220(v3, a1 + 192, v21 + 1, 4);
        v21 = *(unsigned int *)(a1 + 184);
        v20 = v55;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v21) = v20;
      v22 = HIDWORD(v20);
      v23 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
      v24 = *(unsigned int *)(a1 + 188);
      *(_DWORD *)(a1 + 184) = v23;
      if ( v23 + 1 > v24 )
      {
        v56 = v22;
        sub_2237220(v3, a1 + 192, v23 + 1, 4);
        v23 = *(unsigned int *)(a1 + 184);
        LODWORD(v22) = v56;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v23) = v22;
      ++*(_DWORD *)(a1 + 184);
    }
    else
    {
      sub_A4FF00(a2, v3);
    }
    return;
  }
  v67[0] = sub_A51060((__int64)a2);
  v67[1] = v7;
  if ( sub_A4F700(v67) )
  {
    v8 = v67[0] & 0xFFFFFFFFFFFFFFFCLL;
    sub_EA58C0(a1, v67[0] & 0xFFFFFFFFFFFFFFFCLL);
    v9 = *(_QWORD *)sub_A51080((__int64)a2);
    v10 = *(unsigned int *)(a1 + 184);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      v8 = a1 + 192;
      sub_2237220(v3, a1 + 192, v10 + 1, 4);
      v10 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v10) = v9;
    v11 = HIDWORD(v9);
    v12 = *(unsigned int *)(a1 + 188);
    v13 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
    *(_DWORD *)(a1 + 184) = v13;
    if ( v13 + 1 > v12 )
    {
      v8 = a1 + 192;
      sub_2237220(v3, a1 + 192, v13 + 1, 4);
      v13 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v13) = v11;
    ++*(_DWORD *)(a1 + 184);
    v14 = sub_A51070((__int64)a2);
    v57 = sub_A51090((__int64)a2);
    if ( v57 )
    {
      v58 = sub_A4F310(v67);
      v30 = sub_A510A0((__int64)a2);
      v54 = (void **)(v30 + 8 * v33);
      if ( (void **)v30 != v54 )
      {
        v34 = (void **)v30;
        v35 = v58;
        do
        {
          v36 = (unsigned __int64)*v34;
          v37 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
          v38 = *(unsigned __int8 *)(v37 + 16);
          if ( (unsigned __int8)(v38 - 2) > 4u )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
              || (v42 = sub_F63050(v37, v8, v38, v37), (v37 = v42) == 0) )
            {
              v43 = v36 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_BYTE *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 49 > 2 )
              {
                v45 = sub_B8C330(v36 & 0xFFFFFFFFFFFFFFF8LL);
                v8 = v36 & 0xFFFFFFFFFFFFFFF8LL;
                v35 = sub_A7A9D0(v45, v36 & 0xFFFFFFFFFFFFFFF8LL, v46, v47, v48, v49);
              }
              else
              {
                v44 = *(_QWORD *)(v43 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v43 + 16) & 4) != 0 )
                  v44 = *(_QWORD *)v44;
                if ( (*(_BYTE *)(v44 + 8) & 0x7Fu) - 58 > 3 )
                  BUG();
                if ( *(_BYTE *)(v44 + 9) >> 5 == 2 )
                {
                  v50 = v36 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( *(char *)(v43 + 29) < 0 )
                  {
                    v50 = sub_B72720(v36 & 0xFFFFFFFFFFFFFFF8LL);
                    v43 = v36 & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  v51 = *(unsigned int *)(v50 + 68);
                  if ( (v51 & 0xFFFFFFF0) == 0 )
                  {
                    v65 = v43;
                    v62 = v50;
                    sub_B7EAB0(v50, v8, v51, v37, v31, v32);
                    v43 = v65;
                    LODWORD(v51) = *(_DWORD *)(v62 + 68);
                  }
                  v52 = *(unsigned int *)(a1 + 184);
                  v8 = *(unsigned int *)(a1 + 188);
                  v53 = ((unsigned int)v51 >> 4) - 1;
                  if ( v52 + 1 > v8 )
                  {
                    v8 = a1 + 192;
                    v66 = ((unsigned int)v51 >> 4) - 1;
                    v63 = v43;
                    sub_2237220(v3, a1 + 192, v52 + 1, 4);
                    v52 = *(unsigned int *)(a1 + 184);
                    v53 = v66;
                    v43 = v63;
                  }
                  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v52) = v53;
                  ++*(_DWORD *)(a1 + 184);
                }
                v35 = *(_QWORD *)(v43 + 48);
              }
              goto LABEL_36;
            }
            LODWORD(v38) = *(unsigned __int8 *)(v42 + 16);
          }
          if ( (unsigned int)(v38 - 2) <= 1 )
          {
            v39 = *(_BYTE *)(v37 + 19);
            v8 = *(_QWORD *)(v37 + 40);
            if ( (v39 & 2) != 0 )
            {
              v69 = *(_DWORD *)(v8 + 8);
              if ( v69 <= 0x40 )
              {
                v68 = *(void **)v8;
LABEL_33:
                if ( (void *)v36 == v68 )
                  v14 = v57;
                goto LABEL_35;
              }
              v61 = v37;
              sub_2205510(&v68);
              v40 = v69;
              v37 = v61;
            }
            else
            {
              v40 = 8 * ((v39 >> 2) & 0x1F);
              v69 = v40;
              if ( v40 > 64 )
              {
                v60 = v37;
                sub_2205470(&v68, v8, 0);
                v40 = v69;
                v37 = v60;
              }
              else
              {
                v68 = (void *)v8;
              }
            }
            v59 = v40;
            if ( (unsigned int)v40 <= 0x40 )
              goto LABEL_33;
            v64 = v37;
            v41 = sub_2206780(&v68);
            v37 = v64;
            if ( (unsigned int)(v59 - v41) <= 0x40 )
            {
              if ( v36 == *(_QWORD *)v68 )
                v14 = v57;
LABEL_45:
              operator delete[](v68);
              v37 = v64;
              goto LABEL_35;
            }
            if ( v68 )
              goto LABEL_45;
          }
LABEL_35:
          v35 = *(_QWORD *)(v37 + 32);
LABEL_36:
          ++v34;
        }
        while ( v54 != v34 );
      }
    }
    v15 = (unsigned __int8)sub_A510C0((__int64)a2);
    if ( v14 )
      v15 |= 2u;
    v16 = !sub_A51090((__int64)a2);
    v17 = *(unsigned int *)(a1 + 184);
    if ( !v16 )
      v15 |= 4u;
    if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      sub_2237220(v3, a1 + 192, v17 + 1, 4);
      v17 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v17) = v15;
    ++*(_DWORD *)(a1 + 184);
  }
  else
  {
    v25 = *(_QWORD *)sub_A51080((__int64)a2);
    v26 = *(unsigned int *)(a1 + 184);
    if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      sub_2237220(v3, a1 + 192, v26 + 1, 4);
      v26 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v26) = v25;
    v27 = HIDWORD(v25);
    v28 = *(unsigned int *)(a1 + 188);
    v29 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
    *(_DWORD *)(a1 + 184) = v29;
    if ( v29 + 1 > v28 )
    {
      sub_2237220(v3, a1 + 192, v29 + 1, 4);
      v29 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v29) = v27;
    ++*(_DWORD *)(a1 + 184);
  }
}
