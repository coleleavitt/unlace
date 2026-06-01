__int64 *__fastcall sub_240880(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v8; // rcx
  int v9; // r15d
  int tinfo_property; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // al
  char v16; // [rsp+18h] [rbp-60h]
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = *(_QWORD *)a2;
  v17[1] = __readfsqword(0x28u);
  v9 = sub_257CA0(a2 + 8, a3, a4, v8);
  if ( !v9 )
    goto LABEL_6;
  *(_BYTE *)(a2 + 13) |= 0x20u;
  tinfo_property = get_tinfo_property();
  v11 = sub_32ABC0(*(_QWORD *)a2, a4, tinfo_property == 1);
  *(_QWORD *)a2 = v11;
  v12 = v11;
  v13 = *(_BYTE *)(a2 + 13);
  if ( (v13 & 0x18) != 0 && (v13 & 6) == 0 || v9 != 2 )
    goto LABEL_4;
  if ( v12 != sub_255A30((__int64 *)a2)
    || (v17[0] = 0, v16 = sub_265AA0(a2, nullptr, (__int64)v17, nullptr), clear_tinfo_t(), !v16) )
  {
LABEL_6:
    *(_BYTE *)(a2 + 13) &= ~0x20u;
    sub_32C430(a1, *(_QWORD *)(a3 + 112), a4, a5);
    goto LABEL_7;
  }
  sub_329C80(a2 + 8, *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFDFFFFLL);
LABEL_4:
  *a1 = 0;
  copy_tinfo_t();
LABEL_7:
  clear_tinfo_t();
  return a1;
}
