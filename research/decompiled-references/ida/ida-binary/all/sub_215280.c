unsigned __int64 __fastcall sub_215280(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // ebp
  int v4; // eax
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  v2 = dbg;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  LODWORD(v2) = *(_DWORD *)(v2 + 64);
  v3 = v2 + 14;
  v4 = v2 + 7;
  if ( v4 >= 0 )
    v3 = v4;
  v5 = v3 >> 3;
  if ( v5 )
  {
    v6 = qvector_reserve(a1, 0, v5, 1);
    *(_QWORD *)a1 = v6;
    v7 = v6;
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 < v5 )
    {
      *(_BYTE *)(v7 + v8) = 0;
      v9 = v8 + 1;
      if ( v9 < v5 )
      {
        do
          *(_BYTE *)(*(_QWORD *)a1 + v9++) = 0;
        while ( v5 != v9 );
      }
    }
    *(_QWORD *)(a1 + 8) = v5;
    v5 = *(_QWORD *)(a1 + 40);
  }
  if ( v5 < a2 )
    *(_QWORD *)(a1 + 24) = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), a2, 32);
  return sub_20CF60((_QWORD *)a1);
}
