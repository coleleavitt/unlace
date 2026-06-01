/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8005C
// Address: 0x000000000008005C

//----- (000000000008005C) ----------------------------------------------------
void *__fastcall sub_8005C(void *result, __int64 a2)
{
  unsigned __int64 v2; // x8
  _QWORD *v4; // x20
  __int64 i; // x8
  unsigned __int8 *v6; // x10
  int v7; // w22
  int v8; // w21
  void *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x23

  v2 = *(_QWORD *)(a2 + 16);
  v4 = result;
  *(_QWORD *)(a2 + 8) = 0;
  if ( v2 <= 0x3FF )
  {
    result = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, 0x400u, 1u);
    *(_QWORD *)a2 = result;
  }
  for ( i = -1; ; i = 1 )
  {
    v6 = (unsigned __int8 *)(v4[1] + i);
    v4[1] = v6;
    v7 = (char)*v6;
    v8 = *v6;
    if ( v7 < 0 || (result = (void *)isalnum(v8), !(_DWORD)result) )
    {
      if ( v8 != 95 && v8 != 36 )
        break;
    }
    v9 = *(void **)a2;
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 )
      v11 = v10 - 1;
    else
      v11 = 0;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v11 + 2) )
    {
      result = qvector_reserve((pthread_mutex_t *)a2, v9, v11 + 2, 1u);
      v9 = result;
      *(_QWORD *)a2 = result;
    }
    *(_QWORD *)(a2 + 8) = v11 + 2;
    *((_BYTE *)v9 + v11) = v7;
    *(_BYTE *)(*(_QWORD *)a2 + v11 + 1) = 0;
  }
  return result;
}
