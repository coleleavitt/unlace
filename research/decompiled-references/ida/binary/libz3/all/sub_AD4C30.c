__int64 __fastcall sub_AD4C30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        char a27,
        int a28,
        int a29,
        void *a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        char a36)
{
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 result; // rax
  __int64 v40; // rbx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d

  v37 = sub_ACDB80(
          a3,
          a3 + 120,
          *(_QWORD *)(a1 + 16),
          *(_DWORD *)(a1 + 24),
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 24) + 48));
  do
  {
    v38 = v37;
    v37 = *(_QWORD *)(v37 + 8);
  }
  while ( v37 );
  result = sub_ACDB80(
             a3,
             a3 + 88,
             a2,
             *(_DWORD *)(a1 + 28),
             *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 28)) + 80));
  do
  {
    v40 = result;
    result = *(_QWORD *)(result + 8);
  }
  while ( result );
  if ( v40 != v38 )
  {
    sub_AD3D80(a1, v38, v40);
    return sub_AD4480(
             a1,
             v40,
             v38,
             v41,
             v42,
             v43,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25,
             a26,
             a27,
             a28,
             a29,
             a30,
             a31,
             a32,
             a33,
             a34,
             a35,
             a36);
  }
  return result;
}

