void __fastcall sub_B392C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi

  if ( (*(_BYTE *)(a1 + 44) & 8) == 0 )
  {
    v3 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
    if ( (_DWORD)v3 )
    {
      if ( a3 )
      {
        v4 = a1;
        v5 = a1 + 8 * v3;
        do
        {
          v6 = *(_QWORD *)(v4 + 112);
          v4 += 8;
          --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 56LL) - 4LL);
        }
        while ( v4 != v5 );
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
}

