__int64 __fastcall sub_57F310(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 result; // rax

  v4 = a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  v6 = v5;
  if ( a3 == 1 )
  {
LABEL_5:
    v4 = sub_79B840(*(_QWORD *)(v6 + 1480) + 2312LL, v6, a2, 80);
    goto LABEL_7;
  }
  if ( a3 != 2 )
  {
    if ( a3 || (unsigned __int8)sub_79B3A0(*(_QWORD *)(v5 + 1480) + 2312LL, v5, a2, 4176) )
      goto LABEL_7;
    goto LABEL_5;
  }
  v4 = sub_79B8F0(*(_QWORD *)(v5 + 1480) + 2312LL, v5, a2, 80);
LABEL_7:
  result = v4;
  if ( v4 == -1 )
    return -1;
  return result;
}

