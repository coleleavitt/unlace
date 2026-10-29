/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100079EE0
// Address: 0x0000000100079EE0

//----- (0000000100079EE0) ----------------------------------------------------
_QWORD *__fastcall sub_100079EE0(__int64 a1, void *a2, __int64 a3)
{
  void *v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r10
  __int64 v13; // rbx
  unsigned __int64 v14; // r13
  size_t v15; // rdx
  int v16; // r15d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rsi
  unsigned __int64 v20; // r12
  int v21; // r12d
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  size_t __n; // [rsp+8h] [rbp-48h]
  void *v25; // [rsp+10h] [rbp-40h]
  int v26; // [rsp+18h] [rbp-38h]
  __int64 v27; // [rsp+20h] [rbp-30h]

  if ( a3 >= 0 )
  {
    v3 = a2;
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 < 0 )
      return nullptr;
    v5 = v4 + a3;
    if ( v4 + a3 < v4 )
      return nullptr;
    v8 = a3;
    v9 = *(_QWORD *)(a1 + 48);
    v27 = a1;
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( v5 > v10 )
      {
        v8 = v10 - v4;
        if ( v10 <= v4 )
          return nullptr;
        v5 = *(_QWORD *)(a1 + 16);
      }
      v11 = v9 + v5 - 1;
      if ( (v9 | v11) >> 32 )
        v12 = v11 / v9;
      else
        LODWORD(v12) = (unsigned int)v11 / (unsigned int)v9;
      if ( (v9 | v4) >> 32 )
        v14 = v4 / v9;
      else
        LODWORD(v14) = (unsigned int)v4 / (unsigned int)v9;
      v15 = v8;
      if ( (int)v14 <= (int)v12 )
      {
        v25 = v3;
        __n = v8;
        v16 = -1;
        v26 = v12;
        v6 = -1;
        do
        {
          if ( (_DWORD)v14 == (_DWORD)v12
            || (v18 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)(int)v14 >> 3)),
                _bittest(&v18, v14 & 7)) )
          {
            v17 = -1;
            if ( v16 != -1 )
            {
              v19 = v16 * *(_QWORD *)(a1 + 48);
              v20 = (int)v14 * *(_QWORD *)(a1 + 48);
              if ( v20 >= *(_QWORD *)(a1 + 16) )
                v20 = *(_QWORD *)(a1 + 16);
              v21 = v20 - v19;
              if ( v21 < 0
                || (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64, _QWORD))(a1 + 8))(
                     *(_QWORD *)(a1 + 8),
                     v19,
                     v19 + *(_QWORD *)(a1 + 40),
                     v21 & 0x7FFFFFFF) != (v21 & 0x7FFFFFFF) )
              {
                return (_QWORD *)v6;
              }
              if ( v16 >= (int)v14 )
              {
                a1 = v27;
                LODWORD(v12) = v26;
              }
              else
              {
                v22 = v16;
                a1 = v27;
                LODWORD(v12) = v26;
                if ( (((_BYTE)v14 - (_BYTE)v16) & 1) != 0 )
                {
                  v22 = v16 + 1LL;
                  *(_BYTE *)(*(_QWORD *)(v27 + 32) + ((unsigned __int64)v16 >> 3)) |= 1 << (v16 & 7);
                }
                if ( (int)v14 - 1LL != v16 )
                {
                  do
                  {
                    *(_BYTE *)(*(_QWORD *)(v27 + 32) + ((unsigned __int64)v22 >> 3)) |= 1 << (v22 & 7);
                    v23 = v22 + 1;
                    v22 += 2;
                    *(_BYTE *)(*(_QWORD *)(v27 + 32) + (v23 >> 3)) |= 1 << (v23 & 7);
                  }
                  while ( v22 < (int)v14 );
                }
              }
              v17 = -1;
            }
          }
          else
          {
            if ( v16 == -1 )
              v16 = v14;
            v17 = v16;
          }
          LODWORD(v14) = v14 + 1;
          v16 = v17;
        }
        while ( (int)v14 <= (int)v12 );
        v4 = *(_QWORD *)(a1 + 24);
        v15 = __n;
        v3 = v25;
      }
      v13 = v15;
      memcpy(v3, (const void *)(*(_QWORD *)(a1 + 40) + v4), v15);
    }
    else
    {
      v6 = (***(__int64 (__fastcall ****)(_QWORD, __int64, void *, __int64))(a1 + 8))(*(_QWORD *)(a1 + 8), v4, v3, a3);
      v13 = v6;
      if ( v6 < 0 )
        return (_QWORD *)v6;
    }
    v6 = v13;
    *(_QWORD *)(v27 + 24) += v13;
    return (_QWORD *)v6;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4C9u);
  return open_linput((const char *)0x4C9, (int)a2);
}
// 1000AE23D: using guessed type char under_debugger;
