__int16 __fastcall sub_1A8F3A0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  unsigned int v6; // r12d
  unsigned __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  __int16 result; // ax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-F8h]
  __int64 v27[2]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v28; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v29; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v31[200]; // [rsp+30h] [rbp-C8h] BYREF

  v6 = a4;
  v8 = a3;
  v9 = *(_WORD *)a3;
  v27[0] = a2;
  if ( (v9 & 0x1FF) == 0x4F && ((*(_WORD *)(a3 + 2) >> 3) & 0x7F) == 1 )
  {
    a3 = *(_QWORD *)(a3 + 16);
    v18 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v19 = *(_QWORD *)v18;
    if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) != 34 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
        || !sub_F63050(v19, a2, a3, a4) )
      {
        goto LABEL_3;
      }
      a3 = *(_QWORD *)(v8 + 16);
    }
    v8 = a3;
  }
LABEL_3:
  v10 = *(_QWORD *)(v8 + 8);
  v29 = v8;
  v28 = v10;
  v10 &= 0xFFFFFFFFFFFFFFF0LL;
  v11 = *(_QWORD *)v10;
  if ( *(_BYTE *)(*(_QWORD *)v10 + 16LL) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      goto LABEL_8;
    if ( !sub_F63050(v11, a2, a3, a4) )
    {
      result = *(_WORD *)v8 & 0x1FF;
      if ( result == 42 )
        return sub_1A8F630(a1[92], v27[0], v8);
      goto LABEL_16;
    }
  }
  v12 = sub_1919BF0(a1, v27[0], &v29, 0, 0, 1u, a5, a6);
  if ( v12 > 9 || ((1LL << v12) & 0x203) == 0 )
  {
    v13 = sub_EEB7E0(v8, v27[0], *(double *)a5.m128_u64);
    sub_168B9F0((__int64)v31, a1 + 1, v13, 0x1C09u, 0);
    v14 = sub_1605D30((__int64)v31, &v28);
    v15 = v14;
    if ( *(_BYTE *)(v14 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v14 + 32), v6, 3u);
    }
    else if ( *(_BYTE *)(v14 + 132) )
    {
      v20 = sub_168B9E0((_QWORD *)v14);
      v24 = *(_QWORD *)(v15 + 16);
      if ( v24 )
      {
        v26 = v20;
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
        v20 = v26;
      }
      v30 = v24;
      v25 = sub_1587BC0(v20, &v30, v20, v21, v22, v23);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * *(unsigned int *)(v15 + 128) + 8), v6, 3u);
    }
    v16 = sub_1605D30(v15, v27);
    v30 = sub_EEC8C0(v8, (__int64)v27, *(double *)a5.m128_u64);
    sub_1587DB0(v16, &v30);
    sub_15F7200(v31);
  }
LABEL_8:
  result = *(_WORD *)v8 & 0x1FF;
  if ( result == 42 )
    return sub_1A8F630(a1[92], v27[0], v8);
LABEL_16:
  if ( result == 38 )
    return sub_1A8F7E0(a1[92], v27[0], v8);
  return result;
}
