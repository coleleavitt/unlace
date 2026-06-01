void __fastcall ClpPackedMatrix::specialColumnCopy(ClpPackedMatrix *this, ClpSimplex *a2)
{
  void *v2; // rbp
  ClpPackedMatrix3 *v4; // rdi
  void (__fastcall *v5)(ClpPackedMatrix3 *); // rax
  int v6; // eax
  const void *v7; // rdi
  int *v8; // rax
  ClpPackedMatrix3 *v9; // rbp

  v2 = *((void **)this + 14);
  if ( v2 )
  {
    v4 = *((ClpPackedMatrix3 **)this + 14);
    v5 = *(void (__fastcall **)(ClpPackedMatrix3 *))(*(_QWORD *)v2 + 8LL);
    if ( v5 == ClpPackedMatrix3::~ClpPackedMatrix3 )
    {
      ClpPackedMatrix3::~ClpPackedMatrix3(v4);
      operator delete(v2);
    }
    else
    {
      v5(v4);
    }
  }
  v6 = *((_DWORD *)this + 25);
  if ( *((_DWORD *)a2 + 184) == 1 )
  {
    *((_DWORD *)this + 25) = v6 | 0x10;
    v7 = *((const void **)a2 + 156);
    if ( !v7 )
      goto LABEL_9;
    v8 = (int *)__dynamic_cast(
                  v7,
                  (const struct __class_type_info *)&`typeinfo for'ClpPrimalColumnPivot,
                  (const struct __class_type_info *)&`typeinfo for'ClpPrimalColumnSteepest,
                  0);
    if ( !v8 || v8[19] <= 1 )
      goto LABEL_9;
    v8[19] = 0;
    v6 = *((_DWORD *)this + 25);
  }
  if ( (v6 & 0x10) == 0 )
  {
LABEL_6:
    *((_QWORD *)this + 14) = 0;
    return;
  }
LABEL_9:
  if ( *((int *)a2 + 26) <= 200 || *((int *)a2 + 27) <= 500 )
    goto LABEL_6;
  v9 = (ClpPackedMatrix3 *)operator new(0x58u);
  ClpPackedMatrix3::ClpPackedMatrix3(v9, a2, *((const CoinPackedMatrix **)this + 11));
  *((_DWORD *)this + 25) |= 8u;
  *((_QWORD *)this + 14) = v9;
}

