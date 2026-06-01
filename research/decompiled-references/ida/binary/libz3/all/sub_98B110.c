int *__fastcall sub_98B110(int *a1, __int64 a2, int *a3)
{
  int *result; // rax
  __int64 v4; // xmm0_8
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // xmm0_8
  int v14; // esi

  result = a1;
  switch ( *((_BYTE *)a3 + 8) )
  {
    case 0:
      if ( *((_BYTE *)a1 + 8) )
      {
        v12 = *a3;
        *(_QWORD *)a2 = *(_QWORD *)a1;
        *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 8);
        *a1 = v12;
        *((_BYTE *)a1 + 8) = 0;
      }
      else
      {
        v6 = *a1;
        *a1 = *a3;
        *a3 = v6;
      }
      break;
    case 1:
      if ( *((_BYTE *)a1 + 8) == 1 )
        goto LABEL_16;
      v7 = *(_QWORD *)a3;
      *(_QWORD *)a2 = *(_QWORD *)a1;
      *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 8);
      *(_QWORD *)a1 = v7;
      *((_BYTE *)a1 + 8) = 1;
      break;
    case 2:
      if ( *((_BYTE *)a1 + 8) == 2 )
        goto LABEL_16;
      v9 = *(_QWORD *)a3;
      *(_QWORD *)a2 = *(_QWORD *)a1;
      *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 8);
      *(_QWORD *)a1 = v9;
      *((_BYTE *)a1 + 8) = 2;
      break;
    case 3:
      if ( *((_BYTE *)a1 + 8) == 3 )
        goto LABEL_16;
      v8 = *(_QWORD *)a3;
      *(_QWORD *)a2 = *(_QWORD *)a1;
      *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 8);
      *(_QWORD *)a1 = v8;
      *((_BYTE *)a1 + 8) = 3;
      break;
    case 4:
      if ( *((_BYTE *)a1 + 8) == 4 )
      {
LABEL_16:
        v11 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a3;
        *(_QWORD *)a3 = v11;
      }
      else
      {
        v10 = *(_QWORD *)a3;
        *(_QWORD *)a2 = *(_QWORD *)a1;
        *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 8);
        *(_QWORD *)a1 = v10;
        *((_BYTE *)a1 + 8) = 4;
      }
      break;
    case 5:
      if ( *((_BYTE *)a1 + 8) == 5 )
      {
        v13 = *(_QWORD *)a1;
        *(_QWORD *)a1 = *(_QWORD *)a3;
        *(_QWORD *)a3 = v13;
      }
      else
      {
        v4 = *(_QWORD *)a3;
        *(_QWORD *)a2 = *(_QWORD *)a1;
        *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 8);
        *((_BYTE *)a1 + 8) = 5;
        *(_QWORD *)a1 = v4;
      }
      break;
    case 6:
      v5 = *a3;
      if ( *((_BYTE *)a1 + 8) == 6 )
      {
        v14 = *a1;
        *a1 = v5;
        *a3 = v14;
      }
      else
      {
        *(_QWORD *)a2 = *(_QWORD *)a1;
        *(_BYTE *)(a2 + 8) = *((_BYTE *)a1 + 8);
        *a1 = v5;
        *((_BYTE *)a1 + 8) = 6;
      }
      break;
  }
  return result;
}

