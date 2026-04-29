__int64 __fastcall sub_3F5EE0(__int64 a1, _QWORD *a2)
{
  const char *v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v7; // rbp
  unsigned int v8; // r9d
  __int64 v9; // rax
  _DWORD *v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rdi
  char *v13; // rdi
  __int64 v14; // r14
  unsigned __int8 *v15; // rax
  _DWORD *v16; // rdi
  char *v17; // rdi
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rax
  unsigned __int8 *v21; // rax
  _DWORD *v22; // rdi
  char *v23; // rdi
  unsigned int v24; // r14d
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r15
  __m128i si128; // xmm0
  __int64 v32; // rbx
  __int64 v33; // [rsp+8h] [rbp-90h]
  unsigned __int8 *v34; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int8 *v35; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int8 *v36; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int8 *v37; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v38[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v39[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (const char *)a2[5];
  v39[3] = __readfsqword(0x28u);
  if ( strcmp(v3, "_mm_extract_si64") )
    return 0;
  v4 = *(_QWORD *)(a2[9] + 24LL);
  if ( *(_BYTE *)(v4 + 80) != 4 )
    return 0;
  v7 = *(_QWORD *)(v4 + 88);
  if ( *(_DWORD *)v7 != 56 )
    return 0;
  if ( !v7 )
    return 0;
  if ( !(unsigned __int8)sub_120560(*(_QWORD *)(v4 + 88), "_mm_cvtsi32_si128") )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 72) + 24LL);
  if ( *(_BYTE *)v9 != 4 )
    return 0;
  v10 = *(_DWORD **)(v9 + 8);
  LOBYTE(v8) = v10 == nullptr || *v10 != 19;
  v5 = v8;
  if ( (_BYTE)v8 )
    return 0;
  v11 = sub_11C8E0((__int64)v10, &v34, 22);
  if ( !v11 || !(unsigned __int8)sub_11FD80((char *)(v11 + 48), v39, 1u) || v39[0] != 8 )
  {
    v12 = sub_11C8E0((__int64)v10, &v34, 14);
    if ( v12 )
    {
      v13 = (char *)sub_11C8A0(v12, &v35);
      if ( v13 )
      {
        if ( (unsigned __int8)sub_11FD80(v13, v39, 1u) && v39[0] == 256 )
          goto LABEL_17;
      }
    }
    return 0;
  }
  v35 = (unsigned __int8 *)(v11 + 32);
LABEL_17:
  v14 = a2[3];
  v38[1] = 0;
  v38[0] = 0xFFFFFFFF00000000LL;
  v37 = v34;
  v15 = sub_122200(v34, 0);
  v37 = v15;
  if ( *v15 == 4 )
  {
    v16 = *((_DWORD **)v15 + 1);
    if ( *v16 == 20 )
    {
      if ( v16 )
      {
        v17 = (char *)sub_11C8A0((__int64)v16, &v37);
        if ( v17 )
        {
          if ( (unsigned __int8)sub_11FD80(v17, v39, 1u) && v39[0] == 63 )
          {
            sub_125180((__int64)v38, v37);
            v18 = *(_QWORD *)(a1 + 40);
            v19 = *(unsigned __int8 *)(v18 + 130);
            if ( v19 > SHIDWORD(v38[0]) )
              sub_1207E0((char *)v38, *(_QWORD *)(v18 + 112), 8, v14, v19);
            v39[1] = 0;
            v39[0] = 0xFFFFFFFF00000000LL;
            v20 = a2[3];
            v36 = v35;
            v33 = v20;
            v21 = sub_122200(v35, 0);
            v36 = v21;
            if ( *v21 == 4 )
            {
              v22 = *((_DWORD **)v21 + 1);
              if ( *v22 == 20 )
              {
                if ( v22 )
                {
                  v23 = (char *)sub_11C8A0((__int64)v22, &v36);
                  if ( v23 )
                  {
                    v24 = sub_11FD80(v23, &v37, 1u);
                    if ( (_BYTE)v24 )
                    {
                      if ( v37 == (_BYTE *)&word_3E + 1 )
                      {
                        sub_125180((__int64)v39, v36);
                        v25 = *(_QWORD *)(a1 + 40);
                        v26 = *(unsigned __int8 *)(v25 + 130);
                        if ( v26 > SHIDWORD(v39[0]) )
                          sub_1207E0((char *)v39, *(_QWORD *)(v25 + 112), 8, v33, v26);
                        qfree(a2[5]);
                        v27 = qstrdup("_mm_extracti_si64");
                        v28 = a2[9];
                        a2[5] = v27;
                        v29 = *(_QWORD *)(v28 + 32);
                        if ( *(_QWORD *)(v28 + 40) < (unsigned __int64)(v29 + 1) )
                        {
                          *(_QWORD *)(v28 + 24) = qvector_reserve(v28 + 24, *(_QWORD *)(v28 + 24), v29 + 1, 80);
                          v29 = *(_QWORD *)(v28 + 32);
                        }
                        v30 = *(_QWORD *)(v28 + 24) + 80 * v29;
                        si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
                        *(_DWORD *)(v30 + 72) = 0;
                        *(_QWORD *)v30 = 0xFFFFFFFF00000000LL;
                        *(__m128i *)(v30 + 16) = si128;
                        *(_QWORD *)(v30 + 8) = 0;
                        *(_QWORD *)(v30 + 32) = 0;
                        *(_QWORD *)(v30 + 56) = 0;
                        *(_QWORD *)(v30 + 64) = 0;
                        *(_OWORD *)(v30 + 40) = 0;
                        ++*(_QWORD *)(v28 + 32);
                        sub_11CA10((char *)v30, (char *)v39);
                        v37 = (_BYTE *)(&qword_20 + 7);
                        copy_tinfo_t(v30 + 24, &v37);
                        clear_tinfo_t(&v37);
                        *(_DWORD *)(v30 + 4) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 130LL);
                        v32 = *(_QWORD *)(v28 + 24);
                        sub_11CA10((char *)(v32 + 80), (char *)v38);
                        v37 = (_BYTE *)(&qword_20 + 7);
                        copy_tinfo_t(v32 + 104, &v37);
                        clear_tinfo_t(&v37);
                        *(_DWORD *)(v32 + 84) = *(_DWORD *)(v30 + 4);
                        *(_DWORD *)(v28 + 8) = 3;
                        *(_DWORD *)(v28 + 280) |= 0x10u;
                        v5 = v24;
                      }
                    }
                  }
                }
              }
            }
            sub_11CDA0((__int64)v39);
          }
        }
      }
    }
  }
  sub_11CDA0((__int64)v38);
  return v5;
}
