__int64 __fastcall sub_270C0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 (*v7)(); // rax
  int v9; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v10[0] = 0;
  v4 = sub_F2C0(a1, (__int64)v10, a3);
  if ( !(_BYTE)v4 )
    return 0;
  v5 = v4;
  v6 = v10[0];
  if ( !v10[0] )
  {
LABEL_9:
    *a2 = v6;
    return v5;
  }
  if ( (unsigned int)callui(1004) )
  {
    v6 = v10[0];
    goto LABEL_9;
  }
  v7 = *(__int64 (**)())(*a1 + 392LL);
  if ( v7 == sub_23FC0 )
  {
    if ( (unsigned __int8)sub_15860(&v9) )
    {
      if ( (v9 & 1) == (unsigned __int8)(v9 & 2) >> 1 )
      {
        v5 = 0;
        sub_EC40();
        return v5;
      }
      return (unsigned int)sub_16A80((__int64)a1, a2);
    }
    return 0;
  }
  if ( !((unsigned int (__fastcall *)(_QWORD *, __int64))v7)(a1, a3) )
    return 0;
  return (unsigned int)sub_16A80((__int64)a1, a2);
}
