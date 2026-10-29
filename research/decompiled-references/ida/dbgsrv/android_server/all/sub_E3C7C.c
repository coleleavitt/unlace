/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3C7C
// Address: 0x00000000000E3C7C

//----- (00000000000E3C7C) ----------------------------------------------------
__int64 __fastcall sub_E3C7C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // x8
  unsigned __int8 *v4; // x22
  unsigned __int8 *v8; // x9
  unsigned __int8 *v9; // x9
  int v10; // t1
  unsigned __int8 *v11; // x23
  __int64 result; // x0
  _QWORD *v13; // x24
  _QWORD *v14; // x8
  __int64 v15; // x9
  _QWORD *v16; // x0

  v4 = *(unsigned __int8 **)a1;
  v3 = *(unsigned __int8 **)(a1 + 8);
  if ( *(unsigned __int8 **)a1 == v3 )
  {
    v8 = *(unsigned __int8 **)a1;
LABEL_12:
    v11 = nullptr;
    v4 = nullptr;
    goto LABEL_13;
  }
  v8 = *(unsigned __int8 **)a1;
  if ( *v4 == 110 )
  {
    v8 = v4 + 1;
    *(_QWORD *)a1 = v4 + 1;
  }
  if ( v8 == v3 || (unsigned int)*v8 - 48 > 9 )
    goto LABEL_12;
  v9 = v8 + 1;
  while ( 1 )
  {
    *(_QWORD *)a1 = v9;
    if ( v3 == v9 )
      break;
    v10 = *v9++;
    if ( (unsigned int)(v10 - 48) >= 0xA )
    {
      v8 = v9 - 1;
      v11 = v8;
      goto LABEL_13;
    }
  }
  v8 = v3;
  v11 = v3;
LABEL_13:
  result = 0;
  if ( v4 != v11 && v8 != v3 )
  {
    if ( *v8 == 69 )
    {
      v13 = *(_QWORD **)(a1 + 4832);
      *(_QWORD *)a1 = v8 + 1;
      v14 = v13 + 1;
      v15 = v13[1];
      if ( (unsigned __int64)(v15 + 48) >= 0xFF0 )
      {
        v16 = (_QWORD *)operator new[](0x1000u);
        v15 = 0;
        *v16 = v13;
        v16[1] = 0;
        v14 = v16 + 1;
        v13 = v16;
        *(_QWORD *)(a1 + 4832) = v16;
      }
      *v14 = v15 + 48;
      *(_QWORD *)((char *)v13 + v15 + 16) = off_161988;
      result = (__int64)v13 + v15 + 16;
      *(_DWORD *)(result + 8) = 16843050;
      *(_QWORD *)(result + 16) = a2;
      *(_QWORD *)(result + 24) = a3;
      *(_QWORD *)(result + 32) = v4;
      *(_QWORD *)(result + 40) = v11;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
// 161988: using guessed type __int64 (__fastcall *off_161988[7])();
