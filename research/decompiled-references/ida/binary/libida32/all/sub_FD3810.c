__int64 __fastcall sub_FD3810(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _BYTE *v4; // rax

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 32);
  switch ( *a2 )
  {
    case 0:
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v3) > 5 )
      {
        *(_DWORD *)v3 = 1868783981;
        *(_WORD *)(v3 + 4) = 30835;
        *(_QWORD *)(a1 + 32) += 6LL;
      }
      else
      {
        sub_22581D0(a1, "macosx", 6);
      }
      break;
    case 1:
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v3) > 0xD )
      {
        qmemcpy((void *)v3, "macosx-fragile", 14);
        *(_QWORD *)(a1 + 32) += 14LL;
      }
      else
      {
        sub_22581D0(a1, "macosx-fragile", 14);
      }
      break;
    case 2:
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v3) > 2 )
      {
        *(_BYTE *)(v3 + 2) = 115;
        *(_WORD *)v3 = 28521;
        *(_QWORD *)(a1 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(a1, "ios", 3);
      }
      break;
    case 3:
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v3) > 6 )
      {
        *(_DWORD *)v3 = 1668571511;
        *(_WORD *)(v3 + 4) = 28520;
        *(_BYTE *)(v3 + 6) = 115;
        *(_QWORD *)(a1 + 32) += 7LL;
      }
      else
      {
        sub_22581D0(a1, "watchos", 7);
      }
      break;
    case 4:
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v3) > 2 )
      {
        *(_BYTE *)(v3 + 2) = 99;
        *(_WORD *)v3 = 25447;
        *(_QWORD *)(a1 + 32) += 3LL;
      }
      else
      {
        sub_22581D0(a1, "gcc", 3);
      }
      break;
    case 5:
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v3) > 6 )
      {
        *(_DWORD *)v3 = 1937075815;
        *(_WORD *)(v3 + 4) = 25972;
        *(_BYTE *)(v3 + 6) = 112;
        *(_QWORD *)(a1 + 32) += 7LL;
      }
      else
      {
        sub_22581D0(a1, "gnustep", 7);
      }
      break;
    case 6:
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v3) > 4 )
      {
        *(_DWORD *)v3 = 1718248047;
        *(_BYTE *)(v3 + 4) = 119;
        *(_QWORD *)(a1 + 32) += 5LL;
      }
      else
      {
        sub_22581D0(a1, "objfw", 5);
      }
      break;
    default:
      break;
  }
  if ( a2[1] || (a2[2] & 0x7FFFFFFF) != 0 || ((a2[4] | a2[3]) & 0x7FFFFFFF) != 0 )
  {
    v4 = *(_BYTE **)(a1 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 24) )
    {
      a1 = sub_2257CD0(a1, 45);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v4 + 1;
      *v4 = 45;
    }
    sub_22339D0(a1, a2 + 1);
  }
  return v2;
}

