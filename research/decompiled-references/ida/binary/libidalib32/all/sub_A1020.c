__int64 __fastcall sub_A1020(__int64 *a1)
{
  int i; // ebx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r15
  __int16 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  for ( i = 0; i < (int)get_segm_qty(); ++i )
  {
    v3 = getnseg();
    if ( v3 )
    {
      v4 = *(_QWORD *)v3;
      v5 = __ROL2__(*(_WORD *)(v3 + 22), 8);
      v6 = a1[1];
      v7 = *a1;
      if ( a1[2] < (unsigned __int64)(v6 + 1) )
      {
        v8 = qvector_reserve();
        *a1 = v8;
        v7 = v8;
        v6 = a1[1];
      }
      v2 = (v6 << 6) + v7;
      *(_QWORD *)v2 = v4;
      *(_QWORD *)(v2 + 8) = 0;
      *(_QWORD *)(v2 + 32) = 0;
      *(_DWORD *)(v2 + 56) = 0;
      *(_WORD *)(v2 + 60) = v5;
      *(_OWORD *)(v2 + 16) = 0;
      *(_OWORD *)(v2 + 40) = 0;
      ++a1[1];
    }
  }
  return 1;
}

