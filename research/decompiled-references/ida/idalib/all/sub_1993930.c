unsigned __int64 __fastcall sub_1993930(__int64 *a1, __int64 a2, unsigned __int64 a3, int *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbp
  unsigned __int16 v9; // cx
  int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int16 v20; // ax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __m128i v31; // rax
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rsi
  _QWORD *v41; // rax
  __int64 *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __m128i v56; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v57; // [rsp+18h] [rbp-110h]
  __int64 *v58; // [rsp+20h] [rbp-108h]
  __int64 v59; // [rsp+28h] [rbp-100h]
  unsigned __int64 v60; // [rsp+30h] [rbp-F8h] BYREF
  int *v61; // [rsp+38h] [rbp-F0h]
  __int64 v62; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v63; // [rsp+48h] [rbp-E0h] BYREF
  __m128 v64; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v65[16]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 *v66; // [rsp+70h] [rbp-B8h]
  char v67; // [rsp+D8h] [rbp-50h]
  unsigned int v68; // [rsp+E0h] [rbp-48h]
  char v69; // [rsp+E4h] [rbp-44h]

  v8 = *(_QWORD *)(a3 + 32);
  v61 = a4;
  v9 = *(_WORD *)(a3 + 18);
  v60 = a3;
  v10 = v61;
  if ( (unsigned __int8)(v9 >> 3) == 6 )
  {
    if ( !v8 )
    {
      v13 = a3;
      v12 = 0;
      goto LABEL_6;
    }
  }
  else if ( !v8 )
  {
    v10 = v61 + 4;
    v13 = a3;
    v12 = 0;
    goto LABEL_6;
  }
  v8 = sub_198CB00((__int64)a1, v8, *((void **)v61 + 1), 0, 0);
  v12 = v11;
  if ( !v8 )
    return 0;
  v13 = v60;
  v10 = v61;
  if ( (unsigned __int8)(*(_WORD *)(v60 + 18) >> 3) != 6 || *(_QWORD *)(v60 + 32) )
    v10 = v61 + 4;
LABEL_6:
  v14 = sub_F6C520(*(_QWORD *)(v13 + 40));
  v17 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v60 + 40),
          (__m128i *)(v14 * (((unsigned __int64)v10 - (v10 != nullptr)) / v14 + (v10 != nullptr))),
          v15,
          v16,
          a5,
          a6);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( (unsigned int)(unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) - 5 > 1 )
  {
    v29 = sub_F6A860(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v29 )
    {
      v62 = *(_QWORD *)(v29 + 32);
      v30 = sub_F22BD0(&v62, 0);
      v57 = v30;
      if ( v30 )
      {
        v56.m128i_i8[0] = *(_BYTE *)(v30 + 28);
        if ( (v56.m128i_i8[0] & 0x7F) == 0x46 )
        {
          v58 = (__int64 *)(*a1 + 8);
          v31.m128i_i64[0] = sub_1743120((__int64)&v60);
          v56 = v31;
          v64 = (__m128)_mm_load_si128(&v56);
          v32 = sub_F6CCB0((__int64 *)&v64, v64);
          v56.m128i_i64[0] = (__int64)v65;
          sub_168B9F0((__int64)v65, v58, v32, 0x13D4u, 0);
          if ( v67 )
          {
            sub_AE9DF0((unsigned __int8 **)(v56.m128i_i64[0] + 32), v57, 0xAu);
          }
          else
          {
            if ( !v69 )
            {
LABEL_34:
              v33 = sub_F58630((unsigned __int8)(*(_WORD *)(a3 + 18) >> 3));
              if ( v67 )
              {
                sub_AE9DF0((unsigned __int8 **)(v56.m128i_i64[0] + 32), v33, 2u);
              }
              else if ( v69 )
              {
                LODWORD(v58) = v33;
                v34 = sub_168B9E0(v56.m128i_i64[0]);
                v37 = (unsigned int)v58;
                v38 = v34;
                v39 = (__int64)v66;
                if ( v66 )
                {
                  v40 = *v66;
                  v59 = v38;
                  v39 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v40 + 32))(v66, v40, (unsigned int)v58);
                  v38 = v59;
                  v37 = (unsigned int)v58;
                }
                LODWORD(v58) = v37;
                v63 = v39;
                v41 = sub_1587BC0(v38, &v63, v37, v38, v35, v36);
                sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v68 + 8), (int)v58, 2u);
              }
              sub_15F7200(v56.m128i_i64[0]);
              sub_168B9F0(v56.m128i_i64[0], (__int64 *)(*a1 + 8), *(_DWORD *)(v57 + 24), 0x67u, 0);
              sub_15F7200(v56.m128i_i64[0]);
              goto LABEL_8;
            }
            v42 = (__int64 *)sub_168B9E0(v56.m128i_i64[0]);
            v46 = (__int64)v66;
            if ( v66 )
            {
              v47 = *v66;
              v58 = v42;
              v46 = (*(__int64 (__fastcall **)(__int64 *))(v47 + 32))(v66);
              v42 = v58;
            }
            v63 = v46;
            v48 = sub_1587BC0((__int64)v42, &v63, (__int64)v42, v43, v44, v45);
            sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v68 + 8), v57, 0xAu);
          }
          if ( v67 )
          {
            sub_AE9DF0((unsigned __int8 **)(v56.m128i_i64[0] + 32), 7, 2u);
          }
          else if ( v69 )
          {
            v49 = (__int64 *)sub_168B9E0(v56.m128i_i64[0]);
            v53 = (__int64)v66;
            if ( v66 )
            {
              v54 = *v66;
              v58 = v49;
              v53 = (*(__int64 (__fastcall **)(__int64 *))(v54 + 32))(v66);
              v49 = v58;
            }
            v63 = v53;
            v55 = sub_1587BC0((__int64)v49, &v63, (__int64)v49, v50, v51, v52);
            sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v68 + 8), 7, 2u);
          }
          goto LABEL_34;
        }
      }
    }
  }
LABEL_8:
  v18 = v60;
  v19 = *(_QWORD *)(v60 + 32);
  v20 = *(_WORD *)(v60 + 18) >> 3;
  if ( (_BYTE)v20 != 6 || (v21 = 0, v19) )
    v21 = *((_QWORD *)v61 + 1);
  if ( v12 == v21 && v19 == v8 && v17 == *(_QWORD *)(a3 + 40) )
  {
    v23 = v60;
    goto LABEL_14;
  }
  v22 = sub_A76250(*(_QWORD *)(*a1 + 248), (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3), v8, v17, 0);
  v23 = v22;
  if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v18 = v22;
  v20 = *(_WORD *)(v22 + 18) >> 3;
LABEL_14:
  v24 = 16;
  if ( (_BYTE)v20 == 6 )
    v24 = 16LL * (*(_QWORD *)(v18 + 32) != 0);
  v25 = sub_1EA6140(a2, v23, v24, 8);
  if ( (unsigned __int8)(*(_WORD *)(v60 + 18) >> 3) != 6 || (v27 = 0, *(_QWORD *)(v60 + 32)) )
    v27 = *v61;
  if ( (unsigned __int8)(*(_WORD *)(v25 + 18) >> 3) != 6 || *(_QWORD *)(v25 + 32) )
  {
    *(_DWORD *)v26 = v27;
    if ( (unsigned __int8)(*(_WORD *)(v25 + 18) >> 3) != 6 || *(_QWORD *)(v25 + 32) )
      *(_QWORD *)(v26 + 8) = v12;
  }
  return v23;
}
