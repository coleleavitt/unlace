__int64 __fastcall sub_823A50(
        _QWORD *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5

  if ( *((_DWORD *)a1 + 2) )
  {
    v12 = fileno((FILE *)*a1);
    v10 = qfilelength(v12);
    if ( v10 != -1 )
    {
LABEL_4:
      *a2 = v10;
      return 0;
    }
  }
  else
  {
    if ( !*a1 )
      sub_817EC0();
    v10 = qlsize(*a1);
    if ( v10 != -1 )
      goto LABEL_4;
  }
  v15 = __errno_location();
  if ( !*v15 )
  {
    sub_823790(
      a3,
      a4,
      a5,
      a6,
      v18,
      v19,
      a9,
      a10,
      (__int64)"xdelta3: you found a bug: expected errno != 0\n",
      (__int64)a2,
      v13,
      v14,
      v16,
      v17);
    *v15 = -17710;
  }
  set_qerrno(1);
  return (unsigned int)*v15;
}
