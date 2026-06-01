/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400637A0
// Address: 0x00000001400637A0

//----- (00000001400637A0) ----------------------------------------------------
__int64 __fastcall sub_1400637A0(__int64 a1, void *a2, __int64 a3)
{
  size_t v3; // r14
  __int64 v6; // r10
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rax
  int v12; // ebx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  int v19; // r8d
  char v20; // r8
  _BYTE *v21; // rdx

  v3 = a3;
  if ( a3 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = (_QWORD *)(a1 + 24);
  if ( v6 >= 0 )
  {
    v8 = v6 + a3;
    if ( v6 + a3 >= v6 )
    {
      v9 = *(_QWORD *)(a1 + 48);
      if ( !v9 )
      {
        result = (***(__int64 (__fastcall ****)(_QWORD, __int64, void *, size_t))(a1 + 8))(
                   *(_QWORD *)(a1 + 8),
                   v6,
                   a2,
                   v3);
        v3 = result;
        if ( result < 0 )
          return result;
LABEL_26:
        *v7 += v3;
        return v3;
      }
      v11 = *(_QWORD *)(a1 + 16);
      if ( v8 <= v11 )
      {
LABEL_10:
        v12 = -1;
        v13 = (v8 + v9 - 1) / v9;
        v14 = v6 / v9;
        if ( (int)(v6 / v9) <= (int)v13 )
        {
          while ( 1 )
          {
            if ( (_DWORD)v14 == (_DWORD)v13
              || ((unsigned __int8)(1 << (v14 & 7))
                & *(_BYTE *)(((unsigned __int64)(int)v14 >> 3) + *(_QWORD *)(a1 + 32))) != 0 )
            {
              if ( v12 != -1 )
              {
                v15 = *(_QWORD *)(a1 + 48);
                v16 = v15 * v12;
                v17 = (int)v14 * v15;
                v18 = *(_QWORD *)(a1 + 16);
                if ( v17 <= v18 )
                  LODWORD(v18) = v17;
                v19 = v18 - v16;
                if ( v19 < 0
                  || (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64, _QWORD))(a1 + 8))(
                       *(_QWORD *)(a1 + 8),
                       v16,
                       v16 + *(_QWORD *)(a1 + 40),
                       v19) != v19 )
                {
                  return -1;
                }
                for ( ; v12 < (int)v14; *v21 |= 1 << v20 )
                {
                  v20 = v12 & 7;
                  v21 = (_BYTE *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)v12++ >> 3));
                }
                v12 = -1;
              }
            }
            else if ( v12 == -1 )
            {
              v12 = v14;
            }
            LODWORD(v14) = v14 + 1;
            if ( (int)v14 > (int)v13 )
            {
              v7 = (_QWORD *)(a1 + 24);
              break;
            }
          }
        }
        memcpy(a2, (const void *)(*v7 + *(_QWORD *)(a1 + 40)), v3);
        goto LABEL_26;
      }
      if ( v6 < v11 )
      {
        v7 = (_QWORD *)(a1 + 24);
        v3 = v11 - v6;
        v8 = *(_QWORD *)(a1 + 16);
        goto LABEL_10;
      }
    }
  }
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
