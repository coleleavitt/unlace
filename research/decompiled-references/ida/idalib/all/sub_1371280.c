__int64 __fastcall sub_1371280(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdi

  v1 = *(_BYTE *)(a1 + 37) == 0;
  *(_QWORD *)a1 = &off_2C43868;
  if ( !v1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return nullsub_670(a1);
}
