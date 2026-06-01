__int64 __fastcall sub_59CD70(__int64 a1, unsigned __int64 *a2, __m256i *a3, int a4)
{
  int tinfo_property4; // eax
  int v7; // ebx
  _DWORD *v8; // rax
  __int64 v10; // rax

  tinfo_property4 = get_tinfo_property4(*a2, 300, 0, 0, 0, 0);
  if ( tinfo_property4 == -1 )
    return 0;
  v7 = tinfo_property4;
  v8 = (_DWORD *)sub_5AFCE0(a1);
  if ( !v8 || *v8 != v7 )
    return 0;
  v10 = sub_51B750(*(_QWORD *)(*(_QWORD *)a1 + 1632LL), *a2);
  return sub_5274F0(*(__int64 **)(*(_QWORD *)a1 + 1632LL), v10, a3, a4);
}

