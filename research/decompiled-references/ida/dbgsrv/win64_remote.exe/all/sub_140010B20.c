/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140010B20
// Address: 0x0000000140010B20

//----- (0000000140010B20) ----------------------------------------------------
__int64 __fastcall sub_140010B20(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbp
  int *v13; // r8
  int v14; // ecx
  unsigned __int8 *v15; // rdx
  int v16; // ecx
  __int64 v17; // rax

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a1 + 496);
  *(_DWORD *)(v8 + 108) = a2;
  *(_DWORD *)(v8 + 104) = a3;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 16LL))(*(_QWORD *)(a1 + 496)) )
    return 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(a1 + 496);
  v10 = 0;
  if ( *(_QWORD *)(v9 + 24) )
  {
    v11 = a4;
    v12 = 0;
    do
    {
      if ( (*(_BYTE *)(**(_QWORD **)(v9 + 8) - a4 + v11 + 12) & *(_BYTE *)(v9 + 104)) != 0 )
      {
        v13 = (int *)(v12 + *(_QWORD *)(v9 + 16));
        v14 = *v13;
        if ( *v13 == 3 )
        {
          (*((void (__fastcall **)(__int64, __int64, _QWORD))v13 + 2))(v9, v11, *((_QWORD *)v13 + 4));
        }
        else
        {
          v15 = (unsigned __int8 *)(v9 + *((_QWORD *)v13 + 2));
          if ( v14 )
          {
            v16 = v14 - 1;
            if ( v16 )
            {
              if ( v16 == 1 )
                sub_14001AF40((int *)v11, v15, *((_QWORD *)v13 + 3), 0);
            }
            else
            {
              sub_14001AF40((int *)v11, v15, *((_QWORD *)v13 + 3), -1);
            }
          }
          else
          {
            v17 = 0;
            switch ( *((_QWORD *)v13 + 3) )
            {
              case 1LL:
                v17 = *v15;
                break;
              case 2LL:
                v17 = *(unsigned __int16 *)v15;
                break;
              case 4LL:
                v17 = *(unsigned int *)v15;
                break;
              case 8LL:
                v17 = *(_QWORD *)v15;
                break;
            }
            switch ( *((_QWORD *)v13 + 4) )
            {
              case 1LL:
                v17 = (unsigned __int8)v17;
                break;
              case 2LL:
                v17 = (unsigned __int16)v17;
                break;
              case 4LL:
                v17 = (unsigned int)v17;
                break;
            }
            *(_QWORD *)(v11 + 8) = v17;
          }
        }
      }
      ++v10;
      v11 += 32;
      v12 += 40;
    }
    while ( v10 < *(_QWORD *)(v9 + 24) );
  }
  return 1;
}
// 140010BB2: conditional instruction was optimized away because rax.8!=0
// 1400CB61C: using guessed type char byte_1400CB61C;
