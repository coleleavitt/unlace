__int64 __fastcall sub_5FF5F0(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx

  v2 = *(_DWORD **)(a1 + 112);
  v3 = &v2[12 * *(_QWORD *)(a1 + 120)];
  if ( v3 == v2 )
  {
LABEL_6:
    *a2 = 0;
    return 4;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 64) >= *v2 )
    {
      v2 += 12;
      if ( v2 == v3 )
        goto LABEL_6;
    }
    *a2 = v2;
    *(_DWORD *)(a1 + 64) = *v2;
    return 0;
  }
}

