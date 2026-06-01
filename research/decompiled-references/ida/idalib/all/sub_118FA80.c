__int64 __fastcall sub_118FA80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  int v6; // eax
  int v7; // r13d
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  char v13; // [rsp+8h] [rbp-80h]
  __int64 v14[2]; // [rsp+10h] [rbp-78h] BYREF
  char v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  __int16 v20; // [rsp+50h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 8);
  v20 = 261;
  v16 = a2;
  v17 = a3;
  sub_225D6F0((unsigned int)v14, v3, (unsigned int)&v16, -1, 1, 0, 1);
  if ( (v15 & 1) != 0
    || (v6 = sub_201F550(*(_QWORD *)(v14[0] + 8), *(_QWORD *)(v14[0] + 16) - *(_QWORD *)(v14[0] + 8)), (v7 = v6) == 0) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    if ( v6 != 2 )
    {
      sub_2231100(&v16, v14[0]);
      sub_21A22F0((unsigned int)&v12, v7, 1, v8, v9, v10, v16, v17, v18, v19);
      if ( (v13 & 1) != 0 )
      {
        v11 = v12;
        v12 = 0;
        LOBYTE(v4) = v11 == 0;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      sub_118B7A0(&v12);
    }
  }
  sub_FC2AF0(v14);
  return v4;
}
