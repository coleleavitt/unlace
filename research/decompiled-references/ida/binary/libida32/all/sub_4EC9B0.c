__int64 __fastcall sub_4EC9B0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3
    && a2
    && (v4 = sub_4EF930(v3, *a2), v4 != **(_QWORD **)(a1 + 24) + 16LL * *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) )
  {
    return *(unsigned int *)(v4 + 8);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

