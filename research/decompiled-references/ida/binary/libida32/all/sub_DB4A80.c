__int64 __fastcall sub_DB4A80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  _BYTE v10[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v10);
  sub_DFDA50(v2, 48);
  v3 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v4 = sub_DA6400(a1, a2, v3);
  if ( (_BYTE)v4 )
  {
    sub_DFFFB0(v3);
    sub_E00FC0(v3);
    if ( *(_DWORD *)(v3 + 24) )
    {
      v7 = *(_QWORD *)v3;
      v8 = *(_QWORD *)(v3 + 32);
    }
    else
    {
      v6 = sub_CDA220(v3);
      v7 = *(_QWORD *)v3;
      v8 = *(_QWORD *)(v3 + 32);
      if ( *(_BYTE *)(v6 + 60) )
      {
        v9 = v8 + v7 + 72;
        if ( v7 == *(_DWORD *)(v3 + 40) )
          goto LABEL_6;
      }
    }
    v9 = v8 + v7 + 40;
LABEL_6:
    sub_DFF4A0(v9, v10);
  }
  sub_DFF560(v10);
  return v4;
}

