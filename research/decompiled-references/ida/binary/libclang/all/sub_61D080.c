__int64 __fastcall sub_61D080(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax

  v3 = a3 + 4;
  v4 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
  return sub_61B330(a1, *(_QWORD *)(a2 + 24), v4 * ((v3 != 0) + (v3 - (unsigned __int64)(v3 != 0)) / v4));
}

