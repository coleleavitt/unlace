unsigned __int64 __fastcall sub_19245F0(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rbp
  _BYTE *v14; // r13
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  size_t v18; // rax
  unsigned __int64 result; // rax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r9
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // [rsp-10h] [rbp-68h]
  char *v35; // [rsp-10h] [rbp-68h]
  int v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+10h] [rbp-48h]
  int v39; // [rsp+18h] [rbp-40h]
  __int64 v40; // [rsp+20h] [rbp-38h]

  v8 = *((_QWORD *)a2 + 1);
  v9 = sub_191BD20(a1, a2, a7, a8, a3, a4, a5, a6);
  if ( v9 == 1 )
    return 1;
  v13 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_BYTE **)(a1 + 232);
  v15 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v16 = *(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v16;
  if ( *(_BYTE *)(*(_QWORD *)v16 + 16LL) != 13 )
    goto LABEL_9;
  v10 = ((*(_WORD *)(v17 + 18) >> 3) & 0x1FFu) - 480;
  if ( (unsigned int)v10 <= 1 )
  {
    if ( (v14[47] & 0x20) == 0
      || (v18 = j__strlen("cl_khr_fp64"),
          a2 = "cl_khr_fp64",
          sub_FF8450(a1 + 200, (__int64)"cl_khr_fp64", v18, (__int64)v14)) )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18808LL);
    }
    else
    {
      if ( ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) != 0x1E0 )
      {
        v14 = *(_BYTE **)(a1 + 232);
        goto LABEL_8;
      }
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18800LL);
    }
    a2 = (char *)v15;
    v27 = sub_160A600(a1, v15, v26, 0x27u, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
    v14 = *(_BYTE **)(a1 + 232);
    v12 = v34;
    v15 = v27 & 0xFFFFFFFFFFFFFFFELL;
    if ( (char)v14[213] >= 0 )
      goto LABEL_9;
    goto LABEL_21;
  }
LABEL_8:
  if ( (char)v14[213] >= 0 )
    goto LABEL_9;
LABEL_21:
  v10 = (__int64)sub_102BB10;
  v25 = *(unsigned __int8 (**)(void))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 736LL);
  if ( (char *)v25 != (char *)sub_102BB10 )
  {
    if ( v25() )
    {
      if ( sub_9EC890(*v13, (__int64)a2, v10, v11, v12) )
      {
        a2 = (char *)v17;
        v28 = sub_AAE980(*(_QWORD *)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18736LL));
        if ( sub_AAE470(*(_QWORD *)(a1 + 248), v17) < v28 )
        {
          v30 = sub_F65360(*v13, v17, v10, v11, v12, v29) == 0;
          v31 = *(_QWORD *)(a1 + 248);
          if ( v30 )
            v32 = *(_QWORD *)(v31 + 18736);
          else
            v32 = *(_QWORD *)(v31 + 18784);
          v33 = sub_160A600(a1, v15, v32, 0x1Bu, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
          a2 = v35;
          v15 = v33 & 0xFFFFFFFFFFFFFFFELL;
        }
      }
    }
    v14 = *(_BYTE **)(a1 + 232);
  }
LABEL_9:
  if ( (v14[1] & 8) == 0 )
    return v15;
  if ( (*(_BYTE *)(v15 + 1) & 6) == 0
    || (v20 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640), v20 == 3)
    || v20 <= 1 )
  {
LABEL_17:
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) == 0x1E8 )
      return sub_160A600(
               a1,
               v15,
               *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19056LL),
               0xDu,
               0,
               0,
               *(double *)a7.m128_u64,
               *(double *)a8.m128_u64,
               0)
           & 0xFFFFFFFFFFFFFFFELL;
    return v15;
  }
  v21 = sub_C00A40(v15, (__int64)a2, v10, v11, v12);
  v22 = *(_QWORD *)(v15 + 8);
  v36 = 9;
  v38 = v22;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v23 = sub_1A24E20(a1, &v36, v21, v15, 0, 0);
  if ( v23 == 1 )
    return 1;
  result = v23 & 0xFFFFFFFFFFFFFFFELL;
  v15 = result;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
    goto LABEL_17;
  return result;
}
