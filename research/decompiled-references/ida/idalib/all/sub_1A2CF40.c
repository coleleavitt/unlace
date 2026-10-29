unsigned __int64 __fastcall sub_1A2CF40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r15
  char v7; // r14
  __m128i *v10; // rbp
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdi
  char v14; // r9
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // r8
  __int64 v22; // [rsp+8h] [rbp-40h]

  v6 = a5;
  v7 = a4;
  v10 = *(__m128i **)(a1 + 544);
  if ( a3 )
  {
    v11 = sub_15F2610(a1, 0, a3, a4, a5, a6);
    v12 = *(_QWORD *)(v11 + 1656);
    if ( v12 )
    {
      v13 = *(_QWORD **)(a1 + 248);
    }
    else
    {
      v21 = *(unsigned int *)(v11 + 1544);
      v13 = *(_QWORD **)(a1 + 248);
      if ( (_DWORD)v21 )
      {
        v22 = v11;
        v12 = sub_BC21A0(
                v13,
                0,
                *(_DWORD *)(v11 + 1636),
                *(_QWORD *)(v11 + 1536),
                v21,
                *(unsigned int *)(v11 + 1640),
                (_DWORD *)(*(_QWORD *)(v11 + 1648) & 0xFFFFFFFFFFFFFFFELL));
        *(_QWORD *)(v22 + 1656) = v12;
        v13 = *(_QWORD **)(a1 + 248);
      }
    }
    v14 = v12 != 0;
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 248);
    v14 = 0;
  }
  v15 = sub_B9BAE0(v13, (__int64)v10, a3, a2, v7, v14, v6);
  sub_B94AD0(v10, v15, v16, v17, v18, v19);
  return v15;
}
