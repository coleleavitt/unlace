__int64 __fastcall sub_E7A630(__int64 a1, __int64 **a2, __int64 **a3)
{
  __int64 v3; // rcx
  __int64 *v4; // r9
  __int64 v5; // rax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rdx

  v3 = *((unsigned int *)a2 + 2);
  v4 = *a2;
  *(_QWORD *)(a1 + 16) = 0xF0000000FLL;
  v5 = *((unsigned int *)a3 + 2);
  v6 = *a3;
  *(_OWORD *)a1 = 0;
  v7 = &v4[2 * v3];
  v8 = &v6[2 * v5];
  if ( v4 != v7 )
  {
    if ( v8 == v6 )
    {
LABEL_16:
      v14 = *v4;
      *(_QWORD *)a1 = *v4;
      if ( v14 )
      {
        switch ( (*(_BYTE *)(v14 + 28) + 119) & 0x7F )
        {
          case 0:
            v10 = 0;
LABEL_48:
            v11 = 4;
            goto LABEL_11;
          case 9:
            v10 = 0;
LABEL_46:
            v11 = 12;
            goto LABEL_11;
          case 0x1A:
          case 0x1B:
          case 0x1D:
            v10 = 0;
LABEL_44:
            v11 = 6;
            goto LABEL_11;
          case 0x1F:
            v10 = 0;
LABEL_42:
            v11 = 9;
            goto LABEL_11;
          case 0x28:
            v10 = 0;
LABEL_40:
            v11 = 5;
            goto LABEL_11;
          case 0x29:
            v10 = 0;
LABEL_38:
            v11 = 13;
            goto LABEL_11;
          case 0x37:
            v10 = 0;
LABEL_36:
            v11 = 8;
            goto LABEL_11;
          case 0x38:
            v10 = 0;
LABEL_34:
            v11 = 7;
            goto LABEL_11;
          case 0x3E:
            v10 = 0;
LABEL_32:
            v11 = 11;
            goto LABEL_11;
          case 0x42:
            *(_DWORD *)(a1 + 16) = 14;
            v12 = 0;
            break;
          case 0x4D:
            v10 = 0;
LABEL_30:
            v11 = 10;
            goto LABEL_11;
          case 0x50:
            *(_DWORD *)(a1 + 16) = dword_23D3A88[(*(_BYTE *)(v14 + 29) >> 5) & 3];
            v12 = 0;
            break;
          default:
            goto LABEL_49;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 16) = 0;
        v12 = 0;
      }
      goto LABEL_14;
    }
    if ( *((_DWORD *)v6 + 2) != *((_DWORD *)v4 + 2) )
    {
LABEL_4:
      v9 = *v4;
      v10 = *v6;
      *(_QWORD *)a1 = *v4;
      *(_QWORD *)(a1 + 8) = v10;
      if ( v9 )
      {
        switch ( (*(_BYTE *)(v9 + 28) + 119) & 0x7F )
        {
          case 0:
            goto LABEL_48;
          case 9:
            goto LABEL_46;
          case 0x1A:
          case 0x1B:
          case 0x1D:
            goto LABEL_44;
          case 0x1F:
            goto LABEL_42;
          case 0x28:
            goto LABEL_40;
          case 0x29:
            goto LABEL_38;
          case 0x37:
            goto LABEL_36;
          case 0x38:
            goto LABEL_34;
          case 0x3E:
            goto LABEL_32;
          case 0x42:
            v11 = 14;
            break;
          case 0x4D:
            goto LABEL_30;
          case 0x50:
            v11 = dword_23D3A88[(*(_BYTE *)(v9 + 29) >> 5) & 3];
            break;
          default:
            v11 = 15;
            break;
        }
      }
      else
      {
        v11 = 0;
      }
LABEL_11:
      *(_DWORD *)(a1 + 16) = v11;
      if ( v10 )
      {
        switch ( (*(_BYTE *)(v10 + 28) + 119) & 0x7F )
        {
          case 0:
            v12 = 4;
            break;
          case 9:
            v12 = 12;
            break;
          case 0x1A:
          case 0x1B:
          case 0x1D:
            v12 = 6;
            break;
          case 0x1F:
            v12 = 9;
            break;
          case 0x28:
            v12 = 5;
            break;
          case 0x29:
            v12 = 13;
            break;
          case 0x37:
            v12 = 8;
            break;
          case 0x38:
            v12 = 7;
            break;
          case 0x3E:
            v12 = 11;
            break;
          case 0x42:
            v12 = 14;
            break;
          case 0x4D:
            v12 = 10;
            break;
          case 0x50:
            v12 = dword_23D3A88[(*(_BYTE *)(v10 + 29) >> 5) & 3];
            break;
          default:
            v12 = 15;
            break;
        }
      }
      else
      {
LABEL_49:
        v12 = 0;
      }
LABEL_14:
      *(_DWORD *)(a1 + 20) = v12;
      return a1;
    }
    while ( 1 )
    {
      v4 += 2;
      v6 += 2;
      if ( v4 == v7 )
        break;
      if ( v8 == v6 )
        goto LABEL_16;
      if ( *((_DWORD *)v4 + 2) != *((_DWORD *)v6 + 2) )
        goto LABEL_4;
    }
  }
  if ( v8 != v6 )
  {
    v10 = *v6;
    v11 = 0;
    *(_QWORD *)(a1 + 8) = *v6;
    goto LABEL_11;
  }
  return a1;
}

