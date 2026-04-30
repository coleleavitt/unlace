__int64 __fastcall sub_4A0960(
        __int64 a1,
        __int64 a2,
        char a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  void (*v16)(void); // rax
  _BYTE *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 (*v20)(); // rax
  __int64 (*v21)(); // rcx
  char v23; // [rsp+0h] [rbp-28h]

  v16 = *(void (**)(void))(*(_QWORD *)a1 + 672LL);
  if ( v16 != nullsub_263 )
    v16();
  v17 = *(_BYTE **)(a1 + 2392);
  v18 = 1;
  v19 = -1;
  v20 = *(__int64 (**)())(*(_QWORD *)v17 + 136LL);
  if ( (v17[12] & 4) == 0 )
  {
    v21 = addon_chooser_t__::vfunc_17;
    if ( v20 == addon_chooser_t__::vfunc_17 )
      goto LABEL_5;
LABEL_10:
    v19 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64))v20)(v17, a2, 1);
    LOBYTE(v18) = v19 == -1;
    goto LABEL_5;
  }
  v21 = exc_chooser_t__::vfunc_17;
  if ( v20 != exc_chooser_t__::vfunc_17 )
    goto LABEL_10;
LABEL_5:
  if ( a3 == 1 || !(_BYTE)v18 || (*(_BYTE *)(a1 + 2012) & 1) != 0 )
    return v19;
  sub_169700(
    (int)"Impossible to map index %zu to an inode_t. Some features (e.g., drag & drop) will not work.\n",
    a2,
    v18,
    (__int64)v21,
    a13,
    a14,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    v23);
  *(_DWORD *)(a1 + 2012) |= 1u;
  return v19;
}
