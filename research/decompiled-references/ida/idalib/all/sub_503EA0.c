__int64 __fastcall sub_503EA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3
    && a2
    && (v4 = sub_506F10(v3, *a2), v4 != **(_QWORD **)(a1 + 32) + 16LL * *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL)) )
  {
    return *(unsigned int *)(v4 + 8);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
