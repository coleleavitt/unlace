__int64 __fastcall sub_5F4920(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  unsigned __int64 v4; // r13
  int v5; // ebx
  __int64 v6; // rbp
  char v7; // al
  __int64 *v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbx
  unsigned __int8 v12; // cl
  unsigned __int64 v13; // rdx
  char v14; // al
  char v15; // al

  if ( (*(_BYTE *)(a2 + 186) & 0x3F) != 0xD )
    return 0;
  v3 = *(_QWORD *)(a2 + 48);
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v3 + 8);
  v5 = 1;
  if ( v4 <= 1 )
  {
LABEL_15:
    if ( (*(_BYTE *)(a2 + 44) & 4) != 0 )
    {
      v8 = *(__int64 **)v3;
      v9 = *(_QWORD *)v3 + 8LL * *(_QWORD *)(v3 + 8);
      if ( v9 != *(_QWORD *)v3 )
      {
        v10 = 0;
        do
        {
          v11 = (_QWORD *)*v8;
          v12 = *(_BYTE *)(*v8 + 187);
          if ( (v12 != 0) != (*(_QWORD *)(*v8 + 40) & 0x8000000000uLL) >> 39 )
          {
            while ( 1 )
            {
              v15 = *((_BYTE *)v11 + 186) & 0xF;
              if ( v15 != 11 && v15 != 12 && v15 != 10 )
                break;
              v11 = (_QWORD *)v11[6];
            }
            set_error_string(0, *v11);
            return set_qerrno(6);
          }
          v13 = v11[13];
          if ( v13 == -1 || v13 < v10 )
          {
            while ( 1 )
            {
              v14 = *((_BYTE *)v11 + 186) & 0xF;
              if ( v14 != 11 && v14 != 12 && v14 != 10 )
                break;
              v11 = (_QWORD *)v11[6];
            }
            set_error_string(0, *v11);
            return set_qerrno(8);
          }
          if ( (*(_QWORD *)(*v8 + 40) & 0x8000000000LL) != 0 )
          {
            v10 = v13 + v12;
            if ( v12 == 0xFF )
              v10 = v11[13];
          }
          else
          {
            v10 = v11[13] + 8LL * (int)sub_5F4860(a1, *v8, 0);
          }
          ++v8;
        }
        while ( (__int64 *)v9 != v8 );
        if ( *(_QWORD *)(a2 + 96) >= (v10 + 7) >> 3 )
          return 0;
        return set_qerrno(9);
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (v5 - 1));
    if ( (unsigned __int8)sub_5EA520(v6, *(_QWORD *)(a1 + 248)) )
      break;
    if ( ++v5 >= v4 )
      goto LABEL_15;
  }
  while ( 1 )
  {
    v7 = *(_BYTE *)(v6 + 186) & 0xF;
    if ( v7 != 11 && v7 != 12 && v7 != 10 )
      break;
    v6 = *(_QWORD *)(v6 + 48);
  }
  set_error_string(0, *(_QWORD *)v6);
  return set_qerrno(1752);
}
