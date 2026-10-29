/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448C90
// Address: 0x0000000000448C90

//----- (0000000000448C90) ----------------------------------------------------
__int64 __fastcall sub_448C90(char *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r13d
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rsi
  _BYTE *v10; // rax
  char *v11; // rcx
  void *ptr; // [rsp+0h] [rbp-5098h] BYREF
  __int128 v13; // [rsp+8h] [rbp-5090h]
  _BYTE v14[4]; // [rsp+20h] [rbp-5078h] BYREF
  char v15[8228]; // [rsp+24h] [rbp-5074h] BYREF
  __int64 v16; // [rsp+2048h] [rbp-3050h]
  int v17; // [rsp+2054h] [rbp-3044h]
  unsigned __int8 v18[4104]; // [rsp+4060h] [rbp-1038h] BYREF
  unsigned __int64 v19; // [rsp+5068h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  LOBYTE(v3) = sub_480B00(a1);
  v4 = v3;
  if ( !(_BYTE)v3 )
  {
    v18[0] = 0;
    ptr = nullptr;
    v13 = 0;
    while ( 1 )
    {
      v6 = sub_480610(a1);
      v7 = v13;
      v8 = ptr;
      if ( *((_QWORD *)&v13 + 1) < (unsigned __int64)(v13 + 1) )
      {
        ptr = sub_481540((__int64)&ptr, ptr, v13 + 1, 8u);
        v8 = ptr;
        v7 = v13;
      }
      v8[v7] = v6;
      v5 = v13 + 1;
      *(_QWORD *)&v13 = v13 + 1;
      if ( a1 == v6 )
        break;
      *(v6 - 1) = 0;
      if ( sub_480B50(a1) )
      {
        sub_4821A0(v18, a1, 4096);
        v5 = v13;
        break;
      }
    }
    if ( v5 )
    {
      while ( 1 )
      {
        v11 = *((char **)ptr + v5 - 1);
        *(_QWORD *)&v13 = v5 - 1;
        if ( v18[0] )
          sub_480480((char *)v18, 4096, v18, v11, 0);
        else
          sub_4821A0(v18, v11, 4096);
        v16 = 0;
        v17 = 0;
        if ( (unsigned int)sub_4801D0(v18, (__int64)v14, (unsigned __int8)((_QWORD)v13 != 0) << 14) )
          break;
        v10 = sub_480610(v18);
        sub_4821A0(v10, v15, v18 - v10 + 4096);
        sub_480220((__int64)v14);
        v5 = v13;
        if ( !(_QWORD)v13 )
          goto LABEL_7;
      }
      sub_480220((__int64)v14);
    }
    else
    {
LABEL_7:
      sub_4821A0(a1, (char *)v18, a2);
      v4 = 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      j__free(ptr);
    }
  }
  return v4;
}
// 448CBB: variable 'v3' is possibly undefined
