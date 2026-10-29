__int64 __fastcall Z3_mk_int64(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v5; // bp
  int *v6; // rdx
  int v7; // edx
  __int64 v8; // r12
  void *v9; // rdi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  void *v14; // rbx
  void *v16; // rbx
  void *v17; // [rsp+8h] [rbp-60h]
  _QWORD v18[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_2977E0((__int64)a1, a2, a3);
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
  v6 = *(int **)(a3 + 24);
  if ( v6 )
  {
    v7 = *v6;
    if ( v7 == 5 )
      goto LABEL_14;
  }
  else
  {
    v7 = -1;
  }
  if ( a1[361] == v7 || v7 == a1[363] || v7 == a1[365] )
  {
LABEL_14:
    v18[0] = 0;
    v18[1] = 0;
    v19[0] = 1;
    v9 = qword_1C7F2C0;
    v19[1] = 0;
    if ( (unsigned __int64)(a2 + 0x80000000LL) >> 32 )
    {
      v17 = qword_1C7F2C0;
      sub_1830C40(qword_1C7F2C0, v18, a2);
      v9 = v17;
    }
    else
    {
      LODWORD(v18[0]) = a2;
    }
    sub_182CBA0(v9, v19);
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = 1;
    v13 = sub_252180((__int64)a1, (__int64)v18, a3, v10, v11, v12);
    v8 = v13;
    if ( !v5 )
    {
      v14 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v18);
      sub_182CBA0(v14, v19);
      return v8;
    }
    sub_2BB620(v13);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v18);
    sub_182CBA0(v16, v19);
    goto LABEL_13;
  }
  sub_24EA30((__int64)a1, 3u, nullptr);
  if ( v5 )
  {
LABEL_12:
    sub_2BB620(0);
    v8 = 0;
LABEL_13:
    byte_1C7EBA0 = 1;
    return v8;
  }
  return 0;
}

