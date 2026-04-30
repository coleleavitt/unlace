__int64 __fastcall sub_3273A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  v5 = *(_QWORD *)(a1 + 208);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 216);
  if ( *(_QWORD *)(a1 + 224) < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a1 + 208, v5, v7 + 1, 8);
    *(_QWORD *)(a1 + 208) = v10;
    v5 = v10;
    v7 = *(_QWORD *)(a1 + 216);
  }
  *(_QWORD *)(v5 + 8 * v7) = v6;
  ++*(_QWORD *)(a1 + 216);
  if ( *(_BYTE *)(a1 + 200) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
    show_auto(v8, 0);
  }
  return 0;
}
