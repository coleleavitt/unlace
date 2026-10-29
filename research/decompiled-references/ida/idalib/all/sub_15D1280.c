__int64 __fastcall sub_15D1280(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = 0;
    v1 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v3++);
      v1 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    }
    while ( *(unsigned int *)(a1 + 24) > v3 );
  }
  return v1;
}
