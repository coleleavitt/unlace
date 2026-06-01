/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4458E0
// Address: 0x00000000004458E0

//----- (00000000004458E0) ----------------------------------------------------
__int64 __fastcall sub_4458E0(
        _QWORD *a1,
        _DWORD *a2,
        unsigned __int8 **a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  void *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  unsigned __int8 *v19; // rax
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned __int8 *v22; // rbx
  __int64 v23; // rax
  size_t v24; // rbx
  __int64 v25; // rbp
  _BYTE *v26; // rsi
  unsigned __int64 v27; // r12
  size_t v28; // rax
  const char *v29; // rsi
  size_t v30; // rbp
  __int64 v31; // rbx
  size_t v32; // r12
  _BYTE *v33; // rsi
  void *v34; // rax
  const void *v35; // rsi
  unsigned __int64 v36; // [rsp+0h] [rbp-80h]
  void *ptr; // [rsp+8h] [rbp-78h] BYREF
  __int128 v38; // [rsp+10h] [rbp-70h]
  void *v39; // [rsp+28h] [rbp-58h] BYREF
  __int128 v40; // [rsp+30h] [rbp-50h]
  unsigned __int64 v41; // [rsp+40h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  *a2 = -1;
  v38 = 0;
  ptr = nullptr;
  v12 = sub_443440((__int64)a1, (__int64)&ptr, 0.0, a5, a6, a7, a8, a9, a10, a11);
  v13 = ptr;
  v14 = v12;
  if ( v12 )
  {
    v36 = v38;
    v15 = sub_439CD0(*(int *)(v12 + 52));
    v16 = sub_43D490(v15, (__int64)&ptr);
    if ( v16 != -1 )
    {
      *a2 = v16;
LABEL_4:
      v17 = 1;
      goto LABEL_5;
    }
    v19 = (unsigned __int8 *)sub_43D6F0(v14, (__int64)&ptr);
    if ( v19 != (unsigned __int8 *)(v14 + 8) )
    {
      v22 = v19 + 56;
      sub_4418C0(*a3, v19 + 56, 0.0, a5, a6, a7, v20, v21, a10, a11);
      *a3 = v22;
      goto LABEL_4;
    }
    if ( (unsigned __int8)sub_4448B0(a1, v14, (const char **)&ptr, (__m128i **)a3, 0.0, a5, a6, a7, v20, v21, a10, a11) )
      goto LABEL_4;
    sub_479EB0(0x58u);
    v23 = sub_439CD0(*(int *)(v14 + 52));
    v24 = *(_QWORD *)(v23 + 64);
    v25 = v23;
    v26 = nullptr;
    v39 = nullptr;
    v27 = 2;
    v40 = 0;
    if ( v24 )
    {
      v34 = sub_4814F0(v24);
      v35 = *(const void **)(v25 + 56);
      v39 = v34;
      *((_QWORD *)&v40 + 1) = v24;
      v27 = v24 + 1;
      memcpy(v34, v35, v24);
      *(_QWORD *)&v40 = v24;
      v26 = v39;
      v28 = v24 - 1;
      if ( *((_QWORD *)&v40 + 1) >= v24 + 1 )
      {
LABEL_13:
        *(_QWORD *)&v40 = v27;
        v26[v28] = 46;
        *((_BYTE *)v39 + v28 + 1) = 0;
        if ( v36 )
        {
          v30 = v36 - 1;
          if ( v36 != 1 )
          {
            v31 = v40;
            v32 = v36 - 1;
            if ( (_QWORD)v40 )
            {
              v31 = v40 - 1;
              v32 = v30 + v40 - 1;
              v36 = v30 + v40;
            }
            v33 = v39;
            if ( *((_QWORD *)&v40 + 1) < v36 )
            {
              v39 = sub_481540((__int64)&v39, v39, v36, 1u);
              v33 = v39;
            }
            *(_QWORD *)&v40 = v36;
            v33[v32] = 0;
            memcpy((char *)v39 + v31, v13, v30);
          }
        }
        v29 = s1;
        if ( (_QWORD)v40 )
          v29 = (const char *)v39;
        sub_479F30(0, v29);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          j__free(v39);
        }
        goto LABEL_18;
      }
      --v24;
    }
    v39 = sub_481540((__int64)&v39, v26, v27, 1u);
    v26 = v39;
    v28 = v24;
    goto LABEL_13;
  }
LABEL_18:
  v17 = 0;
LABEL_5:
  if ( v13 )
    j__free(v13);
  return v17;
}
// 4459BF: variable 'v20' is possibly undefined
// 4459BF: variable 'v21' is possibly undefined
