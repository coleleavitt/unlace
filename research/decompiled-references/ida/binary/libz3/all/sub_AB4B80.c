__int64 __fastcall sub_AB4B80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // r15d
  __int64 v8; // rbp
  __int64 v9; // rax
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rax
  unsigned int *v13; // rbp
  void *v14; // rdi
  int v15; // eax
  void *v16; // r14
  char v17; // al
  char v18; // al
  int v19; // eax
  void *v20; // [rsp+8h] [rbp-A0h]
  unsigned int *v21; // [rsp+18h] [rbp-90h]
  __int64 v22; // [rsp+20h] [rbp-88h]
  _QWORD v23[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+60h] [rbp-48h] BYREF

  v5 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  if ( v5 == -1 )
    return 0;
  v8 = v5;
  v9 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v5));
  v6 = sub_1673B10(a1 + 80, v9);
  if ( !(_BYTE)v6 )
  {
    return 0;
  }
  else
  {
    v22 = a3 + 16;
    v10 = qword_1C7F2C0;
    *(_BYTE *)(a3 + 4) &= ~1u;
    *(_DWORD *)a3 = 0;
    sub_182CBA0(v10, a3 + 16);
    *(_BYTE *)(a3 + 20) &= ~1u;
    v11 = qword_1C7F2C0;
    *(_DWORD *)(a3 + 16) = 1;
    v23[0] = 1;
    v23[1] = 0;
    v24[0] = 1;
    v24[1] = 0;
    sub_182CBA0(v11, v24);
    v12 = *(_QWORD *)(a1 + 504);
    BYTE4(v24[0]) &= ~1u;
    LODWORD(v24[0]) = 1;
    v13 = *(unsigned int **)(v12 + 8 * v8);
    if ( v13 )
    {
      v21 = &v13[*(v13 - 1)];
      while ( v21 != v13 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *v13) == 1 )
        {
          v15 = v23[0];
          v16 = qword_1C7F2C0;
          if ( LODWORD(v23[0]) )
          {
            if ( *(_DWORD *)a3 )
            {
              if ( (*(_BYTE *)(a3 + 20) & 1) != 0
                || *(_DWORD *)(a3 + 16) != 1
                || (v24[0] & 0x100000000LL) != 0
                || LODWORD(v24[0]) != 1 )
              {
                sub_1851D20(qword_1C7F2C0, a3, v23, a3);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, a3, v23, a3);
                sub_182CBA0(v16, v22);
                *(_BYTE *)(a3 + 20) &= ~1u;
                *(_DWORD *)(a3 + 16) = 1;
              }
            }
            else
            {
              if ( (v23[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, a3, v23);
              }
              else
              {
                *(_BYTE *)(a3 + 4) &= ~1u;
                *(_DWORD *)a3 = v15;
              }
              if ( (v24[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v16, v22, v24);
              }
              else
              {
                v19 = v24[0];
                *(_BYTE *)(a3 + 20) &= ~1u;
                *(_DWORD *)(a3 + 16) = v19;
              }
            }
          }
          else
          {
            v17 = *(_BYTE *)(a3 + 4);
            if ( (v17 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, a3, a3);
            else
              *(_BYTE *)(a3 + 4) = v17 & 0xFE;
            v18 = *(_BYTE *)(a3 + 20);
            if ( (v18 & 1) != 0 )
              sub_182C690(v16, v22, v22);
            else
              *(_BYTE *)(a3 + 20) = v18 & 0xFE;
          }
        }
        v25[0] = 2;
        v25[1] = 0;
        v26[0] = 1;
        v26[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v26);
        LODWORD(v26[0]) = 1;
        v14 = qword_1C7F2C0;
        BYTE4(v26[0]) &= ~1u;
        if ( (v24[0] & 0x100000000LL) == 0 && LODWORD(v24[0]) == 1 )
        {
          sub_1831650(qword_1C7F2C0, v23, v25);
          sub_182CBA0(v14, v24);
          BYTE4(v24[0]) &= ~1u;
          LODWORD(v24[0]) = 1;
        }
        else
        {
          sub_1848FF0(qword_1C7F2C0, v23, v25);
        }
        ++v13;
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25);
        sub_182CBA0(v20, v26);
      }
    }
    sub_25A130((char *)v23);
  }
  return v6;
}

