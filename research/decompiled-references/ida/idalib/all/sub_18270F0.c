void __fastcall sub_18270F0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __m128i *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v34[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v36[11]; // [rsp+30h] [rbp-98h] BYREF
  char v37; // [rsp+88h] [rbp-40h]
  unsigned int v38; // [rsp+90h] [rbp-38h]
  char v39; // [rsp+94h] [rbp-34h]

  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v9 + 16) & 0xF7) != 0x22
    && (*(_BYTE *)(v9 + 16) != 48
     || !sub_F62670(v9, nullptr, *(_BYTE *)(v9 + 16) & 0xF7, a4, a5, a6)
     && !(unsigned __int8)sub_1809010((__int64 *)(a1 + 248), v9, v10, v11, a5, a6)) )
  {
    sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1D0Cu, 0);
    if ( v37 )
    {
      sub_AE9DF0(v36, (__int64)a3, 0x10u);
    }
    else
    {
      if ( !v39 )
      {
LABEL_11:
        sub_15F7200(v34);
        return;
      }
      v21 = sub_168B9E0(v34);
      v24 = v35;
      if ( v35 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
      v33 = v24;
      v25 = sub_1587BC0(v21, &v33, v19, v20, v22, v23);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v38 + 8), (__int64)a3, 0x10u);
    }
    if ( v37 )
    {
      sub_AE9DF0(v36, v8, 8u);
    }
    else if ( v39 )
    {
      v28 = sub_168B9E0(v34);
      v31 = v35;
      if ( v35 )
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
      v33 = v31;
      v32 = sub_1587BC0(v28, &v33, v26, v27, v29, v30);
      sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v38 + 8), v8, 8u);
    }
    goto LABEL_11;
  }
  v12 = *(_QWORD **)(a1 + 248);
  v13 = v12[294];
  v12[304] += 40LL;
  v14 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v12[295] >= (unsigned __int64)&v14[2].m128i_u64[1] && v13 )
    v12[294] = (char *)v14 + 40;
  else
    v14 = (__m128i *)sub_986170((__int64)(v12 + 294), 40, 40, 3, a5, a6);
  sub_B17840(v14, *(_QWORD *)(a1 + 248), a3);
  sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
}
