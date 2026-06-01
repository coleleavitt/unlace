__int64 __fastcall sub_1490230(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  __int16 v12; // di
  __int64 *v13; // rbp
  int v14; // edx
  __int64 *v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // esi
  int v18; // edx
  unsigned int v19; // esi
  int v20; // eax
  char v21; // al
  char *v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // esi
  __int64 v25; // rdx
  const char *v26; // rax
  size_t v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 result; // rax
  int v38; // eax
  int v39; // [rsp+4h] [rbp-94h]
  int v40; // [rsp+8h] [rbp-90h]
  unsigned int v41; // [rsp+Ch] [rbp-8Ch]
  __int64 v42; // [rsp+10h] [rbp-88h]
  char *v43; // [rsp+18h] [rbp-80h]
  char v44; // [rsp+18h] [rbp-80h]
  __int64 *v45; // [rsp+18h] [rbp-80h]
  __int64 *v46; // [rsp+18h] [rbp-80h]
  unsigned int v47; // [rsp+20h] [rbp-78h]
  __int32 v48; // [rsp+24h] [rbp-74h]
  __int64 *v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+28h] [rbp-70h]
  unsigned int v51; // [rsp+3Ch] [rbp-5Ch] BYREF
  char *s; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v53; // [rsp+48h] [rbp-50h]

  v48 = a1[1].m128i_i32[0];
  v51 = v48;
LABEL_2:
  if ( a1[2].m128i_i16[0] != 189 )
    goto LABEL_45;
  while ( 1 )
  {
    v10 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v10, a1[1].m128i_i32);
    v41 = 0;
    v39 = a1[2].m128i_i32[2];
    v47 = *(_DWORD *)(a2 + 16);
    if ( a3 )
      v41 = *(_DWORD *)(a3 + 8);
    if ( (unsigned __int8)sub_1569A00(a1, 22, 1625, "attribute", 9)
      || (unsigned __int8)sub_1569A00(a1, 22, 1625, "(", 1) )
    {
      break;
    }
    while ( 1 )
    {
      v12 = a1[2].m128i_i16[0];
      if ( v12 == 66 )
        goto LABEL_11;
      if ( sub_10CCDE0(v12) )
        goto LABEL_14;
      if ( a1[2].m128i_i16[0] == 3 )
        break;
      if ( (unsigned __int8)sub_148FBE0(a1, (__int64 *)a2, &v51, a3, a4, a5, a6) || a1[2].m128i_i16[0] != 66 )
        goto LABEL_14;
LABEL_11:
      v11 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v11, a1[1].m128i_i32);
    }
    v35 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v35 + 760) )
    {
      *(_BYTE *)(v35 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v35 + 48) + 6LL) = 1;
    }
    v36 = a1[6].m128i_i64[0];
    a1[2].m128i_i16[0] = 1;
    sub_1736F00(*(_QWORD *)(v36 + 656), 1, 0, 0);
LABEL_14:
    if ( (unsigned __int8)sub_1569A00(a1, 23, 14, &byte_22F0C30, 0) )
    {
      LOWORD(s) = 23;
      sub_15680D0(a1, &s, 1, 1);
    }
    v40 = a1[1].m128i_i32[0];
    if ( (unsigned __int8)sub_1569A00(a1, 23, 14, &byte_22F0C30, 0) )
    {
      LOWORD(s) = 23;
      sub_15680D0(a1, &s, 1, 1);
    }
    v51 = v40;
    v13 = *(__int64 **)(a1->m128i_i64[1] + 88);
    v14 = v39;
    if ( v39 < 0 )
      v14 = sub_1021B90(*(_QWORD *)(a1->m128i_i64[1] + 88), v39);
    sub_1022900((__int64)&s, v13, v14, 1);
    if ( !s || (v43 = s, strlen(s) != 10) || *(_QWORD *)v43 != 0x692D746C6975623CLL || *((_WORD *)v43 + 4) != 15982 )
    {
      v42 = a1->m128i_i64[1];
      if ( v39 < 0 && v40 < 0 )
      {
        v15 = *(__int64 **)(a1->m128i_i64[1] + 88);
        v16 = *((_DWORD *)v15 + 119);
        v17 = v40 & 0x7FFFFFFF;
        if ( (v40 & 0x7FFFFFFFu) < v16 || v17 >= *((_DWORD *)v15 + 120) )
        {
          v45 = *(__int64 **)(a1->m128i_i64[1] + 88);
          v38 = sub_101D590((__int64)v15, v17);
          v15 = v45;
          v18 = v38;
          v16 = *((_DWORD *)v45 + 119);
        }
        else
        {
          v18 = *((_DWORD *)v15 + 118);
        }
        v19 = v39 & 0x7FFFFFFF;
        if ( v16 > (v39 & 0x7FFFFFFFu) || v19 >= *((_DWORD *)v15 + 120) )
        {
          v50 = v18;
          v46 = v15;
          v20 = sub_101D590((__int64)v15, v19);
          v18 = v50;
          v15 = v46;
        }
        else
        {
          v20 = *((_DWORD *)v15 + 118);
        }
        if ( v18 == v20 )
        {
          v49 = v15;
          v44 = sub_13D1460(v39, (__int64)v15, *(_QWORD *)(v42 + 56), nullptr);
          v21 = sub_13DBFA0(v40, v49, *(_QWORD *)(v42 + 56), nullptr, a5, *(double *)a6.m128_u64);
          if ( v44 )
          {
            if ( v21 )
            {
              v22 = (char *)sub_101FD20((__int64)v13, v39);
              v24 = v23;
              v53 = v23;
              v25 = a1->m128i_i64[1];
              s = v22;
              v26 = sub_13DD220(
                      (unsigned __int64)v22,
                      v24,
                      v13,
                      *(_QWORD *)(v25 + 56),
                      nullptr,
                      a5,
                      *(double *)a6.m128_u64);
              v28 = sub_6F3470(a1->m128i_i64[1] + 552, v26, v27);
              v29 = v47;
              v30 = (int)s;
              v31 = v47;
              if ( v47 < *(_DWORD *)(a2 + 16) )
              {
                do
                {
                  v32 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v29);
                  *(_QWORD *)(v32 + 40) = v28;
                  *(_DWORD *)(v32 + 48) = v30;
                  v29 = v31 + 1;
                  v31 = v29;
                }
                while ( (unsigned int)v29 < *(_DWORD *)(a2 + 16) );
              }
              if ( a3 )
              {
                v33 = v41;
                v34 = v41;
                if ( v41 < *(_DWORD *)(a3 + 8) )
                {
                  do
                  {
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 8 * v33) + 136LL) = v28;
                    v33 = v34 + 1;
                    v34 = v33;
                  }
                  while ( (unsigned int)v33 < *(_DWORD *)(a3 + 8) );
                }
              }
            }
          }
        }
      }
      goto LABEL_2;
    }
    if ( a1[2].m128i_i16[0] != 189 )
    {
LABEL_45:
      *(_DWORD *)a2 = v48;
      result = v51;
      *(_DWORD *)(a2 + 4) = v51;
      return result;
    }
  }
  LOWORD(s) = 23;
  return sub_15680D0(a1, &s, 1, 1);
}
