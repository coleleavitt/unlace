__int64 __fastcall sub_589050(char *a1, __int64 a2, unsigned __int64 a3, unsigned int a4, unsigned int a5, char a6)
{
  __int64 result; // rax
  __int64 v10; // r13
  char *v11; // r14
  int v12; // r9d
  unsigned int v13; // [rsp+4h] [rbp-C4h]
  unsigned int v14; // [rsp+4h] [rbp-C4h]
  unsigned int v15; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v16[48]; // [rsp+10h] [rbp-B8h] BYREF
  _BYTE s[72]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp-40h]

  v15 = a5;
  v18 = __readfsqword(0x28u);
  result = 0;
  if ( a2 > 1 )
  {
    v15 = sub_839F10(a5);
    sub_839F70(a4, 8);
    v10 = qword_2CCB598 + 1072;
    if ( a6 )
    {
      v11 = sub_588AF0((int *)(qword_2CCB598 + 1072), 0x22Bu, (int *)&v15, (__int64)v16);
      v14 = v15;
      b2a64(s);
      v12 = v14;
    }
    else
    {
      if ( !HIDWORD(a3) || v15 == 16 && (*(_DWORD *)(qword_2CCB598 + 1072) & 0xE00) == 0xA00 )
        return btoa32(a1, a2, (unsigned int)a3, v15);
      v11 = sub_588AF0((int *)(qword_2CCB598 + 1072), 0x22Bu, (int *)&v15, (__int64)v16);
      v13 = v15;
      num2str_uint64(s);
      v12 = v13;
    }
    return sub_5884B0(v10, a1, a2, (__int64)v11, (__int64)s, v12);
  }
  return result;
}
