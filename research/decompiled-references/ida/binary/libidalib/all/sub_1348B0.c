__int64 __fastcall sub_1348B0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *(_QWORD *)(a2 + 8) )
  {
    v2 = a1[23] + 16LL * **(_QWORD **)a2;
    qword_2450D0 = *(_QWORD *)v2;
    byte_2450D8 = *(_BYTE *)(v2 + 8);
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  return 1;
}

