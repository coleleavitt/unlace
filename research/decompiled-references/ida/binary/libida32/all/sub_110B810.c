void __fastcall sub_110B810(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  signed __int64 v4; // rax
  __int64 v5; // r15
  void *v6; // r14
  size_t v7; // r15
  void *v8; // r12
  size_t v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rax
  _QWORD *v15; // rax
  _BYTE *v16; // rdi
  size_t v17; // rdx
  void *v18[2]; // [rsp+8h] [rbp-58h] BYREF
  _OWORD v19[4]; // [rsp+18h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v2 = a1 + 32;
    if ( a2 != a1 + 32 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *(void **)(v2 + 8);
          v7 = *(_QWORD *)(a1 + 8);
          v8 = *(void **)v2;
          v9 = v7;
          if ( (unsigned __int64)v6 <= v7 )
            v9 = *(_QWORD *)(v2 + 8);
          if ( !v9 || (LODWORD(v4) = memcmp(*(const void **)v2, *(const void **)a1, v9), !(_DWORD)v4) )
          {
            v4 = (signed __int64)v6 - v7;
            if ( (__int64)((__int64)v6 - v7) > 0x7FFFFFFF )
              goto LABEL_6;
            if ( v4 < (__int64)0xFFFFFFFF80000000LL )
              break;
          }
          if ( (int)v4 < 0 )
            break;
LABEL_6:
          v5 = v2 + 32;
          sub_110B650((__m128i *)v2);
LABEL_7:
          v2 = v5;
          if ( a2 == v5 )
            return;
        }
        v18[0] = v19;
        if ( (void *)(v2 + 16) == v8 )
        {
          v19[0] = _mm_loadu_si128((const __m128i *)(v2 + 16));
        }
        else
        {
          v10 = *(_QWORD *)(v2 + 16);
          v18[0] = v8;
          *(_QWORD *)&v19[0] = v10;
        }
        *(_QWORD *)v2 = v2 + 16;
        v5 = v2 + 32;
        v18[1] = v6;
        *(_QWORD *)(v2 + 8) = 0;
        *(_BYTE *)(v2 + 16) = 0;
        v11 = (v2 - a1) >> 5;
        if ( v2 - a1 > 0 )
          break;
LABEL_29:
        sub_9E6D90(a1, v18);
        if ( v18[0] == v19 )
          goto LABEL_7;
        operator delete(v18[0]);
        v2 = v5;
        if ( a2 == v5 )
          return;
      }
      v12 = (_QWORD *)(v2 - 16);
      while ( 1 )
      {
        v15 = (_QWORD *)*(v12 - 2);
        v16 = (_BYTE *)v12[2];
        if ( v15 == v12 )
        {
          v17 = *(v12 - 1);
          if ( v17 )
          {
            if ( v17 == 1 )
              *v16 = *(_BYTE *)v12;
            else
              memcpy(v16, v12, v17);
            v16 = (_BYTE *)v12[2];
            v17 = *(v12 - 1);
          }
          v12[3] = v17;
          v16[v17] = 0;
          goto LABEL_20;
        }
        if ( v16 == (_BYTE *)(v12 + 4) )
          break;
        v12[2] = v15;
        v13 = v12[4];
        v12[3] = *(v12 - 1);
        v12[4] = *v12;
        if ( !v16 )
          goto LABEL_28;
        *(v12 - 2) = v16;
        *v12 = v13;
LABEL_20:
        v14 = (_BYTE *)*(v12 - 2);
        *(v12 - 1) = 0;
        v12 -= 4;
        *v14 = 0;
        if ( !--v11 )
          goto LABEL_29;
      }
      v12[2] = v15;
      v12[3] = *(v12 - 1);
      v12[4] = *v12;
LABEL_28:
      *(v12 - 2) = v12;
      goto LABEL_20;
    }
  }
}

