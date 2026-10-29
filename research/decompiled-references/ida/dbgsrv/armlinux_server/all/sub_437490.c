/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437490
// Address: 0x0000000000437490

//----- (0000000000437490) ----------------------------------------------------
__int64 __fastcall sub_437490(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x19
  __int64 v4; // x20
  __int64 v5; // x1
  _BYTE *v6; // x0
  __int64 result; // x0
  __int64 v8; // x1
  _BYTE *v9; // x0
  __int64 v10; // x1
  _BYTE *v11; // x0
  __int64 v12; // x1
  _BYTE *v13; // x0

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 200);
  if ( a2 <= 0xF )
  {
    LOBYTE(v2) = a2 - 32;
    *(_BYTE *)(a1 + 212) = a2 - 32;
  }
  else
  {
    if ( (a2 & 0xFFFFFFFFFFFFFF00LL) != 0 )
    {
      if ( a2 == (__int16)a2 )
      {
        *(_BYTE *)(a1 + 212) = -95;
        v10 = *(_QWORD *)(v4 + 8);
        if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(v4 + 16) )
        {
          v11 = sub_491288(v4, *(void **)v4, v10 + 1, 1u);
          *(_QWORD *)v4 = v11;
          v10 = *(_QWORD *)(v4 + 8);
        }
        else
        {
          v11 = *(_BYTE **)v4;
        }
        v11[v10] = -95;
        ++*(_QWORD *)(v4 + 8);
        ++*(_DWORD *)(a1 + 208);
        return sub_436010(a1, v2);
      }
      else
      {
        *(_BYTE *)(a1 + 212) = -45;
        v5 = *(_QWORD *)(v4 + 8);
        if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(v4 + 16) )
        {
          v6 = sub_491288(v4, *(void **)v4, v5 + 1, 1u);
          *(_QWORD *)v4 = v6;
          v5 = *(_QWORD *)(v4 + 8);
        }
        else
        {
          v6 = *(_BYTE **)v4;
        }
        v6[v5] = -45;
        ++*(_QWORD *)(v4 + 8);
        ++*(_DWORD *)(a1 + 208);
        return sub_436CB0(a1, v2);
      }
    }
    *(_BYTE *)(a1 + 212) = -96;
    v12 = *(_QWORD *)(v4 + 8);
    if ( (unsigned __int64)(v12 + 1) > *(_QWORD *)(v4 + 16) )
    {
      v13 = sub_491288(v4, *(void **)v4, v12 + 1, 1u);
      *(_QWORD *)v4 = v13;
      v12 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v13 = *(_BYTE **)v4;
    }
    v13[v12] = -96;
    ++*(_QWORD *)(v4 + 8);
    v4 = *(_QWORD *)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
  }
  v8 = *(_QWORD *)(v4 + 8);
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v4 + 16) )
  {
    v9 = sub_491288(v4, *(void **)v4, v8 + 1, 1u);
    *(_QWORD *)v4 = v9;
    v8 = *(_QWORD *)(v4 + 8);
  }
  else
  {
    v9 = *(_BYTE **)v4;
  }
  v9[v8] = v2;
  ++*(_QWORD *)(v4 + 8);
  result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
  *(_DWORD *)(a1 + 208) = result;
  return result;
}
