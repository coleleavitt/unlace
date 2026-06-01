void __fastcall sub_24EC20(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE *v4; // rdi
  _BYTE *v7; // rsi
  size_t v8; // rdx
  _BYTE *v9; // rax
  __int64 v10; // rcx

  *(_DWORD *)(a1 + 1520) = a2;
  if ( a2 )
  {
    v4 = *(_BYTE **)(a1 + 1536);
    v7 = *(_BYTE **)a3;
    v8 = *(_QWORD *)(a3 + 8);
    v9 = (_BYTE *)(a3 + 16);
    if ( v4 == (_BYTE *)(a1 + 1552) )
    {
      if ( v9 != v7 )
      {
        *(_QWORD *)(a1 + 1536) = v7;
        v4 = (_BYTE *)(a3 + 16);
        *(_QWORD *)(a1 + 1544) = v8;
        *(_QWORD *)(a1 + 1552) = *(_QWORD *)(a3 + 16);
        goto LABEL_17;
      }
    }
    else if ( v9 != v7 )
    {
      *(_QWORD *)(a1 + 1536) = v7;
      v10 = *(_QWORD *)(a1 + 1552);
      *(_QWORD *)(a1 + 1544) = v8;
      *(_QWORD *)(a1 + 1552) = *(_QWORD *)(a3 + 16);
      if ( v4 )
      {
        *(_QWORD *)a3 = v4;
        *(_QWORD *)(a3 + 16) = v10;
        goto LABEL_7;
      }
      v4 = (_BYTE *)(a3 + 16);
LABEL_17:
      *(_QWORD *)a3 = v4;
LABEL_7:
      *(_QWORD *)(a3 + 8) = 0;
      *v4 = 0;
      if ( *(_QWORD *)(a1 + 1528) )
      {
        sub_2BC170();
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 1528))(a1, a2);
      }
      return;
    }
    if ( a3 == a1 + 1536 )
    {
      v4 = v7;
    }
    else
    {
      if ( v8 )
      {
        if ( v8 == 1 )
          *v4 = *v7;
        else
          memcpy(v4, v7, v8);
        v8 = *(_QWORD *)(a3 + 8);
        v4 = *(_BYTE **)(a1 + 1536);
      }
      *(_QWORD *)(a1 + 1544) = v8;
      v4[v8] = 0;
      v4 = *(_BYTE **)a3;
    }
    goto LABEL_7;
  }
}

