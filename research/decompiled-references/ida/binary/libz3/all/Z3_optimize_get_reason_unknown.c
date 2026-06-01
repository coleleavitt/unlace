__int64 __fastcall Z3_optimize_get_reason_unknown(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v6[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v7; // [rsp+10h] [rbp-48h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2A0710(a1, a2);
  v3 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  (*(void (__fastcall **)(void **))(*(_QWORD *)v3 + 48LL))(v6);
  v4 = sub_24ED70((_QWORD *)a1, (__int64)v6);
  if ( v6[0] != &v7 )
    operator delete(v6[0], v7 + 1);
  if ( v2 )
    byte_1C7EBA0 = 1;
  return v4;
}

