__int64 __fastcall sub_11D9C90(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 *v8; // rax
  _QWORD *v9; // r15
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  unsigned __int8 *v13; // r14
  __int64 v14; // rax
  const void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  size_t v20; // r12
  const char *v21; // rax
  const char *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  size_t v26; // r12
  char *v27; // rax
  char *v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  _BYTE *v32; // rax
  signed __int64 v33; // rdx
  void **v34; // rax
  _BYTE *v35; // rax
  signed __int64 v36; // rdx
  size_t v37; // rax
  void **v38; // r14
  _BYTE *v39; // rsi
  size_t v40; // r15
  __int64 v41; // rax
  void **v42; // rbp
  __int64 v43; // rsi
  void **v44; // rax
  unsigned __int64 v45; // rsi
  size_t v46; // r8
  _BYTE *v47; // rax
  _BYTE *v48; // rcx
  size_t v49; // r9
  unsigned __int64 v50; // rdx
  _BYTE *v51; // rdi
  void **v52; // r14
  size_t v53; // rsi
  void **v54; // r12
  _BYTE *v55; // rdi
  _BYTE *v56; // rax
  size_t v57; // r8
  _BYTE *v58; // rax
  _BYTE *v59; // rcx
  size_t v60; // r13
  unsigned __int64 v61; // rdx
  _BYTE *v62; // rdi
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // rdx
  signed __int64 v65; // rdx
  size_t v67; // [rsp+8h] [rbp-130h]
  size_t v68; // [rsp+8h] [rbp-130h]
  __int64 *v69; // [rsp+10h] [rbp-128h]
  __int64 v70; // [rsp+30h] [rbp-108h]
  void **v71; // [rsp+48h] [rbp-F0h] BYREF
  void *v72; // [rsp+50h] [rbp-E8h] BYREF
  size_t v73; // [rsp+58h] [rbp-E0h]
  _QWORD v74[2]; // [rsp+60h] [rbp-D8h] BYREF
  void **v75; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int v76; // [rsp+78h] [rbp-C0h]
  char v77; // [rsp+A0h] [rbp-98h]
  unsigned __int8 *v78[4]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v79; // [rsp+D0h] [rbp-68h]

  v5 = a2;
  v6 = *(_QWORD *)(a2 + 176);
  v7 = operator new(0x148u);
  sub_21B6CD0(v7, v6);
  v8 = sub_1105E80();
  v9 = *(_QWORD **)(a2 + 8);
  v69 = v8;
  v10 = &v9[*(unsigned int *)(a2 + 16)];
  if ( v10 != v9 )
  {
    v11 = v9 + 1;
    if ( *v9 )
      goto LABEL_7;
    while ( 1 )
    {
      v9 = v11;
      if ( v10 == v11 )
        break;
      if ( *v11++ )
      {
        while ( 1 )
        {
LABEL_7:
          v13 = (unsigned __int8 *)*v9;
          v78[0] = *(unsigned __int8 **)v9;
          if ( sub_1178040(v7, (__int64 *)v78) )
          {
            v12 = v9 + 1;
            if ( v10 == v9 + 1 )
              goto LABEL_9;
          }
          else
          {
            sub_21B80F0(v7, v13);
            v12 = v9 + 1;
            if ( v10 == v9 + 1 )
              goto LABEL_9;
          }
          if ( !v9[1] )
            break;
LABEL_6:
          v9 = v12;
        }
        while ( 1 )
        {
          if ( v10 == ++v12 )
            goto LABEL_9;
          if ( *v12 )
            goto LABEL_6;
        }
      }
    }
  }
LABEL_9:
  v14 = sub_10DCD30(v7, 0x8D4u);
  if ( a5 && !v14 )
  {
    v26 = 0;
    v27 = sub_FF7B80(9);
    v28 = v27;
    if ( v27 )
      v26 = j__strlen(v27);
    v29 = sub_21BB380(v69, 2260);
    v31 = sub_21B8AA0(v7, 0, v29, v30, v28, v26);
    sub_21B80F0(v7, v31);
  }
  else
  {
    v15 = (const void *)sub_21B7BC0(v7, 2260, &byte_22F0C30, 0);
    if ( v16 != 7 || memcmp(v15, "generic", 7u) | a5 )
    {
      v17 = sub_21B7BC0(v7, 2260, &byte_22F0C30, 0);
      if ( v18 == 6 && *(_DWORD *)v17 == 1769234798 && *(_WORD *)(v17 + 4) == 25974 )
      {
        ((void (__fastcall *)(void ***, __int64 **, __int64))(*a1)[83])(&v75, a1, a2);
        if ( (v77 & 1) != 0 )
        {
          sub_FC70B0((__int64)v78, *a1[1], 0, 479);
          v32 = (_BYTE *)sub_22B7480(a1 + 2);
          sub_AEC220(v78, v32, v33);
          if ( (v77 & 1) != 0 )
          {
            v34 = v75;
            v75 = nullptr;
            v71 = v34;
          }
          else
          {
            v71 = nullptr;
          }
          sub_2221210(&v72, &v71);
          sub_AEC220(v78, v72, v73);
          sub_AE9DF0(v78, (__int64)"-march", 1u);
          if ( v72 != v74 )
            operator delete(v72);
          if ( v71 )
            (*((void (__fastcall **)(void **))*v71 + 1))(v71);
          sub_AEA040((__int64)v78);
        }
        else
        {
          if ( v76 > 1 )
          {
            sub_FC70B0((__int64)v78, *a1[1], 0, 576);
            v35 = (_BYTE *)sub_22B7480(a1 + 2);
            sub_AEC220(v78, v35, v36);
            v37 = j__strlen(", ");
            v38 = v75;
            v39 = v74;
            v40 = v37;
            v72 = v74;
            v41 = 4LL * v76;
            LOBYTE(v74[0]) = 0;
            v73 = 0;
            v42 = &v75[v41];
            if ( v75 == &v75[v41] )
            {
              v65 = 0;
            }
            else
            {
              v43 = ((v41 * 8) >> 5) - 1;
              v44 = v75;
              v45 = v40 * v43;
              do
              {
                v45 += (unsigned __int64)v44[1];
                v44 += 4;
              }
              while ( v42 != v44 );
              sub_995C30((__int64)&v72, v45);
              v46 = (size_t)v38[1];
              v47 = v72;
              v48 = *v38;
              v49 = v46 + v73;
              if ( v72 == v74 )
                v50 = 15;
              else
                v50 = v74[0];
              if ( v49 > v50 )
              {
                v68 = v46 + v73;
                sub_998B30((__int64)&v72, v73, 0, v48, v46);
                v47 = v72;
                v49 = v68;
              }
              else if ( v46 )
              {
                v51 = (char *)v72 + v73;
                if ( v46 == 1 )
                {
                  *v51 = *v48;
                  v47 = v72;
                }
                else
                {
                  v67 = v46 + v73;
                  memcpy(v51, *v38, (size_t)v38[1]);
                  v47 = v72;
                  v49 = v67;
                }
              }
              v52 = v38 + 4;
              v73 = v49;
              v47[v49] = 0;
              if ( v42 != v52 )
              {
                v53 = v73;
                if ( v40 > 0x7FFFFFFFFFFFFFFFLL - v73 )
LABEL_84:
                  std::__throw_length_error("basic_string::append");
                v54 = v52;
                v70 = v5;
                while ( 1 )
                {
                  v56 = v72;
                  v63 = v40 + v53;
                  v64 = v72 == v74 ? 15LL : v74[0];
                  if ( v63 <= v64 )
                  {
                    if ( v40 )
                    {
                      v55 = (char *)v72 + v53;
                      if ( v40 == 1 )
                        *v55 = 44;
                      else
                        memcpy(v55, ", ", v40);
                      v56 = v72;
                    }
                  }
                  else
                  {
                    sub_998B30((__int64)&v72, v53, 0, ", ", v40);
                    v56 = v72;
                  }
                  v73 = v40 + v53;
                  v56[v63] = 0;
                  v57 = (size_t)v54[1];
                  v58 = v72;
                  v59 = *v54;
                  v60 = v57 + v73;
                  v61 = v72 == v74 ? 15LL : v74[0];
                  if ( v60 > v61 )
                  {
                    sub_998B30((__int64)&v72, v73, 0, v59, v57);
                    v58 = v72;
                  }
                  else if ( v57 )
                  {
                    v62 = (char *)v72 + v73;
                    if ( v57 == 1 )
                      *v62 = *v59;
                    else
                      memcpy(v62, *v54, (size_t)v54[1]);
                    v58 = v72;
                  }
                  v54 += 4;
                  v73 = v60;
                  v58[v60] = 0;
                  if ( v42 == v54 )
                    break;
                  v53 = v73;
                  if ( v40 > 0x7FFFFFFFFFFFFFFFLL - v73 )
                    goto LABEL_84;
                }
                v5 = v70;
              }
              v39 = v72;
              v65 = v73;
            }
            sub_AEC220(v78, v39, v65);
            sub_AE9DF0(v78, (__int64)"-march", 1u);
            if ( v72 != v74 )
              operator delete(v72);
            sub_AEA040((__int64)v78);
          }
          v20 = 0;
          v79 = 260;
          v78[0] = (unsigned __int8 *)v75;
          v21 = (const char *)sub_10DA6C0(v5, (__int64)v78);
          v22 = v21;
          if ( v21 )
            v20 = j__strlen(v21);
          v23 = sub_21BB380(v69, 2260);
          v25 = sub_21B8AA0(v7, 0, v23, v24, v22, v20);
          sub_21B80F0(v7, v25);
        }
        sub_10DFE60(&v75);
      }
    }
    else
    {
      sub_21B7DF0(v7, 2260);
    }
  }
  return v7;
}
