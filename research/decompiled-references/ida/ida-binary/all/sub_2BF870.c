unsigned __int64 __fastcall sub_2BF870(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 (*v4)(); // rax
  int v6; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( (a3 & 1) != 0 )
  {
    v3 = 16777248;
  }
  else if ( (a3 & 4) != 0 )
  {
    v3 = 16777249;
  }
  else
  {
    if ( (a3 & 2) == 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v3 = 16777301;
  }
  v6 = v3;
  v4 = *(__int64 (**)())(*(_QWORD *)a1 + 448LL);
  if ( v4 != sub_1E66A0 )
    ((void (__fastcall *)(__int64, int *))v4)(a1, &v6);
LABEL_7:
  sub_2BF7F0();
  return v7 - __readfsqword(0x28u);
}
