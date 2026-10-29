unsigned __int64 __fastcall sub_1DA8340(__int64 *a1, __int64 a2, unsigned __int64 a3, int *a4, __m128 a5, __m128 a6)
{
  __int64 v9; // r15
  __int64 v10; // rdx
  int *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  __int16 v16; // cx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // esi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 *v30; // rsi
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // [rsp+8h] [rbp-110h]
  int *v54; // [rsp+10h] [rbp-108h]
  __int64 v55; // [rsp+18h] [rbp-100h]
  unsigned int v56; // [rsp+20h] [rbp-F8h]
  int v57; // [rsp+20h] [rbp-F8h]
  __int64 v58; // [rsp+20h] [rbp-F8h]
  __int64 v59; // [rsp+20h] [rbp-F8h]
  __int64 v60; // [rsp+28h] [rbp-F0h]
  __int64 v61; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v63[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v64[2]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD *v65; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v66[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v67; // [rsp+C8h] [rbp-50h]
  unsigned int v68; // [rsp+D0h] [rbp-48h]
  char v69; // [rsp+D4h] [rbp-44h]

  v9 = *(_QWORD *)(a3 + 32);
  if ( (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) == 6 )
  {
    if ( !v9 )
    {
      v54 = a4;
      v11 = a4;
      v53 = 0;
      goto LABEL_6;
    }
  }
  else if ( !v9 )
  {
    v54 = a4;
    v11 = a4 + 4;
    v53 = 0;
    goto LABEL_6;
  }
  v9 = sub_1D9F590((__int64)a1, v9, *((void **)a4 + 1), 0, 0);
  v53 = v10;
  if ( !v9 )
    return 0;
  v54 = a4;
  if ( (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) != 6 || *(_QWORD *)(a3 + 32) )
    v11 = a4 + 4;
  else
    v11 = a4;
LABEL_6:
  v12 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v15 = sub_1D97F40(
          a1,
          a2,
          *(_QWORD *)(a3 + 40),
          (const __m128i *)(v12 * (((unsigned __int64)v11 - (v11 != nullptr)) / v12 + (v11 != nullptr))),
          v13,
          v14,
          a5,
          a6);
  if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = *(_WORD *)(a3 + 18) >> 3;
  if ( (unsigned int)(unsigned __int8)v16 - 5 <= 1 )
    goto LABEL_8;
  v27 = sub_F6A860(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v27 )
  {
    v61 = *(_QWORD *)(v27 + 32);
    v28 = sub_F22BD0(&v61, 0);
    v55 = v28;
    if ( !v28 )
    {
LABEL_41:
      v17 = *a1;
      v16 = *(_WORD *)(a3 + 18) >> 3;
      goto LABEL_9;
    }
    v29 = v28;
    v17 = *a1;
    v16 = *(_WORD *)(a3 + 18) >> 3;
    if ( (*(_BYTE *)(v29 + 28) & 0x7F) != 0x46 )
      goto LABEL_9;
    v30 = (__int64 *)(v17 + 8);
    if ( (_BYTE)v16 != 6 || *(_QWORD *)(a3 + 32) )
      v54 = a4 + 4;
    v31 = sub_F6C520(*(_QWORD *)(a3 + 40));
    v63[0] = *(_QWORD *)(a3 + 40);
    v63[1] = ((v54 != nullptr) + ((unsigned __int64)v54 - (v54 != nullptr)) / v31) * v31;
    v32 = sub_F6CCB0(v63, a5);
    sub_168B9F0((__int64)v64, v30, v32, 0x13D4u, 0);
    if ( v67 )
    {
      sub_AE9DF0(v66, v55, 0xAu);
    }
    else
    {
      if ( !v69 )
      {
LABEL_38:
        v33 = sub_F58630((unsigned __int8)(*(_WORD *)(a3 + 18) >> 3));
        if ( v67 )
        {
          sub_AE9DF0(v66, v33, 2u);
        }
        else if ( v69 )
        {
          v56 = v33;
          v34 = sub_168B9E0(v64);
          v37 = v56;
          v38 = v34;
          v39 = (__int64)v65;
          if ( v65 )
          {
            v60 = v38;
            v39 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v65 + 32LL))(v65, *v65, v56);
            v38 = v60;
            v37 = v56;
          }
          v57 = v37;
          v62 = v39;
          v40 = sub_1587BC0(v38, &v62, v37, v38, v35, v36);
          sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v68 + 8), v57, 2u);
        }
        sub_15F7200(v64);
        sub_168B9F0((__int64)v64, (__int64 *)(*a1 + 8), *(_DWORD *)(v55 + 24), 0x67u, 0);
        sub_15F7200(v64);
        goto LABEL_41;
      }
      v41 = sub_168B9E0(v64);
      v45 = (__int64)v65;
      if ( v65 )
      {
        v58 = v41;
        v45 = (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 32LL))(v65);
        v41 = v58;
      }
      v62 = v45;
      v46 = sub_1587BC0(v41, &v62, v41, v42, v43, v44);
      sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v68 + 8), v55, 0xAu);
    }
    if ( v67 )
    {
      sub_AE9DF0(v66, 7, 2u);
    }
    else if ( v69 )
    {
      v47 = sub_168B9E0(v64);
      v51 = (__int64)v65;
      if ( v65 )
      {
        v59 = v47;
        v51 = (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 32LL))(v65);
        v47 = v59;
      }
      v62 = v51;
      v52 = sub_1587BC0(v47, &v62, v47, v48, v49, v50);
      sub_AE9DF0((unsigned __int8 **)(*v52 + 32LL * v68 + 8), 7, 2u);
    }
    goto LABEL_38;
  }
  v16 = *(_WORD *)(a3 + 18) >> 3;
LABEL_8:
  v17 = *a1;
LABEL_9:
  if ( !*(_DWORD *)(v17 + 12632) )
  {
    v18 = *(_QWORD *)(a3 + 32);
    if ( (_BYTE)v16 != 6 || (v19 = 0, v18) )
      v19 = *((_QWORD *)a4 + 1);
    if ( v19 == v53 && v18 == v9 && *(_QWORD *)(a3 + 40) == v15 )
    {
      v21 = a3;
      v20 = a3;
      goto LABEL_16;
    }
  }
  v20 = sub_A76250(*(_QWORD *)(v17 + 248), (unsigned __int8)v16, v9, v15, 0);
  v21 = v20;
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = *(_WORD *)(v20 + 18) >> 3;
LABEL_16:
  v22 = 16;
  if ( (_BYTE)v16 == 6 )
    v22 = 16LL * (*(_QWORD *)(v20 + 32) != 0);
  v23 = sub_1EA6140(a2, v21, v22, 8);
  if ( (unsigned __int8)(*(_WORD *)(a3 + 18) >> 3) != 6 || (v25 = 0, *(_QWORD *)(a3 + 32)) )
    v25 = *a4;
  if ( (unsigned __int8)(*(_WORD *)(v23 + 18) >> 3) != 6 || *(_QWORD *)(v23 + 32) )
  {
    *(_DWORD *)v24 = v25;
    if ( (unsigned __int8)(*(_WORD *)(v23 + 18) >> 3) != 6 || *(_QWORD *)(v23 + 32) )
      *(_QWORD *)(v24 + 8) = v53;
  }
  return v21;
}
