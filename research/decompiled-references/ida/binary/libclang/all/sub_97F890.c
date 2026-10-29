__int64 __fastcall sub_97F890(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  _QWORD *v9; // rcx
  int v10; // r9d
  _QWORD *v11; // rbx
  int v13; // ecx
  int v14; // r11d
  _QWORD v15[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]
  unsigned int v17; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+30h] [rbp-28h]

  v2 = a2;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD **)(a2 + 192);
  v6 = *(unsigned int *)(a2 + 208);
  v7 = **(_DWORD **)(v4 + 448);
  if ( !(_DWORD)v6 )
    goto LABEL_12;
  v8 = (v6 - 1) & (37 * v7);
  v9 = &v5[2 * v8];
  v10 = *(_DWORD *)v9;
  if ( v7 != *(_DWORD *)v9 )
  {
    v13 = 1;
    while ( v10 != -1 )
    {
      v14 = v13 + 1;
      v8 = (v6 - 1) & (v13 + v8);
      v9 = &v5[2 * v8];
      v10 = *(_DWORD *)v9;
      if ( v7 == *(_DWORD *)v9 )
        goto LABEL_3;
      v13 = v14;
    }
    goto LABEL_12;
  }
LABEL_3:
  v6 *= 16;
  v5 = (_QWORD *)((char *)v5 + v6);
  if ( v9 == v5 )
  {
LABEL_12:
    v11 = (_QWORD *)(*(_QWORD *)(v2 + 168) + v7 - (unsigned __int64)*(unsigned int *)(v2 + 160));
    goto LABEL_7;
  }
  v6 = v9[1];
  sub_A1BF70(v15, v6);
  if ( v18 )
    goto LABEL_5;
  v6 = *(_QWORD *)(v16 + 32);
  if ( *(_DWORD *)(v6 + 16) != v17 && v17 )
    v6 = *(_QWORD *)(v16 + v17 + 32);
  if ( !*(_BYTE *)(v6 + 51) || (v11 = (_QWORD *)(v16 + v15[0] + 72), v17 != v15[0]) )
LABEL_5:
    v11 = (_QWORD *)(v16 + v15[0] + 40);
  v5 = v15;
  sub_A1C0C0(v15);
LABEL_7:
  if ( *v11 == sub_2575D20(v5, v6, v2) )
    sub_257CF50(a1, v11);
  else
    sub_25768A0(a1, v11);
  return a1;
}

