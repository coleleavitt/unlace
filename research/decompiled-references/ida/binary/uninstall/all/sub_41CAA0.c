__int64 __fastcall sub_41CAA0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // r12
  int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // rax
  int v15; // ebp
  _BYTE *v16; // rbx
  int v17; // esi
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int16 v20; // [rsp+Eh] [rbp-2Ah] BYREF
  int v21; // [rsp+10h] [rbp-28h] BYREF
  int v22; // [rsp+14h] [rbp-24h] BYREF

  if ( a3 != 3 )
  {
    sub_458930(a2, 1, a4, "string index");
    return 1;
  }
  v7 = *(_QWORD *)(a4 + 8);
  if ( *(_QWORD *)(v7 + 8) )
  {
    v8 = *(_QWORD *)(v7 + 8);
    v22 = *(_DWORD *)(v7 + 16);
  }
  else
  {
    v8 = sub_47ACD0(v7, &v22);
  }
  v9 = sub_49BD60(v8);
  if ( (unsigned int)sub_49FAC0(a2, *(_QWORD *)(a4 + 16), (unsigned int)(v9 - 1), &v21) )
    return 1;
  v10 = *(_QWORD *)(a4 + 8);
  if ( *(_QWORD *)(v10 + 8) )
  {
    v11 = *(_QWORD *)(v10 + 8);
    v22 = *(_DWORD *)(v10 + 16);
  }
  else
  {
    v11 = sub_47ACD0(v10, &v22);
  }
  v12 = v21;
  if ( v21 >= v9 )
  {
    v12 = v9 - 1;
    v21 = v9 - 1;
  }
  v13 = 0;
  if ( v12 > 0 )
  {
    v14 = sub_49BFA0(v11);
    v15 = v21;
    v16 = (_BYTE *)v14;
    v17 = v21;
    if ( v21 >= 0 )
    {
      do
      {
        LOBYTE(v18) = *v16;
        if ( *v16 <= 0xBFu )
        {
          v18 = (char)v18;
          v20 = (char)v18;
        }
        else
        {
          sub_49BBC0(v16, &v20);
          v18 = v20;
        }
        if ( !(unsigned int)Tcl_UniCharIsWordChar(v18) )
          break;
        --v15;
        v16 = (_BYTE *)sub_49BF10(v16, v11);
      }
      while ( v15 >= 0 );
      v17 = v21;
    }
    v13 = (v15 != v17) + v15;
  }
  v19 = sub_47BD00(v13);
  sub_48AFD0(a2, v19);
  return 0;
}

