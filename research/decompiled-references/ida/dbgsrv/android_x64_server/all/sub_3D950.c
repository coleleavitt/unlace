/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D950
// Address: 0x000000000003D950

//----- (000000000003D950) ----------------------------------------------------
__int64 __fastcall sub_3D950(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 result; // rax
  unsigned int v10; // r12d
  int v11; // r12d
  char v12; // cl
  int v13; // edx
  __int64 v14; // rax
  _DWORD *v15; // r14
  int v16; // r13d
  __int64 v17; // r15
  int v18; // r13d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+Ch] [rbp-4Ch]
  char v23; // [rsp+10h] [rbp-48h]
  unsigned int v24; // [rsp+14h] [rbp-44h]
  __int64 v25; // [rsp+18h] [rbp-40h]
  __int64 v26; // [rsp+20h] [rbp-38h]

  result = 0;
  if ( !*(_BYTE *)(a1 + 1149) && *(_DWORD *)(a1 + 1140) != -1 )
  {
    v10 = a2;
    v21 = a5;
    if ( a6 )
    {
      sub_3AAD0(a1, 0, 1);
      a5 = v21;
    }
    v23 = a6;
    if ( a2 == -1 )
      v10 = *(_DWORD *)(a1 + 1140);
    v24 = v10;
    v26 = a1;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v25 = a4;
    if ( (unsigned int)a5 < 0x19 )
      goto LABEL_9;
    do
    {
      LOBYTE(v13) = 1;
LABEL_9:
      if ( v11 != a5 && (v12 & 1) == 0 )
      {
        v12 = 1;
        if ( a5 <= 0 )
        {
          v11 = 0;
        }
        else
        {
          v22 = v13;
          v14 = __errno(a1);
          a5 = v21;
          v15 = (_DWORD *)v14;
          v16 = 0;
          while ( 1 )
          {
            v11 = v16;
            v17 = a3 & 7;
            v18 = a5 - v16;
            if ( 8 - (int)v17 <= v18 )
              v18 = 8 - v17;
            *v15 = 0;
            a1 = 1;
            v19 = ptrace(PTRACE_PEEKTEXT, v24, a3 - v17, 0);
            if ( *v15 )
              break;
            if ( v18 == 8 )
            {
              *(_QWORD *)a4 = v19;
              a5 = v21;
            }
            else
            {
              a5 = v21;
              if ( v18 > 0 )
              {
                v20 = v19 >> (8 * (unsigned __int8)v17);
                *(_BYTE *)a4 = v20;
                if ( v18 > 1 )
                {
                  *(_BYTE *)(a4 + 1) = BYTE1(v20);
                  if ( v18 != 2 )
                  {
                    *(_BYTE *)(a4 + 2) = BYTE2(v20);
                    if ( v18 >= 4 )
                    {
                      *(_BYTE *)(a4 + 3) = BYTE3(v20);
                      if ( v18 != 4 )
                      {
                        *(_BYTE *)(a4 + 4) = BYTE4(v20);
                        if ( v18 >= 6 )
                        {
                          *(_BYTE *)(a4 + 5) = BYTE5(v20);
                          if ( v18 != 6 )
                          {
                            *(_BYTE *)(a4 + 6) = BYTE6(v20);
                            if ( v18 >= 8 )
                              *(_BYTE *)(a4 + 7) = HIBYTE(v20);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            a4 += v18;
            a3 += v18;
            v16 = v11 + v18;
            if ( v16 >= a5 )
            {
              v11 = v16;
              goto LABEL_31;
            }
          }
          a5 = v21;
LABEL_31:
          a4 = v25;
          v12 = 1;
          v13 = v22;
        }
      }
    }
    while ( ((v11 < a5) & (unsigned __int8)~(_BYTE)v13) != 0 );
    if ( v23 )
      sub_402C0(v26, 0, 1);
    result = 0;
    if ( v11 >= 0 )
      return (unsigned int)v11;
  }
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
