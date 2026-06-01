unsigned __int64 __fastcall sub_1776CF0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128 a5)
{
  unsigned __int64 v6; // r13
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  void **v15; // rsi
  void **v16; // rax

  v6 = a3;
  v8 = a4 + 16;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v9 * ((v8 - (unsigned __int64)(v8 != 0)) / v9 + (v8 != 0))),
          v10,
          v11);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v13 = v12;
  v14 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v14 )
    goto LABEL_7;
  v15 = *(void ***)(a4 + 8);
  if ( !v15 )
    v15 = (void **)sub_A81910(*(_QWORD **)(*a1 + 248LL), *(_QWORD *)(v6 + 40), 0);
  v16 = sub_176A140(a1, v15, a5);
  if ( !v16 )
    return 0;
  v14 = (unsigned __int64)*v16;
LABEL_7:
  if ( *(_DWORD *)(*a1 + 12632LL) || v13 != *(_QWORD *)(v6 + 32) || v14 != *(_QWORD *)(v6 + 40) )
    v6 = sub_A77770(*(_QWORD *)(*a1 + 248LL), v13, v14, (unsigned __int8 *)(v6 + 48));
  sub_1EA6140(a2, v6, 16, 8);
  return v6;
}
