__int64 __fastcall sub_D4DA30(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // rax
  bool v7; // dl
  unsigned __int8 (__fastcall *v8)(__int64, __int64, _QWORD); // r13
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a3 & 0xFFFFFFFFFFFFFFFDLL;
  *(_BYTE *)(a2 + 1137) = a4;
  *(_QWORD *)(a2 + 800) = a3;
  *(_QWORD *)(a2 + 1128) = a3 & 0xFFFFFFFFFFFFFFFDLL;
  v6 = sub_B7D120(a3, v13);
  if ( v6 )
  {
    v7 = 0;
    if ( (*(_BYTE *)(v6 + 1) & 6) == 0 )
      v7 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) != 34;
    *(_BYTE *)(a2 + 1136) = v7;
  }
  else
  {
    *(_BYTE *)(a2 + 1136) = 0;
  }
  *(_QWORD *)(a2 + 1128) = v4;
  v8 = *(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 32LL);
  v9 = sub_E21C70(a2 + 384);
  if ( !v8(a2, a3, v9) )
    *(_DWORD *)(a2 + 1120) = 3;
  *(_QWORD *)(a2 + 800) = 0;
  sub_D4D670(a2);
  v10 = *(_QWORD *)(a2 + 1048);
  *(_BYTE *)(a1 + 64) = -1;
  *(_QWORD *)a1 = v10;
  v11 = *(unsigned __int8 *)(a2 + 1112);
  if ( (_BYTE)v11 != 0xFF )
  {
    funcs_CFF187[v11]();
    *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 1112);
  }
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 1120);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 1128);
  return a1;
}
