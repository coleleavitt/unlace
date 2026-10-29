void __fastcall sub_1FCF370(__int64 a1, double a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v2 = *(_DWORD *)(a1 + 32);
  v3 = v2 - 1;
  if ( v2 )
  {
    do
    {
      v4 = v3--;
      sub_1FCE250(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v4), a2);
    }
    while ( v3 != -1 );
  }
  *(_DWORD *)(a1 + 32) = 0;
}
