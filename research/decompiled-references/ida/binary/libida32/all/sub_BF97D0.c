__int64 __fastcall sub_BF97D0(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( *(char *)(a1 + 2) < 0 )
    return *v1;
  else
    return v1[1];
}

