_QWORD *__fastcall sub_1EDDEE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int v9; // edx
  _DWORD *v10; // rax
  int v11; // edi
  _QWORD *result; // rax
  int v13; // r10d
  _DWORD *v14; // r11
  int v15; // edx
  int v16[3]; // [rsp+Ch] [rbp-2Ch] BYREF
  _DWORD *v17; // [rsp+18h] [rbp-20h] BYREF

  v7 = *(_QWORD *)(a1 + 9296);
  v16[0] = a3;
  v8 = *(_DWORD *)(v7 + 16);
  if ( !v8 )
  {
    v17 = nullptr;
LABEL_11:
    v8 *= 2;
    goto LABEL_12;
  }
  a4 = (unsigned int)a3;
  a6 = v8 - 1;
  v9 = a6 & (37 * a3);
  v10 = (_DWORD *)(*(_QWORD *)v7 + 16LL * v9);
  v11 = *v10;
  if ( (_DWORD)a4 == *v10 )
  {
LABEL_3:
    result = v10 + 2;
    *result = a2;
    return result;
  }
  v13 = 1;
  v14 = nullptr;
  if ( v11 != -1 )
  {
    while ( 1 )
    {
      if ( v11 == -2 && !v14 )
        v14 = v10;
      v9 = a6 & (v13 + v9);
      v10 = (_DWORD *)(*(_QWORD *)v7 + 16LL * v9);
      v11 = *v10;
      if ( (_DWORD)a4 == *v10 )
        goto LABEL_3;
      if ( v11 == -1 )
      {
        if ( v14 )
          v10 = v14;
        break;
      }
      ++v13;
    }
  }
  v15 = *(_DWORD *)(v7 + 8);
  v17 = v10;
  a3 = (unsigned int)(v15 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * v8 )
    goto LABEL_11;
  a5 = v8 >> 3;
  if ( v8 - *(_DWORD *)(v7 + 12) - (unsigned int)a3 <= (unsigned int)a5 )
  {
LABEL_12:
    sub_1EDDCF0((__int64 *)v7, v8, a3, a4, a5, a6);
    sub_1EB4130((__int64 *)v7, v16, &v17);
    LODWORD(a4) = v16[0];
    LODWORD(a3) = *(_DWORD *)(v7 + 8) + 1;
    v10 = v17;
  }
  *(_DWORD *)(v7 + 8) = a3;
  if ( *v10 != -1 )
    --*(_DWORD *)(v7 + 12);
  *v10 = a4;
  result = v10 + 2;
  *result = 0;
  *result = a2;
  return result;
}
