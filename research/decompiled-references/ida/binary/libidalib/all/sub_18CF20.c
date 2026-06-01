__int64 __fastcall sub_18CF20(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // r12
  int v5; // eax

  v1 = *(_QWORD **)(a1 + 24);
  if ( !v1[1] )
    return 0xFFFFFFFFLL;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = 72 * v2;
    v5 = TDialog::valid(*(TDialog **)(*v1 + 72 * v2), 0x40u);
    v1 = *(_QWORD **)(a1 + 24);
    if ( v5 )
      return *(unsigned int *)(*v1 + v4 + 56);
    v2 = ++v3;
  }
  while ( (unsigned __int64)v3 < v1[1] );
  return 0xFFFFFFFFLL;
}

