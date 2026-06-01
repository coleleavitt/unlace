__int64 __fastcall Z3_mk_int(_DWORD *a1, unsigned int a2, __int64 a3)
{
  char v4; // bp
  int *v5; // rax
  int v6; // eax
  __int64 v7; // r12
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  void *v12; // r15
  _QWORD v14[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_297760((__int64)a1, a2, a3);
    a1[380] = 0;
    if ( !a3 )
    {
      sub_24EA30((__int64)a1, 3u, nullptr);
      goto LABEL_12;
    }
  }
  else
  {
    a1[380] = 0;
    if ( !a3 )
    {
      sub_24EA30((__int64)a1, 3u, nullptr);
      return 0;
    }
  }
  v5 = *(int **)(a3 + 24);
  if ( v5 )
  {
    v6 = *v5;
    if ( v6 == 5 )
    {
LABEL_14:
      v14[0] = a2;
      v14[1] = 0;
      v15[0] = 1;
      v15[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v15);
      BYTE4(v15[0]) &= ~1u;
      LODWORD(v15[0]) = 1;
      v11 = sub_252180((__int64)a1, (__int64)v14, a3, v8, v9, v10);
      v12 = qword_1C7F2C0;
      v7 = v11;
      sub_182CBA0(qword_1C7F2C0, v14);
      sub_182CBA0(v12, v15);
      if ( !v4 )
        return v7;
      sub_2BB620(v7);
      goto LABEL_13;
    }
  }
  else
  {
    v6 = -1;
  }
  if ( a1[361] == v6 || v6 == a1[363] || v6 == a1[365] )
    goto LABEL_14;
  sub_24EA30((__int64)a1, 3u, nullptr);
  if ( v4 )
  {
LABEL_12:
    sub_2BB620(0);
    v7 = 0;
LABEL_13:
    byte_1C7EBA0 = 1;
    return v7;
  }
  return 0;
}

