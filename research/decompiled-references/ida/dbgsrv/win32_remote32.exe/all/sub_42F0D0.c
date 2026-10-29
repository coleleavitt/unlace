/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F0D0
// Address: 0x0042F0D0

//----- (0042F0D0) --------------------------------------------------------
char __cdecl sub_42F0D0(const char *a1, int a2, unsigned int a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // esi
  char v5; // bl
  LPVOID *v6; // edi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // eax
  unsigned int *v10; // ebx
  int v12; // [esp+14h] [ebp-14h]
  char v13; // [esp+1Bh] [ebp-Dh] BYREF
  int v14; // [esp+24h] [ebp-4h]

  v4 = dword_4B6B40;
  v5 = 0;
  sub_4562D0(dword_4B6B40);
  v14 = 0;
  v6 = (LPVOID *)sub_428030();
  v7 = sub_427180(v6, a1);
  if ( v7 != -1 )
  {
    v8 = *v6;
    v13 = 0;
    v9 = v8[v7];
    v10 = (unsigned int *)(v9 + 16);
    v12 = v9;
    if ( a4 >= *(_DWORD *)(v9 + 20) )
    {
      if ( a4 > *(_DWORD *)(v9 + 20) )
        sub_402900((int)v10, a4, &v13);
    }
    else
    {
      *(_DWORD *)(v9 + 20) = a4;
    }
    sub_464310(*v10, a3, a4);
    sub_427470(v10);
    v5 = 1;
    *(_DWORD *)(v12 + 12) = a2;
    *(_DWORD *)(v12 + 68) = 0;
  }
  v14 = 1;
  sub_4562F0(v4);
  return v5;
}
