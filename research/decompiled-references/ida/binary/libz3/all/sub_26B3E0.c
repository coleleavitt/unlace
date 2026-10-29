float __fastcall sub_26B3E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
  if ( !v2 || a2 >= *(_DWORD *)(v2 - 4) || (v3 = 16LL * a2 + v2, *(_DWORD *)v3 != 10) )
    sub_AD072(a1);
  return *(float *)(v3 + 8);
}

