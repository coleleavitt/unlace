void __fastcall sub_1A8FDE0(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __m128i *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rdi
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v40[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v42; // [rsp+30h] [rbp-98h] BYREF
  char v43; // [rsp+88h] [rbp-40h]
  unsigned int v44; // [rsp+90h] [rbp-38h]
  char v45; // [rsp+94h] [rbp-34h]

  v8 = *(_QWORD *)(a2 + 104);
  if ( !v8 )
  {
    v20 = *(_QWORD *)(a2 + 96);
    v21 = *(_QWORD *)(v20 + 88);
    v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v21 & 1) == 0 )
    {
      v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v21 & 2) == 0 )
          goto LABEL_11;
        v24 = v23[2295];
        v25 = v20 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v24 )
        {
          v26 = v23[294];
          v23[304] += 24LL;
          v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v23[295] >= v27 + 24 && v26 )
          {
            v23[294] = v27 + 24;
            v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v28 = sub_986170((__int64)(v23 + 294), 24, 24, 3, a5, a6);
            v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v28 = v24;
          v25 = v27 | 4;
          *(_DWORD *)(v28 + 8) = 0;
          *(_QWORD *)(v28 + 16) = v20;
        }
        v22 = v25 & 0xFFFFFFFFFFFFFFFELL;
        v21 = v22 | 1;
        *(_QWORD *)(v20 + 88) = v22 | 1;
      }
    }
    if ( v22 )
    {
      if ( (v22 & 4) != 0 )
      {
        v29 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v29 )
        {
          v30 = *(_QWORD *)v29;
          v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
          if ( v29[2] != v31 )
          {
            v29[2] = v31;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 152LL))(v30, v20);
          }
        }
      }
    }
    v8 = *(_QWORD *)(a2 + 104);
  }
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9 && a2 == *v9 )
  {
    v10 = sub_168B6C0((__int64)a1);
    v11 = (_QWORD *)sub_168B6C0((__int64)a1);
    v14 = v11[294];
    v11[304] += 40LL;
    v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v11[295] >= (unsigned __int64)&v15[2].m128i_u64[1] && v14 )
      v11[294] = (char *)v15 + 40;
    else
      v15 = (__m128i *)sub_986170((__int64)(v11 + 294), 40, 40, 3, v12, v13);
    sub_B16060(v15, v10, a3);
    sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
    return;
  }
LABEL_11:
  sub_168B9F0((__int64)v40, a1, a3[1].m128i_u32[2], 0x10F6u, 0);
  if ( v43 )
  {
    sub_AE9DF0(&v42, (__int64)a3, 0x10u);
  }
  else if ( v45 )
  {
    v36 = sub_168B9E0(v40);
    v37 = v41;
    if ( v41 )
      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
    v39 = v37;
    v38 = sub_1587BC0(v36, &v39, v32, v33, v34, v35);
    sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v44 + 8), (__int64)a3, 0x10u);
  }
  v39 = a3[1].m128i_i64[1];
  sub_1587DB0((__int64)v40, &v39);
  sub_15F7200(v40);
}
