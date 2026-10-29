__int64 __fastcall sub_3938B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  void *v3; // rbp
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(void **)(v2 + 80);
  if ( v3 )
  {
    sub_64D370(*(_QWORD *)(v2 + 80));
    sub_186B220(v3);
    *(_QWORD *)(v2 + 80) = 0;
  }
  v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v4 == sub_3935F0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 56) = -1;
    result = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64, __int64))v4)(a1, a2);
  }
  *(_QWORD *)(a1 + 40) = 0;
  return result;
}

