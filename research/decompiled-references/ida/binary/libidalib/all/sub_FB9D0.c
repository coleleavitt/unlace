__int64 __fastcall sub_FB9D0(__int64 a1)
{
  int v1; // r12d
  int i; // ebx
  TView *v3; // r11
  __int64 result; // rax

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  if ( v1 > 0 )
  {
    for ( i = 0; i != v1; ++i )
    {
      sub_FB160(a1, i);
      result = sub_154C20(v3);
    }
  }
  return result;
}

