__int64 __fastcall sub_44B580(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  int v6; // ebp
  unsigned __int8 v7; // [rsp+17h] [rbp-21h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *(_DWORD *)a2 & 0x802;
  switch ( v3 )
  {
    case 0:
      return (unsigned __int16)sub_3BEE30(a1, a3);
    case 2:
      if ( (*(_DWORD *)a2 & 8) != 0 )
      {
        v5 = a3 + 2 * *(unsigned __int16 *)(a2 + 4);
        v6 = (unsigned __int16)sub_3BEE30(a1, a3);
        result = v6 + ((unsigned int)sub_3BEE30(a1, v5) << 16);
        if ( *(_DWORD *)(a1[3] + 24LL) != 8 )
          return (int)result;
      }
      else
      {
        return (int)sub_3BEEF0(a1, a3);
      }
      break;
    case 2048:
      sub_3BEB30(a1, &v7, a3);
      return v7;
    default:
      return sub_3BEF70(a1, a3);
  }
  return result;
}
