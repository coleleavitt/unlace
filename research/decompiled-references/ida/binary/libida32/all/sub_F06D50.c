void __fastcall sub_F06D50(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  _BYTE *v6; // rax

  sub_971800(*(_QWORD *)(a1 + 1096), "capture");
  v3 = *a2;
  v4 = (*a2 >> 1) & 3;
  if ( ((*a2 >> 1) & 1) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " byref");
    v3 = *a2;
    v4 = (*a2 >> 1) & 3;
  }
  if ( (v4 & 2) != 0 )
  {
    sub_971800(*(_QWORD *)(a1 + 1096), " nested");
    v3 = *a2;
  }
  if ( (v3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 1096);
    v6 = *(_BYTE **)(v5 + 32);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
    {
      sub_2257CD0(v5, 32);
    }
    else
    {
      *(_QWORD *)(v5 + 32) = v6 + 1;
      *v6 = 32;
    }
    sub_F06990(a1, *a2 & 0xFFFFFFFFFFFFFFF8LL);
  }
}

