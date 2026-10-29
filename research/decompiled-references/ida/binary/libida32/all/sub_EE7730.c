__int64 __fastcall sub_EE7730(__int64 *a1, unsigned __int16 *a2, double a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  char **v8; // rbx
  char **v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v18[32]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v19; // [rsp+30h] [rbp-38h]

  v5 = *((_QWORD *)a2 + 1);
  v6 = *a1;
  v17 = v5;
  v19 = 257;
  sub_F50AF0(&v17, v6, a1 + 3, v18, 0);
  if ( (*(_QWORD *)a2 & 0x400000LL) == 0 )
  {
    v7 = *a1;
    if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
      sub_971800(v7, "{");
    else
      sub_971800(v7, "(");
  }
  v8 = (char **)(a2 + 20);
  if ( (*a2 & 0x1FF) == 0x72 )
    v8 = (char **)(a2 + 24);
  v9 = &v8[*((unsigned int *)a2 + 8)];
  if ( v9 != v8 )
  {
    while ( !sub_BDA2B0((__int64)*v8) )
    {
      v14 = *a2;
      v13 = a2 + 20;
      LOWORD(v14) = v14 & 0x1FF;
      if ( (_WORD)v14 == 114 )
        v13 = a2 + 24;
      if ( v13 != (unsigned __int16 *)v8 )
        sub_971800(*a1, ", ");
      if ( *v8 )
      {
        sub_EE16F0(a1, *v8++, v14, v10, v11, v12, a3);
        if ( v9 == v8 )
          break;
      }
      else
      {
        sub_EE0C80(a1);
        if ( v9 == ++v8 )
          break;
      }
    }
  }
  result = *(_QWORD *)a2 >> 16;
  if ( (*(_QWORD *)a2 & 0x400000LL) == 0 )
  {
    v16 = *a1;
    if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
      return sub_971800(v16, "}");
    else
      return sub_971800(v16, ")");
  }
  return result;
}

