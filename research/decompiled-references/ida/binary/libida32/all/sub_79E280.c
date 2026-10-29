void __fastcall sub_79E280(__int64 a1)
{
  bool v1; // zf
  void *v3; // rdi
  void *v4; // rdi

  v1 = *(_BYTE *)(a1 + 104) == 0;
  *(_QWORD *)a1 = &off_2BD1D68;
  if ( !v1 )
    sub_79DB00((_QWORD *)(a1 + 96));
  v3 = *(void **)(a1 + 72);
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &unk_2BD1DD0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v3);
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v4);
  }
}

