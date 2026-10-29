unsigned __int64 __fastcall sub_19A0B00(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 *v10; // [rsp+8h] [rbp-20h]

  v4 = a3;
  v5 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57 <= 1
    || (v9 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57,
        (unsigned int)v9 <= 1)
    && (v10 = a4, v5 = sub_F63050(v5, a2, v9, a4), a4 = v10, v5) )
  {
    v4 = *(_QWORD *)(v5 + 32);
  }
  if ( a4 )
    *a4 = v4;
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
    return v4;
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 57;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, a4);
  return sub_A76A60(a1, v4, *(_DWORD *)(v6 + 20));
}
