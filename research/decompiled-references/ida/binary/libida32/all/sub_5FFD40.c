void __fastcall sub_5FFD40(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  bool v4; // zf

  *(_QWORD *)a1 = &off_2B08900;
  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v2);
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v3);
  }
  v4 = *(_BYTE *)(a1 + 68) == 0;
  *(_QWORD *)a1 = &unk_2BD1430;
  if ( !v4 )
  {
    qfree(*(void **)(a1 + 16));
    qfree(*(void **)(a1 + 32));
    qfree(*(void **)(a1 + 40));
  }
}

