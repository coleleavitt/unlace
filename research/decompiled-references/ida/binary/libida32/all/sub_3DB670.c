__int64 __fastcall sub_3DB670(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int8 a5)
{
  unsigned __int64 v7; // r10
  unsigned int v8; // r11d
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 i; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 result; // rax
  char v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // [rsp+4h] [rbp-44h]
  __int64 v25; // [rsp+14h] [rbp-34h]

  v7 = HIDWORD(a4);
  v8 = a4;
  v10 = a3 & 1;
  v24 = HIDWORD(a4);
  v11 = (a3 - 1) / 2;
  if ( a2 >= v11 )
  {
    result = a1 + 12 * a2;
    if ( (a3 & 1) != 0 )
    {
      HIDWORD(v25) = HIDWORD(a4);
      goto LABEL_19;
    }
    v14 = a2;
    goto LABEL_22;
  }
  for ( i = a2; ; i = v14 )
  {
    v14 = 2 * (i + 1);
    v15 = 24 * (i + 1);
    v16 = a1 + v15 - 12;
    result = a1 + v15;
    v18 = *(_BYTE *)(v16 + 4);
    if ( *(char *)(result + 4) < v18
      || *(char *)(result + 4) <= v18
      && (*(_DWORD *)result < *(_DWORD *)v16
       || *(_DWORD *)v16 >= *(_DWORD *)result && *(_BYTE *)(result + 8) < *(_BYTE *)(v16 + 8)) )
    {
      --v14;
      result = a1 + 12 * v14;
    }
    v13 = a1 + 12 * i;
    *(_QWORD *)v13 = *(_QWORD *)result;
    *(_BYTE *)(v13 + 8) = *(_BYTE *)(result + 8);
    if ( v14 >= v11 )
      break;
  }
  if ( !v10 )
  {
LABEL_22:
    if ( (a3 - 2) / 2 == v14 )
    {
      v20 = v14 + 1;
      v21 = 2 * v20;
      v22 = a1 + 24 * v20;
      *(_QWORD *)result = *(_QWORD *)(v22 - 12);
      *(_BYTE *)(result + 8) = *(_BYTE *)(v22 - 4);
      v14 = v21 - 1;
      result = a1 + 12 * (v21 - 1);
    }
  }
  HIDWORD(v25) = v24;
  v19 = (v14 - 1) / 2;
  if ( v14 > a2 )
  {
    while ( 1 )
    {
      result = a1 + 12 * v19;
      if ( *(char *)(result + 4) >= (char)v7
        && (*(char *)(result + 4) > (char)v7
         || *(_DWORD *)result >= v8 && (v8 < *(_DWORD *)result || *(_BYTE *)(result + 8) >= a5)) )
      {
        break;
      }
      v23 = a1 + 12 * v14;
      *(_QWORD *)v23 = *(_QWORD *)result;
      *(_BYTE *)(v23 + 8) = *(_BYTE *)(result + 8);
      v14 = v19;
      if ( a2 >= v19 )
        goto LABEL_19;
      v19 = (v19 - 1) / 2;
    }
    result = a1 + 12 * v14;
  }
LABEL_19:
  LODWORD(v25) = v8;
  BYTE4(v25) = v7;
  *(_BYTE *)(result + 8) = a5;
  *(_QWORD *)result = v25;
  return result;
}

