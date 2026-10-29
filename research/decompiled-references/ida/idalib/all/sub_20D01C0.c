void __fastcall sub_20D01C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64); // rdx

  if ( !*(_BYTE *)(a1 + 32) )
  {
    v2 = *a2;
    *(_BYTE *)(a1 + 32) = 1;
    v4 = *(_QWORD *)(a1 + 24);
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(v2 + 16);
    if ( v5 == sub_20CEB40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
    else
      v5((__int64)a2, v4);
    *(_BYTE *)(a1 + 32) = 0;
  }
}
