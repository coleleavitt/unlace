void __fastcall sub_B4FB10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 && (v3 & 4) != 0 && (v4 = v3 & 0xFFFFFFFFFFFFFFF8LL) != 0 && *(_DWORD *)(v4 + 16) > 1u )
  {
    sub_A2BBA0((int *)(v4 + 16));
    *(_QWORD *)(a1 + 88) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  }
}

