unsigned __int64 __fastcall sub_4A8920(
        __int64 a1,
        unsigned __int64 *a2,
        int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v12; // eax
  __int64 v14; // rax
  double v15; // xmm0_8
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  QT::QAbstractScrollArea *v18; // rsi
  __int64 (__fastcall *v19)(__int64); // rax
  unsigned __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v25; // [rsp+0h] [rbp-68h] BYREF
  __int128 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  __int128 v28; // [rsp+20h] [rbp-48h]
  char v29; // [rsp+30h] [rbp-38h]
  unsigned __int64 v30; // [rsp+38h] [rbp-30h]

  v12 = *(_DWORD *)(a1 + 1784);
  v30 = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    LOBYTE(v12) = v12 | 0x80;
  else
    LOBYTE(v12) = v12 & 0x7F;
  *(_DWORD *)(a1 + 1784) = v12;
  sub_4E4770(a1 + 104);
  v14 = *(_QWORD *)a1;
  v29 = 0;
  v26 = 0;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  v15 = (*(double (__fastcall **)(__int64, __int64 *, __int64))(v14 + 624))(a1, &v25, 4);
  sub_4A15E0(a1, (unsigned __int64)&v25, a2, a3, v15, a5, a6, a7, v16, v17, a10, a11);
  v18 = (QT::QAbstractScrollArea *)&v25;
  v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 560LL);
  if ( v19 == sub_4A88B0 )
  {
    vault_files_dirtree_widget_t__::vfunc_30(a1 + 104);
    v20 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 568LL);
    if ( v20 == sub_4A76D0 )
    {
      if ( *(_DWORD *)(a1 + 2376) == 2 )
        v18 = *(QT::QAbstractScrollArea **)(a1 + 2384);
      else
        v18 = *(QT::QAbstractScrollArea **)(a1 + 2472);
      sub_4A72C0(a1, v18);
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64 *))v20)(a1, &v25);
    }
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64 *, __int64))v19)(a1, &v25, 1);
  }
  sub_4DE2C0();
  v21 = v25;
  if ( v25 )
  {
    v22 = v26;
    if ( (_QWORD)v26 )
    {
      v23 = 0;
      do
      {
        ++v23;
        sub_4DE2C0();
        v21 = v25;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v21, (const char *)v18);
  }
  *(_DWORD *)(a1 + 1784) &= ~0x80u;
  return v30 - __readfsqword(0x28u);
}
