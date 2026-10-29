__int64 __fastcall sub_1B12200(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __m128 a7,
        __m128 a8,
        __int64 *a9)
{
  unsigned int v9; // r10d
  __int64 v10; // r14
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned __int64 v25; // rax
  _QWORD *v26; // r14
  size_t v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // [rsp+4h] [rbp-124h]
  int v34; // [rsp+14h] [rbp-114h] BYREF
  __int64 v35; // [rsp+18h] [rbp-110h] BYREF
  __int64 v36; // [rsp+20h] [rbp-108h] BYREF
  char v37; // [rsp+2Ch] [rbp-FCh]
  char v38; // [rsp+30h] [rbp-F8h]
  __m128i v39; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v42; // [rsp+70h] [rbp-B8h]
  char *v43; // [rsp+78h] [rbp-B0h]
  __int64 v44; // [rsp+80h] [rbp-A8h]
  char v45; // [rsp+88h] [rbp-A0h] BYREF

  v9 = 1;
  v10 = *a1;
  if ( ((*(_DWORD *)*a1 >> 14) & 0xE) == 0 )
  {
    v32 = a5;
    v12 = a4;
    v13 = a3;
    v14 = sub_C00A40(*a1, a2, a3, a4, a5);
    v15 = sub_1AF55B0(*(__int64 **)(a2 + 760), v14, v10);
    v9 = 0;
    if ( v15 != 1 )
    {
      v18 = v15 & 0xFFFFFFFFFFFFFFFELL;
      *a1 = v18;
      sub_C3EB00((__int64)&v36, v18, *(_QWORD *)(a2 + 248), nullptr, v16, v17);
      if ( !v38 || v37 || (unsigned __int8)sub_1AF0130(&v36) )
      {
        sub_98E4B0((__int64)&v36);
        v9 = 1;
        if ( (_BYTE)v12 )
        {
          v19 = sub_1AE8290(v32, v13, *(unsigned int *)(*(_QWORD *)(a2 + 232) + 64LL), 0x67u);
          *a6 = v19;
          if ( v19 != 103 && !(unsigned __int8)sub_B8E180(*(_QWORD *)(a2 + 544)) )
          {
            v25 = sub_1AF29B0(a2, *a1, a7, a8, v20, v21, v22);
            v41[0] = 0;
            *a1 = v25;
            v26 = (_QWORD *)v25;
            v41[1] = 0;
            v42 = 0;
            v43 = &v45;
            v44 = 0;
            v27 = j__strlen(".capture_expr.");
            *a1 = sub_1B00390((_QWORD *)a2, v26, (__int64)v41, ".capture_expr.", v27, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
            *a9 = sub_1AEDEF0(*(_QWORD **)(a2 + 248), (__int64)v41, v28, v29, v30, v31);
            sub_1AF4310((__int64)v41);
          }
          return v12;
        }
      }
      else
      {
        sub_168B9F0((__int64)v41, (__int64 *)(a2 + 8), v14, 0x11CAu, 0);
        sub_1AF81E0(&v39, v13);
        v23 = sub_1682AF0((__int64)v41, (__int64)&v39);
        v34 = 1;
        v24 = sub_1587D10(v23, &v34);
        v35 = sub_EEC8C0(*a1, (__int64)&v34, *(double *)a7.m128_u64);
        sub_1587DB0(v24, &v35);
        if ( (__int64 *)v39.m128i_i64[0] != &v40 )
          operator delete((void *)v39.m128i_i64[0]);
        sub_15F7200(v41);
        sub_98E4B0((__int64)&v36);
        return 0;
      }
    }
  }
  return v9;
}
