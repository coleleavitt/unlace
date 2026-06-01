__int64 __fastcall sub_800C80(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  FILE *v15; // rdi
  __int64 (__fastcall *v16)(__int64, void *); // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  unsigned int qerrno; // eax
  __int64 v25; // rdx
  unsigned int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5

  v15 = *(FILE **)a1;
  v16 = **(__int64 (__fastcall ***)(__int64, void *))&v15->_flags;
  if ( v16 == sub_70F9B0 )
  {
    v15 = (FILE *)v15->_IO_read_ptr;
    v17 = qfwrite(v15, a2);
  }
  else
  {
    v17 = ((__int64 (__fastcall *)(FILE *, void *, __int64))v16)(v15, a2, a3);
  }
  if ( a3 == v17 || (qerrno = get_qerrno(v15), (v26 = qerrno) == 0) )
  {
    if ( dword_2CAAB08 > 5 )
      sub_800450(
        a5,
        a6,
        a7,
        a8,
        v21,
        v22,
        a11,
        a12,
        (__int64)"xdelta3: write %s: %zu bytes\n",
        *(_QWORD *)(a1 + 16),
        a3,
        v18,
        v19,
        v20);
    *(_QWORD *)(a1 + 64) += a3;
    return 0;
  }
  else
  {
    v27 = qstrerror(qerrno, a2, v25, v18);
    sub_800450(
      a5,
      a6,
      a7,
      a8,
      v30,
      v31,
      a11,
      a12,
      (__int64)"xdelta3: %s: %s: %s\n",
      a4,
      *(_QWORD *)(a1 + 16),
      v27,
      v28,
      v29);
    return v26;
  }
}

