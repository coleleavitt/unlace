_BYTE *__fastcall sub_13788A0(__int64 a1, int a2, unsigned __int8 *a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // r14
  char *v8; // rbx
  char v9; // al
  char *v10; // rdx
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v17; // [rsp+20h] [rbp-98h]
  int v18[8]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v19; // [rsp+50h] [rbp-68h]
  char *v20; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h]
  char *v22; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+78h] [rbp-40h]
  __int64 v24; // [rsp+80h] [rbp-38h]

  v8 = (char *)a1;
  v9 = *(_BYTE *)(a1 + 32);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v20 = "_MAX__";
      LOWORD(v24) = 259;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 33) == 1 )
      {
        a5 = *(_QWORD *)(a1 + 8);
        v10 = *(char **)a1;
      }
      else
      {
        v10 = (char *)a1;
        v9 = 2;
      }
      v20 = v10;
      v21 = a5;
      v22 = "_MAX__";
      LOBYTE(v24) = v9;
      BYTE1(v24) = 3;
    }
  }
  else
  {
    LOWORD(v24) = 256;
  }
  sub_1378820((__int64)&v20, a2, a3, a4);
  v11 = *(_BYTE *)(a1 + 32);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v16[0] = "_WIDTH__";
      v17 = 259;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 33) == 1 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        v8 = *(char **)a1;
      }
      else
      {
        v11 = 2;
      }
      v16[0] = v8;
      v16[1] = v5;
      v16[2] = "_WIDTH__";
      LOBYTE(v17) = v11;
      HIBYTE(v17) = 3;
    }
  }
  else
  {
    v17 = 256;
  }
  LOWORD(v24) = 257;
  v19 = 265;
  v18[0] = sub_102DB30(a3, a2);
  return sub_1039E30(a4, (__int64)v16, (__int64)v18, v12, v13, v14, (char)v20, v21, (int)v22, v23, v24);
}
