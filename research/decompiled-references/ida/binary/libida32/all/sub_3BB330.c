__int64 __fastcall sub_3BB330(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1480);
  if ( *(_BYTE *)(v1 + 1000) )
  {
    sub_3B7770(*(_QWORD *)(a1 + 1480));
    sub_8968C0(*(_QWORD *)(v1 + 1008));
    sub_4C9BC0(*(_QWORD *)v1);
    return sub_8968C0(*(_QWORD *)(v1 + 2320));
  }
  return result;
}

