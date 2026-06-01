__int64 __fastcall sub_DBDBD0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DA8220(a1, a2, v4);
  if ( (_BYTE)v5 )
  {
    v6 = *(_QWORD *)(v4 + 32);
    if ( *(_DWORD *)(v4 + 24)
      || v6 && *(_DWORD *)(v4 + 40) && (sub_E00FC0(v4), sub_DFFFB0(v4), v6 = *(_QWORD *)(v4 + 32), *(_DWORD *)(v4 + 24)) )
    {
      v7 = *(_QWORD *)v4;
    }
    else
    {
      v10 = sub_CDA220(v4);
      v7 = *(_QWORD *)v4;
      if ( *(_BYTE *)(v10 + 60) )
      {
        v11 = *(unsigned int *)(v4 + 40);
        if ( v11 == v7 )
        {
          v8 = (_DWORD *)(v6 + v11 + 72);
          goto LABEL_8;
        }
      }
    }
    v8 = (_DWORD *)(v6 + v7 + 40);
LABEL_8:
    *v8 = v3;
  }
  return v5;
}

