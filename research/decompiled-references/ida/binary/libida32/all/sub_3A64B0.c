unsigned __int64 __fastcall sub_3A64B0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  _UNKNOWN **v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  int v10; // [rsp+18h] [rbp-20h]
  char v11; // [rsp+1Ch] [rbp-1Ch]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v8 = a3;
  v10 = a4;
  v9 = a2;
  v11 = 1;
  v4 = *(unsigned __int8 *)(dbg + 80LL);
  v5 = a3 - v4 + 1;
  if ( a3 < v4 )
    v5 = 0;
  v7 = &off_2AFCCC0;
  sub_3A62A0(*(_QWORD *)(qword_2CA1698 + 1384) + 72LL, (__int64)&v7, v5, a3 + a4);
  return v12 - __readfsqword(0x28u);
}

