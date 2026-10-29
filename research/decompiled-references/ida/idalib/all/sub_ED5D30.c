__int64 __fastcall sub_ED5D30(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 )
  {
    operator delete(*(_QWORD *)(v1 + 88), 24LL * *(unsigned int *)(v1 + 104), 8);
    return operator delete(*(_QWORD *)(v1 + 64), 16LL * *(unsigned int *)(v1 + 80), 8);
  }
  return result;
}
