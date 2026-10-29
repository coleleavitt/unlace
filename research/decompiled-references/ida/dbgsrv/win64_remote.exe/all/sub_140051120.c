/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051120
// Address: 0x0000000140051120

//----- (0000000140051120) ----------------------------------------------------
__int64 __fastcall sub_140051120(__int64 a1, unsigned __int64 *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edx
  __int64 result; // rax
  int v8; // eax
  _BYTE *v9; // rcx
  const char *v10; // rsi
  size_t v12; // rax
  int v13; // ebx
  _QWORD *v14; // rdi
  __int64 v15; // rdi
  unsigned __int8 *v16; // rcx
  const char *v17; // rsi
  __int64 v18; // rbx
  _BYTE *v19; // rcx
  const void *v20; // rsi

  v4 = sub_14005B690(a2, a2[1]);
  sub_140063190(a1, v4);
  *(_DWORD *)a1 = sub_14005B690(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = sub_14005B690(a2, a2[1]);
  *(_QWORD *)(a1 + 8) = sub_14005B7B0(a2, a2[1]) - 1;
  v5 = sub_14005B690(a2, a2[1]);
  v6 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  *(_BYTE *)(a1 + 16) = v5 != 0;
  result = (int)(v6 - 1);
  switch ( v6 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      if ( v6 > 0xB || (v8 = 2306, !_bittest(&v8, v6)) )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3295);
      }
      v9 = (_BYTE *)*a2;
      v10 = (const char *)*a2;
      while ( (unsigned __int64)v9 < a2[1] )
      {
        if ( !*v9++ )
        {
          *a2 = (unsigned __int64)v9;
          if ( v10 )
          {
            v12 = strlen(v10);
            if ( v12 )
            {
              sub_140001810(a1 + 24, v10, v12);
              goto LABEL_11;
            }
          }
          break;
        }
      }
      *(_QWORD *)(a1 + 32) = 0;
LABEL_11:
      *(_QWORD *)(a1 + 48) = sub_14005B7B0(a2, a2[1]) - 1;
      *(_QWORD *)(a1 + 56) = sub_14005B7B0(a2, a2[1]) - 1;
      result = sub_14005B7B0(a2, a2[1]) - 1;
      *(_QWORD *)(a1 + 64) = result;
      break;
    case 2u:
    case 4u:
      v13 = sub_14005B690(a2, a2[1]);
      result = sub_1400126B0(a1);
      *(_DWORD *)result = v13;
      break;
    case 3u:
    case 9u:
    case 0xAu:
      v19 = (_BYTE *)*a2;
      v20 = (const void *)*a2;
      while ( (unsigned __int64)v19 < a2[1] )
      {
        if ( !*v19++ )
        {
          *a2 = (unsigned __int64)v19;
          goto LABEL_27;
        }
      }
      v20 = nullptr;
LABEL_27:
      result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( (_DWORD)result != 3 )
      {
        result = (unsigned int)(result - 9);
        if ( (unsigned int)result > 1 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(3297);
        }
      }
      if ( v20 && (result = strlen((const char *)v20)) != 0 )
        result = (__int64)sub_140001810(a1 + 24, v20, result);
      else
        *(_QWORD *)(a1 + 32) = 0;
      break;
    case 5u:
      v14 = (_QWORD *)sub_14000E220(a1);
      *v14 = sub_14005B7B0(a2, a2[1]) - 1;
      result = sub_14005B7B0(a2, a2[1]) - 1;
      v14[1] = result;
      break;
    case 7u:
      v15 = sub_140012670(a1);
      *(_DWORD *)v15 = sub_14005B690(a2, a2[1]);
      *(_BYTE *)(v15 + 4) = (unsigned int)sub_14005B690(a2, a2[1]) != 0;
      result = sub_14005B7B0(a2, a2[1]) - 1;
      *(_QWORD *)(v15 + 8) = result;
      v16 = (unsigned __int8 *)*a2;
      v17 = (const char *)*a2;
      do
      {
        if ( (unsigned __int64)v16 >= a2[1] )
        {
          v18 = v15 + 16;
          goto LABEL_21;
        }
        result = *v16++;
      }
      while ( (_BYTE)result );
      *a2 = (unsigned __int64)v16;
      v18 = v15 + 16;
      if ( v17 )
      {
        result = strlen(v17);
        if ( result )
          return (__int64)sub_140001810(v15 + 16, v17, result);
      }
LABEL_21:
      *(_QWORD *)(v18 + 8) = 0;
      break;
    default:
      return result;
  }
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
