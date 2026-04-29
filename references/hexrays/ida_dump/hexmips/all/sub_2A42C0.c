__int64 __fastcall sub_2A42C0(__int64 *a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  unsigned int v5; // ebx
  __int64 tinfo_property; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v9 = 0;
  copy_tinfo_t(&v9, a2 + 48);
  if ( !(_BYTE)v9 || (v9 & 0xE) == 0 && (v9 & 0x30) != 0 )
    goto LABEL_7;
  v10[0] = 0;
  v10[0] = get_tinfo_property(v9, 9);
  v4 = get_tinfo_property(v10[0], 2) & 0x3F;
  clear_tinfo_t(v10);
  if ( v4 == 48 )
    goto LABEL_7;
  if ( *(_DWORD *)(a3 + 8) == 52 )
  {
    a3 = *(_QWORD *)(a3 + 24);
    v10[0] = 0;
    tinfo_property = get_tinfo_property(v9, 13);
    v10[0] = tinfo_property;
    if ( (_BYTE)tinfo_property )
    {
      v8 = v9;
      v9 = tinfo_property;
      v10[0] = v8;
      clear_tinfo_t(v10);
      goto LABEL_5;
    }
    clear_tinfo_t(v10);
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
LABEL_5:
  sub_2A41A0(a1, a3, (__int64)&v9, 4u);
  v5 = 1;
LABEL_8:
  clear_tinfo_t(&v9);
  return v5;
}
