__int64 __fastcall sub_1430(__int64 a1)
{
  char v2; // bp
  _BYTE *i; // rbx
  unsigned int v4; // edi
  unsigned int v5; // r12d
  unsigned int v6; // edi
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  const char *v10; // rbx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // rdx
  char *v13; // rsi
  unsigned int v14; // eax
  const char *v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[88]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( !qlgets(v19, 80) )
    return 0;
  v2 = v19[0];
  for ( i = v19; v2 == 32; ++i )
    v2 = i[1];
  v4 = (char)i[1];
  v5 = 0;
  if ( v4 <= 0x7F )
  {
    v5 = isxdigit(v4);
    if ( v5 )
    {
      v6 = (char)i[2];
      v5 = 0;
      if ( v6 <= 0x7F )
      {
        v5 = isxdigit(v6);
        if ( v5 )
        {
          if ( v2 == 59 )
          {
            v8 = 33;
            v9 = 32;
            v10 = "MOS Technology Hex Object Format";
            v5 = 6;
          }
          else if ( v2 == 83 )
          {
            v8 = 25;
            v9 = 24;
            v10 = "Motorola S-record Format";
            v5 = 13;
          }
          else
          {
            v5 = 0;
            if ( v2 != 58 )
              return v5;
            v8 = 24;
            v9 = 23;
            v10 = "Intel Hex Object Format";
            v5 = 5;
          }
          v11 = *(_QWORD **)a1;
          if ( *(_QWORD *)(a1 + 16) < v8 )
          {
            v18 = qvector_reserve(a1, v11, v8, 1);
            *(_QWORD *)a1 = v18;
            v11 = (_QWORD *)v18;
          }
          *(_QWORD *)(a1 + 8) = v8;
          v12 = (unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          *v11 = *(_QWORD *)v10;
          *(_QWORD *)((char *)v11 + v9 - 8) = *(_QWORD *)&v10[v9 - 8];
          v13 = (char *)v11 - v12;
          v14 = 0;
          v15 = (const char *)(v10 - v13);
          v16 = (v9 + (_DWORD)v13) & 0xFFFFFFF8;
          do
          {
            v17 = v14;
            v14 += 8;
            *(_QWORD *)(v12 + v17) = *(_QWORD *)&v15[v17];
          }
          while ( v14 < v16 );
          *(_BYTE *)(*(_QWORD *)a1 + v9) = 0;
        }
      }
    }
  }
  return v5;
}

