__int64 __fastcall sub_1DC82F0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v8; // r15d
  int v10; // r12d
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int16 *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v8 = a3;
  v10 = a6;
  v11 = *a2;
  if ( (_DWORD)a6 == 1 )
  {
    v17 = a5;
    sub_18C74E0(v11, 4, 0, 4);
    a5 = v17;
  }
  if ( a4 )
  {
    v12 = sub_1E02D80(*a2, a4, *(_QWORD *)(*a2 + 544), a2[4]);
    if ( v12 )
    {
      v16 = v12;
      sub_1DC20B0(*(_QWORD *)(*a2 + 11280), a4, v12, v13);
      sub_19B4DA0(a1, *a2, v16, v8, v10, a7, a8);
      goto LABEL_6;
    }
LABEL_10:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 18) = 0;
    if ( v10 != 1 )
      return a1;
LABEL_11:
    sub_190D5E0(v11, a7);
    return a1;
  }
  if ( a5 )
  {
    v15 = sub_1DC71F0(a2, a5, a3, a4, a5, a6, a7, a8);
    if ( v15 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      goto LABEL_10;
    sub_1917B40(a1, *a2, a7, a8, 0, v8, (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL, v10, 1);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 18) = 0;
  }
LABEL_6:
  if ( v10 == 1 )
    goto LABEL_11;
  return a1;
}
