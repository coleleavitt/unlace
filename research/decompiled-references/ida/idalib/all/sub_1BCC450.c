char __fastcall sub_1BCC450(__int64 a1, char a2, unsigned __int64 a3, __int64 a4, __int64 a5, double a6)
{
  int v8; // edx
  __int64 v9; // rdx

  v8 = *(_DWORD *)a1 >> 14;
  if ( (v8 & 8) == 0 )
    return (unsigned int)sub_BFE6E0(a1, a3, (unsigned int)(a2 != 0) + 1, a6) != 0;
  v9 = v8 & 4;
  if ( (_DWORD)v9
    || !sub_9EC890(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a3, v9, a4, a5)
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 47 )
  {
    return (unsigned int)sub_BFE6E0(a1, a3, (unsigned int)(a2 != 0) + 1, a6) != 0;
  }
  else
  {
    return a2 ^ 1;
  }
}
