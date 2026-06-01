__int64 __fastcall sub_7BF870(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_BYTE *)(a1 + 56) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(a1 + 8))(a2);
  *(_QWORD *)(a1 + 16) = v4;
  v5 = v4;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL);
  if ( v6 == sub_7BF850 )
    v7 = *(_QWORD *)(v5 + 96);
  else
    v7 = v6(v5);
  return sub_7C0F40(v7, 250, sub_7BF9C0, a1);
}
