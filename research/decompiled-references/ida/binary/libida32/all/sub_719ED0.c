__int64 __fastcall sub_719ED0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) )
  {
    *(_WORD *)(a1 + 1634) = 1;
    v1 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)(a1 + 2664) = a1 + 1640;
    byte_2CA26CA = 0;
    sub_724B00(a1, a1 + 1640, v1);
    sub_719870(a1);
    sub_71A3E0(a1);
    result = sub_724A50(a1, 1);
    byte_2CA26CA = 0;
    *(_WORD *)(a1 + 1634) = 0;
  }
  return result;
}

