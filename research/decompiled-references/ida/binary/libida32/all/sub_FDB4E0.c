__int64 __fastcall sub_FDB4E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int *v6; // r13
  unsigned int *v7; // rbp
  char v8; // r14
  unsigned int v9; // r15d
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  const void *v17; // rax
  _BYTE *v18; // rdi
  size_t v19; // rdx
  size_t v20; // rbp
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx

  v3 = (unsigned int)a2;
  result = sub_20C97B0((unsigned int)a2);
  v6 = (unsigned int *)(result + 4 * v5);
  if ( (unsigned int *)result == v6 )
    return result;
  v7 = (unsigned int *)result;
  v8 = 0;
  while ( 2 )
  {
    v9 = *v7;
    switch ( *v7 )
    {
      case 0x12u:
      case 0x25u:
      case 0x2Fu:
      case 0x40u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x47u:
      case 0x59u:
      case 0x6Au:
        goto LABEL_30;
      case 0x2Au:
      case 0x6Du:
        goto LABEL_24;
      case 0x2Du:
        result = *(unsigned int *)(a1 + 8);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        ++v7;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 45;
        ++*(_DWORD *)(a1 + 8);
        if ( v6 != v7 )
          continue;
        goto LABEL_25;
      case 0x2Eu:
        result = *(unsigned int *)(a1 + 8);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        ++v7;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 46;
        ++*(_DWORD *)(a1 + 8);
        if ( v6 != v7 )
          continue;
        goto LABEL_25;
      case 0x30u:
        result = *(unsigned int *)(a1 + 8);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        ++v7;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 48;
        ++*(_DWORD *)(a1 + 8);
        if ( v6 != v7 )
          continue;
        goto LABEL_25;
      case 0x46u:
        v15 = *(unsigned int *)(a1 + 8);
        if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, v15 + 1, 4);
          v15 = *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v15) = 88;
        v16 = *(unsigned int *)(a1 + 12);
        result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = result;
        if ( result + 1 > v16 )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        ++v7;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 70;
        ++*(_DWORD *)(a1 + 8);
        if ( v6 != v7 )
          continue;
        goto LABEL_25;
      case 0x48u:
      case 0x49u:
      case 0x57u:
      case 0x58u:
        result = *(unsigned int *)(a1 + 8);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        ++v7;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 88;
        ++*(_DWORD *)(a1 + 8);
        if ( v6 != v7 )
          continue;
        goto LABEL_25;
      case 0x5Au:
        result = *(unsigned int *)(a1 + 8);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        ++v7;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 90;
        ++*(_DWORD *)(a1 + 8);
        if ( v6 != v7 )
          continue;
        goto LABEL_25;
      case 0x5Eu:
        result = *(unsigned int *)(a1 + 8);
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          a2 = a1 + 16;
          v3 = a1;
          sub_22134E0(a1, a1 + 16, result + 1, 4);
          result = *(unsigned int *)(a1 + 8);
        }
        ++v7;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 94;
        ++*(_DWORD *)(a1 + 8);
        if ( v6 != v7 )
          continue;
        goto LABEL_25;
      case 0x6Cu:
        result = *(unsigned int *)(a1 + 8);
        if ( !(_DWORD)result )
          goto LABEL_30;
        a2 = (unsigned int)result;
        v10 = *(_DWORD **)a1;
        v11 = 4LL * (unsigned int)result;
        v3 = *(_QWORD *)a1 + v11;
        v12 = v11 >> 2;
        v13 = v11 >> 4;
        if ( !v13 )
        {
          result = *(_QWORD *)a1;
          goto LABEL_18;
        }
        if ( *v10 == 48 )
        {
          result = *(_QWORD *)a1;
          goto LABEL_29;
        }
        result = (__int64)(v10 + 1);
        if ( v10[1] == 48
          || (result = (__int64)(v10 + 2), v10[2] == 48)
          || (result = (__int64)(v10 + 3), v14 = &v10[4 * v13], v10[3] == 48) )
        {
LABEL_29:
          if ( v3 == result )
            goto LABEL_21;
LABEL_30:
          ++v7;
          v8 = 1;
          if ( v6 == v7 )
            goto LABEL_25;
          continue;
        }
        while ( 1 )
        {
          result = (__int64)(v10 + 4);
          if ( v14 == v10 + 4 )
            break;
          if ( v10[4] == 48 )
            goto LABEL_29;
          if ( v10[5] == 48 )
          {
            result = (__int64)(v10 + 5);
            goto LABEL_29;
          }
          if ( v10[6] == 48 )
          {
            result = (__int64)(v10 + 6);
            goto LABEL_29;
          }
          if ( v10[7] == 48 )
          {
            result = (__int64)(v10 + 7);
            goto LABEL_29;
          }
          v10 += 4;
        }
        v12 = (v3 - result) >> 2;
LABEL_18:
        switch ( v12 )
        {
          case 2LL:
            goto LABEL_68;
          case 3LL:
            if ( *(_DWORD *)result == 48 )
              goto LABEL_29;
            result += 4;
LABEL_68:
            if ( *(_DWORD *)result == 48 )
              goto LABEL_29;
            result += 4;
LABEL_70:
            if ( *(_DWORD *)result != 48 )
              break;
            goto LABEL_29;
          case 1LL:
            goto LABEL_70;
        }
LABEL_21:
        result = a2 + 1;
        if ( a2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v22 = a2 + 1;
          a2 = a1 + 16;
          sub_22134E0(a1, a1 + 16, v22, 4);
          result = *(_QWORD *)a1;
          v3 = *(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8);
        }
        *(_DWORD *)v3 = 48;
        ++*(_DWORD *)(a1 + 8);
LABEL_24:
        if ( v6 != ++v7 )
          continue;
LABEL_25:
        if ( !*(_DWORD *)(a1 + 8) && v8 )
        {
          result = 0;
          if ( !*(_DWORD *)(a1 + 12) )
          {
LABEL_77:
            sub_22134E0(a1, a1 + 16, 1, 4);
            result = *(unsigned int *)(a1 + 8);
          }
          *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 103;
          ++*(_DWORD *)(a1 + 8);
        }
        return result;
      default:
        a1 = sub_2259990(v3, a2);
        v17 = (const void *)sub_20C6E30(v9, 52);
        v18 = *(_BYTE **)(a1 + 32);
        v20 = v19;
        v21 = *(_QWORD *)(a1 + 24);
        if ( v20 > v21 - (unsigned __int64)v18 )
        {
          a1 = sub_22581D0(a1, v17, v20);
          v18 = *(_BYTE **)(a1 + 32);
          v21 = *(_QWORD *)(a1 + 24);
        }
        else if ( v20 )
        {
          memcpy(v18, v17, v20);
          v21 = *(_QWORD *)(a1 + 24);
          v18 = (_BYTE *)(v20 + *(_QWORD *)(a1 + 32));
          *(_QWORD *)(a1 + 32) = v18;
        }
        if ( (unsigned __int64)v18 < v21 )
        {
          *(_QWORD *)(a1 + 32) = v18 + 1;
          *v18 = 10;
        }
        else
        {
          sub_2257CD0(a1, 10);
        }
        goto LABEL_77;
    }
  }
}

