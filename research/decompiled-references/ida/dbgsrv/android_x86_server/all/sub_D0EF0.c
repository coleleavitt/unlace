/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0EF0
// Address: 0x000D0EF0

//----- (000D0EF0) --------------------------------------------------------
char *__fastcall sub_D0EF0(char **a1)
{
  char *v1; // esi
  char *result; // eax
  int v3; // edx
  char *v4; // edi
  unsigned int v5; // edx
  char **v6; // edi
  char *v7; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  int v11; // edi
  char **v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // edx
  char *v15; // ecx
  char *v16; // edx
  char *v17; // [esp+Ch] [ebp-20h]
  char *v18; // [esp+Ch] [ebp-20h]
  char *v19; // [esp+10h] [ebp-1Ch]
  char **v20; // [esp+18h] [ebp-14h]

  v1 = *a1;
  result = nullptr;
  v17 = a1[1];
  if ( v17 != *a1 && (unsigned __int8)(*v1 - 48) <= 9u )
  {
    if ( v1 == v17 )
    {
      v5 = -48;
    }
    else
    {
      v3 = 0;
      v20 = a1;
      while ( 1 )
      {
        v4 = v1 + 1;
        *a1 = v1 + 1;
        v5 = v3 + *v1 - 48;
        if ( v17 == v1 + 1 || (unsigned __int8)(*v4 - 48) >= 0xAu )
          break;
        v3 = 10 * v5;
        ++v1;
        a1 = v20;
        if ( v17 == v4 )
        {
          v5 = v3 - 48;
          v1 = v4;
          goto LABEL_10;
        }
      }
      ++v1;
      a1 = v20;
LABEL_10:
      result = nullptr;
    }
    if ( v5 - 1 < v17 - v1 )
    {
      v18 = &v1[v5];
      *a1 = &v1[v5];
      if ( v5 >= 0xA
        && *v1 == 95
        && v1[1] == 71
        && v1[2] == 76
        && v1[3] == 79
        && v1[4] == 66
        && v1[5] == 65
        && v1[6] == 76
        && v1[7] == 95
        && v1[8] == 95
        && v1[9] == 78 )
      {
        v6 = a1;
        v7 = a1[1116];
        v8 = *((_DWORD *)v7 + 1);
        if ( (unsigned int)(v8 + 16) <= 0xFF7 )
        {
          v10 = v7 + 4;
        }
        else
        {
          v9 = operator new[](0x1000u);
          *v9 = v7;
          v9[1] = 0;
          *(char **)((char *)v6 + (_DWORD)(&dword_13BE48 - 322358)) = (char *)v9;
          v8 = 0;
          v10 = v9 + 1;
          v7 = (char *)v9;
        }
        *v10 = v8 + 16;
        result = &v7[v8 + 8];
        v16 = (char *)&qword_13ACD8 - 309612;
        v1 = (char *)&qword_13ACD8 - 309633;
      }
      else
      {
        v19 = a1[1116];
        v11 = *((_DWORD *)v19 + 1);
        if ( (unsigned int)(v11 + 16) < 0xFF8 )
        {
          v15 = a1[1116];
          v14 = v19 + 4;
        }
        else
        {
          v12 = a1;
          v13 = operator new[](0x1000u);
          *v13 = v19;
          v13[1] = 0;
          *(char **)((char *)v12 + (_DWORD)(&dword_13BE48 - 322358)) = (char *)v13;
          v11 = 0;
          v14 = v13 + 1;
          v15 = (char *)v13;
        }
        *v14 = v11 + 16;
        result = &v15[v11 + 8];
        v16 = v18;
      }
      *((_DWORD *)result + 1) = 16843015;
      *(_DWORD *)result = (char *)&qword_13ACD8 - 4076;
      *((_DWORD *)result + 2) = v1;
      *((_DWORD *)result + 3) = v16;
    }
  }
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BE48: using guessed type int dword_13BE48;
