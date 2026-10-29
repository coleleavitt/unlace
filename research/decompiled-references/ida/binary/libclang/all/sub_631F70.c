void __fastcall sub_631F70(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax

  v2 = *(__int64 **)(a1 + 16);
  if ( v2 == *(__int64 **)(a1 + 24) )
  {
    sub_631D40(a1 + 8, a2);
  }
  else
  {
    *v2 = *a2;
    *a2 = 0;
    *(_QWORD *)(a1 + 16) += 8LL;
  }
}

