void __fastcall sub_1A8FB80(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __m128i *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  bool v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v31[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v33; // [rsp+30h] [rbp-A8h] BYREF
  char v34; // [rsp+88h] [rbp-50h]
  unsigned int v35; // [rsp+90h] [rbp-48h]
  char v36; // [rsp+94h] [rbp-44h]

  v29 = *(_QWORD *)(a2 + 48);
  v7 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v8 + 17) & 4) == 0 )
  {
    if ( !sub_F6ACC0(v8, a2, (__int64)v7, a4, a5) )
    {
      sub_168B9F0((__int64)v31, a1, a3[1].m128i_u32[2], 0x1119u, 0);
      sub_1605D30((__int64)v31, &v29);
      sub_15F7200(v31);
      return;
    }
    v7 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (v7[1] & 8) != 0 )
  {
    v19 = v7[1] & 7;
    v20 = ((v19 | *(unsigned __int64 *)((char *)&qword_18 + (v7[1] & 0xFFFFFFFFFFFFFFF0LL))) >> 6) & 7;
    if ( (((v19 | *(unsigned __int64 *)((char *)&qword_18 + (v7[1] & 0xFFFFFFFFFFFFFFF0LL))) >> 6) & 7) != 0 )
      goto LABEL_9;
  }
  if ( (*(_BYTE *)(*v7 + 17) & 4) == 0 )
  {
    LODWORD(v20) = sub_F68130(*v7);
LABEL_9:
    if ( (_DWORD)v20 == 1 || (_DWORD)v20 == 4 )
    {
      sub_168B9F0((__int64)v31, a1, a3[1].m128i_u32[2], 0x1C19u, 0);
      v21 = (_DWORD)v20 == 4;
      if ( v34 )
      {
        sub_AE9DF0(&v33, v21, 2u);
        sub_15F7200(v31);
      }
      else
      {
        if ( v36 )
        {
          v26 = sub_168B9E0(v31);
          v27 = v32;
          if ( v32 )
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
          v30 = v27;
          v28 = sub_1587BC0(v26, &v30, v22, v23, v24, v25);
          sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v35 + 8), v21, 2u);
        }
        sub_15F7200(v31);
      }
    }
  }
  v9 = sub_168B6C0((__int64)a1);
  v10 = (_QWORD *)sub_168B6C0((__int64)a1);
  v13 = v10[294];
  v10[304] += 40LL;
  v14 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10[295] >= (unsigned __int64)&v14[2].m128i_u64[1] && v13 )
    v10[294] = (char *)v14 + 40;
  else
    v14 = (__m128i *)sub_986170((__int64)(v10 + 294), 40, 40, 3, v11, v12);
  sub_B16320(v14, v9, a3);
  sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
}
