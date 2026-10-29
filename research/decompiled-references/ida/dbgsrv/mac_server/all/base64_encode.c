/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: base64_encode
// Address: 0x0000000100071910

//----- (0000000100071910) ----------------------------------------------------
_BOOL8 __fastcall base64_encode(__int64 a1, unsigned __int8 *a2, signed __int64 a3)
{
  __int64 v3; // r8
  unsigned __int128 v4; // rax
  __int64 v5; // rbx
  int v6; // r15d
  unsigned int v7; // edi
  unsigned int v8; // r15d
  char v9; // cl
  __int64 v10; // rax
  bool v11; // cf
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rbx
  char v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  _BYTE *v21; // rax
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  _BYTE *v26; // rax
  __int64 v28; // [rsp+8h] [rbp-58h]
  int v29; // [rsp+18h] [rbp-48h]
  __int64 v30; // [rsp+20h] [rbp-40h]
  unsigned int v31; // [rsp+2Ch] [rbp-34h]
  unsigned int v32; // [rsp+30h] [rbp-30h]
  char v33; // [rsp+36h] [rbp-2Ah]
  bool v34; // [rsp+37h] [rbp-29h]

  v34 = a2 != nullptr && a1 != 0 && a3 >= 0;
  if ( v34 )
  {
    v3 = a3;
    v4 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)a3;
    if ( v3 )
    {
      v5 = a1;
      v30 = v3 - 3LL * (*((_QWORD *)&v4 + 1) >> 1);
      v32 = (v3 - 3 * (*((_QWORD *)&v4 + 1) >> 1)) ^ 3;
      v6 = 0;
      *((_QWORD *)&v4 + 1) = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
      v7 = 0;
      do
      {
        LODWORD(v4) = *a2;
        v7 = v4 | (v7 << 8);
        if ( v6 < -1 )
        {
          v6 += 8;
        }
        else
        {
          v29 = *a2;
          v28 = v3;
          v8 = v6 + 14;
          v31 = v7;
          do
          {
            v9 = *(_BYTE *)(((v7 >> (v8 - 12)) & 0x3F) + *((_QWORD *)&v4 + 1));
            v10 = *(_QWORD *)(v5 + 8);
            v11 = v10 == 0;
            v12 = v10 - 1;
            v13 = 0;
            if ( !v11 )
              v13 = v12;
            *(_QWORD *)&v4 = *(_QWORD *)v5;
            if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v13 + 2) )
            {
              v33 = *(_BYTE *)(((v7 >> (v8 - 12)) & 0x3F) + *((_QWORD *)&v4 + 1));
              v14 = v5;
              v15 = (_QWORD *)v5;
              v16 = *((_QWORD *)&v4 + 1);
              *(_QWORD *)&v4 = qvector_reserve(v14, (void *)v4, v13 + 2, 1u);
              v9 = v33;
              v7 = v31;
              *((_QWORD *)&v4 + 1) = v16;
              v5 = (__int64)v15;
              *v15 = v4;
            }
            *(_QWORD *)(v5 + 8) = v13 + 2;
            *(_BYTE *)(v4 + v13) = v9;
            *(_BYTE *)(*(_QWORD *)v5 + v13 + 1) = 0;
            v8 -= 6;
          }
          while ( v8 > 0xC );
          v6 = v8 - 6;
          v3 = v28;
          LODWORD(v4) = v29;
        }
        ++a2;
        --v3;
      }
      while ( v3 );
      if ( v6 )
      {
        v17 = *(_BYTE *)((((_DWORD)v4 << (6 - v6)) & 0x3F) + *((_QWORD *)&v4 + 1));
        v18 = *(_QWORD *)(v5 + 8);
        v19 = 0;
        v11 = v18 == 0;
        v20 = v18 - 1;
        if ( !v11 )
          v19 = v20;
        v21 = *(_BYTE **)v5;
        if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v19 + 2) )
        {
          v21 = qvector_reserve(v5, *(void **)v5, v19 + 2, 1u);
          *(_QWORD *)v5 = v21;
        }
        *(_QWORD *)(v5 + 8) = v19 + 2;
        v21[v19] = v17;
        *(_BYTE *)(*(_QWORD *)v5 + v19 + 1) = 0;
      }
      if ( v30 )
      {
        v22 = 0;
        do
        {
          v23 = *(_QWORD *)(v5 + 8);
          v11 = v23 == 0;
          v24 = v23 - 1;
          v25 = 0;
          if ( !v11 )
            v25 = v24;
          v26 = *(_BYTE **)v5;
          if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v25 + 2) )
          {
            v26 = qvector_reserve(v5, *(void **)v5, v25 + 2, 1u);
            *(_QWORD *)v5 = v26;
          }
          *(_QWORD *)(v5 + 8) = v25 + 2;
          v26[v25] = 61;
          *(_BYTE *)(*(_QWORD *)v5 + v25 + 1) = 0;
          ++v22;
        }
        while ( v32 > v22 );
      }
    }
  }
  return v34;
}
