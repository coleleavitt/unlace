/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9080
// Address: 0x000D9080

//----- (000D9080) --------------------------------------------------------
_BYTE *__usercall sub_D9080@<eax>(char a1@<al>, _BYTE *a2@<edx>, _BYTE *a3, _DWORD *a4)
{
  _DWORD **v4; // eax
  _DWORD *v5; // edx
  _BYTE *result; // eax
  _DWORD v9[7]; // [esp+10h] [ebp-1Ch] BYREF

  if ( a1 == 80 )
  {
    v4 = (_DWORD **)((unsigned int)(a3 + 3) & 0xFFFFFFFC);
    v5 = *v4;
    result = v4 + 1;
  }
  else
  {
    switch ( a1 & 0xF )
    {
      case 0:
      case 3:
      case 0xB:
        v5 = *(_DWORD **)a3;
        result = a3 + 4;
        break;
      case 1:
        result = sub_D9016(a3, v9);
        goto LABEL_6;
      case 2:
        v5 = (_DWORD *)*(unsigned __int16 *)a3;
        goto LABEL_9;
      case 4:
      case 0xC:
        v5 = *(_DWORD **)a3;
        result = a3 + 8;
        break;
      case 9:
        result = sub_D9041(a3, v9);
LABEL_6:
        v5 = (_DWORD *)v9[0];
        break;
      case 0xA:
        v5 = (_DWORD *)*(__int16 *)a3;
LABEL_9:
        result = a3 + 2;
        break;
      default:
        abort();
        return result;
    }
    if ( v5 )
    {
      if ( (a1 & 0x70) == 0x10 )
        a2 = a3;
      v5 = (_DWORD *)((char *)v5 + (_DWORD)a2);
      if ( a1 < 0 )
        v5 = (_DWORD *)*v5;
    }
  }
  *a4 = v5;
  return result;
}
