__int64 __fastcall sub_A5E9B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(v5 + 16) - 35;
  if ( (unsigned int)v6 <= 1 )
    return v5 + 8LL * ((*(_WORD *)(v5 + 18) >> 3) & 0x7F) + 48;
  v8 = *(_BYTE *)(sub_F63050(v5, a2, v6, a4, a5) + 19) >> 2;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 35;
  if ( (unsigned int)v11 > 1 )
    v10 = sub_F63050(v10, a2, v11, v8, v9);
  return v10 + 8LL * ((*(_WORD *)(v10 + 18) >> 3) & 0x7F) + 48;
}
