unsigned __int64 __fastcall sub_51B540(__int64 a1, unsigned __int64 *a2, unsigned __int8 a3)
{
  _QWORD *v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD **)(a1 + 1632);
  v19[1] = __readfsqword(0x28u);
  v6 = v4[22];
  v7 = v4[19];
  if ( v6 )
  {
    v8 = *(_QWORD *)(v4[21] + 8 * v6 - 8);
    v4[22] = v6 - 1;
    if ( v8 < v7 )
      goto LABEL_5;
LABEL_7:
    v11 = v8 + 1;
    v19[0] = 0;
    if ( v8 + 1 >= v7 )
    {
      if ( v7 >= v11 )
        goto LABEL_5;
      v12 = v4[18];
      v13 = v4[20];
      v14 = v4 + 18;
      if ( (unsigned __int64)v19 < v12 || (unsigned __int64)v19 >= v12 + 8 * v13 )
      {
        if ( v13 >= v11 || (v16 = qvector_reserve(v14, v12, v8 + 1, 8), v7 = v4[19], v4[18] = v16, v12 = v16, v7 < v11) )
        {
          while ( 1 )
          {
            *(_QWORD *)(v12 + 8 * v7) = v19[0];
            v17 = v7++;
            if ( v8 == v17 )
              break;
            v12 = v4[18];
          }
        }
      }
      else if ( v13 >= v11
             || (v18 = qvector_reserve(v14, v12, v8 + 1, 8), v7 = v4[19], v4[18] = v18, v12 = v18, v7 < v11) )
      {
        while ( 1 )
        {
          v15 = v7;
          *(_QWORD *)(v12 + 8 * v7++) = 0;
          if ( v8 == v15 )
            break;
          v12 = v4[18];
        }
      }
    }
    v4[19] = v11;
    goto LABEL_5;
  }
  v8 = 1;
  if ( v7 )
    v8 = v4[19];
  if ( v8 >= v7 )
    goto LABEL_7;
LABEL_5:
  *a2 = (v8 << 9) | a3;
  v9 = operator new(0x50u);
  *(_OWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  *(_QWORD *)(v9 + 48) = -1;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_OWORD *)v9 = 0;
  *(_OWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v4[18] + 8 * v8) = v9;
  *(_DWORD *)(v9 + 64) = 1;
  return v8;
}

