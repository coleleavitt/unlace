_BOOL8 __fastcall sub_2419D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = a3;
  v5 = sub_23F390(a1, (__int64 *)(a2 + 48), (_QWORD *)(a3 + 48), a4);
  if ( v5 >= 0 )
    return v5 & 1;
  if ( v5 == -1 )
    v4 = a2;
  return *(_DWORD *)(v4 + 8) == 61 && !sub_251DB0(*(_QWORD *)(v4 + 24), v4 + 48, v6, v7, v8);
}
