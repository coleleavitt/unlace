__int64 __fastcall sub_6430A0(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // r15
  _QWORD *v3; // rbp
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 result; // rax

  v1 = a1 + 56;
  v2 = *(_QWORD **)(a1 + 32);
  v3 = &v2[2 * *(unsigned int *)(a1 + 40)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_14;
    }
    while ( v3 != v2 )
    {
      v4 = *(__int64 **)v2[1];
      if ( v4 )
      {
        v5 = &v4[*((unsigned int *)v4 - 1)];
        while ( v5 != v4 )
        {
          v6 = *v4++;
          sub_640660(v1, v6);
        }
      }
      v7 = v2 + 2;
      if ( v3 == v2 + 2 )
        break;
      while ( 1 )
      {
        v2 = v7;
        if ( *v7 > 1u )
          break;
        v7 += 2;
        if ( v3 == v7 )
          goto LABEL_14;
      }
    }
  }
LABEL_14:
  v8 = (__int64 *)sub_186B270(0x78u);
  *v8 = v1;
  v9 = v8;
  v8[1] = 0;
  v10 = sub_186B270(0x80u);
  *(_QWORD *)v10 = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_DWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_DWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_DWORD *)(v10 + 104) = 0;
  *(_QWORD *)(v10 + 112) = 0;
  *(_DWORD *)(v10 + 120) = 0;
  v9[2] = v10;
  v9[3] = 8;
  *((_DWORD *)v9 + 8) = 0;
  *(_OWORD *)(v9 + 5) = 0;
  v11 = sub_186B270(0x80u);
  *(_QWORD *)v11 = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_DWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_DWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_DWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  *(_DWORD *)(v11 + 120) = 0;
  v9[7] = v11;
  v9[8] = 8;
  *((_DWORD *)v9 + 18) = 0;
  v9[10] = 0;
  v12 = sub_186B270(0x80u);
  *(_QWORD *)v12 = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 72) = 0;
  *(_QWORD *)(v12 + 80) = 0;
  *(_DWORD *)(v12 + 88) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_DWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 112) = 0;
  *(_DWORD *)(v12 + 120) = 0;
  v9[11] = v12;
  v9[12] = 8;
  *((_DWORD *)v9 + 26) = 0;
  *((_DWORD *)v9 + 28) = 0;
  sub_642060(v9);
  v13 = *(__int64 **)(a1 + 144);
  if ( v9 != v13 )
  {
    if ( v13 )
    {
      sub_63CF80(*(_QWORD **)(a1 + 144));
      sub_186B220(v13);
    }
    *(_QWORD *)(a1 + 144) = v9;
  }
  result = sub_63B860(a1);
  if ( !(_BYTE)result )
  {
    sub_63CF80(v9);
    sub_186B220(v9);
    *(_QWORD *)(a1 + 144) = 0;
    sub_643660(v1);
    return 0;
  }
  return result;
}

