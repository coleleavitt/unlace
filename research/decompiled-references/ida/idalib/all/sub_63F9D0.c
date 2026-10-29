void __fastcall sub_63F9D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // ebp
  void *v4; // rdi

  v2 = *(_QWORD **)(a2 + 104);
  if ( v2 )
  {
    if ( *(int *)(a2 + 96) > 0 )
    {
      v3 = 0;
      do
      {
        v4 = (void *)v2[1];
        ++v3;
        v2 += 2;
        qfree(v4);
        *(v2 - 1) = 0;
      }
      while ( *(_DWORD *)(a2 + 96) > v3 );
      v2 = *(_QWORD **)(a2 + 104);
    }
    qfree(v2);
    *(_QWORD *)(a2 + 104) = 0;
  }
}
