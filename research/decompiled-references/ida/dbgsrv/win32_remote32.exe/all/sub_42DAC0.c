/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DAC0
// Address: 0x0042DAC0

//----- (0042DAC0) --------------------------------------------------------
void __usercall sub_42DAC0(int a1@<ebx>, __m128i a2@<xmm0>, _DWORD *a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ecx
  LPVOID v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  unsigned int v15; // edi
  int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // [esp-8h] [ebp-34h]
  void *v19; // [esp-4h] [ebp-30h]
  void *v20; // [esp+10h] [ebp-1Ch] BYREF
  int v21; // [esp+14h] [ebp-18h]
  int v22; // [esp+18h] [ebp-14h]
  unsigned int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+28h] [ebp-4h]

  v6 = a6;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 )
    {
      v19 = *(void **)a6;
      *(_DWORD *)(a6 + 4) = 0;
      sub_453A20(v19);
      *(_DWORD *)v6 = 0;
      *(_DWORD *)(v6 + 8) = 0;
    }
    v7 = a4;
    if ( a4 == -1 )
      v7 = sub_45C9E0();
    if ( v7 )
    {
      v8 = sub_438530(a3, &a6, nullptr, 0);
      v9 = a6;
      if ( a6 != -1 )
      {
        if ( v8 )
        {
          sub_402970(a2, (LPVOID *)v6, (char *)&dword_489384, v8);
          v9 = a6;
        }
        if ( v9 )
        {
          if ( *(_DWORD *)(v6 + 4) <= 1u )
          {
            v10 = v9 - 1;
            a6 = v10;
          }
          else
          {
            sub_4042E0(v6, 44);
            v10 = a6;
          }
          sub_41F840(a2, v6, "%d", v10);
        }
        v11 = *(_DWORD *)(v6 + 4);
        v23 = v11;
        if ( v11 > 1 )
        {
          a1 = v11 + 2;
          if ( v11 + 2 > *(_DWORD *)(v6 + 8) )
          {
            v12 = sub_453B00(v6, *(void **)v6, v11 + 2, 1u);
            v11 = v23;
            *(_DWORD *)v6 = v12;
          }
          *(_DWORD *)(v6 + 4) = a1;
          strcpy((char *)(v11 + *(_DWORD *)v6 - 1), ": ");
        }
      }
      if ( v7 == 47 )
      {
        v20 = nullptr;
        v21 = 0;
        v22 = 0;
        v24 = 0;
        v13 = sub_4387B0(a2, (int)&v20, a5);
        sub_45CB10(0, v13);
        v24 = 1;
        if ( v20 )
        {
          v21 = 0;
          sub_453A20(v20);
          v20 = nullptr;
          v22 = 0;
        }
        v24 = -1;
      }
      v14 = sub_45D760(a1, a2, v7);
      v23 = (unsigned int)v14;
      if ( v14 )
      {
        v15 = strlen(v14);
        v16 = *(_DWORD *)(v6 + 4) != 0 ? *(_DWORD *)(v6 + 4) - 1 : 0;
        v17 = v15 + v16 + 1;
        if ( v17 > *(_DWORD *)(v6 + 8) )
        {
          *(_DWORD *)v6 = sub_453B00(v6, *(void **)v6, v15 + v16 + 1, 1u);
          v17 = v15 + v16 + 1;
        }
        *(_DWORD *)(v6 + 4) = v17;
        v18 = v23;
        *(_BYTE *)(v16 + *(_DWORD *)v6 + v15) = 0;
        sub_464310(v16 + *(_DWORD *)v6, v18, v15);
      }
    }
  }
}
// 489384: using guessed type int dword_489384;
