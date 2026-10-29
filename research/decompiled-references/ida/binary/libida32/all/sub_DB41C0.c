__int64 __fastcall sub_DB41C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r13
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE *v10; // rax

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DA6400(a1, a2, v4);
  if ( !(_BYTE)v5 )
    return v5;
  sub_DFFFB0(v4);
  sub_E00FC0(v4);
  if ( *(_DWORD *)(v4 + 24) )
  {
    v8 = *(_QWORD *)v4;
    v9 = *(_QWORD *)(v4 + 32);
  }
  else
  {
    v7 = sub_CDA220(v4);
    v8 = *(_QWORD *)v4;
    v9 = *(_QWORD *)(v4 + 32);
    if ( *(_BYTE *)(v7 + 60) && v8 == *(_DWORD *)(v4 + 40) )
    {
      v10 = (_BYTE *)(v9 + v8 + 72);
      goto LABEL_6;
    }
  }
  v10 = (_BYTE *)(v9 + v8 + 40);
LABEL_6:
  *v10 = v3;
  return v5;
}

