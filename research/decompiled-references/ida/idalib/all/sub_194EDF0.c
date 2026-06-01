unsigned __int64 __fastcall sub_194EDF0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  _DWORD *v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8

  v10 = a4 + 1;
  v11 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v16 = sub_1946010(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          v11 * (((unsigned __int64)v10 - (v10 != nullptr)) / v11 + (v10 != nullptr)),
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
    && sub_F63050(v18, v16, v14, v15) )
  {
    v19 = sub_A74EC0(*(_QWORD *)(*a1 + 248), v16);
LABEL_4:
    sub_1EA6140(a2, v19, 4, 4);
    *v20 = *a4;
    return v19;
  }
  v19 = sub_1E6FFC0(*a1, v16, (unsigned int)*a4, 0);
  if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    sub_F68450(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), v16, v22, v23, v24);
    goto LABEL_4;
  }
  return 0;
}
