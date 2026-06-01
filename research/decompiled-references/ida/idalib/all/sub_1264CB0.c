void __fastcall sub_1264CB0(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r14
  _QWORD *v7; // r15
  size_t v8; // r14
  const void *v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r15
  _QWORD *v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // r14
  _QWORD *v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // r15
  _QWORD *v26; // r14
  int v27; // eax
  __int64 v28; // rax
  char *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int8 (__fastcall *v34)(__int64, void **); // r10
  bool v35; // zf
  _BYTE *v36; // rdi
  _QWORD *v37; // [rsp+8h] [rbp-270h]
  unsigned __int8 (__fastcall *v38)(__int64, void **); // [rsp+8h] [rbp-270h]
  __int64 v40; // [rsp+48h] [rbp-230h]
  void *v41; // [rsp+50h] [rbp-228h] BYREF
  __int64 v42; // [rsp+58h] [rbp-220h]
  __int64 v43; // [rsp+60h] [rbp-218h] BYREF
  void *v44[2]; // [rsp+70h] [rbp-208h] BYREF
  __int64 v45; // [rsp+80h] [rbp-1F8h] BYREF
  void *v46[2]; // [rsp+90h] [rbp-1E8h] BYREF
  _BYTE v47[16]; // [rsp+A0h] [rbp-1D8h] BYREF
  _QWORD v48[4]; // [rsp+B0h] [rbp-1C8h] BYREF
  __int16 v49; // [rsp+D0h] [rbp-1A8h]
  _QWORD v50[4]; // [rsp+E0h] [rbp-198h] BYREF
  __int16 v51; // [rsp+100h] [rbp-178h]
  _BYTE v52[32]; // [rsp+110h] [rbp-168h] BYREF
  __int16 v53; // [rsp+130h] [rbp-148h]
  _BYTE v54[32]; // [rsp+140h] [rbp-138h] BYREF
  __int16 v55; // [rsp+160h] [rbp-118h]
  void *v56; // [rsp+170h] [rbp-108h] BYREF
  __int64 v57; // [rsp+178h] [rbp-100h]
  __int16 v58; // [rsp+190h] [rbp-E8h]
  void *ptr; // [rsp+1A0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-D0h]
  _BYTE v61[192]; // [rsp+1B8h] [rbp-C0h] BYREF

  v37 = *((_QWORD **)a1 + 1);
  (*(void (__fastcall **)(void **, _DWORD *))(*(_QWORD *)a1 + 552LL))(&v41, a1);
  LODWORD(ptr) = 3053;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v8 = v37[32];
    v9 = (const void *)v37[31];
    ptr = v61;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v8 > 0x80 )
    {
      sub_2236E10(&ptr, v61, v8, 1);
      v29 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v8 )
      {
LABEL_7:
        si128.m128i_i64[0] = v8;
        v58 = 257;
        v55 = 257;
        v53 = 257;
        v50[0] = "include";
        v51 = 259;
        sub_228A3B0(&ptr, v50, v52, v54, &v56);
        LODWORD(v56) = 3033;
        v10 = sub_21B6DA0(a2, &v56, 1);
        v11 = *(_QWORD *)(a2 + 8);
        v12 = (_QWORD *)(v11 + 8LL * (unsigned int)v10);
        v13 = (_QWORD *)(v11 + 8 * HIDWORD(v10));
        if ( v12 != v13 )
        {
          while ( !*v12 || !(unsigned __int8)sub_21B9810(*v12, 3033) )
          {
            if ( v13 == ++v12 )
              goto LABEL_11;
          }
          if ( v13 != v12 )
          {
            do
            {
              v30 = *v12;
              if ( *(_QWORD *)(*v12 + 16LL) )
                v30 = *(_QWORD *)(*v12 + 16LL);
              ++v12;
              *(_BYTE *)(v30 + 44) |= 1u;
              if ( v12 == v13 )
                break;
              while ( !*v12 || !(unsigned __int8)sub_21B9810(*v12, 3033) )
              {
                if ( v13 == ++v12 )
                  goto LABEL_17;
              }
            }
            while ( v12 != v13 );
            goto LABEL_17;
          }
        }
LABEL_11:
        v14 = a1[16];
        if ( (unsigned int)(v14 - 18) <= 7 || v14 == 49 || a1[15] == 39 )
        {
          LODWORD(v56) = 3055;
          v15 = sub_21B6DA0(a2, &v56, 1);
          v16 = *(_QWORD *)(a2 + 8);
          v17 = (_QWORD *)(v16 + 8LL * (unsigned int)v15);
          v18 = (_QWORD *)(v16 + 8 * HIDWORD(v15));
          if ( v17 == v18 )
            goto LABEL_17;
          while ( !*v17 || !(unsigned __int8)sub_21B9810(*v17, 3055) )
          {
            if ( v18 == ++v17 )
              goto LABEL_17;
          }
          if ( v17 == v18 )
            goto LABEL_17;
          do
          {
            v32 = *(_QWORD *)(*v17 + 16LL);
            if ( !v32 )
              v32 = *v17;
            ++v17;
            *(_BYTE *)(v32 + 44) |= 1u;
            if ( v17 == v18 )
              break;
            while ( !*v17 || !(unsigned __int8)sub_21B9810(*v17, 3055) )
            {
              if ( v18 == ++v17 )
                goto LABEL_82;
            }
          }
          while ( v18 != v17 );
        }
LABEL_82:
        v58 = 261;
        v56 = ptr;
        v57 = si128.m128i_i64[0];
        sub_112FA80(a2, a3, (__int64)&v56);
LABEL_17:
        LODWORD(v56) = 3055;
        v19 = sub_21B6DA0(a2, &v56, 1);
        v20 = *(_QWORD *)(a2 + 8);
        v21 = (_QWORD *)(v20 + 8LL * (unsigned int)v19);
        v22 = (_QWORD *)(v20 + 8 * HIDWORD(v19));
        if ( v21 == v22 )
          goto LABEL_21;
        while ( !*v21 || !(unsigned __int8)sub_21B9810(*v21, 3055) )
        {
          if ( v22 == ++v21 )
            goto LABEL_21;
        }
        if ( v22 == v21 )
        {
LABEL_21:
          v48[0] = "/usr/local/include";
          v53 = 257;
          v55 = 257;
          v51 = 257;
          v49 = 259;
          sub_1130220(v46, v41, v42, (__int64)v48, (__int64)v50, (__int64)v52, (__int64)v54);
          v56 = v46;
          v58 = 260;
          sub_112FA80(a2, a3, (__int64)&v56);
          if ( v46[0] != v47 )
            operator delete(v46[0]);
          sub_1216510((__int64)a1, a2, a3);
          (*(void (__fastcall **)(void **, _DWORD *, _QWORD *, _DWORD *, void *, __int64))(*(_QWORD *)a1 + 512LL))(
            v44,
            a1,
            v37,
            a1 + 4,
            v41,
            v42);
          if ( v44[1] )
          {
            v40 = v37[1];
            v34 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v40 + 96LL);
            v55 = 257;
            v53 = 257;
            v51 = 260;
            v38 = v34;
            v50[0] = v44;
            v49 = 259;
            v48[0] = "/usr/include";
            sub_1130220(v46, v41, v42, (__int64)v48, (__int64)v50, (__int64)v52, (__int64)v54);
            v56 = v46;
            v58 = 260;
            v35 = v38(v40, &v56) == 0;
            v36 = v46[0];
            if ( !v35 )
            {
              if ( v46[0] != v47 )
                operator delete(v46[0]);
              v53 = 257;
              v50[0] = v44;
              v55 = 257;
              v51 = 260;
              v48[0] = "/usr/include";
              v49 = 259;
              sub_1130220(v46, v41, v42, (__int64)v48, (__int64)v50, (__int64)v52, (__int64)v54);
              v56 = v46;
              v58 = 260;
              sub_112FAC0(a2, a3, (__int64)&v56);
              v36 = v46[0];
            }
            if ( v36 != v47 )
              operator delete(v36);
          }
          if ( a1[15] != 18 )
          {
            v51 = 257;
            v48[0] = "/include";
            v49 = 259;
            v55 = 257;
            v53 = 257;
            sub_1130220(v46, v41, v42, (__int64)v48, (__int64)v50, (__int64)v52, (__int64)v54);
            v56 = v46;
            v58 = 260;
            sub_112FAC0(a2, a3, (__int64)&v56);
            if ( v46[0] != v47 )
              operator delete(v46[0]);
            v55 = 257;
            v49 = 259;
            v53 = 257;
            v51 = 257;
            v48[0] = "/usr/include";
            sub_1130220(v46, v41, v42, (__int64)v48, (__int64)v50, (__int64)v52, (__int64)v54);
            v56 = v46;
            v58 = 260;
            sub_112FAC0(a2, a3, (__int64)&v56);
            if ( v46[0] != v47 )
              operator delete(v46[0]);
            LODWORD(v56) = 3033;
            v23 = sub_21B6DA0(a2, &v56, 1);
            v24 = *(_QWORD *)(a2 + 8);
            v25 = (_QWORD *)(v24 + 8LL * (unsigned int)v23);
            v26 = (_QWORD *)(v24 + 8 * HIDWORD(v23));
            if ( v25 == v26 )
              goto LABEL_33;
            while ( !*v25 || !(unsigned __int8)sub_21B9810(*v25, 3033) )
            {
              if ( v26 == ++v25 )
                goto LABEL_33;
            }
            if ( v25 == v26 )
            {
LABEL_33:
              v27 = a1[16];
              if ( (unsigned int)(v27 - 18) <= 7 || v27 == 49 || a1[15] == 39 )
              {
                v58 = 261;
                v56 = ptr;
                v57 = si128.m128i_i64[0];
                sub_112FA80(a2, a3, (__int64)&v56);
              }
            }
            else
            {
              do
              {
                v33 = *(_QWORD *)(*v25 + 16LL);
                if ( !v33 )
                  v33 = *v25;
                ++v25;
                *(_BYTE *)(v33 + 44) |= 1u;
                if ( v25 == v26 )
                  break;
                while ( !*v25 || !(unsigned __int8)sub_21B9810(*v25, 3033) )
                {
                  if ( v26 == ++v25 )
                    goto LABEL_35;
                }
              }
              while ( v25 != v26 );
            }
          }
LABEL_35:
          if ( v44[0] != &v45 )
            operator delete(v44[0]);
        }
        else
        {
          do
          {
            v31 = *v21;
            if ( *(_QWORD *)(*v21 + 16LL) )
              v31 = *(_QWORD *)(*v21 + 16LL);
            ++v21;
            *(_BYTE *)(v31 + 44) |= 1u;
            if ( v21 == v22 )
              break;
            while ( !*v21 || !(unsigned __int8)sub_21B9810(*v21, 3055) )
            {
              if ( v22 == ++v21 )
                goto LABEL_37;
            }
          }
          while ( v21 != v22 );
        }
LABEL_37:
        if ( ptr != v61 )
          free(ptr);
        goto LABEL_39;
      }
      v29 = v61;
    }
    memcpy(v29, v9, v8);
    v8 += si128.m128i_i64[0];
    goto LABEL_7;
  }
  do
  {
    v28 = *v6;
    if ( *(_QWORD *)(*v6 + 16LL) )
      v28 = *(_QWORD *)(*v6 + 16LL);
    ++v6;
    *(_BYTE *)(v28 + 44) |= 1u;
    if ( v6 == v7 )
      break;
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
    {
      if ( v7 == ++v6 )
        goto LABEL_39;
    }
  }
  while ( v7 != v6 );
LABEL_39:
  if ( v41 != &v43 )
    operator delete(v41);
}
