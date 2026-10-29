void __fastcall sub_1A65440(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx

  if ( !a3 )
  {
    v6 = *(_QWORD *)(a2 + 40);
    if ( (v6 & 7) == 0 )
    {
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0
        && ((*(_BYTE *)(a2 + 8) & 6) == 0
         || sub_1A42350(*(_QWORD *)(a1 + 448), a2, 0, a4, a5, a6)
         || v7 == *(_QWORD *)(a1 + 8)) )
      {
        sub_1A639D0(a1, (const void *)(*(_QWORD *)(v7 + 16) + 16LL), **(unsigned int **)(v7 + 16), 0);
      }
    }
  }
}
