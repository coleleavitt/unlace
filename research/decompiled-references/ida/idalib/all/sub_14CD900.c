__int64 __fastcall sub_14CD900(__int64 a1, _DWORD *a2, int a3, unsigned __int16 a4, void **a5, __int64 a6)
{
  int *v9; // rbx
  __int16 v10; // ax
  int v11; // ebp
  __int64 *v12; // rdi
  __int16 v13; // ax
  __int64 result; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  size_t v18; // r9
  unsigned int v19; // eax
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rdx
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int16 v25; // ax
  __int64 v26; // rax
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int16 v29; // ax
  __int64 v31; // [rsp+0h] [rbp-1A8h]
  __int64 v32; // [rsp+0h] [rbp-1A8h]
  __int64 v33; // [rsp+0h] [rbp-1A8h]
  __int64 v34; // [rsp+0h] [rbp-1A8h]
  int v35; // [rsp+Ch] [rbp-19Ch]
  size_t v37; // [rsp+18h] [rbp-190h]
  int v38; // [rsp+20h] [rbp-188h] BYREF
  __int64 v39; // [rsp+28h] [rbp-180h]
  __int64 v40; // [rsp+38h] [rbp-170h]
  unsigned int v41; // [rsp+40h] [rbp-168h] BYREF
  size_t v42; // [rsp+48h] [rbp-160h]
  __int64 v43; // [rsp+58h] [rbp-150h]
  void *v44; // [rsp+68h] [rbp-140h]
  __int64 v45; // [rsp+78h] [rbp-130h] BYREF
  __int64 v46; // [rsp+88h] [rbp-120h] BYREF
  void *ptr; // [rsp+90h] [rbp-118h]
  __int64 v48; // [rsp+A0h] [rbp-108h] BYREF
  void *v49; // [rsp+C0h] [rbp-E8h]
  int v50; // [rsp+CCh] [rbp-DCh]

  v9 = (int *)(a1 + 16);
  v10 = *(_WORD *)(a1 + 32);
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( v10 == 5 )
  {
    v21 = *(_DWORD *)(a1 + 16);
    v22 = *(_QWORD *)(a1 + 24);
    HIDWORD(v40) = v21;
    v39 = v22;
    LODWORD(v40) = v21;
  }
  else
  {
    if ( v10 != 418 )
    {
      v11 = 0;
      v40 = 0;
      goto LABEL_4;
    }
    v26 = sub_1565590(a1, a1 + 16);
    if ( !*(_DWORD *)(v26 + 32) || *(_BYTE *)(v26 + 48) )
      return 1;
    sub_15AB720(&v38, v26);
    v21 = *(_DWORD *)(a1 + 20);
    if ( !v21 )
      v21 = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 40) = v21;
  sub_14634E0(*(__int64 **)(a1 + 8), v9);
  v23 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v23, v9);
  v11 = *(_DWORD *)(a1 + 40);
LABEL_4:
  v12 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v12, v9);
  v35 = *(_DWORD *)(a1 + 40);
  v13 = *(_WORD *)(a1 + 32);
  if ( v13 != 163 )
  {
    if ( v13 != 5 )
    {
LABEL_6:
      sub_1564840(&v41, a1, v9, 1588);
      sub_AEA040((__int64)&v41);
      return 1;
    }
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(_QWORD *)(v15 + 2944);
    v17 = *(unsigned int *)(v15 + 2912);
    if ( v16 >= v17 )
    {
      if ( *(_WORD *)(sub_14180A0(v15, 1u) + 16) != 27 || *(_WORD *)(a1 + 32) == 1 )
        goto LABEL_27;
      v15 = *(_QWORD *)(a1 + 8);
      v16 = *(_QWORD *)(v15 + 2944);
      v17 = *(unsigned int *)(v15 + 2912);
    }
    else if ( *(_WORD *)(*(_QWORD *)(v15 + 2904) + 24 * v16 + 16) != 27 )
    {
      v41 = 0;
      v42 = 0;
      v43 = 0;
LABEL_12:
      v18 = *(_QWORD *)(a1 + 24);
LABEL_13:
      v37 = v18;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0((__int64 *)v15, v9);
      v19 = *(_DWORD *)(a1 + 40);
      v41 = 0;
      v20 = *(_WORD *)(a1 + 32) == 47;
      v42 = v37;
      HIDWORD(v43) = v19;
      LODWORD(v43) = v19;
      if ( !v20 )
        return sub_19BA690(*(_QWORD *)(a1 + 96), (__int64)&v38, v11, v35, (__int64)&v41);
      LOBYTE(v27) = 0;
      if ( a2 )
        v27 = (*a2 >> 18) & 1;
      if ( !(unsigned __int8)sub_14CCD30(a1, a5, a6, v27, 0, v37, v19, 0, &v41, 1u) )
        return sub_19BA690(*(_QWORD *)(a1 + 96), (__int64)&v38, v11, v35, (__int64)&v41);
      return 1;
    }
    v28 = v16 + 1;
    if ( v17 <= v28 )
      v29 = *(_WORD *)(sub_14180A0(v15, 2u) + 16);
    else
      v29 = *(_WORD *)(*(_QWORD *)(v15 + 2904) + 24 * v28 + 16);
    if ( v29 == 20 )
    {
      sub_147A4A0((__int64)&v41, a1 + 504);
      sub_14A2C40(a1, &v41);
      v33 = sub_19AAEE0(
              *(_QWORD *)(a1 + 96),
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
              (_DWORD)a2,
              a3,
              a4,
              v35,
              (__int64)&v41);
      sub_147A5F0((__int64)&v41);
      return v33;
    }
LABEL_27:
    v25 = *(_WORD *)(a1 + 32);
    v15 = *(_QWORD *)(a1 + 8);
    v18 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    if ( (unsigned __int16)(v25 - 7) <= 0xCu || v25 == 1 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (_DWORD)v40 )
    goto LABEL_6;
  sub_147A4A0((__int64)&v41, a1 + 504);
  sub_14A27E0(a1, (__int64)&v41);
  if ( ((v41 >> 12) & 0x7F) == 0x45 )
    v24 = 1;
  else
    v24 = sub_19AAEE0(
            *(_QWORD *)(a1 + 96),
            *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
            (_DWORD)a2,
            a3,
            a4,
            v35,
            (__int64)&v41);
  if ( v50 )
  {
    v34 = v24;
    free(v49);
    v24 = v34;
  }
  v31 = v24;
  sub_15DCED0(v46, &v46);
  result = v31;
  if ( ptr != &v48 )
  {
    free(ptr);
    result = v31;
  }
  if ( v44 != &v45 )
  {
    v32 = result;
    free(v44);
    return v32;
  }
  return result;
}
