__int64 __fastcall sub_44F8A0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128 v10; // xmm0
  __m128 v11; // xmm4
  __m128 v12; // xmm5
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(int, __int64); // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  const char *file_ext; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  char *v39; // rbx
  __int64 v40; // rdi
  char v42; // [rsp+0h] [rbp-190h]
  _QWORD *v43; // [rsp+8h] [rbp-188h]
  __int16 v44; // [rsp+34h] [rbp-15Ch] BYREF
  __int16 v45; // [rsp+36h] [rbp-15Ah] BYREF
  __int64 v46; // [rsp+38h] [rbp-158h] BYREF
  __int64 v47; // [rsp+40h] [rbp-150h]
  __int128 v48; // [rsp+48h] [rbp-148h]
  __int64 v49; // [rsp+60h] [rbp-130h] BYREF
  __int128 v50; // [rsp+68h] [rbp-128h]
  _QWORD v51[7]; // [rsp+80h] [rbp-110h] BYREF
  char v52; // [rsp+B8h] [rbp-D8h] BYREF
  char v53; // [rsp+118h] [rbp-78h] BYREF
  __int64 v54; // [rsp+138h] [rbp-58h]
  __int64 v55; // [rsp+140h] [rbp-50h]
  unsigned __int64 v56; // [rsp+158h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  v43 = sub_426230(a1, a2);
  v44 = (unsigned __int8)sub_418320((__int64)v43);
  v45 = (unsigned __int8)sub_418330((__int64)v43);
  v10 = 0;
  v47 = 0;
  v48 = 0;
  v46 = (int)reg_int_op("NCommits", 0, 0xFFFFFFFFLL, "Config");
  sub_432460((__int64)v51, nullptr);
  while ( 1 )
  {
    v15 = sub_44F830;
    if ( (int)sub_1697D0(
                (int)"Options\n"
                     "%/<##Vault files##Show ~d~eleted vault files:C>>\n"
                     "<##Local files##Show ~i~gnored local files:C>>\n"
                     "Commits\n"
                     "<#Maximum number of commits to show, '-1' means all.#~N~umber of commits to show:D::10::>\n"
                     "<=:~V~iews>\n"
                     "%*<:E::::>\n"
                     "<#Set the predefined associations#~R~eset :B::::>\n"
                     "<=:File extension ~a~ssociations>\n"
                     "\n",
                (__int64)sub_44F830,
                (__int64)&v44,
                (__int64)&v45,
                (__int64)&v46,
                (__int64)v51,
                v10,
                a4,
                a5,
                a6,
                v11,
                v12,
                a9,
                a10,
                (char)v51) <= 0 )
      break;
    sub_418340((__int64)v43, v44 != 0);
    sub_418450((__int64)v43, v45 != 0);
    reg_int_op("NCommits", 1, (unsigned int)v46, "Config");
    sub_432440((__int64)v51, (_BYTE *)&dword_0 + 1);
    a4 = 0;
    v13 = (__int64 *)sub_417660((__int64)v43);
    v49 = 0;
    v50 = 0;
    v14 = qvector_reserve(&v49, 0, 4, 1);
    v49 = v14;
    *(_QWORD *)&v50 = 4;
    *(_WORD *)v14 = 25705;
    v15 = (__int64 (__fastcall *)(int, __int64))&v49;
    *(_BYTE *)(v14 + 2) = 98;
    *(_BYTE *)(v49 + 3) = 0;
    v16 = sub_4321A0(v13, (__int64)&v49);
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      *(double *)v10.m128_u64 = qfree(v49, (const char *)&v49);
    }
    if ( v16 )
      break;
    file_ext = (const char *)get_file_ext("idb");
    if ( !file_ext )
      file_ext = "idb";
    sub_169630(
      (int)"No application is defined for '%s' files.\nPlease add it in View, Options, File associatations",
      (__int64)file_ext,
      v17,
      v18,
      v20,
      v21,
      v10,
      (__m128)0LL,
      a5,
      a6,
      v22,
      v23,
      a9,
      a10,
      v42);
  }
  v24 = v54;
  v51[0] = file_assoc_chooser_t___vtable;
  if ( v54 )
  {
    v25 = v55;
    if ( v55 )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v24 + v26);
        v29 = *(_QWORD *)(v24 + v26 + 216);
        if ( v29 )
        {
          v28[28] = 0;
          *(double *)v10.m128_u64 = qfree(v29, (const char *)v15, *(double *)v10.m128_u64);
        }
        v30 = v28[24];
        if ( v30 )
        {
          v28[25] = 0;
          *(double *)v10.m128_u64 = qfree(v30, (const char *)v15, *(double *)v10.m128_u64);
        }
        v31 = v28[21];
        if ( v31 )
        {
          v28[22] = 0;
          *(double *)v10.m128_u64 = qfree(v31, (const char *)v15, *(double *)v10.m128_u64);
        }
        v32 = v28[18];
        if ( v32 )
        {
          v28[19] = 0;
          *(double *)v10.m128_u64 = qfree(v32, (const char *)v15, *(double *)v10.m128_u64);
        }
        v33 = v28[15];
        if ( v33 )
        {
          v28[16] = 0;
          *(double *)v10.m128_u64 = qfree(v33, (const char *)v15, *(double *)v10.m128_u64);
        }
        v34 = v28[12];
        if ( v34 )
        {
          v28[13] = 0;
          *(double *)v10.m128_u64 = qfree(v34, (const char *)v15, *(double *)v10.m128_u64);
        }
        v35 = v28[9];
        if ( v35 )
        {
          v28[10] = 0;
          *(double *)v10.m128_u64 = qfree(v35, (const char *)v15, *(double *)v10.m128_u64);
        }
        v36 = v28[6];
        if ( v36 )
        {
          v28[7] = 0;
          *(double *)v10.m128_u64 = qfree(v36, (const char *)v15, *(double *)v10.m128_u64);
        }
        v37 = v28[3];
        if ( v37 )
        {
          v28[4] = 0;
          *(double *)v10.m128_u64 = qfree(v37, (const char *)v15, *(double *)v10.m128_u64);
        }
        v38 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          *(double *)v10.m128_u64 = qfree(v38, (const char *)v15, *(double *)v10.m128_u64);
        }
        v24 = v54;
        v26 += 240;
        ++v27;
      }
      while ( v25 != v27 );
    }
    v55 = 0;
    *(double *)v10.m128_u64 = qfree(v24, (const char *)v15, *(double *)v10.m128_u64);
  }
  v39 = &v53;
  v51[0] = &stru_86F6A0;
  do
  {
    v40 = *(_QWORD *)v39;
    if ( *(_QWORD *)v39 )
    {
      *((_QWORD *)v39 + 1) = 0;
      *(double *)v10.m128_u64 = qfree(v40, (const char *)v15, *(double *)v10.m128_u64);
    }
    v39 -= 24;
  }
  while ( &v52 != v39 );
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47, (const char *)v15, *(double *)v10.m128_u64);
  }
  return 1;
}
