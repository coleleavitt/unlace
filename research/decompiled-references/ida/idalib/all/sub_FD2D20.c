__int64 __fastcall sub_FD2D20(unsigned __int16 a1, __int64 a2, _BYTE *a3)
{
  __int16 *v3; // rbp
  __int64 result; // rax

  v3 = (__int16 *)((char *)&unk_2417B60 + 2 * a1);
  for ( result = *v3; (_WORD)result != 0xFFFF; result = *v3 )
  {
    ++v3;
    *(_BYTE *)(*(_QWORD *)(a2 + 16) + 4 * result) = *a3 & 7 | *(_BYTE *)(*(_QWORD *)(a2 + 16) + 4 * result) & 0xF8;
    sub_FD2D20(*((unsigned __int16 *)&unk_2B4D8A0 + 12 * result + 2), a2, a3);
  }
  return result;
}
