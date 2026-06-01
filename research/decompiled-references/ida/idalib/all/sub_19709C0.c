unsigned __int64 __fastcall sub_19709C0(__int64 *a1, __int64 a2, __int64 a3, int *a4, __m128 a5, __m128 a6)
{
  __int64 v8; // rbp
  unsigned __int16 v9; // cx
  int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  int v18; // esi
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // edi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __m128i v29; // rax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __m128i v54; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v55; // [rsp+18h] [rbp-110h]
  __int64 v56; // [rsp+20h] [rbp-108h]
  __int64 v57; // [rsp+28h] [rbp-100h]
  __int64 v58; // [rsp+30h] [rbp-F8h] BYREF
  int *v59; // [rsp+38h] [rbp-F0h]
  __int64 v60; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+48h] [rbp-E0h] BYREF
  __m128 v62; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v63[16]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 *v64; // [rsp+70h] [rbp-B8h]
  char v65; // [rsp+D8h] [rbp-50h]
  unsigned int v66; // [rsp+E0h] [rbp-48h]
  char v67; // [rsp+E4h] [rbp-44h]

  v8 = *(_QWORD *)(a3 + 32);
  v59 = a4;
  v9 = *(_WORD *)(a3 + 18);
  v58 = a3;
  v10 = v59;
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
    v10 = v59 + 4;
    v13 = a3;
    v12 = 0;
    goto LABEL_6;
  }
  v8 = sub_1969B50((__int64)a1, v8, *((void **)v59 + 1), 0, 0);
  v12 = v11;
  if ( !v8 )
    return 0;
  v13 = v58;
  v10 = v59;
  if ( (unsigned __int8)(*(_WORD *)(v58 + 18) >> 3) != 6 || *(_QWORD *)(v58 + 32) )
    v10 = v59 + 4;
LABEL_6:
  v14 = sub_F6C520(*(_QWORD *)(v13 + 40));
  v17 = sub_193F4E0(
          a1,
          a2,
          *(_QWORD *)(v58 + 40),
          (__m128i *)(v14 * (((unsigned __int64)v10 - (v10 != nullptr)) / v14 + (v10 != nullptr))),
          v15,
          v16,
          a5,
          a6);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v18 = (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3);
  if ( (unsigned int)(v18 - 5) <= 1 )
  {
LABEL_8:
    v19 = *a1;
    goto LABEL_9;
  }
  v27 = sub_F6A860(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v27 )
  {
    v18 = (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3);
    goto LABEL_8;
  }
  v60 = *(_QWORD *)(v27 + 32);
  v28 = sub_F22BD0(&v60, 0);
  v19 = *a1;
  v55 = v28;
  if ( v28 )
  {
    v54.m128i_i8[0] = *(_BYTE *)(v28 + 28);
    if ( (v54.m128i_i8[0] & 0x7F) == 0x46 )
    {
      v56 = v19;
      v29.m128i_i64[0] = sub_1743120((__int64)&v58);
      v54 = v29;
      v62 = (__m128)_mm_load_si128(&v54);
      v30 = sub_F6CCB0((__int64 *)&v62, v62);
      v54.m128i_i64[0] = (__int64)v63;
      sub_168B9F0((__int64)v63, (__int64 *)(v56 + 8), v30, 0x13D4u, 0);
      if ( v65 )
      {
        sub_AE9DF0((unsigned __int8 **)(v54.m128i_i64[0] + 32), v55, 0xAu);
      }
      else
      {
        if ( !v67 )
        {
LABEL_28:
          v31 = sub_F58630((unsigned __int8)(*(_WORD *)(a3 + 18) >> 3));
          if ( v65 )
          {
            sub_AE9DF0((unsigned __int8 **)(v54.m128i_i64[0] + 32), v31, 2u);
          }
          else if ( v67 )
          {
            LODWORD(v56) = v31;
            v32 = sub_168B9E0(v54.m128i_i64[0]);
            v35 = (unsigned int)v56;
            v36 = v32;
            v37 = (__int64)v64;
            if ( v64 )
            {
              v38 = *v64;
              v57 = v36;
              v37 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v38 + 32))(v64, v38, (unsigned int)v56);
              v36 = v57;
              v35 = (unsigned int)v56;
            }
            LODWORD(v56) = v35;
            v61 = v37;
            v39 = sub_1587BC0(v36, &v61, v35, v36, v33, v34);
            sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * v66 + 8), (int)v56, 2u);
          }
          sub_15F7200(v54.m128i_i64[0]);
          sub_168B9F0(v54.m128i_i64[0], (__int64 *)(*a1 + 8), *(_DWORD *)(v55 + 24), 0x67u, 0);
          sub_15F7200(v54.m128i_i64[0]);
          v19 = *a1;
          goto LABEL_31;
        }
        v40 = sub_168B9E0(v54.m128i_i64[0]);
        v44 = (__int64)v64;
        if ( v64 )
        {
          v45 = *v64;
          v56 = v40;
          v44 = (*(__int64 (__fastcall **)(__int64 *))(v45 + 32))(v64);
          v40 = v56;
        }
        v61 = v44;
        v46 = sub_1587BC0(v40, &v61, v40, v41, v42, v43);
        sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v66 + 8), v55, 0xAu);
      }
      if ( v65 )
      {
        sub_AE9DF0((unsigned __int8 **)(v54.m128i_i64[0] + 32), 7, 2u);
      }
      else if ( v67 )
      {
        v47 = sub_168B9E0(v54.m128i_i64[0]);
        v51 = (__int64)v64;
        if ( v64 )
        {
          v52 = *v64;
          v56 = v47;
          v51 = (*(__int64 (__fastcall **)(__int64 *))(v52 + 32))(v64);
          v47 = v56;
        }
        v61 = v51;
        v53 = sub_1587BC0(v47, &v61, v47, v48, v49, v50);
        sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * v66 + 8), 7, 2u);
      }
      goto LABEL_28;
    }
  }
LABEL_31:
  v18 = (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3);
LABEL_9:
  v20 = sub_A76250(*(_QWORD *)(v19 + 248), v18, v8, v17, 0);
  v21 = v20;
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v23 = 16;
  if ( (unsigned __int8)(*(_WORD *)(v20 + 18) >> 3) == 6 )
    v23 = 16LL * (*(_QWORD *)(v20 + 32) != 0);
  v24 = sub_1EA6140(a2, v20, v23, 8);
  if ( (unsigned __int8)(*(_WORD *)(v58 + 18) >> 3) != 6 || (v26 = 0, *(_QWORD *)(v58 + 32)) )
    v26 = *v59;
  if ( (unsigned __int8)(*(_WORD *)(v24 + 18) >> 3) != 6 || *(_QWORD *)(v24 + 32) )
  {
    *(_DWORD *)v25 = v26;
    if ( (unsigned __int8)(*(_WORD *)(v24 + 18) >> 3) != 6 || *(_QWORD *)(v24 + 32) )
      *(_QWORD *)(v25 + 8) = v12;
  }
  return v21;
}
