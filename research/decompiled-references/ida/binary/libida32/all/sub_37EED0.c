__int64 __fastcall sub_37EED0(__int64 a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned int item_end; // eax

  sub_37E050(a1, a2);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
  if ( !v4 )
  {
    a2 = " ";
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, " ", 0);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL);
  }
  item_end = get_item_end(*(unsigned int *)(a1 + 16), a2, v2, v3);
  sub_37ED20(a1, item_end);
  return (unsigned int)v4;
}

