/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140033590
// Address: 0x0000000140033590

//----- (0000000140033590) ----------------------------------------------------
__int64 __fastcall sub_140033590(__int64 a1, char *a2, int a3)
{
  const char **v6; // rax
  unsigned int v7; // ecx
  int v9; // eax
  unsigned __int16 v10; // bx
  __int64 (__fastcall ***v11)(_QWORD, char *); // rcx
  struct _exception *v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  _DWORD *v15; // rsi
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+58h] [rbp+20h] BYREF

  sub_1400333C0((_QWORD *)a1, a2, &v19);
  if ( v19 == 1 || v19 == 2 || v19 == 3 )
  {
    v18 = sub_140033800((_QWORD *)a1, a2, 0, 0);
    if ( !v18 )
      sub_1400347C0(a1, 164);
    return v18;
  }
  if ( v19 == 5 )
  {
    v14 = sub_14002D380(*(_QWORD *)(a1 + 96), a2);
    v15 = (_DWORD *)v14;
    if ( !v14 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(272);
    }
    v16 = *(_DWORD *)(v14 + 20);
    sub_1400347C0(a1, 240);
    sub_1400343E0(a1, v16);
    v17 = sub_140025060(v15, (__int64)(v15 + 6));
    if ( v17 == -1 )
    {
      while ( v15[4] )
      {
        v15 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 64LL) + 8LL * (int)v15[4]);
        v17 = sub_140025060(v15, (__int64)(v15 + 6));
        if ( v17 != -1 )
          goto LABEL_24;
      }
      if ( a3 )
        goto LABEL_27;
    }
    else
    {
LABEL_24:
      if ( !sub_140035470(*(_QWORD **)(a1 + 96), v17, a3 + 1) )
        goto LABEL_27;
    }
    return 0;
  }
  v6 = sub_14002D300(a2);
  if ( !v6 )
  {
    v9 = sub_14002D880(*(_QWORD **)(a1 + 96), a2);
    v10 = v9;
    if ( v9 != -1 )
    {
      if ( sub_140035470(*(_QWORD **)(a1 + 96), v9, a3) )
      {
        sub_140034910(a1, 0x10u, v10);
        return 0;
      }
LABEL_27:
      sub_140063F70(0, a2);
      v7 = 56;
      return sub_1400640B0(v7);
    }
    v11 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 408);
    if ( v11 )
    {
      v12 = (struct _exception *)(**v11)(v11, a2);
      v13 = (unsigned __int64)v12;
      if ( v12 != (struct _exception *)-1LL && (UserMathErrorFunction(v12) & 0x800) != 0 )
      {
        sub_140034550(a1, v13);
        sub_1400347C0(a1, 164);
        return 0;
      }
    }
    sub_140034980(a1, a2, 0);
    sub_1400347C0(a1, 174);
    sub_1400347C0(a1, 164);
    return 0;
  }
  if ( !*(_BYTE *)(a1 + 444) && (*((_BYTE *)v6 + 36) & 4) == 0 )
  {
    sub_140063F70(0, *v6);
    v7 = 143;
    return sub_1400640B0(v7);
  }
  sub_140034910(a1, 0, ((char *)v6 - (_BYTE *)off_1400C6068) / 40);
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
