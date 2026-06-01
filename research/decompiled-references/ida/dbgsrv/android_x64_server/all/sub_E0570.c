/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E0570
// Address: 0x00000000000E0570

//----- (00000000000E0570) ----------------------------------------------------
char *__fastcall sub_E0570(char **a1)
{
  char *v2; // rbx
  char *v3; // rdi
  __int64 v4; // rcx
  char *v5; // rdx
  unsigned __int64 v6; // rcx
  char *v7; // r15
  char *v8; // rbx
  __int64 v9; // rcx
  char **v10; // rax
  _QWORD *v11; // rdx
  char *result; // rax
  char *v13; // r12
  __int64 v14; // rcx
  char **v15; // rax
  _QWORD *v16; // rdx

  v2 = *a1;
  v3 = a1[1];
  if ( v3 == v2 || (unsigned __int8)(*v2 - 48) > 9u )
    return nullptr;
  if ( v2 == v3 )
  {
    v6 = -48;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = v2 + 1;
      *a1 = v2 + 1;
      v6 = *v2 + v4 - 48;
      if ( v3 == v2 + 1 || (unsigned __int8)(*v5 - 48) >= 0xAu )
        break;
      v4 = 10 * v6;
      ++v2;
      if ( v3 == v5 )
      {
        v6 = v4 - 48;
        v2 = v5;
        goto LABEL_11;
      }
    }
    ++v2;
  }
LABEL_11:
  if ( v6 - 1 >= v3 - v2 )
    return nullptr;
  v7 = &v2[v6];
  *a1 = &v2[v6];
  if ( v6 >= 0xA
    && *v2 == 95
    && v2[1] == 71
    && v2[2] == 76
    && v2[3] == 79
    && v2[4] == 66
    && v2[5] == 65
    && v2[6] == 76
    && v2[7] == 95
    && v2[8] == 95
    && v2[9] == 78 )
  {
    v8 = a1[604];
    v9 = *((_QWORD *)v8 + 1);
    if ( (unsigned __int64)(v9 + 32) <= 0xFEF )
    {
      v11 = v8 + 8;
    }
    else
    {
      v10 = (char **)operator new[](0x1000u);
      *v10 = v8;
      v10[1] = nullptr;
      a1[604] = (char *)v10;
      v9 = 0;
      v11 = v10 + 1;
      v8 = (char *)v10;
    }
    *v11 = v9 + 32;
    result = &v8[v9 + 16];
    *(_DWORD *)&v8[v9 + 24] = 16843015;
    *(_QWORD *)result = off_1519B8;
    *(__m128i *)&v8[v9 + 32] = _mm_unpacklo_epi64(
                                 (__m128i)(unsigned __int64)"(anonymous namespace)",
                                 (__m128i)(unsigned __int64)"");
  }
  else
  {
    v13 = a1[604];
    v14 = *((_QWORD *)v13 + 1);
    if ( (unsigned __int64)(v14 + 32) < 0xFF0 )
    {
      v16 = v13 + 8;
    }
    else
    {
      v15 = (char **)operator new[](0x1000u);
      *v15 = v13;
      v15[1] = nullptr;
      a1[604] = (char *)v15;
      v14 = 0;
      v16 = v15 + 1;
      v13 = (char *)v15;
    }
    *v16 = v14 + 32;
    result = &v13[v14 + 16];
    *(_DWORD *)&v13[v14 + 24] = 16843015;
    *(_QWORD *)result = off_1519B8;
    *(_QWORD *)&v13[v14 + 32] = v2;
    *(_QWORD *)&v13[v14 + 40] = v7;
  }
  return result;
}
// 1519B8: using guessed type __int64 (__fastcall *off_1519B8[7])();
