__int64 __fastcall sub_ACE3E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax

  v3 = a3 + 88;
  v5 = sub_ACDB80(
         a3,
         a3 + 88,
         a2,
         *(_DWORD *)(a1 + 16),
         *(_QWORD *)(a2 + 80 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 16))));
  v6 = sub_ACDB80(
         a3,
         v3,
         a2,
         *(_DWORD *)(a1 + 20),
         *(_QWORD *)(a2 + 80 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 20))));
  sub_ACE1D0(v5, v6);
  v7 = v5;
  do
  {
    v8 = v7;
    v7 = *(_QWORD *)(v7 + 8);
  }
  while ( v7 );
  *(_BYTE *)(v8 + 32) = 1;
  do
  {
    result = v5;
    v5 = *(_QWORD *)(v5 + 8);
  }
  while ( v5 );
  *(_BYTE *)(result + 33) = 1;
  return result;
}

