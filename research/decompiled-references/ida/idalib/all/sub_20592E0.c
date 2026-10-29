__int64 __fastcall sub_20592E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  int v7; // eax

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(unsigned __int8 *)(v6 + 8);
  if ( (_BYTE)v7 == 16 || (unsigned int)(v7 - 17) <= 1 )
    return sub_2058290(*(_QWORD **)(v6 + 24), a2, v6, a4, a5, a6);
  else
    return sub_2058290(*(_QWORD **)(*(_QWORD *)(v6 + 16) + 8LL * (unsigned int)a2), (unsigned int)a2, v6, a4, a5, a6);
}
