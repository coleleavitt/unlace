__int64 __fastcall sub_7F9760(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r13
  void *v5; // r12
  int v6; // eax
  void *v7; // r12
  void *v8; // r12
  void *v9; // r14
  _QWORD *v10; // rax
  void *v11; // rdi
  __int64 v12; // rsi
  void *v13; // rbx
  void *v17; // [rsp+28h] [rbp-80h]
  int v18; // [rsp+30h] [rbp-78h] BYREF
  char v19; // [rsp+34h] [rbp-74h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  int v21; // [rsp+40h] [rbp-68h] BYREF
  char v22; // [rsp+44h] [rbp-64h]
  __int64 v23; // [rsp+48h] [rbp-60h]
  _QWORD v24[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v25[9]; // [rsp+60h] [rbp-48h] BYREF

  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD *)a2 + 40LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    while ( *v3 <= 1u )
    {
      v3 += 5;
      if ( (_QWORD *)v4 == v3 )
        goto LABEL_21;
    }
    if ( (_QWORD *)v4 != v3 )
    {
      while ( 1 )
      {
        v24[0] = 0;
        v5 = qword_1C7F2C0;
        v24[1] = 0;
        v25[0] = 1;
        v25[1] = 0;
        if ( (*((_BYTE *)v3 + 12) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v24, v3 + 1);
        else
          LODWORD(v24[0]) = *((_DWORD *)v3 + 2);
        if ( (*((_BYTE *)v3 + 28) & 1) != 0 )
        {
          sub_182C690(v5, v25, v3 + 3);
        }
        else
        {
          v6 = *((_DWORD *)v3 + 6);
          BYTE4(v25[0]) &= ~1u;
          LODWORD(v25[0]) = v6;
        }
        if ( (v25[0] & 0x100000000LL) != 0
          || LODWORD(v25[0]) != 1
          || (*(_BYTE *)(a3 + 20) & 1) != 0
          || *(_DWORD *)(a3 + 16) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v24, a3);
        }
        else
        {
          v17 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v24, a3);
          sub_182CBA0(v17, v25);
          BYTE4(v25[0]) &= ~1u;
          LODWORD(v25[0]) = 1;
        }
        v19 &= 0xFCu;
        v7 = qword_1C7F2C0;
        v22 &= 0xFCu;
        v18 = 0;
        v20 = 0;
        v21 = 1;
        v23 = 0;
        if ( (v24[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v18, v24);
          if ( (v25[0] & 0x100000000LL) == 0 )
          {
LABEL_15:
            v22 &= ~1u;
            v21 = v25[0];
            goto LABEL_16;
          }
        }
        else
        {
          v18 = v24[0];
          if ( (v25[0] & 0x100000000LL) == 0 )
            goto LABEL_15;
        }
        sub_182C690(v7, &v21, v25);
LABEL_16:
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24);
        sub_182CBA0(v8, v25);
        sub_7F8E80((__int64 *)a1, *v3, &v18);
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v18);
        sub_182CBA0(v9, &v21);
        v10 = v3 + 5;
        if ( (_QWORD *)v4 != v3 + 5 )
        {
          while ( 1 )
          {
            v3 = v10;
            if ( *v10 > 1u )
              break;
            v10 += 5;
            if ( (_QWORD *)v4 == v10 )
              goto LABEL_21;
          }
          if ( (_QWORD *)v4 != v10 )
            continue;
        }
        break;
      }
    }
  }
LABEL_21:
  sub_3EBE30((__int64)v24, a3, a2 + 24);
  v11 = qword_1C7F2C0;
  v12 = a1 + 24;
  if ( LODWORD(v24[0]) )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (*(_BYTE *)(a1 + 44) & 1) != 0
        || *(_DWORD *)(a1 + 40) != 1
        || (v25[0] & 0x100000000LL) != 0
        || LODWORD(v25[0]) != 1 )
      {
        sub_1851D20(qword_1C7F2C0, v12, v24, a1 + 24);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, v12, v24, a1 + 24);
        sub_182CBA0(v11, a1 + 40);
        *(_BYTE *)(a1 + 44) &= ~1u;
        *(_DWORD *)(a1 + 40) = 1;
      }
    }
    else
    {
      sub_27B950((__int64)qword_1C7F2C0, v12, (int *)v24);
    }
  }
  else
  {
    sub_27B950((__int64)qword_1C7F2C0, v12, (int *)(a1 + 24));
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v24);
  return sub_182CBA0(v13, v25);
}

