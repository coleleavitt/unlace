void __fastcall sub_2AF090(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 896);
  if ( v2 == a2 && (*(double (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 312LL))(*(_QWORD *)(a1 + 896)) == 0.0 )
    sub_2C4210(v2, 0.0);
}
