__int64 __fastcall sub_1EDB360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // ebp
  __int64 *v8; // r12
  unsigned int v9; // esi
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // r12
  unsigned int v13; // ebp
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  __int64 v18[4]; // [rsp+18h] [rbp-20h] BYREF

  v7 = *(_DWORD *)(a1 + 4984);
  v17 = a2;
  if ( !v7 )
  {
    v18[0] = 0;
    v8 = (__int64 *)(a1 + 4968);
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a1 + 4968);
  v13 = v7 - 1;
  result = v13 & (unsigned int)sub_FDE780(a2);
  a3 = v12 + 16LL * (unsigned int)result;
  v14 = *(_QWORD *)a3;
  if ( v17 != *(_QWORD *)a3 )
  {
    if ( v14 == -1 )
    {
      v9 = *(_DWORD *)(a1 + 4984);
LABEL_14:
      v7 = v9;
LABEL_15:
      v15 = *(_DWORD *)(a1 + 4976);
      a4 = 3 * v9;
      v18[0] = a3;
      v8 = (__int64 *)(a1 + 4968);
      v10 = v15 + 1;
      if ( 4 * v10 < (unsigned int)a4 )
      {
        a4 = v9 >> 3;
        if ( v9 - (v10 + *(_DWORD *)(a1 + 4980)) > (unsigned int)a4 )
          goto LABEL_5;
        goto LABEL_4;
      }
LABEL_3:
      v9 = 2 * v7;
LABEL_4:
      sub_1EDB000((__int64)v8, v9, a3, a4, a5, a6);
      sub_1EB1680(v8, &v17, v18);
      a3 = v18[0];
      v10 = *(_DWORD *)(a1 + 4976) + 1;
LABEL_5:
      *(_DWORD *)(a1 + 4976) = v10;
      if ( *(_QWORD *)a3 != -1 )
        --*(_DWORD *)(a1 + 4980);
      result = v17;
      *(_BYTE *)(a3 + 8) = 0;
      *(_QWORD *)a3 = result;
      return result;
    }
    a5 = 1;
    v16 = 0;
    while ( 1 )
    {
      if ( v14 == -2 && !v16 )
        v16 = a3;
      a6 = (unsigned int)(a5 + 1);
      result = v13 & ((_DWORD)a5 + (_DWORD)result);
      a3 = v12 + 16LL * (unsigned int)result;
      v14 = *(_QWORD *)a3;
      if ( v17 == *(_QWORD *)a3 )
        break;
      if ( v14 == -1 )
      {
        v9 = *(_DWORD *)(a1 + 4984);
        v7 = v9;
        if ( !v16 )
          goto LABEL_14;
        a3 = v16;
        goto LABEL_15;
      }
      a5 = (unsigned int)a6;
    }
  }
  if ( *(_BYTE *)(a3 + 8) )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 232LL))(a1, v17);
  return result;
}
