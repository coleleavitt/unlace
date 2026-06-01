__int64 __fastcall sub_437870(_QWORD *a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  unsigned int v5; // ebp
  int v6; // ebx
  unsigned __int8 v7; // [rsp+17h] [rbp-21h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *(_DWORD *)a2 & 0x802;
  switch ( v3 )
  {
    case 0:
      return (unsigned __int16)sub_3B9FA0(a1, a3);
    case 2:
      if ( (*(_DWORD *)a2 & 8) != 0 )
      {
        v5 = a3 + 2 * *(unsigned __int16 *)(a2 + 4);
        v6 = (unsigned __int16)sub_3B9FA0(a1, a3);
        return v6 + ((unsigned int)sub_3B9FA0(a1, v5) << 16);
      }
      else
      {
        return sub_3BA060(a1, a3);
      }
    case 2048:
      sub_3B9CB0((__int64)a1, &v7, a3);
      return v7;
    default:
      return sub_3BA0E0(a1, a3);
  }
}

