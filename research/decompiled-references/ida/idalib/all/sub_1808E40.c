void __fastcall sub_1808E40(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  bool v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  _BOOL4 v9; // edx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __m128i *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v23[200]; // [rsp+10h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
    goto LABEL_16;
  v3 = sub_B8DC30(a2, 1);
  v4 = v3 ? *(_QWORD *)(v3 + 24) : *(_QWORD *)(a2 + 80);
  v5 = 0;
  while ( 1 )
  {
    v10 = sub_F6AC00(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v10 )
      break;
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL);
    if ( (v6 & 7) == 0 )
    {
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 16);
        if ( *(_DWORD *)v8 == 13 )
        {
          v9 = *(_QWORD *)(v8 + 16) != 0x7465725F6E72656BLL
            || *(_DWORD *)(v8 + 24) != 1601073781
            || *(_BYTE *)(v8 + 28) != 116;
          v5 = !v9;
        }
      }
    }
    v4 = sub_F5DAC0(v10);
  }
  if ( v5
    && (*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v4) & 7) == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL) )
  {
LABEL_16:
    v12 = sub_168B6C0(a1 + 8);
    v13 = (_QWORD *)sub_168B6C0(a1 + 8);
    v16 = v13[294];
    v13[304] += 40LL;
    v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13[295] >= (unsigned __int64)&v17[2].m128i_u64[1] && v16 )
      v13[294] = (char *)v17 + 40;
    else
      v17 = (__m128i *)sub_986170((__int64)(v13 + 294), 40, 40, 3, v14, v15);
    sub_B141E0(v17, v12, a3);
    sub_B8CC60(a2, (__int64)v17, v18, v19, v20, v21);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v11, 0x1BB3u, 0);
    sub_15F7200(v23);
  }
}
