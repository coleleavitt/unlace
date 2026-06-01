__int64 __fastcall sub_9ED270(__int64 a1, char *a2, __int64 a3)
{
  _WORD *v4; // rbx
  _WORD *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // r12
  __int64 v14; // rax
  _DWORD *v15; // rsi
  unsigned __int8 v16; // al
  int v17; // eax
  __int32 v18; // r13d
  int v19; // eax
  size_t v20; // r13
  __int64 v21; // rax
  const char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  size_t v30; // r12
  __int64 v31; // rax
  const char *v32; // rax
  size_t v33; // rdx
  unsigned int *v34; // rax
  __int64 v35; // rdx
  __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // r12
  size_t v39; // r12
  __int64 v40; // rax
  const char *v41; // rax
  size_t v42; // rdx
  char *v43; // [rsp+8h] [rbp-C0h] BYREF
  void *v44; // [rsp+10h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+18h] [rbp-B0h]
  __int8 v46; // [rsp+1Ch] [rbp-ACh]
  void *v47; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v48; // [rsp+28h] [rbp-A0h]
  void *v49; // [rsp+30h] [rbp-98h] BYREF
  __int64 v50; // [rsp+38h] [rbp-90h]
  __int64 v51; // [rsp+40h] [rbp-88h] BYREF
  __m128 v52; // [rsp+50h] [rbp-78h] BYREF
  __m128 v53; // [rsp+60h] [rbp-68h] BYREF
  __m128 v54; // [rsp+70h] [rbp-58h]

  v4 = (_WORD *)sub_BFBAE0(a1);
  if ( (*v4 & 0x1FF) != 0x5C || (v5 = (_WORD *)sub_BFBAE0(a2), (*v5 & 0x1FF) != 0x5C) )
  {
    v52.m128_i16[0] = 0;
    v52.m128_u64[1] = 0;
    v53.m128_i32[0] = 0;
    v53.m128_i8[4] &= ~1u;
    LODWORD(v10) = sub_C3F220(a2, &v52, a3, 0, 0);
    if ( !(_BYTE)v10 )
      goto LABEL_26;
    v12 = (unsigned __int16 *)sub_BFBAE0(a1);
    LODWORD(v10) = *v12;
    v13 = v12;
    LOWORD(v10) = v10 & 0x1FF;
    if ( (_WORD)v10 == 71 )
    {
      v14 = sub_A72040(a3, *((_QWORD *)v12 + 1));
      if ( v14 && (unsigned int)*(unsigned __int8 *)(v14 + 16) - 2 <= 1 )
      {
        v45 = v54.m128_i32[0];
        v10 = (unsigned __int64)&v44;
        if ( v54.m128_i32[0] > 0x40u )
        {
          v43 = (char *)v14;
          sub_2205510(&v44);
          v14 = (__int64)v43;
        }
        else
        {
          v44 = (void *)v53.m128_u64[1];
        }
        v15 = *(_DWORD **)(v14 + 40);
        v16 = *(_BYTE *)(v14 + 19);
        v46 = v54.m128_i8[4];
        if ( (v16 & 2) != 0 )
        {
          v17 = v15[2];
          v48 = v17;
          if ( (unsigned int)v17 > 0x40 )
          {
            sub_2205510(&v47);
            v17 = v48;
            v15 = v47;
          }
          else
          {
            v15 = *(_DWORD **)v15;
            v47 = v15;
          }
        }
        else
        {
          v17 = 8 * ((v16 >> 2) & 0x1F);
          v48 = v17;
          if ( v17 > 64 )
          {
            sub_2205470(&v47, v15, 0);
            v17 = v48;
            v15 = v47;
          }
          else
          {
            v47 = v15;
          }
        }
        v49 = v15;
        LODWORD(v50) = v17;
        v48 = 0;
        BYTE4(v50) = 1;
        LOBYTE(v10) = (unsigned int)sub_98E2D0((__int64 *)&v44, (__int64 *)&v49) == 0;
        if ( (unsigned int)v50 > 0x40 && v49 )
          operator delete[](v49);
        if ( v48 > 0x40 && v47 )
          operator delete[](v47);
        if ( v45 > 0x40 && v44 )
          operator delete[](v44);
      }
      else
      {
        LODWORD(v10) = 0;
      }
      goto LABEL_26;
    }
    v18 = v54.m128_i32[0];
    if ( v54.m128_i32[0] <= 0x40u )
    {
      if ( v53.m128_u64[1] != 1 )
      {
        LOBYTE(v10) = v53.m128_u64[1] == 0;
LABEL_26:
        if ( v53.m128_i32[0] > 1u )
          sub_A4F8E0(&v53);
        return (unsigned int)v10;
      }
    }
    else
    {
      v19 = sub_2206780(&v53.m128_u16[4]);
      if ( v19 != v18 - 1 )
      {
        LOBYTE(v10) = v18 == v19;
        goto LABEL_26;
      }
    }
    if ( (_WORD)v10 == 4 )
    {
      LOBYTE(v10) = *((_BYTE *)v13 + 2) >> 3 == 4;
    }
    else
    {
      v36 = v10 + 423;
      LODWORD(v10) = 0;
      if ( (v36 & 0x1FFu) <= 4 )
      {
        v37 = sub_BFBC70(*((_QWORD *)v13 + 4));
        v38 = v37;
        if ( v37 )
        {
          if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 34 <= 5 )
          {
            sub_B86A00(&v49, v37 + 40);
            if ( !sub_9B4AA0((__int64)&v49, "addressof") )
              LODWORD(v10) = sub_B8EC80(v38);
            if ( v49 != &v51 )
              operator delete(v49);
          }
        }
      }
    }
    goto LABEL_26;
  }
  v6 = sub_C94680(v4);
  v7 = sub_BFBAE0(v6);
  if ( (*(_WORD *)v7 & 0x1FF) == 0x47 )
  {
    v8 = sub_C94680(v5);
    v9 = sub_BFBAE0(v8);
    if ( (*(_WORD *)v9 & 0x1FF) == 0x47 && *(_QWORD *)(v7 + 16) == *(_QWORD *)(v9 + 16) )
    {
      v20 = j__strlen("data");
      v21 = sub_C946E0(v4);
      v22 = sub_995750(v21);
      if ( v20 == v23 )
      {
        if ( !v20 || (a2 = "data", !memcmp(v22, "data", v20)) )
        {
          v24 = sub_C94710(v4);
          if ( (unsigned __int8)sub_B8EC80(v24) )
          {
            v25 = *(_QWORD *)(sub_C94710(v4) + 40);
            if ( (v25 & 7) == 0 )
            {
              v10 = v25 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v29 = sub_F68450(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v26, v27, v28);
                if ( (unsigned __int8)sub_F57EE0(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL)) )
                {
                  v30 = j__strlen("size_bytes");
                  v31 = sub_C946E0(v5);
                  v32 = sub_995750(v31);
                  if ( v33 == v30 && (!v33 || !memcmp(v32, "size_bytes", v33)) )
                  {
LABEL_42:
                    v34 = *(unsigned int **)(v10 + 16);
                    v43 = (char *)"span";
                    v35 = *v34;
                    v49 = v34 + 4;
                    v43 = "array";
                    v50 = v35;
                    v52 = _mm_loadh_ps((const double *)&v43);
                    v43 = "basic_string_view";
                    v53 = _mm_loadh_ps((const double *)&v43);
                    v43 = "initializer_list";
                    v54 = _mm_loadh_ps((const double *)&v43);
                    LODWORD(v10) = sub_9ECE50((const char **)&v52, 6, (__int64)&v49);
                    return (unsigned int)v10;
                  }
                }
                v39 = j__strlen("size");
                v40 = sub_C946E0(v5);
                v41 = sub_995750(v40);
                if ( v42 == v39 )
                {
                  if ( v42 && memcmp(v41, "size", v42) )
                  {
                    LODWORD(v10) = 0;
                    return (unsigned int)v10;
                  }
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
    }
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 0;
    sub_C94680(v5);
  }
  return (unsigned int)v10;
}
