__int64 __fastcall sub_41C630(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  _DWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // [rsp+4h] [rbp-24h] BYREF
  int v16; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( a3 != 4 )
  {
    sub_458930(a2, 1, a4, "string first last");
    return 1;
  }
  v7 = a4[1];
  if ( *(char ***)(v7 + 24) != &off_653DC0 || *(_QWORD *)(v7 + 8) )
  {
    v8 = (unsigned int)sub_48F360(v7) - 1;
    v9 = nullptr;
  }
  else
  {
    v9 = sub_40D5E0(v7, &v17);
    v8 = v17 - 1;
  }
  v10 = a4[2];
  v17 = v8;
  if ( (unsigned int)sub_49FAC0(a2, v10, v8, &v16) || (unsigned int)sub_49FAC0(a2, a4[3], v17, &v15) )
    return 1;
  v11 = (unsigned int)v16;
  if ( v16 < 0 )
  {
    v11 = 0;
    v16 = 0;
  }
  v12 = v15;
  if ( (int)v15 >= (int)v17 )
  {
    v12 = v17;
    v15 = v17;
  }
  if ( (int)v12 >= (int)v11 )
  {
    if ( v9 )
    {
      v13 = sub_40D5E0(a4[1], &v17);
      v14 = sub_40D3B0((char *)v13 + v16, v15 - v16 + 1);
    }
    else
    {
      v14 = sub_48F420(a4[1], v11, v12);
    }
    sub_48AFD0(a2, v14);
  }
  return 0;
}

