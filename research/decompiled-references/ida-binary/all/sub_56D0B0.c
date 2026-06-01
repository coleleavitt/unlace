void __fastcall sub_56D0B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  void *v4; // rdi

  if ( *(_DWORD *)(a2 + 8) )
  {
    v2 = 0;
    do
    {
      v3 = v2++;
      sub_56C9A0(a1, *(volatile signed __int32 **)(*(_QWORD *)a2 + 8 * v3));
    }
    while ( v2 < *(_DWORD *)(a2 + 8) );
  }
  v4 = *(void **)a2;
  *(_DWORD *)(a2 + 8) = 0;
  if ( v4 )
  {
    off_8C52A0(v4);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0;
  }
}
