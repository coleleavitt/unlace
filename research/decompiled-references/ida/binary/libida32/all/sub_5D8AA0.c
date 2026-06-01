__int64 __fastcall sub_5D8AA0(__int64 a1, __int64 a2)
{
  __int64 **v4; // r15
  unsigned __int64 v5; // r13
  int v6; // ebx
  __int64 v7; // rbp
  char v8; // al
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // rdx
  char v17; // al
  char v18; // al

  if ( (*(_BYTE *)(a2 + 186) & 0x3F) != 0xD )
    return 0;
  v4 = *(__int64 ***)(a2 + 48);
  if ( v4 )
  {
    v5 = (unsigned __int64)v4[1];
    v6 = 1;
    if ( v5 > 1 )
    {
      while ( 1 )
      {
        v7 = (*v4)[v6 - 1];
        if ( (unsigned __int8)sub_5CE740(v7, *(_QWORD *)(a1 + 240)) )
          break;
        if ( ++v6 >= v5 )
          goto LABEL_15;
      }
      while ( 1 )
      {
        v8 = *(_BYTE *)(v7 + 186) & 0xF;
        if ( v8 != 11 && v8 != 12 && v8 != 10 )
          break;
        v7 = *(_QWORD *)(v7 + 48);
      }
      v9 = *(_QWORD *)v7;
      set_error_string();
      v10 = 1752;
      return set_qerrno(v10, v9);
    }
LABEL_15:
    if ( (*(_BYTE *)(a2 + 44) & 4) != 0 )
    {
      v11 = *v4;
      v12 = (__int64)&(*v4)[(_QWORD)v4[1]];
      if ( (__int64 *)v12 != *v4 )
      {
        v13 = 0;
        do
        {
          v14 = *v11;
          v15 = *(_BYTE *)(*v11 + 187);
          v9 = *(_QWORD *)(*v11 + 40) & 0x8000000000LL;
          if ( (v15 != 0) != (unsigned __int8)(v9 >> 39) )
          {
            while ( 1 )
            {
              v18 = *(_BYTE *)(v14 + 186) & 0xF;
              if ( v18 != 11 && v18 != 12 && v18 != 10 )
                break;
              v14 = *(_QWORD *)(v14 + 48);
            }
            v9 = *(_QWORD *)v14;
            set_error_string();
            v10 = 6;
            return set_qerrno(v10, v9);
          }
          v16 = *(_QWORD *)(v14 + 104);
          if ( v16 == -1 || v16 < v13 )
          {
            while ( 1 )
            {
              v17 = *(_BYTE *)(v14 + 186) & 0xF;
              if ( v17 != 11 && v17 != 12 && v17 != 10 )
                break;
              v14 = *(_QWORD *)(v14 + 48);
            }
            v9 = *(_QWORD *)v14;
            set_error_string();
            v10 = 8;
            return set_qerrno(v10, v9);
          }
          if ( v9 )
          {
            v13 = v16 + v15;
            if ( v15 == 0xFF )
              v13 = *(_QWORD *)(v14 + 104);
          }
          else
          {
            v9 = *v11;
            v13 = *(_QWORD *)(v14 + 104) + 8LL * (int)sub_5D89D0(a1, *v11, 0);
          }
          ++v11;
        }
        while ( (__int64 *)v12 != v11 );
        if ( *(_QWORD *)(a2 + 96) >= (v13 + 7) >> 3 )
          return 0;
        v10 = 9;
        return set_qerrno(v10, v9);
      }
    }
  }
  return 0;
}

