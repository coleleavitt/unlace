__int64 __fastcall sub_8370A0(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 result; // rax
  size_t v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // r8
  int v15; // ebp
  int v16; // r13d
  int v17; // edx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rax
  char v24; // cl
  unsigned int v25; // [rsp+14h] [rbp-44h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 24);
  result = 0;
  if ( v5 >= 0 )
  {
    v8 = a3;
    v9 = v5 + a3;
    v10 = *(_QWORD *)(a1 + 24);
    if ( v5 <= v9 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      if ( v11 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        if ( v12 < v9 )
        {
          if ( v5 >= v12 )
            return result;
          v9 = v12;
          v8 = v12 - v5;
        }
        v13 = (v9 + v11 - 1) / v11;
        v14 = (unsigned int)v13;
        v15 = v5 / v11;
        if ( (int)v13 >= v15 )
        {
          v16 = -1;
LABEL_13:
          if ( (_DWORD)v14 != v15 )
          {
LABEL_14:
            while ( 1 )
            {
              v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)v15 >> 3));
              if ( _bittest(&v17, v15 & 7) )
                break;
              if ( v16 == -1 )
              {
                if ( (int)v14 < v15 + 1 )
                  goto LABEL_25;
                v16 = v15++;
                goto LABEL_13;
              }
              if ( (int)v14 < ++v15 )
                goto LABEL_25;
              if ( (_DWORD)v14 == v15 )
                goto LABEL_16;
            }
          }
          if ( v16 == -1 )
            goto LABEL_22;
LABEL_16:
          v18 = *(_QWORD *)(a1 + 48);
          v19 = v16;
          v20 = v18 * v15;
          v21 = v18 * v16;
          if ( v20 > *(_QWORD *)(a1 + 16) )
            v20 = *(_QWORD *)(a1 + 16);
          v22 = v20 - v21;
          if ( v22 < 0 )
            return -1;
          v25 = v14;
          if ( v22 != (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(a1 + 8))(
                        *(_QWORD *)(a1 + 8),
                        v21,
                        v21 + *(_QWORD *)(a1 + 40),
                        (unsigned int)v22,
                        v14,
                        v10) )
            return -1;
          v14 = v25;
          if ( v15 > v16 )
          {
            do
            {
              v23 = v19;
              v24 = v19++;
              *(_BYTE *)(*(_QWORD *)(a1 + 32) + (v23 >> 3)) |= 1 << (v24 & 7);
            }
            while ( v15 > (int)v19 );
          }
LABEL_22:
          while ( (int)v14 >= ++v15 )
          {
            if ( (_DWORD)v14 != v15 )
            {
              v16 = -1;
              goto LABEL_14;
            }
          }
LABEL_25:
          v10 = *(_QWORD *)(a1 + 24);
        }
        memcpy(a2, (const void *)(v10 + *(_QWORD *)(a1 + 40)), v8);
        *(_QWORD *)(a1 + 24) += v8;
        return v8;
      }
      result = (***(__int64 (__fastcall ****)(_QWORD, __int64, void *, size_t, __int64, __int64))(a1 + 8))(
                 *(_QWORD *)(a1 + 8),
                 v5,
                 a2,
                 v8,
                 a5,
                 v10);
      if ( result >= 0 )
        *(_QWORD *)(a1 + 24) += result;
    }
  }
  return result;
}
