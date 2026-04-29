__int64 __fastcall sub_3F5810(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r12
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 76) == 4
    && (v4 = *(_QWORD *)(a2 + 56), *(_BYTE *)(v4 + 64) == 7)
    && (unsigned int)(*(_DWORD *)v4 - 43) <= 1
    && *(_BYTE *)(v4 + 32) == 4
    && (unsigned __int8)sub_11C340((char *)(v4 + 48), v5, 1u)
    && !v5[0] )
  {
    return (unsigned __int8)sub_3F5220(*(_DWORD **)(a1 + 8), a2, v4, a3);
  }
  else
  {
    return 0;
  }
}
