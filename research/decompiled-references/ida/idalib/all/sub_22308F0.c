__int64 __fastcall sub_22308F0(__int64 a1, const void ***a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rax
  int v11; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v12; // [rsp+10h] [rbp-78h] BYREF
  char v13; // [rsp+18h] [rbp-70h]
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h]
  char v16; // [rsp+30h] [rbp-58h]
  __int64 v17[2]; // [rsp+40h] [rbp-48h] BYREF
  char v18; // [rsp+50h] [rbp-38h]

  sub_228D350(&v12, a2, 0, 0);
  if ( (v13 & 1) != 0 )
  {
    v3 = v12;
    v12 = 0;
    v17[0] = v3;
    v4 = sub_2220DB0((std::_V2 *)v17);
    v5 = v17[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v6;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v11 = v12;
    sub_22305D0((__int64)v17, (unsigned int)v12, a2);
    if ( (v18 & 1) != 0 )
    {
      v16 |= 1u;
      LODWORD(v14) = v17[0];
      v15 = v17[1];
    }
    else
    {
      v8 = v17[0];
      v16 &= ~1u;
      v17[0] = 0;
      v14 = v8;
    }
    sub_22307A0(v17);
    sub_228D590(&v11);
    v9 = v16 & 1;
    if ( (v16 & 1) != 0 )
    {
      *(_DWORD *)a1 = v14;
      *(_QWORD *)(a1 + 8) = v15;
    }
    else
    {
      v10 = v14;
      v14 = 0;
      *(_QWORD *)a1 = v10;
    }
    *(_BYTE *)(a1 + 16) = v9 | *(_BYTE *)(a1 + 16) & 0xFE;
    sub_FC2AF0(&v14);
  }
  sub_215DE50(&v12);
  return a1;
}
