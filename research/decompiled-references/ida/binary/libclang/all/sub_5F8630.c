__int64 __fastcall sub_5F8630(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // eax
  __int64 v5; // r9
  int v6; // edi
  unsigned int v7; // esi
  _QWORD *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // ecx
  int v12; // r11d
  _QWORD *v13; // r10
  unsigned int v14; // ecx

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v5 = *a1;
    v6 = v3 - 1;
    v7 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (_QWORD *)(v5 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
      v10 = 1;
LABEL_4:
      *a3 = v8;
      return v10;
    }
    v12 = 1;
    v13 = nullptr;
    if ( v9 == -4096 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    do
    {
      if ( v9 == -8192 && !v13 )
        v13 = v8;
      v7 = v6 & (v12 + v7);
      v8 = (_QWORD *)(v5 + 16LL * v7);
      v9 = *v8;
      if ( *v8 == a2 )
      {
        v14 = 1;
        goto LABEL_13;
      }
      ++v12;
    }
    while ( v9 != -4096 );
    if ( v13 )
      v8 = v13;
    v14 = 0;
LABEL_13:
    *a3 = v8;
    return v14;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}

