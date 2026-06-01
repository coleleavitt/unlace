__int64 __fastcall Z3_solver_get_reason_unknown(__int64 a1, __int64 a2)
{
  char v3; // bp
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h] BYREF

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29E4A0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( !v4 )
  {
    sub_2A74C0(a1, a2);
    v4 = *(_QWORD *)(a2 + 32);
  }
  (*(void (__fastcall **)(void **))(*(_QWORD *)v4 + 48LL))(v7);
  v5 = sub_24ED70((_QWORD *)a1, (__int64)v7);
  if ( v7[0] != &v8 )
    operator delete(v7[0], v8 + 1);
  if ( v3 )
    byte_1C7EBA0 = 1;
  return v5;
}

