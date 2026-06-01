__int64 __fastcall sub_1022230(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rbx
  __int64 v11; // rsi
  __int64 v13; // rdx
  int v14; // r10d
  __int64 v16; // rdx
  __int64 v17; // rbx
  _BYTE *v19; // r12
  _BYTE *v20; // rax
  unsigned __int64 v21; // rsi
  int v22; // ebx
  unsigned __int64 v23; // rdx
  __int64 *v24; // [rsp+8h] [rbp-470h]
  unsigned __int64 v25; // [rsp+8h] [rbp-470h]
  __int64 *v26; // [rsp+10h] [rbp-468h]
  __int64 v27; // [rsp+28h] [rbp-450h] BYREF
  void *ptr; // [rsp+30h] [rbp-448h] BYREF
  __int64 v29; // [rsp+38h] [rbp-440h]
  _DWORD v30[270]; // [rsp+40h] [rbp-438h] BYREF

  v30[0] = 0;
  ptr = v30;
  v29 = 0x10000000001LL;
  v9 = a7 + a8;
  if ( a8 <= 8 )
  {
    v10 = (_BYTE *)a7;
    v16 = 1;
    v11 = 1;
    if ( v9 <= a7 )
      goto LABEL_13;
LABEL_19:
    while ( 1 )
    {
      v16 = v11;
      v19 = v10 + 1;
      if ( *v10 == 10 )
        break;
      if ( *v10 == 13 )
      {
        if ( v9 > (unsigned __int64)v19 && v10[1] == 10 )
        {
          v20 = v10 + 2;
          LODWORD(v10) = (_DWORD)v10 + 1;
          v19 = v20;
        }
        v21 = v11 + 1;
        v22 = (_DWORD)v10 - a7 + 1;
        if ( v21 <= HIDWORD(v29) )
          goto LABEL_25;
        v24 = a1;
        v23 = v21;
LABEL_29:
        sub_2237220(&ptr, v30, v23, 4);
        v16 = (unsigned int)v29;
        a1 = v24;
        goto LABEL_25;
      }
LABEL_18:
      v10 = v19;
      if ( v9 <= (unsigned __int64)v19 )
        goto LABEL_13;
    }
    v22 = (_DWORD)v10 - a7 + 1;
    if ( v11 + 1 > (unsigned __int64)HIDWORD(v29) )
    {
      v24 = a1;
      v23 = v11 + 1;
      goto LABEL_29;
    }
LABEL_25:
    *((_DWORD *)ptr + v16) = v22;
    v16 = (unsigned int)(v29 + 1);
    v11 = v16;
    LODWORD(v29) = v29 + 1;
    goto LABEL_18;
  }
  a6 = v9 - 9;
  v10 = (_BYTE *)a7;
  v11 = 1;
  a5 = 0xF1F1F1F1F1F1F1F2LL;
  do
  {
    while ( ((*(_QWORD *)v10 & 0x7F7F7F7F7F7F7F7FLL) + 0x7676767676767676LL)
          & ~*(_QWORD *)v10
          & (*(_QWORD *)v10 - 0xE0E0E0E0E0E0E0ELL)
          & 0x8080808080808080LL )
    {
      __asm { tzcnt   rcx, rcx }
      LODWORD(_RCX) = _RCX - 7;
      v13 = *(_QWORD *)v10 >> _RCX;
      v10 += ((unsigned int)_RCX >> 3) + 1;
      if ( (_BYTE)v13 == 10 )
        goto LABEL_6;
      if ( (_BYTE)v13 == 13 )
      {
        v10 += *v10 == 10;
LABEL_6:
        v14 = (_DWORD)v10 - a7;
        if ( v11 + 1 > (unsigned __int64)HIDWORD(v29) )
        {
          v26 = a1;
          v25 = a6;
          sub_2237220(&ptr, v30, v11 + 1, 4);
          v11 = (unsigned int)v29;
          v14 = (_DWORD)v10 - a7;
          a5 = 0xF1F1F1F1F1F1F1F2LL;
          a1 = v26;
          a6 = v25;
        }
        *((_DWORD *)ptr + v11) = v14;
        v11 = (unsigned int)(v29 + 1);
        LODWORD(v29) = v29 + 1;
      }
      if ( (unsigned __int64)v10 >= a6 )
        goto LABEL_12;
    }
    v10 += 8;
  }
  while ( (unsigned __int64)v10 < a6 );
LABEL_12:
  v16 = (unsigned int)v11;
  if ( v9 > (unsigned __int64)v10 )
    goto LABEL_19;
LABEL_13:
  sub_10221A0(&v27, ptr, v16, a1, a5, a6);
  v17 = v27;
  if ( ptr != v30 )
    free(ptr);
  return v17;
}
