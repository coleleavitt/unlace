int __fastcall sub_228C800(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    LODWORD(v1) = munmap(*(void **)(a1 + 8), *(_QWORD *)a1);
  return v1;
}
