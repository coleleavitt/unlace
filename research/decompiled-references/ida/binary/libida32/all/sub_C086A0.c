__int64 __fastcall sub_C086A0(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rsi
  int *v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rbx
  _BYTE *v18; // rax
  _BYTE *v19; // rsi
  signed __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rsi
  _BYTE *src; // [rsp+8h] [rbp-40h]

  v7 = operator new(0x60u);
  v8 = *((_BYTE **)a2 + 4);
  v9 = v7;
  v10 = (__int64)&v8[*((_QWORD *)a2 + 5)];
  *(_QWORD *)(v7 + 32) = v7 + 48;
  sub_BEE040((_QWORD *)(v7 + 32), v8, v10);
  v11 = *((_BYTE **)a2 + 8);
  v12 = *((_QWORD *)a2 + 9);
  *(_QWORD *)(v9 + 64) = v9 + 80;
  sub_BEE040((_QWORD *)(v9 + 64), v11, (__int64)&v11[v12]);
  v13 = *a2;
  v14 = *((_QWORD *)a2 + 3);
  *(_QWORD *)(v9 + 8) = a3;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)v9 = v13;
  *(_QWORD *)(v9 + 24) = 0;
  if ( v14 )
    *(_QWORD *)(v9 + 24) = sub_C086A0(a1, v14, v9, a4);
  v15 = *((int **)a2 + 2);
  v16 = v9;
  if ( v15 )
  {
    while ( 1 )
    {
      v17 = operator new(0x60u);
      v18 = (_BYTE *)(v17 + 48);
      *(_QWORD *)(v17 + 32) = v17 + 48;
      v19 = *((_BYTE **)v15 + 4);
      v20 = *((_QWORD *)v15 + 5);
      if ( &v19[v20] && !v19 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v20 > 0xF )
        break;
      if ( v20 == 1 )
      {
        *(_BYTE *)(v17 + 48) = *v19;
        goto LABEL_9;
      }
      if ( v20 )
        goto LABEL_18;
LABEL_9:
      *(_QWORD *)(v17 + 40) = v20;
      v18[v20] = 0;
      *(_QWORD *)(v17 + 64) = v17 + 80;
      sub_BEE040((_QWORD *)(v17 + 64), *((_BYTE **)v15 + 8), *((_QWORD *)v15 + 8) + *((_QWORD *)v15 + 9));
      v21 = *v15;
      *(_QWORD *)(v17 + 16) = 0;
      *(_QWORD *)(v17 + 24) = 0;
      *(_DWORD *)v17 = v21;
      *(_QWORD *)(v16 + 16) = v17;
      *(_QWORD *)(v17 + 8) = v16;
      v22 = *((_QWORD *)v15 + 3);
      if ( v22 )
      {
        *(_QWORD *)(v17 + 24) = sub_C086A0(a1, v22, v17, a4);
        v15 = *((int **)v15 + 2);
        if ( !v15 )
          return v9;
      }
      else
      {
        v15 = *((int **)v15 + 2);
        if ( !v15 )
          return v9;
      }
      v16 = v17;
    }
    if ( v20 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = *((_BYTE **)v15 + 4);
    v18 = (_BYTE *)operator new(v20 + 1);
    *(_QWORD *)(v17 + 48) = v20;
    v19 = src;
    *(_QWORD *)(v17 + 32) = v18;
LABEL_18:
    memcpy(v18, v19, v20);
    v18 = *(_BYTE **)(v17 + 32);
    goto LABEL_9;
  }
  return v9;
}

