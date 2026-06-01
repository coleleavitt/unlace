void __fastcall sub_22757A0(__int64 a1, __m128 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi

  if ( *(_BYTE *)(a1 + 76) )
  {
    *(_BYTE *)(a1 + 76) = 0;
    while ( 1 )
    {
      sub_22754C0(a1, a2, a3, a4, a5, a6);
      v11 = *(_QWORD *)(a1 + 80);
      if ( !v11 )
        break;
      v12 = *(_QWORD *)(v11 + 72);
      if ( !v12 )
      {
        v12 = sub_2275030(*(_QWORD *)(a1 + 80), a2, v7, v8, v9, v10);
        if ( !v12 )
          continue;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v17 = *(_QWORD *)(v11 + 80);
      if ( !v17 )
      {
        v17 = sub_2275200(v11, a2, v13, v14, v15, v16);
        if ( !v17 )
          continue;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
}
