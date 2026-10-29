__int64 __fastcall btoa32(char *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // r15
  char *v8; // rax
  int v9; // r14d
  __int64 v10; // [rsp+8h] [rbp-B0h]
  unsigned int v11; // [rsp+1Ch] [rbp-9Ch] BYREF
  _BYTE s[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v13[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp-40h]

  v11 = a4;
  v14 = __readfsqword(0x28u);
  result = 0;
  if ( a2 > 1 )
  {
    if ( a3 <= 1 )
    {
      a1[1] = 0;
      *a1 = a3 + 48;
      return 1;
    }
    else
    {
      v11 = sub_816B50(v11);
      v6 = qword_2CA1698;
      v7 = qword_2CA1698 + 904;
      v8 = sub_56F3D0((int *)(qword_2CA1698 + 904), a3, (int *)&v11, (__int64)v13);
      v9 = v11;
      v10 = (__int64)v8;
      if ( v11 == 16 && (*(_DWORD *)(v6 + 904) & 0xE00) == 0xA00 )
      {
        return qstpncpy(a1, v8, a2) - (_QWORD)a1;
      }
      else
      {
        num2str_uint32(s);
        return sub_56ED90(v7, a1, a2, v10, (__int64)s, v9);
      }
    }
  }
  return result;
}

