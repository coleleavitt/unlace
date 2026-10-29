/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8C70
// Address: 0x00000000000D8C70

//----- (00000000000D8C70) ----------------------------------------------------
_QWORD *__fastcall sub_D8C70(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rax
  _BYTE *v5; // rdx
  unsigned __int64 v6; // rcx
  _BYTE *v7; // rbx
  _BYTE *v8; // r13
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  __int16 v14; // ax
  char v15; // si

  v3 = *(_BYTE **)a1;
  v4 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 != v4 )
  {
    while ( *v3 == 66 )
    {
      *(_QWORD *)a1 = v3 + 1;
      if ( v4 == v3 + 1 || (unsigned __int8)(v3[1] - 48) > 9u )
        return nullptr;
      v5 = v3 + 2;
      *(_QWORD *)a1 = v3 + 2;
      v6 = (char)v3[1] - 48LL;
      v7 = v5;
      if ( v4 != v5 )
      {
        while ( (unsigned __int8)(*v5 - 48) < 0xAu )
        {
          v7 = v5 + 1;
          *(_QWORD *)a1 = v5 + 1;
          v6 = (char)*v5 + 10 * v6 - 48;
          v5 = v7;
          if ( v4 == v7 )
            goto LABEL_10;
        }
        v7 = v5;
      }
LABEL_10:
      if ( v4 - v7 < v6 )
        return nullptr;
      v8 = &v7[v6];
      *(_QWORD *)a1 = &v7[v6];
      if ( !v6 )
        return nullptr;
      v9 = *(_QWORD **)(a1 + 4832);
      v10 = v9[1];
      if ( (unsigned __int64)(v10 + 48) < 0xFF0 )
      {
        v12 = v9 + 1;
      }
      else
      {
        v11 = (_QWORD *)operator new[](0x1000u);
        *v11 = v9;
        v11[1] = 0;
        *(_QWORD *)(a1 + 4832) = v11;
        v12 = v11 + 1;
        v10 = 0;
        v9 = v11;
      }
      *v12 = v10 + 48;
      v13 = (_QWORD *)((char *)v9 + v10 + 16);
      v14 = *(_WORD *)((char *)a2 + 9);
      v15 = *((_BYTE *)a2 + 11);
      *((_BYTE *)v9 + v10 + 24) = 8;
      *(_WORD *)((char *)v9 + v10 + 25) = v14;
      *((_BYTE *)v9 + v10 + 27) = v15;
      *v13 = off_152A08;
      *(_QWORD *)((char *)v9 + v10 + 32) = a2;
      *(_QWORD *)((char *)v9 + v10 + 40) = v7;
      *(_QWORD *)((char *)v9 + v10 + 48) = v8;
      v3 = *(_BYTE **)a1;
      v4 = *(_BYTE **)(a1 + 8);
      a2 = v13;
      if ( *(_BYTE **)a1 == v4 )
        return v13;
    }
  }
  return a2;
}
// 152A08: using guessed type __int64 (__fastcall *off_152A08[7])();
