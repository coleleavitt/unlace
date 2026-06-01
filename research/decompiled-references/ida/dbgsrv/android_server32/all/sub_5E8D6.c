/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E8D6
// Address: 0x0005E8D6

//----- (0005E8D6) --------------------------------------------------------
void __fastcall sub_5E8D6(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
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
        int a27,
        int a28,
        void **a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        unsigned int a36,
        unsigned int a37,
        int a38,
        __int16 a39,
        int a40,
        _DWORD *a41)
{
  int v41; // r4
  _DWORD *v42; // r5
  unsigned int v43; // r6
  size_t v44; // r7
  const void *v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // r5
  int v49; // r1
  int v50; // r0

  memset((void *)(a2 + a3), 0, v44 - a3);
  *(_DWORD *)(v41 + 4) = v44;
  v45 = (const void *)a36;
  if ( a36 + v44 >= a36 && a36 + v44 <= a37 )
  {
    a36 += v44;
    qmemcpy(*a29, v45, v44);
  }
  sub_5F718((int)&a41, v43);
  v48 = (*(int (__fastcall **)(_DWORD, int, int, _DWORD *))(*(_DWORD *)*v42 + 112))(*v42, a20, a23, a41);
  v49 = a28;
  v50 = *(unsigned __int8 *)(a28 + 96);
  if ( *(_BYTE *)(a28 + 96) )
    v50 = sub_1BBA0((int)"read_regs(tid=%d, mask=%x) => %d\n", a20, a23, v48);
  sub_5E932(
    v50,
    v49,
    v46,
    v47,
    (int)&STACK[0x2090],
    a6,
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
    (int *)a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41);
}
// 5E8D8: variable 'v44' is possibly undefined
// 5E8DE: variable 'v41' is possibly undefined
// 5E8FE: variable 'v43' is possibly undefined
// 5E902: variable 'v42' is possibly undefined
// 5E922: variable 'v49' is possibly undefined
// 5E922: variable 'v46' is possibly undefined
// 5E922: variable 'v47' is possibly undefined
