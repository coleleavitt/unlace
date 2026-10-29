__int64 __fastcall sub_410D40(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // edx
  int v23; // ecx
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // r15
  __int64 v27; // rdi
  int v28; // [rsp+0h] [rbp-48h]
  unsigned int v29; // [rsp+4h] [rbp-44h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  result = *(_QWORD *)(a1 + 16);
  v29 = a2;
  if ( result )
  {
    v7 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v7 )
    {
      v8 = 8 * v7;
      v10 = 0;
      v30 = 8 * v7;
      while ( 1 )
      {
        v11 = *(_QWORD *)(result + v10);
        result = *(unsigned int *)(v11 + 96);
        if ( (unsigned int)result < v29 || (unsigned int)result > 0xFFFE )
        {
          v10 += 8;
          if ( v30 == v10 )
            return result;
        }
        else
        {
          v12 = *(_QWORD *)(v11 + 80);
          if ( v12 )
            *(_DWORD *)(v12 + 112) = -1;
          *(_DWORD *)(v11 + 96) = -1;
          v13 = *(_QWORD *)a1;
          sub_407990((_QWORD *)v11, v8, v7, v29, a5, a6);
          v8 = v13;
          v14 = *(_QWORD *)(v11 + 16);
          sub_408BB0(*(_QWORD *)(v13 + 16), v13, v11, v15, v16, v17);
          ++*(_DWORD *)(v13 + 332);
          sub_407990((_QWORD *)v11, v13, v18, v19, v20, v21);
          result = *(_QWORD *)(v11 + 16);
          if ( *(_WORD *)(result + 4) != 2 )
          {
            v8 = v14;
            result = sub_428900(*(_QWORD *)(v13 + 120), v14, v22, v23, a5, a6, v28);
          }
          v7 = *(_QWORD *)(v13 + 56);
          if ( v7 )
          {
            v24 = *(unsigned int *)(v7 - 4);
            if ( (_DWORD)v24 )
            {
              v25 = 8 * v24;
              v26 = 0;
              while ( 1 )
              {
                v27 = *(_QWORD *)(v7 + v26);
                v8 = v13;
                v26 += 8;
                result = sub_40F240(v27, v13, (_QWORD *)v11, 0xFFFFFFFF, 0, a6);
                if ( v25 == v26 )
                  break;
                v7 = *(_QWORD *)(v13 + 56);
              }
            }
          }
          *(_BYTE *)(a1 + 36) = 0;
          v10 += 8;
          if ( v30 == v10 )
            return result;
        }
        result = *(_QWORD *)(a1 + 16);
      }
    }
  }
  return result;
}

