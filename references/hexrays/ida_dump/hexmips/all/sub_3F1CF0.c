__int64 __fastcall sub_3F1CF0(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // ebx

  v3 = sub_3ED570(a1, a2, 1, a3);
  v4 = *(_BYTE *)(a1 + 40LL * (int)a2 + 65);
  if ( ((unsigned __int8)(v4 - 2) <= 2u || (unsigned __int8)(v4 - 6) <= 1u) && *(_BYTE *)(a1 + 40LL * (int)a2 + 69) != 9 )
  {
    v5 = *(_QWORD *)(a1 + 832);
    v6 = *(_QWORD *)(v5 + 760);
    if ( !v6 )
      sub_3E5460(a3, a1, (int)a2);
    v7 = *(_DWORD *)(*(_QWORD *)(v5 + 752) + 4 * v6 - 4);
    *(_QWORD *)(v5 + 760) = v6 - 1;
    sub_3EA750(a1, a3);
    if ( (unsigned __int8)sub_3F17D0(a1, v7, v3, *(unsigned __int16 *)(a1 + 890), 1, a3) )
    {
      return v7;
    }
    else
    {
      v3 = -1;
      sub_3E8540(*(_QWORD *)(a1 + 832), v7);
    }
  }
  return v3;
}
