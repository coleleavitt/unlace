void __fastcall sub_47DDE0(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v5; // eax
  _QWORD *v6; // rdx
  __int64 v7; // rax

  if ( a2 == 4 && *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) )
  {
    v5 = *a5;
    if ( *a5 > 0x2F )
    {
      v6 = *((_QWORD **)a5 + 1);
      *((_QWORD *)a5 + 1) = v6 + 1;
    }
    else
    {
      v6 = (_QWORD *)(*((_QWORD *)a5 + 2) + v5);
      *a5 = v5 + 8;
    }
    v7 = *(_QWORD *)(a1 + 8);
    if ( *v6 == *(_QWORD *)(v7 + 64) )
    {
      *(_QWORD *)(v7 + 64) = 0;
      sub_445720(*(_QWORD *)(a1 + 8), 7u, 0xFFFFFFFF, 0xFFFFFFFF);
    }
  }
}

