__int64 __fastcall sub_1FC0BD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax

  sub_1FBD8D0(a1, a2, a3, a4, a5, a6);
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_B94CD0 )
    v7 = sub_B709C0(a2);
  else
    v7 = v6(a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(v7 + 168), *(_QWORD *)(a1 + 24));
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v8 == sub_B94CD0 )
    result = sub_B709C0(a2);
  else
    result = v8(a2);
  if ( *(_QWORD *)(result + 168) )
  {
    v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v10 == sub_B94CD0 )
      v11 = sub_B709C0(a2);
    else
      v11 = v10(a2);
    result = sub_183F100(a1 + 32, *(_QWORD *)(v11 + 176));
  }
  *(_DWORD *)(a1 + 224) = 103;
  return result;
}
