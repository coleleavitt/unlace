__int64 __fastcall sub_F04910(_QWORD *a1, __int64 a2)
{
  int v2; // r14d
  int i; // ebx
  __int64 v4; // r12
  size_t v5; // rax
  __int64 v6; // rax

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = *a1;
      v5 = j__strlen("  ");
      sub_9954E0(v4, "  ", v5);
    }
  }
  sub_F03C00((__int64)a1, a2);
  v6 = *(_QWORD *)(a2 + 8);
  if ( (v6 & 1) != 0 || ((*(_BYTE *)(v6 + 28) + 116) & 0x7Fu) > 1 )
    sub_995540(*a1, ";");
  return sub_227BF10(*a1, a1[5], a1[6]);
}
