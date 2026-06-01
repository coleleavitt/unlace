__int64 __fastcall sub_61D620(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // eax

  if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) != 6 || (v4 = 0, *(_QWORD *)(a2 + 32)) )
    v4 = *(_QWORD *)(a3 + 8);
  result = sub_61B740(a1, *(_QWORD *)(a2 + 32), v4);
  if ( !(_BYTE)result )
  {
    v6 = 16;
    if ( (unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) == 6 )
      v6 = 16LL * (*(_QWORD *)(a2 + 32) != 0);
    v7 = v6 + a3;
    v8 = sub_B1AFD0(*(_QWORD *)(a2 + 40));
    return sub_61B330(a1, *(_QWORD *)(a2 + 40), v8 * ((v7 != 0) + (v7 - (unsigned __int64)(v7 != 0)) / v8));
  }
  return result;
}

