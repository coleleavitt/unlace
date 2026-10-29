__int64 __fastcall sub_749930(char a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v10; // [rsp+10h] [rbp-28h] BYREF
  int v11; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v9 = sub_749700(0, a2, a3, a4, a5);
  v10 = sub_747920(0, a2, v5, v6, v7);
  if ( (_WORD)v9 )
  {
    if ( BYTE2(v9) == 64 )
    {
      if ( (dword_2CAA5CC & 0x40000) != 0 )
        goto LABEL_5;
    }
    else
    {
      dword_2CAA5C8 |= 0x80u;
    }
    v11 = sub_750D90(&v9, 46);
    v10 = sub_750E60(&v11, &v10);
  }
LABEL_5:
  BYTE2(v10) = a1;
  sub_7526B0(qword_2CAA5D0, &v10);
  return v10;
}

