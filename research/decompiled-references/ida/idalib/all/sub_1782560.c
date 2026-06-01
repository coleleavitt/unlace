__int64 __fastcall sub_1782560(unsigned __int8 **a1, int a2, char a3, char a4)
{
  int v5; // r11d
  _BOOL4 v6; // edi
  unsigned __int8 *v7; // rcx
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v13; // [rsp+8h] [rbp-10h] BYREF

  v5 = a2;
  if ( a2 == 2 )
    v5 = **a1;
  v6 = 0;
  if ( !a4 )
    v6 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1[1] + 14) + 232LL) + 15LL) & 0x10) != 0;
  v7 = a1[2];
  *(_QWORD *)v7 = 0;
  *((_DWORD *)v7 + 3) = v6;
  *((_DWORD *)v7 + 2) = 0;
  v8 = a1[1];
  v13 = 0;
  if ( a3 )
  {
    v11 = 0;
    v10 = 0;
  }
  else
  {
    v9 = a1[4];
    v10 = *(_QWORD *)v9;
    v11 = *((unsigned int *)v9 + 2);
  }
  return sub_19B5640(
           *((_QWORD *)v8 + 14),
           *((_DWORD *)v8 + 35),
           0,
           v5,
           2,
           *(_QWORD *)a1[3],
           0,
           (__int64)a1[2],
           v10,
           v11,
           (__int64)a1[5],
           (__int64)&v13,
           0);
}
