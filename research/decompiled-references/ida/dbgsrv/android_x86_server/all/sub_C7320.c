/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7320
// Address: 0x000C7320

//----- (000C7320) --------------------------------------------------------
int __fastcall sub_C7320(_DWORD *a1, int a2)
{
  _BYTE *v2; // ebx
  _BYTE *v3; // edx
  _BYTE *v4; // edi
  _BYTE *v5; // edi
  unsigned int v6; // eax
  _BYTE *v7; // esi
  _BYTE *v9; // eax
  _BYTE *v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // edi
  int v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // edx
  char v16; // al
  __int16 v17; // dx
  int v18; // eax
  _BYTE *v20; // [esp+4h] [ebp-28h]
  _BYTE *v21; // [esp+4h] [ebp-28h]
  int v22; // [esp+8h] [ebp-24h]
  _DWORD *v23; // [esp+Ch] [ebp-20h]
  int v24; // [esp+18h] [ebp-14h]

  v2 = (_BYTE *)*a1;
  v20 = (_BYTE *)a1[1];
  if ( (_BYTE *)*a1 != v20 )
  {
    v23 = a1;
    while ( *v2 == 66 )
    {
      v24 = a2;
      *a1 = v2 + 1;
      v22 = 0;
      v3 = nullptr;
      v4 = nullptr;
      if ( v20 != v2 + 1 )
      {
        v3 = nullptr;
        v4 = nullptr;
        if ( (unsigned __int8)(v2[1] - 48) <= 9u )
        {
          v5 = v2 + 2;
          *a1 = v2 + 2;
          v6 = (char)v2[1] - 48;
          v7 = v2 + 2;
          if ( v20 != v2 + 2 )
          {
            while ( (unsigned __int8)(*v5 - 48) < 0xAu )
            {
              v7 = v5 + 1;
              *v23 = v5 + 1;
              v6 = (char)*v5 + 10 * v6 - 48;
              if ( v20 == ++v5 )
                goto LABEL_11;
            }
            v7 = v5;
          }
LABEL_11:
          v3 = nullptr;
          v4 = nullptr;
          a1 = v23;
          if ( v20 - v7 >= v6 )
          {
            v9 = &v7[v6];
            *v23 = v9;
            v3 = v9;
            v4 = v7;
          }
        }
      }
      if ( v4 == v3 )
        return v22;
      v10 = v4;
      v11 = a1;
      v12 = (_DWORD *)a1[1116];
      v13 = v12[1];
      v21 = v3;
      if ( (unsigned int)(v13 + 32) < 0xFF8 )
      {
        v15 = v12 + 1;
      }
      else
      {
        v14 = operator new[](0x1000u);
        *v14 = v12;
        v14[1] = 0;
        v11[1116] = v14;
        v13 = 0;
        v15 = v14 + 1;
        v12 = v14;
      }
      *v15 = v13 + 32;
      v16 = *(_BYTE *)(v24 + 7);
      v17 = *(_WORD *)(v24 + 5);
      *((_BYTE *)v12 + v13 + 12) = 8;
      *(_WORD *)((char *)v12 + v13 + 13) = v17;
      *((_BYTE *)v12 + v13 + 15) = v16;
      *(_DWORD *)((char *)v12 + v13 + 8) = (char *)&qword_13ACD8 - 1988;
      *(_DWORD *)((char *)v12 + v13 + 16) = v24;
      *(_DWORD *)((char *)v12 + v13 + 20) = v10;
      v18 = (int)v12 + v13 + 8;
      *(_DWORD *)((char *)v12 + v13 + 24) = v21;
      v2 = (_BYTE *)*v23;
      v20 = (_BYTE *)v23[1];
      a2 = v18;
      a1 = v23;
      if ( (_BYTE *)*v23 == v20 )
        return v18;
    }
  }
  return a2;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
