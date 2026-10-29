void __fastcall sub_1833460(__int64 a1, __int64 *a2, const __m128i *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+8h] [rbp-E0h]
  __int64 v28; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-C0h]
  _BYTE v31[184]; // [rsp+30h] [rbp-B8h] BYREF

  v30 = 0x100000000LL;
  ptr = v31;
  sub_18134D0(a1, a2, (__int64)a3, (unsigned __int64)&ptr, 0, 0);
  if ( (_DWORD)v30 == 1 )
  {
    v7 = *(_QWORD *)ptr;
    if ( ptr != v31 )
      free(ptr);
    v8 = a2[6];
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v9 + 16) & 0xF7) == 0x22
      || *(_BYTE *)(v9 + 16) == 48
      && ((v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[6] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
           sub_F62670(v27, nullptr, v9, *(_BYTE *)(v9 + 16) & 0xF7, v5, v6))
       || (unsigned __int8)sub_1809010((__int64 *)(a1 + 248), v27, v27, v10, v5, v6)) )
    {
      v13 = *(_QWORD **)(a1 + 248);
      v14 = v13[294];
      v13[304] += 48LL;
      v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v13[295] >= (unsigned __int64)&v15[3] && v14 )
        v13[294] = v15 + 3;
      else
        v15 = (__m128i *)sub_986170((__int64)(v13 + 294), 48, 48, 3, v5, v6);
      sub_B17740(v15, *(_QWORD *)(a1 + 248), a3, v7);
      sub_B8CC60((__int64)a2, (__int64)v15, v16, v17, v18, v19);
    }
    else
    {
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1D0Cu, 0);
      v11 = sub_15DD120((__int64)&ptr, (__int64)a3);
      v12 = v11;
      if ( *(_BYTE *)(v11 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v11 + 32), v8, 8u);
      }
      else if ( *(_BYTE *)(v11 + 132) )
      {
        v24 = sub_168B9E0((_QWORD *)v11);
        v25 = *(_QWORD *)(v12 + 16);
        if ( v25 )
          v25 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 32LL))(*(_QWORD *)(v12 + 16));
        v28 = v25;
        v26 = sub_1587BC0(v24, &v28, v20, v21, v22, v23);
        sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v12 + 128) + 8), v8, 8u);
      }
      sub_15F7200(&ptr);
    }
  }
  else if ( ptr != v31 )
  {
    free(ptr);
  }
}
