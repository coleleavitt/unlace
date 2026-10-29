__int64 __fastcall sub_832A70(__int64 *a1, unsigned int a2, int a3, int a4, __int64 a5, int *a6)
{
  __int64 result; // rax
  __int64 v10; // r14
  unsigned int *v11; // r12
  unsigned int *v12; // rax
  int v13; // r8d
  int v14; // r9d
  unsigned int *v15; // rbx
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned int *v18; // rax
  void *v19; // [rsp+0h] [rbp-58h]
  _QWORD v21[8]; // [rsp+18h] [rbp-40h] BYREF

  result = sub_FF9FF0(a1[62]);
  v10 = result;
  if ( a4 == 2 )
  {
    result = sub_832560(a1, a2, a3, a6, 1);
    if ( (_BYTE)result )
    {
      result = sub_82A030(a1, a2, v21, (__int64)a6, 0);
      if ( (_BYTE)result )
      {
        v11 = (unsigned int *)v21[0];
        v12 = (unsigned int *)sub_180C100(*(_QWORD *)(v10 + 56), 8);
        *v12 = 0x80000000;
        v15 = v12;
        v12[1] = a3;
        if ( v11 == v12 || !v11 )
          return sub_888AD0((int)a1, *(_DWORD *)(a5 + 12), (int)v15, (int)a6, v13, v14, v19);
LABEL_8:
        v16 = sub_180C100(*(_QWORD *)(v10 + 56), 24);
        v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v11);
        *v15 = (*v15 + 1) & 0x3FFFFFFF | *v15 & 0xC0000000;
        LODWORD(v15) = v16;
        *v11 = (*v11 + 1) & 0x3FFFFFFF | *v11 & 0xC0000000;
        *(_QWORD *)v16 = 0;
        *(__m128i *)(v16 + 8) = v17;
        return sub_888AD0((int)a1, *(_DWORD *)(a5 + 12), (int)v15, (int)a6, v13, v14, v19);
      }
    }
  }
  else if ( a4 == -2 )
  {
    result = sub_832560(a1, a2, a3, a6, 0);
    if ( (_BYTE)result )
    {
      result = sub_82A030(a1, a2, v21, (__int64)a6, 1);
      if ( (_BYTE)result )
      {
        v11 = (unsigned int *)v21[0];
        v18 = (unsigned int *)sub_180C100(*(_QWORD *)(v10 + 56), 8);
        *v18 = 0x80000000;
        v15 = v18;
        v18[1] = a3;
        if ( !v11 || v11 == v18 )
          return sub_888AD0((int)a1, *(_DWORD *)(a5 + 12), (int)v15, (int)a6, v13, v14, v19);
        goto LABEL_8;
      }
    }
  }
  return result;
}

