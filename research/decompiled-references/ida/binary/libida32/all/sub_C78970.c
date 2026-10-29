__int64 __fastcall sub_C78970(__int64 *a1, __int64 a2, _QWORD *a3, _BYTE *a4, __int64 a5)
{
  __int64 result; // rax
  _BYTE *v6; // r8
  _BYTE *v7; // rax
  _BYTE *v8; // r9
  char v9; // bp
  int v10; // r11d
  int v11; // r10d
  int v12; // r9d
  void (*v13)(); // rax
  __int64 v14; // rax
  void (*v15)(); // rax

  result = 0;
  if ( (*(_BYTE *)(a5 + 47) & 0x20) != 0 )
  {
    v6 = (_BYTE *)*a3;
    if ( *(_BYTE *)*a3 == 118 )
    {
      v7 = v6 + 1;
      *a3 = v6 + 1;
      if ( v6 + 1 == a4 )
      {
        v13 = *(void (**)())(*a1 + 48);
        if ( v13 != nullsub_373 )
          ((void (__fastcall *)(__int64 *, _BYTE *, __int64))v13)(a1, v6, 1);
      }
      else
      {
        v8 = v6 + 1;
        v9 = 0;
        v10 = 0;
        while ( 1 )
        {
          v11 = (char)*v8;
          if ( (unsigned __int8)(*v8 - 48) > 9u )
            break;
          ++v8;
          v9 = 1;
          v10 = v11 + 10 * v10 - 48;
          if ( a4 == v8 )
            goto LABEL_13;
        }
        if ( v9 )
        {
          *a3 = v8;
          v12 = (_DWORD)v8 - (_DWORD)v7;
          *(_QWORD *)(a2 + 72) = v7;
          *(_DWORD *)(a2 + 80) = v12;
          *(_DWORD *)(a2 + 84) = 1;
          *(_DWORD *)(a2 + 88) = v10;
          *(_WORD *)(a2 + 92) &= 0xFEu;
          return 0;
        }
LABEL_13:
        v14 = *a1;
        *a3 = v8;
        v15 = *(void (**)())(v14 + 48);
        if ( v15 != nullsub_373 )
          ((void (__fastcall *)(__int64 *, _BYTE *, _QWORD))v15)(a1, v6, (unsigned int)((_DWORD)a4 - (_DWORD)v6));
      }
      return 1;
    }
  }
  return result;
}

