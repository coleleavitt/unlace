void __fastcall sub_E5EB50(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rax

  v5 = *a3 * sub_A742B0(*(_QWORD *)(*a1 + 8), *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 17448LL) + 8LL));
  sub_971800(a1[1], "?_9");
  v6 = *(_QWORD *)(sub_B68470((__int64)(a2 + 9)) + 16);
  if ( (v6 & 4) != 0 )
    v10 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v10 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = v10 - 64;
  if ( !v10 )
    v11 = 0;
  sub_E5E850(a1, v11, 0, v7, v8, v9);
  sub_971800(a1[1], "$B");
  v12 = v5;
  sub_E56120((__int64)a1, (void *)v5);
  v13 = a1[1];
  v14 = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
  {
    v12 = 65;
    sub_2257CD0(v13, 65);
  }
  else
  {
    *(_QWORD *)(v13 + 32) = v14 + 1;
    *v14 = 65;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  v18 = *(_QWORD *)(a2[6] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) != 26 )
    v18 = sub_F3F310(*(_QWORD *)(a2[6] & 0xFFFFFFFFFFFFFFF0LL), v12, v15, v16);
  sub_E568F0(a1, (*(_WORD *)(v18 + 20) >> 2) & 0x3F, v17);
}

