/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000648A0
// Address: 0x00000001000648A0

//----- (00000001000648A0) ----------------------------------------------------
char *__fastcall sub_1000648A0(__int64 **a1, unsigned __int64 *a2, __int64 a3, _QWORD **a4)
{
  char *v5; // rcx
  unsigned __int64 v6; // rax
  __int64 **v7; // r12
  char *v8; // r14
  unsigned __int64 v9; // rcx
  char *v10; // r13
  __int64 *v11; // rax
  __int64 *v12; // rsi

  v5 = (char *)a1[1];
  if ( v5 )
  {
    v6 = *a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v5;
        v9 = *((_QWORD *)v5 + 4);
        if ( v6 >= v9 )
          break;
        v5 = *(char **)v8;
        v7 = (__int64 **)v8;
        if ( !*(_QWORD *)v8 )
          goto LABEL_9;
      }
      if ( v6 <= v9 )
        break;
      v5 = *((char **)v8 + 1);
      if ( !v5 )
      {
        v7 = (__int64 **)(v8 + 8);
        goto LABEL_9;
      }
    }
  }
  else
  {
    v7 = a1 + 1;
    v8 = (char *)(a1 + 1);
LABEL_9:
    v10 = v8;
    v8 = (char *)operator new(0x1D8u);
    *((_QWORD *)v8 + 4) = **a4;
    __bzero(v8 + 40, 432);
    *(_OWORD *)(v8 + 104) = -1;
    *((_QWORD *)v8 + 15) = -1;
    *((_OWORD *)v8 + 9) = 0;
    *((_OWORD *)v8 + 10) = 0;
    *((_DWORD *)v8 + 44) = 0;
    *(_OWORD *)(v8 + 184) = 0;
    *(_OWORD *)(v8 + 200) = 0;
    *((_DWORD *)v8 + 54) = 0;
    *((_OWORD *)v8 + 14) = 0;
    *((_OWORD *)v8 + 15) = 0;
    *((_DWORD *)v8 + 64) = 0;
    *(_OWORD *)(v8 + 264) = 0;
    *(_OWORD *)(v8 + 280) = 0;
    *((_DWORD *)v8 + 74) = 0;
    *((_OWORD *)v8 + 19) = 0;
    *((_OWORD *)v8 + 20) = 0;
    *((_DWORD *)v8 + 84) = 0;
    *(_OWORD *)(v8 + 360) = 0;
    *(_OWORD *)(v8 + 344) = 0;
    *((_DWORD *)v8 + 94) = 0;
    *((_OWORD *)v8 + 25) = 0;
    *((_OWORD *)v8 + 24) = 0;
    *((_DWORD *)v8 + 104) = 0;
    *(_OWORD *)(v8 + 424) = 0;
    *(_OWORD *)(v8 + 440) = 0;
    *((_DWORD *)v8 + 114) = 0;
    *((_QWORD *)v8 + 16) = 0;
    *((_DWORD *)v8 + 34) = 0;
    *(_OWORD *)v8 = 0;
    *((_QWORD *)v8 + 2) = v10;
    *v7 = (__int64 *)v8;
    v11 = (__int64 *)**a1;
    v12 = (__int64 *)v8;
    if ( v11 )
    {
      *a1 = v11;
      v12 = *v7;
    }
    sub_10000C830(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v8;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
