void __fastcall sub_1BF84A0(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        char a9,
        char a10,
        char a11)
{
  __int64 *v12; // r15
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  unsigned __int64 *v16; // r13
  unsigned __int64 v17; // r14
  __int64 *v18; // r11
  bool v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned int v23; // eax
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rax
  __int128 v26; // [rsp-40h] [rbp-E8h]
  __int64 v28; // [rsp+10h] [rbp-98h]
  __int64 *v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  unsigned __int64 v34; // [rsp+48h] [rbp-60h]
  unsigned int v35; // [rsp+54h] [rbp-54h]
  __int64 *v36; // [rsp+58h] [rbp-50h]

  v28 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  v34 = a4 - 1;
  if ( *(_QWORD *)a2 != v28 )
  {
    v12 = *(__int64 **)a2;
    while ( 1 )
    {
      v14 = *v12 & 0xFFFFFFFFFFFFFFF8LL;
      v15 = *(_BYTE *)(v14 + 28) & 0x7F;
      if ( (unsigned int)v15 - 53 <= 1 || ((v15 + 52) & 0x7Fu) <= 1 )
      {
        v14 = sub_B72ED0(*v12 & 0xFFFFFFFFFFFFFFF8LL);
        v15 = *(_BYTE *)(v14 + 28) & 0x7F;
      }
      v16 = (unsigned __int64 *)a3;
      v17 = a4;
      v18 = nullptr;
      if ( v15 == 71 )
      {
        v18 = (__int64 *)v14;
        v14 = *(_QWORD *)(v14 + 48);
        v15 = *(_BYTE *)(v14 + 28) & 0x7F;
      }
      if ( (unsigned int)v15 - 35 > 3 )
        break;
      v31 = v18;
      v19 = sub_B979F0((_QWORD *)v14);
      v18 = v31;
      if ( v19 )
        break;
      v21 = 0;
      if ( a4 )
      {
        v22 = *a3;
        if ( *a3 )
        {
          v21 = *(_QWORD *)(v22 + 8);
          if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0
            || (v35 = (unsigned int)&stru_10000,
                *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                     & 0xFFFFFFFFFFFFFFF0LL)
                         + 16LL) != 42) )
          {
            v36 = v31;
            v32 = *(_QWORD *)(v22 + 8);
            v23 = sub_C0EB40(v22, a1[31], nullptr, v20, v21);
            v18 = v36;
            v21 = v32;
            v35 = v23;
          }
        }
        v17 = v34;
        v16 = (unsigned __int64 *)(a3 + 1);
      }
      if ( v18 )
      {
        v24 = (_QWORD *)(v18[2] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v18[2] & 4) != 0 )
          v24 = (_QWORD *)*v24;
        if ( v24 )
          v24 -= 8;
        ++v12;
        *((_QWORD *)&v26 + 1) = v16;
        *(_QWORD *)&v26 = v35;
        sub_1BF0A40(
          (__int64)a1,
          v18,
          *(v12 - 1),
          (__int64)v24,
          a6,
          v21,
          *(double *)a7.m128_u64,
          a8,
          v26,
          v17,
          (__int64)a5,
          a9,
          a10,
          0);
        if ( (__int64 *)v28 == v12 )
          return;
      }
      else
      {
        v33 = v21;
        v25 = sub_B72690(v14 + 72);
        if ( v25 )
          v25 -= 64LL;
        sub_1BEF9D0((__int64)a1, v14, *v12, v25, v33, v35, a7, a8, (__int64)v16, v17, a5, a9, a10, 0, 0, 0, 0);
LABEL_9:
        if ( (__int64 *)v28 == ++v12 )
          return;
      }
    }
    if ( a4 && (!*a3 || a11 && ((*(_BYTE *)(v14 + 28) + 93) & 0x7Fu) <= 2) )
    {
      v16 = (unsigned __int64 *)(a3 + 1);
      v17 = v34;
    }
    if ( v18 )
      sub_1BF3B70(a1, v18, *v12, a6, v16, v17, *(double *)a7.m128_u64, a8, (__int64)a5, a9, a10, 0, 0);
    else
      sub_1BF10B0(a1, v14, *v12, v16, v17, a5, a7, a8, a9, a10, 1, 0, 0, 0, 0, 0, 0, 0);
    goto LABEL_9;
  }
}
