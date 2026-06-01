// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_1AF3B60(__int64 *a1, unsigned int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx

  v5 = a1[1];
  v6 = *(unsigned int *)(v5 + 344);
  switch ( a2 )
  {
    case 2u:
    case 4u:
    case 0xBu:
    case 0x27u:
    case 0x2Au:
    case 0x3Eu:
    case 0x41u:
    case 0x45u:
    case 0x66u:
    case 0x68u:
    case 0x6Du:
      break;
    default:
      if ( (_DWORD)v6 )
      {
        v7 = *(_QWORD *)(v5 + 336) + 6776 * v6 - 6776;
        LODWORD(v6) = 0;
        if ( *(_QWORD *)(v7 + 6768) == *(_QWORD *)(v5 + 328) )
        {
          v8 = *(unsigned int *)(v7 + 8);
          v9 = *(unsigned int *)(v5 + 27504);
          if ( (unsigned int)v8 > (unsigned int)v9 )
          {
            v10 = v8 - v9;
            if ( v10 )
            {
              v11 = *(_QWORD *)v7 + 1688 * (v10 - 1);
              if ( v11 )
                LODWORD(v6) = *(_DWORD *)(v11 + 1024);
            }
          }
        }
      }
      sub_1AEEDB0(*a1, a2, a3, v6);
      v5 = a1[1];
      v6 = *(unsigned int *)(v5 + 344);
      break;
  }
  if ( !(_DWORD)v6
    || (v12 = *(_QWORD *)(v5 + 336) + 6776 * v6 - 6776, *(_QWORD *)(v12 + 6768) != *(_QWORD *)(v5 + 328))
    || (v13 = *(unsigned int *)(v12 + 8), v14 = *(unsigned int *)(v5 + 27504), (unsigned int)v13 <= (unsigned int)v14)
    || (v15 = v13 - v14) == 0 )
  {
    elf_gnu_hash_indexes[42] = *(_QWORD *)(*a1 + 544);
    BUG();
  }
  *(_QWORD *)(*(_QWORD *)v12 + 1688 * (v15 - 1) + 1016) = *(_QWORD *)(*a1 + 544);
  sub_1AEBC50(a1[1], a2, 1);
}
