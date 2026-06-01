__int64 __fastcall sub_1A37D70(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx
  bool v5; // r14
  _QWORD *v6; // r13
  int v7; // r12d
  _QWORD *v8; // rbp
  __int64 v9; // r15
  int v10; // edx
  bool v11; // al
  char v12; // [rsp+1h] [rbp-49h]

  v2 = *(unsigned int *)(a2 + 24);
  result = 1;
  if ( (_DWORD)v2 )
  {
    v4 = *(_QWORD **)(a2 + 16);
    if ( *v4 )
    {
      v5 = 0;
      v6 = *(_QWORD **)(a2 + 16);
      v7 = 0;
      v8 = &v4[v2];
      v12 = 0;
      do
      {
        v9 = *v6;
        LOBYTE(v10) = *(_BYTE *)(*v6 + 28LL) & 0x7F;
        if ( (_BYTE)v10 == 71 )
        {
          v9 = *(_QWORD *)(v9 + 48);
          LOBYTE(v10) = *(_BYTE *)(v9 + 28) & 0x7F;
        }
        v10 = (unsigned __int8)v10;
        if ( (unsigned int)(unsigned __int8)v10 - 35 <= 3 )
        {
          v11 = sub_B979F0((_QWORD *)v9);
          v10 = *(_BYTE *)(v9 + 28) & 0x7F;
          if ( v11 )
            v5 = v11;
          else
            v12 = 1;
        }
        if ( (unsigned int)(v10 - 58) >= 0xA )
          v7 = 1;
        ++v6;
      }
      while ( v8 != v6 );
      if ( a1[15] && !v5 && v12 && !*(_QWORD *)(a2 + 8) )
        return 0;
      else
        return v7 | (unsigned int)a1[8];
    }
    else
    {
      result = a1[8];
      if ( !(_BYTE)result )
      {
        result = a1[9];
        if ( !(_BYTE)result )
        {
          result = a1[10];
          if ( !(_BYTE)result )
          {
            result = a1[12];
            if ( !(_BYTE)result )
              return a1[13];
          }
        }
      }
    }
  }
  return result;
}
