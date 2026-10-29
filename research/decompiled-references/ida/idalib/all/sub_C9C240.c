__int64 __fastcall sub_C9C240(__int64 a1, __int64 a2, __int64 a3, char **a4, char *a5, unsigned int a6)
{
  __int64 result; // rax
  char *v9; // rsi
  int v10; // r10d
  char *v11; // rdx
  int v12; // ecx
  int v13; // ebx
  _BYTE *v14; // rdx
  int v15; // r10d
  __int64 v16; // rdx
  void (*v17)(); // r10
  int v18; // ecx
  _BYTE *v19; // rbx
  int v20; // ebp
  void (*v21)(); // r8
  void (*v22)(); // rcx
  __int16 v23; // dx
  __int64 v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+8h] [rbp-20h]
  __int64 v26; // [rsp+8h] [rbp-20h]

  result = a1;
  v9 = *a4;
  v10 = **a4;
  if ( **a4 == 42 )
  {
    v14 = v9 + 1;
    if ( v9 + 1 == a5 || (v15 = v9[1], (unsigned __int8)(v9[1] - 48) > 9u) )
    {
      v16 = 1;
LABEL_13:
      v17 = *(void (**)())(*(_QWORD *)a2 + 32LL);
      if ( v17 != nullsub_392 )
      {
        v25 = result;
        ((void (__fastcall *)(__int64, char *, __int64, _QWORD))v17)(a2, v9, v16, a6);
        result = v25;
      }
    }
    else
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = v14 + 1;
        v20 = v15 + 10 * v18;
        v18 = v20 - 48;
        if ( a5 == v14 + 1 )
        {
          v16 = (unsigned int)((_DWORD)a5 - (_DWORD)v9);
          goto LABEL_13;
        }
        v15 = (char)v14[1];
        if ( (unsigned __int8)(v14[1] - 48) > 9u )
          break;
        ++v14;
      }
      if ( (_BYTE)v15 == 36 )
      {
        if ( v20 != 48 )
        {
          *(_QWORD *)result = v9;
          *a4 = v14 + 2;
          v23 = *(_WORD *)(result + 20);
          *(_QWORD *)(result + 8) = 0x200000000LL;
          *(_DWORD *)(result + 16) = v20 - 49;
          *(_WORD *)(result + 20) = v23 & 0xFE | 1;
          return result;
        }
        v22 = *(void (**)())(*(_QWORD *)a2 + 40LL);
        if ( v22 != nullsub_393 )
        {
          v26 = result;
          ((void (__fastcall *)(__int64, char *, _QWORD))v22)(a2, v9, (unsigned int)((_DWORD)v19 - (_DWORD)v9 + 1));
          result = v26;
        }
      }
      else
      {
        v21 = *(void (**)())(*(_QWORD *)a2 + 32LL);
        if ( v21 != nullsub_392 )
        {
          v24 = result;
          ((void (__fastcall *)(__int64, char *, signed __int64, _QWORD))v21)(a2, v9, v19 - v9, a6);
          result = v24;
        }
      }
    }
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0x300000000LL;
    *(_DWORD *)(result + 16) = 0;
    *(_WORD *)(result + 20) &= 0xFEu;
  }
  else
  {
    if ( v9 != a5 && (unsigned __int8)(v10 - 48) <= 9u )
    {
      v11 = *a4;
      v12 = 0;
      while ( 1 )
      {
        ++v11;
        v12 = v10 + 10 * v12 - 48;
        if ( a5 == v11 )
          break;
        v10 = *v11;
        if ( (unsigned __int8)(*v11 - 48) > 9u )
        {
          *(_QWORD *)result = v9;
          v13 = (_DWORD)v11 - (_DWORD)v9;
          *(_DWORD *)(result + 12) = 1;
          v9 = v11;
          *(_DWORD *)(result + 8) = v13;
          *(_DWORD *)(result + 16) = v12;
          *(_WORD *)(result + 20) &= 0xFEu;
          goto LABEL_5;
        }
      }
      v9 = a5;
    }
    *(_WORD *)(result + 20) &= 0xFEu;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 16) = 0;
LABEL_5:
    *a4 = v9;
  }
  return result;
}
