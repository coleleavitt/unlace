void __fastcall sub_1824960(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v31[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v33[11]; // [rsp+30h] [rbp-98h] BYREF
  char v34; // [rsp+88h] [rbp-40h]
  unsigned int v35; // [rsp+90h] [rbp-38h]
  char v36; // [rsp+94h] [rbp-34h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_2;
  v7 = sub_B8C3D0(a2, a2, (__int64)a3, a4, a5, a6);
  v8 = *v7;
  v9 = *v7 + 8LL * *((unsigned int *)v7 + 2);
  if ( *v7 >= v9 )
  {
    if ( v8 == v9 )
      goto LABEL_2;
    while ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 172 )
    {
      v9 += 8LL;
      if ( v8 == v9 )
        goto LABEL_2;
    }
  }
  else
  {
    v10 = *v7;
    while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 172 )
    {
      v10 += 8LL;
      if ( v9 == v10 )
        goto LABEL_2;
    }
    if ( v9 == v10 )
    {
LABEL_2:
      sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1D11u, 0);
      if ( v34 )
      {
        sub_AE9DF0(v33, (__int64)a3, 0x10u);
        if ( !v34 )
          goto LABEL_17;
      }
      else
      {
        if ( !v36 )
        {
LABEL_4:
          sub_15F7200(v31);
          return;
        }
        v20 = sub_168B9E0(v31);
        v21 = v32;
        if ( v32 )
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
        v30 = v21;
        v22 = sub_1587BC0(v20, &v30, v16, v17, v18, v19);
        sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v35 + 8), (__int64)a3, 0x10u);
        if ( !v34 )
        {
LABEL_17:
          if ( !v36 )
            goto LABEL_4;
          v27 = sub_168B9E0(v31);
          v28 = v32;
          if ( v32 )
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
          v30 = v28;
          v29 = sub_1587BC0(v27, &v30, v23, v24, v25, v26);
          sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v35 + 8), a2, 0xAu);
          if ( !v34 )
          {
LABEL_21:
            if ( v36 )
              sub_180D0B0((__int64)v31, (__int64)"'capability'");
            goto LABEL_4;
          }
LABEL_13:
          sub_AE9DF0(v33, (__int64)"'capability'", 1u);
          goto LABEL_4;
        }
      }
      sub_AE9DF0(v33, a2, 0xAu);
      if ( !v34 )
        goto LABEL_21;
      goto LABEL_13;
    }
  }
  v11 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
  sub_B17C60(v11, *(_QWORD *)(a1 + 248), a3);
  sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
}
