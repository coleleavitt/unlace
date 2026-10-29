__int64 __fastcall sub_438380(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebp
  unsigned int v6; // eax
  __int64 *v7; // [rsp+0h] [rbp-48h] BYREF
  char v8; // [rsp+Fh] [rbp-39h] BYREF
  _BYTE v9[4]; // [rsp+10h] [rbp-38h] BYREF
  int v10; // [rsp+14h] [rbp-34h]
  char v11; // [rsp+1Ch] [rbp-2Ch]
  char v12; // [rsp+1Eh] [rbp-2Ah]
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+24h] [rbp-24h]
  int v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+2Ch] [rbp-1Ch]
  char v17; // [rsp+2Eh] [rbp-1Ah]

  v7 = (__int64 *)(a4 + 8);
  v4 = *(_DWORD *)(a1 + 16) + 1;
  if ( v4 == a3 )
  {
    v6 = strlen(*(const char **)a1);
    sub_434D30(*(unsigned __int8 **)a1, v6, &v8, nullptr);
    v11 = -124;
    v12 = 1;
    v10 = 1;
    v16 = v8;
    if ( v4 == 2 )
    {
      v17 = 1;
    }
    else
    {
      v17 = 0;
      v13 = -3;
    }
    v14 = -3;
    v15 = 0;
    return sub_438030(a2, (__int64)v9, 0, &v7);
  }
  else
  {
    sub_458930(a2, 1, a4, *(_QWORD *)(a1 + 8));
    return 1;
  }
}

