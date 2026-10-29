void __fastcall sub_696A00(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 40);
  if ( v1 )
  {
    sub_602110(*(__int64 **)(a1 + 40));
    operator delete(v1, 8u);
  }
}

