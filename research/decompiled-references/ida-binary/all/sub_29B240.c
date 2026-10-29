__int64 __fastcall sub_29B240(int *a1, __int64 (__fastcall *a2)(__int64 a1))
{
  __int64 v3; // rax
  int *v4; // rdi
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v7)(__int64); // rax
  int v8; // eax
  const __m128i *v9; // rbp
  __int64 v10; // rax
  signed int v11; // eax
  unsigned int v12; // ebp
  int *v13; // rdx
  __int64 v14; // rcx
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  int *v17; // [rsp+10h] [rbp-38h] BYREF
  __int128 v18; // [rsp+18h] [rbp-30h]
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v18 = 0;
  v17 = nullptr;
  if ( !(unsigned __int8)sub_29A490((__int64)a1, a2, (__int64 *)&v17) || !(_QWORD)v18 )
  {
    v4 = v17;
    goto LABEL_18;
  }
  a2 = (__int64 (__fastcall *)(__int64))&byte_6;
  v3 = sub_293760((__int64)a1, 6, a1, &v17);
  v4 = v17;
  if ( v3 )
  {
LABEL_18:
    v12 = -1;
    goto LABEL_12;
  }
  v5 = *v17;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
  if ( v6 == interactive_graph_t__::vfunc_19 )
  {
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v7 == interactive_graph_t__::vfunc_7 )
      v8 = a1[46];
    else
      v8 = v7((__int64)a1);
    if ( (int)v5 >= v8 )
      sub_16B930((__int64)"nrect(%d) failed", v5);
    v9 = (const __m128i *)(*((_QWORD *)a1 + 28) + 16 * v5);
  }
  else
  {
    v9 = (const __m128i *)v6((__int64)a1, v5);
  }
  v10 = *(_QWORD *)a1;
  v16 = _mm_loadu_si128(v9);
  v11 = (*(__int64 (__fastcall **)(int *, __m128i *))(v10 + 192))(a1, &v16);
  a2 = (__int64 (__fastcall *)(__int64))v11;
  v12 = v11;
  *(_BYTE *)(v11 + *((_QWORD *)a1 + 13)) |= 1u;
  v13 = v17;
  if ( 4LL * (_QWORD)v18 )
  {
    do
    {
      v14 = *v13++;
      *(_DWORD *)(*((_QWORD *)a1 + 10) + 4 * v14) = v11 | *(_DWORD *)(*((_QWORD *)a1 + 10) + 4 * v14) & 0x80000000;
    }
    while ( v13 != &v17[(_QWORD)v18] );
  }
  *(_DWORD *)(*((_QWORD *)a1 + 10) + 4LL * v11) |= 0x80000000;
  sub_29AD80(a1);
  v4 = v17;
LABEL_12:
  if ( v4 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v4, (const char *)a2);
  }
  return v12;
}
