__int64 __fastcall sub_218AB20(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // [rsp+0h] [rbp-78h]
  unsigned __int64 v15; // [rsp+0h] [rbp-78h]
  _QWORD *v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  char v18; // [rsp+18h] [rbp-60h]
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]

  v7 = a2[17];
  if ( v7 )
  {
    v14 = a4;
    sub_21785D0((__int64)&v19, a2 + 7, a2[17], (__int64)a4, a5, a6);
    if ( (v21 & 1) != 0 )
    {
      v11 = v19;
      *(_BYTE *)(a1 + 16) |= 1u;
      v19 = 0;
      *(_QWORD *)a1 = v11;
      sub_216EFE0(&v19);
      return a1;
    }
    v16 = v14;
    v7 = v19;
    v15 = v20;
    sub_216EFE0(&v19);
    v8 = v15;
    a4 = v16;
  }
  else
  {
    v8 = 0;
  }
  v19 = v7;
  v20 = v8;
  LOBYTE(v21) = 1;
  v22 = 0;
  sub_2178ED0((__int64)&v17, a2 + 7, a3, a4, a5, a6, v7, v8, v21, 0);
  v9 = v17;
  if ( (v18 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 16) |= 1u;
    v17 = 0;
    *(_QWORD *)a1 = v9;
  }
  else if ( v17 )
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = a2;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 360))(a2);
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v13;
  }
  sub_216F910(&v17);
  return a1;
}
