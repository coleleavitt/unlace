__int64 __fastcall sub_DAB620(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const __m128i *v11; // r12
  _QWORD v12[3]; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+18h] [rbp-40h]
  __int64 v14; // [rsp+20h] [rbp-38h]
  unsigned int v15; // [rsp+28h] [rbp-30h]

  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DA8420(a1, a2, v4, 0);
  if ( !(_BYTE)v5 )
    return v5;
  v7 = *(_QWORD *)(a1 + 176);
  sub_CDA6F0((__int64)v12, v4, a3);
  if ( v13 )
  {
    v9 = v12[0];
    v10 = v14;
  }
  else
  {
    v8 = sub_CDA220((__int64)v12);
    v9 = v12[0];
    v10 = v14;
    if ( *(_BYTE *)(v8 + 60) )
    {
      v11 = (const __m128i *)(v14 + v15 + 72);
      if ( v15 == v12[0] )
        goto LABEL_6;
    }
  }
  v11 = (const __m128i *)(v10 + v9 + 40);
LABEL_6:
  *(__m128i *)sub_DFD980(v7, 16) = _mm_loadu_si128(v11);
  sub_DFF560(v12);
  return v5;
}

