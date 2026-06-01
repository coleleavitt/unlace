_DWORD *__fastcall sub_432170(__int64 a1, _QWORD *a2)
{
  _DWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // ecx
  bool v9; // zf
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // r8
  __int64 v17; // rsi
  __int64 v20; // [rsp+18h] [rbp-60h]
  _QWORD *v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h]

  result = (_DWORD *)a2[1];
  if ( result )
  {
    v3 = (unsigned int)*(result - 1);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v5 = 0;
      v6 = 0;
      v20 = 8 * v3;
      while ( 1 )
      {
        v7 = *(_QWORD *)&result[v5 / 4];
        if ( !*(_WORD *)(v7 + 4) )
        {
          v8 = *(_DWORD *)(v7 + 24);
          if ( !v8 )
          {
            result = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
            if ( !result || *result == -1 )
            {
              v10 = *(_QWORD *)(a1 + 128);
              if ( v10 )
                v8 = *(_DWORD *)(v10 - 4);
              v11 = v8;
              v12 = 72LL * v8 - 72;
              while ( v11 > 0 )
              {
                v23 = v6;
                v24 = v4;
                v13 = sub_431700(v12 + *(_QWORD *)(a1 + 128), v7, &v23);
                v6 = v23;
                v4 = v24;
                --v11;
                v12 -= 72;
                if ( v13 )
                  goto LABEL_19;
              }
              v23 = v6;
              v24 = v4;
              result = (_DWORD *)sub_431700(a1 + 136, v7, &v23);
              v6 = v23;
              v4 = v24;
              if ( !(_BYTE)result )
                goto LABEL_9;
LABEL_19:
              result = a2;
              v14 = *(_QWORD *)(v6 + 40);
              v15 = *a2;
              v16 = (_QWORD *)(v5 + a2[1]);
              if ( v14 )
                ++*(_DWORD *)(v14 + 8);
              v17 = *v16;
              if ( *v16 )
              {
                v9 = (*(_DWORD *)(v17 + 8))-- == 1;
                if ( v9 )
                {
                  v22 = v14;
                  v21 = v16;
                  result = (_DWORD *)sub_15D7BC0(v15, v17);
                  v14 = v22;
                  v16 = v21;
                }
              }
              *v16 = v14;
            }
          }
        }
LABEL_9:
        v5 += 8LL;
        if ( v20 == v5 )
          break;
        result = (_DWORD *)a2[1];
      }
      if ( v6 )
      {
        v9 = (*(_DWORD *)(v6 + 8))-- == 1;
        if ( v9 )
          return (_DWORD *)sub_15D7BC0(v4, v6);
      }
    }
  }
  return result;
}

