void __fastcall sub_F0BCA0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = *(_BYTE **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) <= (unsigned __int64)v4 )
  {
    sub_2257CD0(v3, 32);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 32;
  }
  v5 = a2[8];
  if ( v5 )
  {
    v6 = sub_B685F0((__int64)a2);
    sub_E6C510(v5, *(_QWORD *)(a1 + 1096), (const __m128i *)(v6 + 17464), 0, 1);
  }
  sub_B62620(*(_QWORD *)(a1 + 1096), a2[5]);
  sub_F068D0(a1, a2[6]);
}

