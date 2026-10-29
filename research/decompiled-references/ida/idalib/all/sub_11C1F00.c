void __fastcall sub_11C1F00(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  const char **v16; // rax
  size_t v17; // r12
  char *v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rax
  signed __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  const char **v27; // rbp
  __int64 v28; // rax
  const char **v29; // r13
  char *v30; // rbx
  size_t v31; // rax
  unsigned __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r13
  const char **v39; // rax
  size_t v40; // r12
  char *v41; // rbp
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  size_t v48; // rax
  unsigned __int64 v49; // r10
  _BYTE *v50; // rdx
  __int64 v51; // rax
  char *v52; // rax
  signed __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __m128i v63; // [rsp+30h] [rbp-188h]
  size_t v64; // [rsp+40h] [rbp-178h]
  unsigned __int64 v65; // [rsp+48h] [rbp-170h]
  void *v66; // [rsp+50h] [rbp-168h] BYREF
  size_t v67; // [rsp+58h] [rbp-160h]
  _QWORD v68[2]; // [rsp+60h] [rbp-158h] BYREF
  __m128i v69[2]; // [rsp+70h] [rbp-148h] BYREF
  __int16 v70; // [rsp+90h] [rbp-128h]
  __m128i v71[2]; // [rsp+A0h] [rbp-118h] BYREF
  __int16 v72; // [rsp+C0h] [rbp-F8h]
  __m128i v73[2]; // [rsp+D0h] [rbp-E8h] BYREF
  __int16 v74; // [rsp+F0h] [rbp-C8h]
  __m128i v75[3]; // [rsp+100h] [rbp-B8h] BYREF
  __m128i v76[2]; // [rsp+130h] [rbp-88h] BYREF
  __int16 v77; // [rsp+150h] [rbp-68h]

  v63.m128i_i64[0] = a5;
  v63.m128i_i64[1] = a6;
  if ( sub_10DCD30(a2, 0x8FEu) )
  {
    v73[0].m128i_i64[0] = (__int64)"-x86-branches-within-32B-boundaries";
    v74 = 259;
    if ( a4 )
    {
      v76[0].m128i_i64[0] = a5;
      v77 = 261;
      v76[0].m128i_i64[1] = a6;
      sub_A41580(v75, v76, v73, v10, v11, v12);
      v13 = sub_10DA6C0(a2, (__int64)v75);
      sub_10DC5D0(a3, v13);
    }
    else
    {
      sub_10DC5D0(a3, (__int64)"-mllvm");
      v51 = sub_10DA6C0(a2, (__int64)v73);
      sub_10DC5D0(a3, v51);
    }
  }
  v14 = sub_10DCD30(a2, 0x8BBu);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(const char ***)(v14 + 48);
    v17 = 0;
    v18 = (char *)*v16;
    if ( *v16 )
      v17 = j__strlen(*v16);
    if ( (unsigned __int8)sub_2247970(v18, v17, 10, v76)
      || v76[0].m128i_u32[0] != v76[0].m128i_i64[0]
      || v76[0].m128i_i32[0] < 0x10u
      || (v76[0].m128i_u32[0] & (v76[0].m128i_u32[0] - 1LL)) != 0 )
    {
      sub_FC70B0((__int64)v76, *a1, 0, 372);
      sub_AEC220((unsigned __int8 **)v76, v18, v17);
      v22 = (char *)sub_11BA9E0(*(_QWORD *)v15, *(_QWORD **)(v15 + 8));
      sub_AEC220((unsigned __int8 **)v76, v22, v23);
      sub_AEA040((__int64)v76);
    }
    else
    {
      v69[0].m128i_i32[0] = v76[0].m128i_i32[0];
      v70 = 265;
      v71[0].m128i_i64[0] = (__int64)"-x86-align-branch-boundary=";
      v72 = 259;
      sub_A41580(v73, v71, v69, v19, v20, v21);
      if ( a4 )
      {
        v77 = 261;
        v76[0] = v63;
        sub_A41580(v75, v76, v73, v55, v56, 261);
        v57 = sub_10DA6C0(a2, (__int64)v75);
        v58 = a3;
      }
      else
      {
        v60 = *(unsigned int *)(a3 + 8);
        if ( v60 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v60 + 1, 8);
          v60 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v60) = "-mllvm";
        ++*(_DWORD *)(a3 + 8);
        v57 = sub_10DA6C0(a2, (__int64)v73);
        v58 = a3;
      }
      v59 = *(unsigned int *)(v58 + 8);
      if ( v59 + 1 > (unsigned __int64)*(unsigned int *)(v58 + 12) )
      {
        sub_2237220(a3, a3 + 16, v59 + 1, 8);
        v59 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v59) = v57;
      ++*(_DWORD *)(a3 + 8);
    }
  }
  v24 = sub_10DCD30(a2, 0x8BCu);
  if ( v24 )
  {
    v27 = *(const char ***)(v24 + 48);
    v28 = *(unsigned int *)(v24 + 56);
    v67 = 0;
    LOBYTE(v68[0]) = 0;
    v29 = &v27[v28];
    v66 = v68;
    while ( v29 != v27 )
    {
      v30 = (char *)*v27;
      if ( *v27 )
      {
        v31 = j__strlen(*v27);
        v32 = v31;
        if ( v31 == 5 )
        {
          if ( *(_DWORD *)v30 == 1702065510 && v30[4] == 100 )
          {
            v48 = v67;
            if ( v67 )
              goto LABEL_60;
            goto LABEL_25;
          }
          if ( j__strlen("jmp") == 5 )
          {
            v32 = 5;
            goto LABEL_39;
          }
          if ( j__strlen("call") == 5 )
          {
            v32 = 5;
            goto LABEL_41;
          }
        }
        else
        {
          if ( v31 == 3 )
          {
            if ( *(_WORD *)v30 == 25450 && v30[2] == 99 )
            {
              v48 = v67;
              if ( v67 )
              {
LABEL_60:
                v49 = v48 + 1;
                v50 = v66;
                if ( v66 == v68 )
                {
LABEL_61:
                  if ( v49 > 0xF )
                  {
LABEL_62:
                    v65 = v49;
                    v64 = v48;
                    sub_998B30((__int64)&v66, v48, 0, nullptr, 1u);
                    v50 = v66;
                    v49 = v65;
                    v48 = v64;
                  }
LABEL_50:
                  v50[v48] = 43;
                  v67 = v49;
                  *((_BYTE *)v66 + v49) = 0;
                  v48 = v67;
LABEL_51:
                  if ( 0x7FFFFFFFFFFFFFFFLL - v48 < v32 )
                    std::__throw_length_error("basic_string::append");
                  goto LABEL_25;
                }
LABEL_49:
                if ( v49 > v68[0] )
                  goto LABEL_62;
                goto LABEL_50;
              }
              goto LABEL_25;
            }
            if ( j__strlen("jmp") == 3 )
            {
              v32 = 3;
              goto LABEL_39;
            }
            if ( j__strlen("call") == 3 )
            {
              v32 = 3;
              goto LABEL_41;
            }
            goto LABEL_42;
          }
          if ( v31 == j__strlen("jmp") )
          {
            if ( !v32 )
              goto LABEL_24;
LABEL_39:
            if ( !memcmp(v30, "jmp", v32) )
              goto LABEL_47;
            if ( v32 == j__strlen("call") )
            {
LABEL_41:
              if ( !memcmp(v30, "call", v32) )
                goto LABEL_47;
            }
LABEL_42:
            if ( v32 == j__strlen("ret") )
            {
LABEL_64:
              if ( memcmp(v30, "ret", v32) )
              {
                if ( v32 == j__strlen("indirect") )
                {
LABEL_45:
                  if ( memcmp(v30, "indirect", v32) )
                    goto LABEL_46;
                }
                else
                {
LABEL_46:
                  sub_FC70B0((__int64)v76, *a1, 0, 384);
                  sub_AEC220((unsigned __int8 **)v76, v30, v32);
                  sub_AE9DF0((unsigned __int8 **)v76, (__int64)"fused, jcc, jmp, call, ret, indirect", 1u);
                  sub_AEA040((__int64)v76);
                }
              }
LABEL_47:
              v48 = v67;
              if ( !v67 )
                goto LABEL_51;
LABEL_48:
              v49 = v48 + 1;
              v50 = v66;
              if ( v66 == v68 )
                goto LABEL_61;
              goto LABEL_49;
            }
            goto LABEL_43;
          }
          if ( v32 == j__strlen("call") )
          {
            if ( !v32 )
              goto LABEL_24;
            goto LABEL_41;
          }
        }
      }
      else
      {
        if ( !j__strlen("jmp") )
          goto LABEL_24;
        v32 = 0;
        if ( !j__strlen("call") )
          goto LABEL_24;
      }
      if ( j__strlen("ret") == v32 )
      {
        if ( v32 )
          goto LABEL_64;
        goto LABEL_24;
      }
LABEL_43:
      if ( j__strlen("indirect") != v32 )
        goto LABEL_46;
      if ( v32 )
        goto LABEL_45;
LABEL_24:
      v32 = v67;
      if ( v67 )
      {
        v48 = v67;
        v32 = 0;
        goto LABEL_48;
      }
LABEL_25:
      ++v27;
      sub_9EE560(&v66, v30, v32);
    }
    v69[0].m128i_i64[0] = (__int64)&v66;
    v70 = 260;
    v71[0].m128i_i64[0] = (__int64)"-x86-align-branch=";
    v72 = 259;
    sub_A41580(v73, v71, v69, v25, 259, v26);
    if ( a4 )
    {
      v77 = 261;
      v76[0] = v63;
      sub_A41580(v75, v76, v73, v33, v34, v35);
      v36 = sub_10DA6C0(a2, (__int64)v75);
    }
    else
    {
      sub_10DC5D0(a3, (__int64)"-mllvm");
      v36 = sub_10DA6C0(a2, (__int64)v73);
    }
    sub_10DC5D0(a3, v36);
    if ( v66 != v68 )
      operator delete(v66);
  }
  v37 = sub_10DCD30(a2, 0xAEBu);
  v38 = v37;
  if ( v37 )
  {
    v39 = *(const char ***)(v37 + 48);
    v40 = 0;
    v41 = (char *)*v39;
    if ( *v39 )
      v40 = j__strlen(*v39);
    if ( (unsigned __int8)sub_2247970(v41, v40, 10, v76) || v76[0].m128i_i64[0] != v76[0].m128i_u32[0] )
    {
      sub_FC70B0((__int64)v76, *a1, 0, 372);
      sub_AEC220((unsigned __int8 **)v76, v41, v40);
      v52 = (char *)sub_11BA9E0(*(_QWORD *)v38, *(_QWORD **)(v38 + 8));
      sub_AEC220((unsigned __int8 **)v76, v52, v53);
      sub_AEA040((__int64)v76);
    }
    else
    {
      v69[0].m128i_i32[0] = v76[0].m128i_i32[0];
      v70 = 265;
      v71[0].m128i_i64[0] = (__int64)"-x86-pad-max-prefix-size=";
      v72 = 259;
      sub_A41580(v73, v71, v69, 259, v42, v43);
      if ( a4 )
      {
        v77 = 261;
        v76[0] = v63;
        sub_A41580(v75, v76, v73, v44, v45, v46);
        v47 = sub_10DA6C0(a2, (__int64)v75);
        sub_10DC5D0(a3, v47);
      }
      else
      {
        sub_10DC5D0(a3, (__int64)"-mllvm");
        v54 = sub_10DA6C0(a2, (__int64)v73);
        sub_10DC5D0(a3, v54);
      }
    }
  }
}
