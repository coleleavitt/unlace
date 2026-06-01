__int64 __fastcall sub_1BE0460(_QWORD *a1, unsigned __int64 *a2, unsigned int a3, __m128 a4, __m128 a5)
{
  void **v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  int v18; // [rsp+4h] [rbp-34h] BYREF
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (void **)(*a2 & 0xFFFFFFFFFFFFFFFELL);
  v7 = (_BYTE *)sub_1BE0150((__int64)a1, (__int64)v6, v19);
  if ( !v7 )
    return 0;
  v8 = v7;
  if ( sub_B753F0(v7) )
    return 0;
  if ( sub_B754A0(v8) )
    return 0;
  v18 = sub_C00A40((unsigned __int64)v6, (__int64)v6, v10, v11, v12);
  sub_18F5260((__int64)a1, (__int64)v8, &v18, 1u, 0, 0, (__m128i)a4, *(double *)a5.m128_u64, 0, 0, 0);
  sub_1663480(a1, (__int64)v6, v19[0], *(double *)a4.m128_u64);
  v13 = sub_1BD6F50((__int64)a1, v6, v19[0], (__int64)v8, a4, a5);
  if ( v13 == 1 )
    return 0;
  v17 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
  if ( (_BYTE)a3
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    *a2 = sub_190ABA0((__int64)a1, v17, 0, v14, v15, v16, (__m128i)a4, a5);
    return a3;
  }
  else
  {
    *a2 = (unsigned __int64)v17;
    return 1;
  }
}
