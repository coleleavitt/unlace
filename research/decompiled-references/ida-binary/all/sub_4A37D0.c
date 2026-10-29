__int64 __fastcall sub_4A37D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v3 = v2;
  if ( v2 )
    sub_4DF8B0(v2 + 104, a2);
  return v3;
}
