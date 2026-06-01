__int64 __fastcall sub_B96720(_DWORD *a1, __int64 a2)
{
  int v3; // r14d
  int i; // ebx
  __int64 v5; // rdi
  _WORD *v6; // rdx
  __int64 v7; // rdi
  _WORD *v8; // rdx
  __int64 result; // rax

  v3 = a1[8];
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)a1;
        v6 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
        if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v6 > 1u )
          break;
        ++i;
        sub_22581D0(v5, "  ", 2);
        if ( v3 == i )
          goto LABEL_5;
      }
      *v6 = 8224;
      *(_QWORD *)(v5 + 32) += 2LL;
    }
LABEL_5:
    v3 = a1[8];
  }
  sub_B96590(*(__int64 **)a2, *(_DWORD *)(a2 + 8), *(_QWORD *)a1, (const __m128i *)(a1 + 2), v3);
  v7 = *(_QWORD *)a1;
  v8 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v8 > 1u )
  {
    result = 2619;
    *v8 = 2619;
    *(_QWORD *)(v7 + 32) += 2LL;
  }
  else
  {
    result = sub_22581D0(v7, ";\n", 2);
  }
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}

