__int64 *__fastcall sub_1EB0310(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  char v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  char v13; // [rsp+18h] [rbp-40h]

  sub_202A150(&v12, a2, a3, 0);
  if ( v12 )
  {
    *a1 = v12;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 16);
    v7 = *(unsigned int *)(a2 + 32);
    if ( a4 )
    {
      *a4 = 8 * v6 - (unsigned int)v7;
      v6 = *(_QWORD *)(a2 + 16);
    }
    while ( 1 )
    {
      sub_A0B360((__int64)&v12, a2, *(_DWORD *)(a2 + 36));
      v11 = v13 & 1 | v11 & 0xFE;
      if ( (v13 & 1) != 0 )
      {
        v10 = v12;
        v12 = 0;
        sub_A0AE70(&v12);
        if ( (v11 & 1) != 0 )
        {
LABEL_13:
          v9 = v10;
          v10 = 0;
          *a1 = v9;
          goto LABEL_16;
        }
      }
      else
      {
        LODWORD(v10) = v12;
        sub_A0AE70(&v12);
        if ( (v11 & 1) != 0 )
          goto LABEL_13;
      }
      if ( (_DWORD)v10 != 2 )
        break;
      sub_20252B0(&v12, a2);
      v8 = v12;
      if ( v12 )
        goto LABEL_15;
      sub_A0AE90(&v10);
      v6 = *(_QWORD *)(a2 + 16);
      v7 = *(unsigned int *)(a2 + 32);
    }
    sub_1EAF7C0(&v12, a2, 8 * v6 - v7);
    v8 = v12;
    if ( v12 )
    {
LABEL_15:
      *a1 = v8;
      goto LABEL_16;
    }
    *a1 = 0;
LABEL_16:
    sub_A0AE90(&v10);
  }
  return a1;
}
