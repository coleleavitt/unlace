/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_encode
// Address: 0x00000000000B1630

//----- (00000000000B1630) ----------------------------------------------------
__int64 __fastcall base64_encode(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  const char *v3; // r14
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // ebp
  unsigned __int64 v7; // r12
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  char *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  char v15; // r14
  _BYTE *v16; // rax
  unsigned int i; // ebp
  __int64 v18; // rax
  __int64 v19; // rbx
  _BYTE *v20; // rax
  unsigned int v22; // [rsp+Ch] [rbp-4Ch]
  _QWORD *v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+20h] [rbp-38h]

  LODWORD(v3) = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v4 = a3;
      if ( a3 >= 0 )
      {
        v5 = (a3 % 3uLL) ^ 3;
        v6 = 0;
        if ( !(a3 % 3uLL) )
          v5 = 0;
        v22 = v5;
        v23 = (_QWORD *)a1;
        if ( a3 )
        {
          v3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
          LODWORD(v7) = 0;
          do
          {
            v7 = *a2 | (unsigned __int64)(unsigned int)((_DWORD)v7 << 8);
            v6 += 8;
            v24 = v4;
            if ( v6 >= 7 )
            {
              do
              {
                v6 -= 6;
                v8 = aAbcdefghijklmn[(v7 >> v6) & 0x3F];
                v9 = *(_QWORD *)(a1 + 8);
                v10 = v9 - 1;
                if ( !v9 )
                  v10 = 0;
                v11 = *(char **)a1;
                if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v10 + 2) )
                {
                  v11 = (char *)qvector_reserve(a1, *(char **)a1, v10 + 2, 1u);
                  a1 = (__int64)v23;
                  *v23 = v11;
                }
                *(_QWORD *)(a1 + 8) = v10 + 2;
                v11[v10] = v8;
                *(_BYTE *)(*(_QWORD *)a1 + v10 + 1) = 0;
              }
              while ( v6 > 6 );
            }
            ++a2;
            --v4;
          }
          while ( v24 != 1 );
          if ( v6 )
          {
            v12 = ((_DWORD)v7 << (6 - v6)) & 0x3F;
            v13 = *(_QWORD *)(a1 + 8);
            v14 = v13 - 1;
            if ( !v13 )
              v14 = 0;
            v15 = aAbcdefghijklmn[v12];
            if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v14 + 2) )
            {
              v16 = *(_BYTE **)a1;
            }
            else
            {
              v16 = qvector_reserve(a1, *(char **)a1, v14 + 2, 1u);
              a1 = (__int64)v23;
              *v23 = v16;
            }
            *(_QWORD *)(a1 + 8) = v14 + 2;
            v16[v14] = v15;
            *(_BYTE *)(*(_QWORD *)a1 + v14 + 1) = 0;
          }
        }
        LOBYTE(v3) = 1;
        if ( v22 )
        {
          for ( i = 0; i < v22; ++i )
          {
            v18 = *(_QWORD *)(a1 + 8);
            v19 = v18 - 1;
            if ( !v18 )
              v19 = 0;
            v20 = *(_BYTE **)a1;
            if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v19 + 2) )
            {
              v20 = qvector_reserve(a1, *(char **)a1, v19 + 2, 1u);
              a1 = (__int64)v23;
              *v23 = v20;
            }
            *(_QWORD *)(a1 + 8) = v19 + 2;
            v20[v19] = 61;
            *(_BYTE *)(*(_QWORD *)a1 + v19 + 1) = 0;
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
