__int64 __fastcall sub_8CEEA0(__int64 a1)
{
  bool (__fastcall *v1)(__int64); // rax
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int *v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  char v13; // r12
  unsigned int v14; // [rsp+Ch] [rbp-4Ch] BYREF
  char v15[72]; // [rsp+10h] [rbp-48h] BYREF

  do
  {
    while ( 1 )
    {
      do
      {
        v1 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL);
        if ( v1 == sub_893F70 )
        {
          v2 = *(_QWORD *)(a1 + 664);
          result = *(unsigned int *)(a1 + 672);
          if ( v2 )
            v4 = *(_DWORD *)(v2 - 4);
          else
            v4 = 0;
          if ( (_DWORD)result == v4 )
            return result;
        }
        else
        {
          result = ((__int64 (__fastcall *)(__int64))v1)(a1);
          if ( !(_BYTE)result )
            return result;
          LODWORD(result) = *(_DWORD *)(a1 + 672);
          v2 = *(_QWORD *)(a1 + 664);
        }
        v5 = qword_1C7EC18;
        v6 = *(_QWORD *)(v2 + 8LL * (unsigned int)result);
        *(_DWORD *)(a1 + 672) = result + 1;
        result = *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(result + 8984) != v5 || *(_BYTE *)(result + 2416) )
          return result;
        v7 = *(_DWORD *)(v6 + 12);
        if ( *(_BYTE *)(v6 + 4) )
          v7 = *(_DWORD *)(v6 + 8);
        v14 = v7;
        v8 = (unsigned int *)(*(_QWORD *)(a1 + 248) + 56LL * v7);
      }
      while ( *((_BYTE *)v8 + 48) );
      v9 = *(_DWORD *)(a1 + 336);
      v10 = *v8;
      *((_BYTE *)v8 + 48) = 1;
      v11 = *(_QWORD *)(a1 + 232);
      v8[10] = v9;
      *(_DWORD *)(a1 + 336) = v9 + 1;
      v12 = v8[1];
      *(_DWORD *)(a1 + 340) = v7;
      sub_3EBB80((__int64)v15, 32 * v12 + v11, v11 + 32 * v10);
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v8 + 2), (__int64)v15) )
        break;
      sub_25A130(v15);
      sub_893BD0((unsigned int **)(a1 + 344), &v14);
    }
    sub_25A130(v15);
    v13 = sub_8CAC00(a1 + 208, v7);
    sub_893BD0((unsigned int **)(a1 + 344), &v14);
  }
  while ( v13 );
  return (__int64)sub_8B8D40(a1);
}

