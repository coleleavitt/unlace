__int64 __fastcall sub_FE80(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // r12
  char v4; // dl
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL);
  v4 = sub_3F270(v3, a3);
  result = 0;
  if ( !v4 )
  {
    v6 = 40964;
    if ( _bittest64(&v6, a2[52] & 0xF) && a2[92] <= 2u && (!*(_BYTE *)(v3 + 120) || (a2[56] & 1) != 0) )
    {
      v7 = sub_394F0(a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL));
      v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
      v9 = v7 | 1;
      auto_mark_range(v7 & 0xFFFFFFFFFFFFFFFELL, v7 | 1, 20);
      auto_mark_range(v8, v9, 30);
    }
    return 1;
  }
  return result;
}

