unsigned __int64 __fastcall sub_98F360(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // r8d
  int *v7; // rdx
  int v8; // r9d
  __int64 v9; // rbx
  int v11; // edx
  __int64 v12; // rsi
  int v13; // r11d
  _QWORD v14[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]
  unsigned int v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+30h] [rbp-28h]

  v4 = *(unsigned int *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 192);
  if ( !(_DWORD)v4 )
    return *(_QWORD *)(a1 + 168) + a2 - (unsigned __int64)*(unsigned int *)(a1 + 160);
  v6 = (v4 - 1) & (37 * a2);
  v7 = (int *)(v5 + 16LL * v6);
  v8 = *v7;
  if ( *v7 != a2 )
  {
    v11 = 1;
    while ( v8 != -1 )
    {
      v13 = v11 + 1;
      v6 = (v4 - 1) & (v11 + v6);
      v7 = (int *)(v5 + 16LL * v6);
      v8 = *v7;
      if ( *v7 == a2 )
        goto LABEL_3;
      v11 = v13;
    }
    return *(_QWORD *)(a1 + 168) + a2 - (unsigned __int64)*(unsigned int *)(a1 + 160);
  }
LABEL_3:
  if ( v7 == (int *)(16 * v4 + v5) )
    return *(_QWORD *)(a1 + 168) + a2 - (unsigned __int64)*(unsigned int *)(a1 + 160);
  sub_A1BF70(v14, *((_QWORD *)v7 + 1));
  if ( v17 )
    goto LABEL_5;
  v12 = *(_QWORD *)(v15 + 32);
  if ( *(_DWORD *)(v12 + 16) != v16 && v16 )
    v12 = *(_QWORD *)(v15 + v16 + 32);
  if ( !*(_BYTE *)(v12 + 51) || (v9 = v15 + v14[0] + 72, v16 != v14[0]) )
LABEL_5:
    v9 = v15 + v14[0] + 40;
  sub_A1C0C0(v14);
  return v9;
}

