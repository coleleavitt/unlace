void *__fastcall sub_C71660(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = sub_F3F530(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v2 = *(_QWORD *)(sub_B73220(v1) + 56);
  if ( (v2 & 4) != 0 )
    return (void *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 40);
  else
    return &unk_23BABE0;
}

