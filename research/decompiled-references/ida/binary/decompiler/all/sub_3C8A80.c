__int64 __fastcall sub_3C8A80(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  char v6; // r8
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // rsi
  __int64 *v12; // rcx
  __int64 result; // rax
  __int64 v14; // r9

  if ( a2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( a2 < *(_DWORD *)(v4 + 64) && (unsigned int)a2 >= *(_DWORD *)(v4 + 64) )
      sub_3C5320(a1);
  }
  v5 = sub_3C8680(a1, a2, a3);
  v10 = *(__int64 **)(v9 + 88);
  v11 = v5;
  v12 = &v10[*(_QWORD *)(v9 + 96)];
  if ( v12 != v10 )
  {
    while ( 1 )
    {
      result = *v10;
      if ( *(_BYTE *)(*v10 + 48) != v6 || *(_QWORD *)(result + 24) != *(_QWORD *)(v8 + 32) )
        goto LABEL_7;
      v14 = *(_QWORD *)(result + 32);
      if ( v11 )
      {
        if ( *(_QWORD *)(v11 + 24) != v14 || *(_DWORD *)(result + 40) != *(_DWORD *)v11 )
          goto LABEL_7;
        if ( *(_DWORD *)(result + 44) <= v7 + 1 )
          return result;
        if ( v12 == ++v10 )
          return 0;
      }
      else
      {
        if ( v14 == -1 )
          return result;
LABEL_7:
        if ( v12 == ++v10 )
          return 0;
      }
    }
  }
  return 0;
}
