__int64 __fastcall sub_2198E30(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  int v4; // edx
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  unsigned int v8; // eax
  bool (__fastcall *v9)(__int64); // rax
  int v10; // eax
  __int64 v11; // rbp
  unsigned int v12[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = sub_2198C60((__int64)a1, a2);
  if ( a1[13] != (_DWORD)&loc_1000007 && (v2 & 0x80000000) != 0LL )
    return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 56LL))(a1);
  v4 = a1[2];
  v5 = HIDWORD(v2);
  v6 = (v4 - 14) & 0xFFFFFFFD;
  if ( ((v4 - 18) & 0xFFFFFFFD) != 0 && v6 != 0 && (unsigned int)(v4 - 11) > 1 )
  {
    v7 = v5 & 0xFFFFFF;
  }
  else
  {
    v7 = (unsigned int)v5 >> 8;
    if ( !v6 || (unsigned int)(v4 - 11) <= 1 || ((v4 - 18) & 0xFFFFFFFD) == 0 )
    {
      v8 = ((unsigned int)v5 >> 4) & 1;
      goto LABEL_8;
    }
  }
  v8 = ((unsigned int)v5 >> 27) & 1;
LABEL_8:
  if ( !(_BYTE)v8 )
    return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 56LL))(a1);
  sub_2198930(v12, (__int64)a1);
  v9 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v9 != sub_2195C40 )
  {
    if ( v9((__int64)a1) )
      goto LABEL_11;
LABEL_19:
    v10 = 12;
    goto LABEL_12;
  }
  if ( (unsigned int)(a1[2] - 19) > 1 )
    goto LABEL_19;
LABEL_11:
  v10 = 16;
LABEL_12:
  v11 = v12[2] + v7 * v10;
  return v11 + sub_215DEC0((__int64)a1);
}
