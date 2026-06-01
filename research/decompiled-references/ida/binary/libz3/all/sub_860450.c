__int64 __fastcall sub_860450(int a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  _BYTE *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebp
  void *v10; // rbx
  unsigned __int64 v12; // rdx
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  unsigned int v16; // eax
  void *v17; // [rsp+18h] [rbp-80h]
  unsigned int v18; // [rsp+18h] [rbp-80h]
  _QWORD v19[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+58h] [rbp-40h]

  v2 = -1;
  v3 = sub_15D1F10(a2);
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
      v2 = *(_DWORD *)(v5 - 4) - 1;
  }
  v19[0] = 1;
  v6 = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v20);
  BYTE4(v20[0]) &= ~1u;
  LODWORD(v20[0]) = 1;
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = (_BYTE *)(v6 + *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL));
      if ( v7[8] != 1 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v8 = *(_QWORD *)(*(_QWORD *)v7 + 24LL);
      if ( !v8 || (unsigned int)(*(_DWORD *)(v8 + 24) - 1) <= 1 )
        break;
      v12 = *(_QWORD *)(v8 + 32);
      v13 = qword_1C7F2C0;
      v21 = 0;
      v22 = 0;
      v23 = 1;
      v24 = 0;
      if ( v12 > 0x7FFFFFFE )
        sub_182C550(qword_1C7F2C0, &v21);
      else
        LODWORD(v21) = v12;
      sub_182CBA0(v13, &v23);
      v14 = qword_1C7F2C0;
      LODWORD(v23) = 1;
      BYTE4(v23) &= ~1u;
      if ( (v20[0] & 0x100000000LL) == 0 && LODWORD(v20[0]) == 1 )
      {
        sub_1831650(qword_1C7F2C0, v19, &v21);
        sub_182CBA0(v14, v20);
        BYTE4(v20[0]) &= ~1u;
        LODWORD(v20[0]) = 1;
      }
      else
      {
        sub_1848FF0(qword_1C7F2C0, v19, &v21);
      }
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v21);
      sub_182CBA0(v17, &v23);
      v21 = 0x4000;
      v22 = 0;
      v23 = 1;
      v24 = 0;
      sub_182CBA0(qword_1C7F2C0, &v23);
      v15 = qword_1C7F2C0;
      LODWORD(v23) = 1;
      BYTE4(v23) &= ~1u;
      if ( (v20[0] & 0x100000000LL) == 0 && LODWORD(v20[0]) == 1 )
      {
        if ( (v19[0] & 0x100000000LL) != 0 || (v21 & 0x100000000LL) != 0 )
        {
          v16 = sub_182C7B0(qword_1C7F2C0, v19, &v21);
          v15 = qword_1C7F2C0;
          v18 = v16 >> 31;
        }
        else
        {
          LOBYTE(v18) = SLODWORD(v19[0]) < (int)v21;
        }
      }
      else
      {
        LOBYTE(v18) = sub_1848D40(qword_1C7F2C0, v19, &v21);
        v15 = qword_1C7F2C0;
      }
      sub_182CBA0(v15, &v21);
      sub_182CBA0(v15, &v23);
      if ( !(_BYTE)v18 )
        break;
      v6 += 16;
      if ( v6 == 16LL * v2 )
        goto LABEL_20;
    }
    v9 = 1;
  }
  else
  {
LABEL_20:
    v9 = 0;
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v10, v20);
  return v9;
}

