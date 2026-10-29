unsigned __int64 __fastcall sub_1994B70(__int64 *a1, __int64 a2, unsigned __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  unsigned __int64 v6; // r14
  __int64 v8; // r12
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  _DWORD *v19; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax

  v6 = a3;
  v8 = a2;
  v10 = a4 + 1;
  v11 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v16 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (__m128i *)(v11 * (((unsigned __int64)v10 - (v10 != nullptr)) / v11 + (v10 != nullptr))),
          v12,
          v13,
          a5,
          a6);
  v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v18 = *(_QWORD *)v17;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v17 + 16LL) - 35 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
    && sub_F63050(v18, a2, v14, v15) )
  {
    v6 = sub_A74EC0(*(_QWORD *)(*a1 + 248), v16);
LABEL_4:
    sub_1EA6140(v8, v6, 4, 4);
    *v19 = *a4;
    return v6;
  }
  sub_F6C520(*(_QWORD *)(v6 + 32));
  if ( v16 == *(_QWORD *)(v6 + 32) )
  {
    v24 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_12;
  }
  a2 = v16;
  v6 = sub_1E6FFC0(*a1, v16, (unsigned int)*a4, 0);
  v24 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
LABEL_12:
    sub_F68450(*v24, a2, v21, v22, v23);
    goto LABEL_4;
  }
  return 0;
}
