__int64 __fastcall sub_15E300(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = *(_QWORD *)(a1 + 760);
  *(_QWORD *)(a1 + 760) = a2;
  v3 = *(_QWORD *)(a1 + 856);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 296LL))(v3);
  return v2;
}

