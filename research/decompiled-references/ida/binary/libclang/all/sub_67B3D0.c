void __fastcall sub_67B3D0(__int64 a1, int *a2)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  _DWORD *v5; // rbx

  *(_QWORD *)(a1 + 8) = a2;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *a2 + 1;
  if ( !v2 )
  {
    *a2 = v3;
    BUG();
  }
  v4 = *(_QWORD *)(v2 + 8);
  *a2 = v3;
  v5 = *(_DWORD **)(v4 + 80);
  *(_QWORD *)(v4 + 80) = a2;
  if ( v5 )
  {
    if ( (*v5)-- == 1 )
    {
      sub_6F1160(v5);
      operator delete(v5, 0x5AB0u);
    }
  }
}

