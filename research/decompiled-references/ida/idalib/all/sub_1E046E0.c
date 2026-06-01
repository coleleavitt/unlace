__int64 __fastcall sub_1E046E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v10; // rdi
  void (*v11)(void); // rax
  char v12; // al
  _QWORD *v13; // rax
  __int64 v14; // rbp
  int v15; // esi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r14
  unsigned int v19; // esi
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int16 *v28; // r15
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  __int64 v32; // r9
  __int64 result; // rax
  unsigned __int64 v34; // rdx
  char v35; // cl
  unsigned __int64 *v36; // rax
  unsigned __int64 v37; // rax
  int v38; // [rsp+4h] [rbp-74h]
  unsigned int v39; // [rsp+8h] [rbp-70h]
  _BOOL4 v40; // [rsp+Ch] [rbp-6Ch]
  __int64 v41; // [rsp+28h] [rbp-50h]

  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18368LL);
  if ( v10 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v10 + 104LL);
    if ( v11 != nullsub_440 )
      v11();
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
  {
    v12 = *(_BYTE *)(a3 + 97);
    if ( (v12 & 0x40) != 0 )
    {
      *((_BYTE *)a2 + 97) |= 0x60u;
    }
    else if ( (v12 & 0x20) != 0 )
    {
      *((_BYTE *)a2 + 97) |= 0x20u;
    }
  }
  v13 = (_QWORD *)(a2[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[2] & 4) != 0 )
    v13 = (_QWORD *)*v13;
  v14 = *(_QWORD *)(a1 + 544);
  v15 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 544) = v13;
  v16 = *(_DWORD *)(a1 + 40);
  v17 = *(_QWORD *)(a1 + 9944);
  *(_QWORD *)(a1 + 9944) = 0;
  v18 = *(_QWORD *)(a1 + 512);
  v38 = v15;
  *(_DWORD *)(a1 + 80) = v16;
  v19 = *(_DWORD *)(a1 + 2632);
  v41 = v17;
  *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
  *(_QWORD *)(a1 + 512) = 0;
  v39 = v19;
  sub_18C74E0(a1, 6, (__int64)a2, 3);
  *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 39) = *(_BYTE *)(*(_QWORD *)(a1 + 4616)
                                                                                            + ((5LL
                                                                                              * *(unsigned int *)(a1 + 4624)
                                                                                              - 10) << 7)
                                                                                            + 601);
  *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 37) = *(_BYTE *)(*(_QWORD *)(a1 + 4616)
                                                                                            + ((5LL
                                                                                              * *(unsigned int *)(a1 + 4624)
                                                                                              - 10) << 7)
                                                                                            + 603);
  if ( !sub_B73640(a3) )
  {
    if ( (*((_BYTE *)a2 + 28) & 0x7F) == 0x2B )
      goto LABEL_26;
    v34 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a2[2] & 4) != 0 )
      v34 = *(_QWORD *)v34;
    v35 = *((_BYTE *)a2 + 97);
    if ( ((*(_BYTE *)(v34 + 8) + 70) & 0x7Fu) <= 3 && (v35 & 0x20) == 0 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 24))(a2) || sub_B735C0(*(_QWORD *)(a3 + 80)) )
        goto LABEL_17;
      if ( (*((_BYTE *)a2 + 28) & 0x7F) == 0x2B )
        goto LABEL_26;
      v35 = *((_BYTE *)a2 + 97);
    }
    if ( (v35 & 8) != 0 )
      goto LABEL_17;
LABEL_26:
    if ( (*((_BYTE *)a2 + 97) & 0x10) != 0 )
      goto LABEL_17;
    goto LABEL_14;
  }
  v40 = ((*(_BYTE *)(a3 + 96) >> 5) & 3) == 1;
  v20 = sub_B73640(a3);
  v23 = sub_1DDCBD0(a1, v20, a4, v40, v21, v22, a5, a6);
  if ( v23 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    sub_B88650((__int64)a2, 1);
  }
  else
  {
    v28 = (unsigned __int16 *)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*((_BYTE *)a2 + 29) & 1) == 0 )
      goto LABEL_13;
    v36 = sub_B8C3D0((__int64)a2, v20, v24, v25, v26, v27);
    v29 = *v36;
    v37 = *v36 + 8LL * *((unsigned int *)v36 + 2);
    if ( v29 < v37 )
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)v29;
        if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 197 )
          break;
        v29 += 8LL;
        if ( v37 == v29 )
          goto LABEL_13;
      }
      if ( v37 == v29 )
      {
LABEL_13:
        if ( !v28 )
        {
LABEL_14:
          sub_17D5BF0(a1, a2, *(double *)a5.m128_u64, *(double *)a6.m128_u64);
          goto LABEL_15;
        }
        goto LABEL_33;
      }
    }
    else
    {
      if ( v29 == v37 )
        goto LABEL_13;
      while ( 1 )
      {
        v30 = *(_QWORD *)v37;
        if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 197 )
          break;
        v37 += 8LL;
        if ( v29 == v37 )
          goto LABEL_13;
      }
    }
    if ( v28 && (unsigned __int8)sub_C0D200(v28, *(__int64 **)(a1 + 248), 0, nullptr, v31) )
LABEL_33:
      sub_17ED4C0(
        a1,
        (__int64)a2,
        (unsigned __int64)v28,
        (*(_BYTE *)(a3 + 96) & 0x60) != 0,
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64);
  }
LABEL_15:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
    sub_1796940(*(__int64 **)(a1 + 664), (__int64)a2, v29, v30, v31, v32, *(double *)a5.m128_u64);
LABEL_17:
  result = sub_190D5E0(a1, a5);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 544) = v14;
    *(_QWORD *)(a1 + 512) = v18;
    *(_QWORD *)(a1 + 9944) = v41;
    *(_DWORD *)(a1 + 80) = v38;
    result = v39;
    *(_DWORD *)(a1 + 2632) = v39;
  }
  return result;
}
