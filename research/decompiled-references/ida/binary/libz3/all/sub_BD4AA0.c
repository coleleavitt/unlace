__int64 __fastcall sub_BD4AA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  _BYTE *v4; // r14
  __int64 v5; // rax
  unsigned int v6; // r14d
  void *v7; // rbx
  unsigned __int64 v9; // rdx
  void *v10; // r15
  void *v11; // rdi
  void *v12; // rdi
  unsigned int v13; // eax
  _BYTE *v14; // [rsp+8h] [rbp-90h]
  void *v15; // [rsp+10h] [rbp-88h]
  unsigned int v16; // [rsp+1Ch] [rbp-7Ch]
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+58h] [rbp-40h]

  v2 = sub_15D1F10(a2);
  v17[0] = 1;
  v3 = (unsigned int)sub_BDD570(a1, v2);
  v4 = *(_BYTE **)(*(_QWORD *)(v2 + 24) + 8LL);
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v18);
  BYTE4(v18[0]) &= ~1u;
  LODWORD(v18[0]) = 1;
  if ( (_DWORD)v3 )
  {
    v14 = &v4[16 * v3];
    while ( 1 )
    {
      if ( v4[8] != 1 )
        sub_DBF6E(0);
      v5 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
      if ( !v5 || (unsigned int)(*(_DWORD *)(v5 + 24) - 1) <= 1 )
        break;
      v9 = *(_QWORD *)(v5 + 32);
      v10 = qword_1C7F2C0;
      v19 = 0;
      v20 = 0;
      v21 = 1;
      v22 = 0;
      if ( v9 > 0x7FFFFFFE )
        sub_182C550(qword_1C7F2C0, &v19);
      else
        LODWORD(v19) = v9;
      sub_182CBA0(v10, &v21);
      LODWORD(v21) = 1;
      v11 = qword_1C7F2C0;
      BYTE4(v21) &= ~1u;
      if ( (v18[0] & 0x100000000LL) == 0 && LODWORD(v18[0]) == 1 )
      {
        sub_1831650(qword_1C7F2C0, v17, &v19);
        sub_182CBA0(v11, v18);
        BYTE4(v18[0]) &= ~1u;
        LODWORD(v18[0]) = 1;
      }
      else
      {
        sub_1848FF0(qword_1C7F2C0, v17, &v19);
      }
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v19);
      sub_182CBA0(v15, &v21);
      v19 = 0x4000;
      v20 = 0;
      v21 = 1;
      v22 = 0;
      sub_182CBA0(qword_1C7F2C0, &v21);
      v12 = qword_1C7F2C0;
      LODWORD(v21) = 1;
      BYTE4(v21) &= ~1u;
      if ( (v18[0] & 0x100000000LL) == 0 && LODWORD(v18[0]) == 1 )
      {
        if ( (v17[0] & 0x100000000LL) != 0 || (v19 & 0x100000000LL) != 0 )
        {
          v13 = sub_182C7B0(qword_1C7F2C0, v17, &v19);
          v12 = qword_1C7F2C0;
          v16 = v13 >> 31;
        }
        else
        {
          LOBYTE(v16) = SLODWORD(v17[0]) < (int)v19;
        }
      }
      else
      {
        LOBYTE(v16) = sub_1848D40(qword_1C7F2C0, v17, &v19);
        v12 = qword_1C7F2C0;
      }
      sub_182CBA0(v12, &v19);
      sub_182CBA0(v12, &v21);
      if ( !(_BYTE)v16 )
        break;
      v4 += 16;
      if ( v14 == v4 )
        goto LABEL_18;
    }
    v6 = 1;
  }
  else
  {
LABEL_18:
    v6 = 0;
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v7, v18);
  return v6;
}

