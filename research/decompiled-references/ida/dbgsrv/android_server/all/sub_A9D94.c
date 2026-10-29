/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9D94
// Address: 0x00000000000A9D94

//----- (00000000000A9D94) ----------------------------------------------------
__int64 __fastcall sub_A9D94(char *s, __int64 a2)
{
  size_t v4; // x0
  void *v5; // x1
  unsigned __int64 v6; // x22
  size_t v7; // x21
  __int64 result; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  const char *v11; // x0
  const char *v12; // x20
  void *v13; // x1
  unsigned __int64 v14; // x22
  size_t v15; // x21
  unsigned int v16; // w0
  char *v17; // x1

  if ( s && (v4 = strlen(s)) != 0 )
  {
    v5 = *(void **)(a2 + 136);
    v6 = v4 + 1;
    v7 = v4;
    if ( *(_QWORD *)(a2 + 152) < v4 + 1 )
    {
      v5 = qvector_reserve((pthread_mutex_t *)(a2 + 136), v5, v6, 1u);
      *(_QWORD *)(a2 + 136) = v5;
    }
    *(_QWORD *)(a2 + 144) = v6;
    memmove(v5, s, v7);
    *(_BYTE *)(*(_QWORD *)(a2 + 136) + v7) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 144) = 0;
  }
  result = qisdir(s);
  if ( (result & 1) == 0 )
  {
    result = qmkdir(s, 0x1FFu);
    if ( (_DWORD)result )
    {
      sub_3B1DC("Cannot create directory '%s' for bad requests", s);
      v10 = v9;
      v12 = v11;
      result = qisdir(v11);
      if ( (result & 1) == 0 && (result = qmkdir(v12, 0x1FFu), (_DWORD)result) )
      {
        sub_3B1DC("Cannot create directory '%s' for recording conversations into", v12);
        return (__int64)sub_A9F00(v16, v17);
      }
      else if ( v12 && (result = strlen(v12)) != 0 )
      {
        v13 = *(void **)(v10 + 184);
        v14 = result + 1;
        v15 = result;
        if ( *(_QWORD *)(v10 + 200) < (unsigned __int64)(result + 1) )
        {
          v13 = qvector_reserve((pthread_mutex_t *)(v10 + 184), v13, v14, 1u);
          *(_QWORD *)(v10 + 184) = v13;
        }
        *(_QWORD *)(v10 + 192) = v14;
        result = (__int64)memmove(v13, v12, v15);
        *(_BYTE *)(*(_QWORD *)(v10 + 184) + v15) = 0;
      }
      else
      {
        *(_QWORD *)(v10 + 192) = 0;
      }
    }
  }
  return result;
}
// A9E58: variable 'v9' is possibly undefined
// A9E5C: variable 'v11' is possibly undefined
// A9EFD: variable 'v16' is possibly undefined
// A9EFD: variable 'v17' is possibly undefined
