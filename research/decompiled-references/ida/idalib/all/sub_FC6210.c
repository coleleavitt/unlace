void __fastcall sub_FC6210(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    operator delete(*(_QWORD *)(v1 + 24), 16LL * *(unsigned int *)(v1 + 40), 8);
    sub_223C180(v1);
    operator delete((void *)v1, 0x30u);
  }
}
