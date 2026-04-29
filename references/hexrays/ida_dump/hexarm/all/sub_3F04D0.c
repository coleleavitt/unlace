__int64 __fastcall sub_3F04D0(__int64 a1, const char *a2, int a3, int a4, int *a5, double a6)
{
  unsigned __int64 v8; // r12
  char *v11; // rax
  char *v12; // r15
  __int64 v13; // rsi
  char *v14; // rax
  int v15; // eax
  int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // r15
  char *v19; // rax
  char v20; // cl
  int v21; // eax
  int v22; // [rsp+0h] [rbp-50h]
  int v23; // [rsp+0h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-44h]
  signed __int64 v25; // [rsp+10h] [rbp-40h]

  if ( (unsigned __int8)(a2[1] - 48) > 9u )
    return 0xFFFFFFFFLL;
  v8 = a3;
  v11 = strchr(a2, 46);
  v12 = v11;
  if ( v11 )
  {
    v13 = (unsigned int)v11[1];
    v14 = strchr("bhsdq", v13);
    if ( !v14 )
      return 0xFFFFFFFFLL;
    v25 = v14 - "bhsdq";
    v24 = 1 << (v14 - "bhsdq");
    if ( v24 <= 0 )
      return 0xFFFFFFFFLL;
    v22 = (_DWORD)v12 - (_DWORD)a2;
    if ( v12 - a2 < v8 && v12[2] == 91 && (unsigned __int8)(v12[3] - 48) <= 9u )
    {
      v15 = strtol(v12 + 3, nullptr, 10);
      v16 = v24;
      if ( v24 <= 8 )
      {
        v17 = v15 - 1;
        if ( v17 < 16 >> v25 && v24 - 1 > a4 )
        {
          LOBYTE(v18) = *a2;
          LODWORD(v8) = v22;
          a4 += v17 << v25;
          goto LABEL_15;
        }
      }
      if ( !under_debugger )
        sub_3835A0(0xC856u, 0, a6);
    }
    else if ( !under_debugger )
    {
      sub_3835A0(0xC855u, v13, a6);
    }
    BUG();
  }
  v18 = *(unsigned __int8 *)a2;
  v19 = strchr("bhsdq", *a2);
  if ( !v19 )
    return 0xFFFFFFFFLL;
  v16 = 1 << (v19 - "bhsdq");
LABEL_15:
  v20 = 113;
  v23 = v16;
  if ( (_BYTE)v18 == 100 )
    v20 = 100;
  v21 = sub_3F0200(a1, (__int64)a2, v8, v20, nullptr);
  if ( a5 )
    *a5 = v23;
  if ( v21 != -1 )
    return (unsigned int)(a4 + v21);
  return 0xFFFFFFFFLL;
}
