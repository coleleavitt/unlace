/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E78A7
// Address: 0x00000000000E78A7

//----- (00000000000E78A7) ----------------------------------------------------
_BYTE *__fastcall sub_E78A7(char a1, char *a2, char *a3, unsigned __int64 *a4)
{
  char *v5; // rbx
  _QWORD **v6; // rax
  unsigned __int64 v7; // rdx
  _BYTE *result; // rax
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = a3;
  if ( a1 == 80 )
  {
    v6 = (_QWORD **)((unsigned __int64)(a3 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v7 = (unsigned __int64)*v6;
    result = v6 + 1;
  }
  else
  {
    switch ( a1 & 0xF )
    {
      case 0:
      case 4:
      case 0xC:
        v7 = *(_QWORD *)a3;
        result = v5 + 8;
        break;
      case 1:
        result = sub_E7845(a3, v9);
        goto LABEL_6;
      case 2:
        v7 = *(unsigned __int16 *)a3;
        goto LABEL_10;
      case 3:
        v7 = *(unsigned int *)a3;
        goto LABEL_12;
      case 9:
        result = sub_E786B(a3, v9);
LABEL_6:
        v7 = v9[0];
        break;
      case 0xA:
        v7 = *(__int16 *)a3;
LABEL_10:
        result = v5 + 2;
        break;
      case 0xB:
        v7 = *(int *)a3;
LABEL_12:
        result = v5 + 4;
        break;
      default:
        abort();
    }
    if ( v7 )
    {
      if ( (a1 & 0x70) != 0x10 )
        v5 = a2;
      v7 += (unsigned __int64)v5;
      if ( a1 < 0 )
        v7 = *(_QWORD *)v7;
    }
  }
  *a4 = v7;
  return result;
}
