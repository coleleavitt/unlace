__int64 __fastcall sub_765060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  char v6; // bl
  __int64 v7; // rsi
  __int64 v9; // rdx
  char *v10; // rcx
  unsigned int v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v4 = *qword_2CD44C0;
  if ( !*qword_2CD44C0 )
    sub_76E6C0(a1, a2, a3, a4);
  v6 = a3;
  v7 = (unsigned int)(char)a3;
  if ( (unsigned __int8)(v4 - 54) <= 3u || v4 == 95 )
  {
    sub_76F8C0(&v11, v7);
    if ( v6 == 127 )
    {
      sub_76F920(&v12, 9766);
      v11 = v12;
    }
    if ( !*(_WORD *)a2 || (*(_BYTE *)(a2 + 2) & 1) == 0 )
      sub_770B70(&v11, a1);
    sub_770B70(&v11, a2);
    return sub_764D20(&v11, (unsigned int *)a2, v9, v10);
  }
  else
  {
    v12 = sub_766590(a2, v7, a1, 0);
    return sub_765540(&v12, v6 == 42);
  }
}
