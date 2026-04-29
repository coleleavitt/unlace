__int64 __fastcall sub_3C7260(__int64 a1, unsigned __int64 a2)
{
  __m128i *v2; // r13
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  int v10; // ebp
  int v11; // r14d
  _QWORD *v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (__m128i *)(a1 + 72);
  v17 = a2;
  v18[1] = (_QWORD *)__readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 72);
  if ( v4 )
  {
    v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v5 )
    {
LABEL_21:
      v10 = -1;
      sub_2B11F0((__int64)"bad ctree - duplicate nodes!");
      return (unsigned int)v10;
    }
LABEL_3:
    if ( (*(_BYTE *)v5 & 2) == 0 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 24);
        if ( a2 < v6 )
        {
          v5 = *(_QWORD *)(v5 + 8);
          goto LABEL_3;
        }
        if ( v6 >= a2 )
          break;
        v5 = *(_QWORD *)(v5 + 16);
        if ( (*(_BYTE *)v5 & 2) != 0 )
          goto LABEL_7;
      }
      if ( v4 != (_QWORD *)v5 )
        goto LABEL_21;
    }
  }
LABEL_7:
  v7 = *(_DWORD **)(a1 + 64);
  v8 = *(_QWORD *)v7;
  v9 = *(__int64 (**)(void))(*(_QWORD *)v7 + 56LL);
  if ( (char *)v9 == (char *)sub_61600 )
  {
    v10 = v7[14];
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 64);
    v10 = v9();
    v8 = *(_QWORD *)v7;
  }
  v11 = v10 + 1;
  (*(void (__fastcall **)(_DWORD *, _QWORD))(v8 + 168))(v7, (unsigned int)(v10 + 1));
  v12 = *(_QWORD **)(a1 + 64);
  v13 = v12[24];
  if ( v13 >= v10 )
  {
    if ( v13 < v11 )
    {
      v15 = v12[23];
      if ( v12[25] < (unsigned __int64)v11 )
      {
        v16 = qvector_reserve(v12 + 23, v15, v11, 8);
        v13 = v12[24];
        v12[23] = v16;
        v15 = v16;
      }
      memset((void *)(v15 + 8 * v13), 0, 8 * (v11 - v13));
      v12[24] = v11;
      v12 = *(_QWORD **)(a1 + 64);
    }
    else if ( v11 != v13 )
    {
      v12[24] = v11;
      v12 = *(_QWORD **)(a1 + 64);
    }
  }
  *(_QWORD *)(v12[23] + 8LL * v10) = v17;
  v18[0] = &v17;
  *(_DWORD *)(sub_3C6FA0(v2, &v17, v18) + 32) = v10;
  return (unsigned int)v10;
}
