__int64 __fastcall sub_292580(__int64 a1, _QWORD *a2, int *a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  char tinfo_property; // r13
  int v10; // edx
  unsigned int v11; // r13d
  char v13; // al
  char v14; // al
  unsigned int tinfo_size; // eax
  __int64 v16; // rax
  _QWORD v17[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *a2;
  v17[1] = __readfsqword(0x28u);
  if ( !(_BYTE)v7 || (v7 & 0xE) == 0 && (v7 & 0x30) != 0 )
    goto LABEL_4;
  v17[0] = get_tinfo_property(v7, 9);
  tinfo_property = get_tinfo_property(v17[0], 2);
  clear_tinfo_t(v17);
  if ( (tinfo_property & 0x3F) == 0x30 )
    goto LABEL_4;
  v13 = get_tinfo_property(*a2, 2);
  v10 = *a3;
  if ( (v13 & 0x3E) != 0 && (v13 & 0xFu) <= 8 && (v10 & 3) != 0 )
  {
    v11 = ((*a3 & 2) == 0) + 1;
    if ( v11 == (unsigned int)get_tinfo_property(*a2, 3) )
    {
LABEL_4:
      v10 = *a3;
      v11 = 0;
      goto LABEL_5;
    }
    v14 = get_tinfo_property(*a2, 2);
    if ( (v14 & 0xE) != 0 || (v14 & 0x30) == 0 )
    {
      v16 = set_tinfo_property(a2, 1, (int)v11);
      v10 = *a3;
      LOBYTE(v11) = v16 != 0;
    }
    else
    {
      tinfo_size = get_tinfo_size(0, *a2, 0);
      sub_324F00(v17, a1, tinfo_size, v11);
      copy_tinfo_t(a2, v17);
      v11 = 1;
      clear_tinfo_t(v17);
      v10 = *a3 | 4;
      *a3 = v10;
    }
  }
  else
  {
    v11 = 0;
  }
LABEL_5:
  if ( (v10 & 8) != 0 )
  {
    v10 &= ~0x20u;
    *a3 = v10;
  }
  if ( (v10 & 0x40) != 0 )
    v11 |= sub_3251D0(a1, (_DWORD)a2, 0, a4, a5, a6);
  return v11;
}
