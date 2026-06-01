__int64 __fastcall sub_866C20(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  *(_QWORD *)a1 = a2;
  if ( v2 == sub_79EFD0 )
    v3 = a2[18];
  else
    v3 = v2((__int64)a2);
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x1000000000LL;
  *(_BYTE *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  return sub_16224C0(a1 + 200);
}

