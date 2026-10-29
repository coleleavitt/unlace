__int64 __fastcall sub_6C1B80(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  void *v6; // rbx
  _DWORD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  char v11; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(a1 + 2, a2, v12, &v11) )
  {
    v4 = *a1;
    if ( SLODWORD(v12[0]) < 0 )
    {
      v5 = *(_QWORD *)(v4 + 856);
      if ( !v5 )
        goto LABEL_5;
      goto LABEL_4;
    }
    v5 = *(_QWORD *)(v4 + 864);
    if ( v5 )
LABEL_4:
      ++*(_DWORD *)(v5 + 8);
  }
  else
  {
    v8 = *(_DWORD **)(sub_15D1F10(a2) + 24);
    if ( v8 && *v8 == 5 && v8[1] == 1 )
    {
      v10 = sub_15E1B70(a1[2]);
    }
    else
    {
      v9 = *a1;
      sub_15D1F10(a2);
      sub_15E1B70(a1[2]);
      v10 = sub_15E1A70(v9);
    }
    v5 = v10;
    if ( v10 )
      goto LABEL_4;
  }
LABEL_5:
  sub_6BFE30(*a3, a3[1]);
  *a3 = v5;
  sub_14B9B80(a1 + 4, a3);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  return sub_182CBA0(v6, v13);
}

