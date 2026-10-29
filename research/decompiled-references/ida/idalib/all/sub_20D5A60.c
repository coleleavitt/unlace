__int64 __fastcall sub_20D5A60(_BYTE *a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r13d
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx

  v4 = a3 + a4;
  v5 = a1[9] & 0x3F;
  if ( v5 >= v4 )
  {
    ++*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v9 + 1;
    *(_BYTE *)(v10 + v9) = 40;
  }
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v6 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2);
  else
    v6(a2, (__int64)a1);
  result = a1[9] & 0xC0;
  if ( (a1[9] & 0xC0) != 0x40 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v8 == sub_20CEB60 )
      result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 72LL))(a1, a2);
    else
      result = v8(a2, (__int64)a1);
  }
  if ( v5 >= v4 )
  {
    --*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    result = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = result + 1;
    *(_BYTE *)(v11 + result) = 41;
  }
  return result;
}
