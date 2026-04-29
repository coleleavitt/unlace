unsigned __int64 __fastcall sub_EF260(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD v13[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v3 = a1 + 152;
  v14 = __readfsqword(0x28u);
  sub_313F40(a1 + 152, a1 + 112);
  v5 = *(_QWORD *)(a2 + 64);
  v6 = *(int *)(v5 + 120);
  if ( v6 > 0 )
  {
    if ( (*(_BYTE *)(a2 + 26) & 4) != 0 )
      v7 = *(_QWORD *)(a2 + 520);
    else
      v7 = *(_QWORD *)(a2 + 328);
    v8 = *(int *)(a1 + 12);
    v9 = (int)v8 + (int)v6;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 480) + 24LL) + 24LL) == 8 )
      v9 = v8 + v6;
    if ( v9 > v7 )
    {
      v11 = *(_QWORD *)(v5 + 1496);
      v12 = *(_QWORD *)(v5 + 1440);
      v13[1] = v9 - v7;
      v13[0] = (v7 + v12) & *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL);
      sub_312A30(v3, v13);
    }
  }
  return v14 - __readfsqword(0x28u);
}
