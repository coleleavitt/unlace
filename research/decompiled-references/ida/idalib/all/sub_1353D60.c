__int64 __fastcall sub_1353D60(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rsi
  int *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rbx
  _BYTE *v16; // rax
  _BYTE *v17; // rsi
  signed __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rsi
  _BYTE *src; // [rsp+8h] [rbp-40h]

  v7 = operator new(0x40u);
  v8 = *((_BYTE **)a2 + 4);
  v9 = v7;
  v10 = (__int64)&v8[*((_QWORD *)a2 + 5)];
  *(_QWORD *)(v7 + 32) = v7 + 48;
  sub_12FAA20((_QWORD *)(v7 + 32), v8, v10);
  v11 = *a2;
  v12 = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v9 + 8) = a3;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)v9 = v11;
  *(_QWORD *)(v9 + 24) = 0;
  if ( v12 )
    *(_QWORD *)(v9 + 24) = sub_1353D60(a1, v12, v9, a4);
  v13 = *((int **)a2 + 2);
  v14 = v9;
  if ( v13 )
  {
    while ( 1 )
    {
      v15 = operator new(0x40u);
      v16 = (_BYTE *)(v15 + 48);
      *(_QWORD *)(v15 + 32) = v15 + 48;
      v17 = *((_BYTE **)v13 + 4);
      v18 = *((_QWORD *)v13 + 5);
      if ( &v17[v18] && !v17 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v18 > 0xF )
        break;
      if ( v18 == 1 )
      {
        *(_BYTE *)(v15 + 48) = *v17;
        goto LABEL_9;
      }
      if ( v18 )
        goto LABEL_18;
LABEL_9:
      *(_QWORD *)(v15 + 40) = v18;
      v16[v18] = 0;
      v19 = *v13;
      *(_QWORD *)(v15 + 16) = 0;
      *(_DWORD *)v15 = v19;
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v14 + 16) = v15;
      *(_QWORD *)(v15 + 8) = v14;
      v20 = *((_QWORD *)v13 + 3);
      if ( v20 )
      {
        *(_QWORD *)(v15 + 24) = sub_1353D60(a1, v20, v15, a4);
        v13 = *((int **)v13 + 2);
        if ( !v13 )
          return v9;
      }
      else
      {
        v13 = *((int **)v13 + 2);
        if ( !v13 )
          return v9;
      }
      v14 = v15;
    }
    if ( v18 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = *((_BYTE **)v13 + 4);
    v16 = (_BYTE *)operator new(v18 + 1);
    *(_QWORD *)(v15 + 48) = v18;
    v17 = src;
    *(_QWORD *)(v15 + 32) = v16;
LABEL_18:
    memcpy(v16, v17, v18);
    v16 = *(_BYTE **)(v15 + 32);
    goto LABEL_9;
  }
  return v9;
}
