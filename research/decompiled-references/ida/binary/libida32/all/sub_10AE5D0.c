__int64 __fastcall sub_10AE5D0(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(a1 + 88) )
    return v1[1];
  else
    return *v1;
}

