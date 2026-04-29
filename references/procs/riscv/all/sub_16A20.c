__int64 __fastcall sub_16A20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 flags; // rax
  unsigned int refinfo; // r13d
  __int16 v9; // ax
  __int64 v10; // rdi
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 16);
  v13 = __readfsqword(0x28u);
  flags = get_flags_ex(v4, 0);
  if ( (unsigned __int8)is_off(flags, a3)
    && *(_WORD *)(a2 + 26) == 8
    && (refinfo = get_refinfo(v11, *(_QWORD *)(a2 + 16), a3), (_BYTE)refinfo)
    && (v12 & 0x4F) == *(_DWORD *)(a1 + 452) )
  {
    v9 = *(_WORD *)(a2 + 34);
    v10 = *(_QWORD *)(a2 + 16);
    v11[0] = -1;
    v11[2] = 0;
    v12 = (v9 & 4) == 0 ? 2 : 9;
    op_offset_ex(v10, a3, v11);
  }
  else
  {
    return 0;
  }
  return refinfo;
}
