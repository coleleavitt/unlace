/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411208
// Address: 0x0000000000411208

//----- (0000000000411208) ----------------------------------------------------
__int64 __fastcall sub_411208(__int64 a1, int *a2, _BYTE *a3)
{
  __int64 v6; // x21
  int v7; // w0
  int v8; // w3
  int v9; // w0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  unsigned int v13; // w24
  _DWORD *v15; // x0
  _DWORD *v16; // x3

  if ( a3 )
    *a3 = 0;
  v6 = a1 + 1920;
  while ( 1 )
  {
    v7 = sub_417EA0(a1, a2 + 1, -1, 0);
    *a2 = v7;
    if ( v7 <= 0 )
    {
      if ( *(_DWORD *)(a1 + 2112) )
      {
        v13 = (unsigned __int8)sub_408CF8(a1, a2, a2 + 1);
        if ( v13 )
        {
          sub_411138(a1, a3, (unsigned int *)a2);
          return v13;
        }
      }
      v8 = a2[2];
      if ( !v8 )
        return 0;
      v9 = sub_417EA0(a1, a2 + 1, -1, v8);
      *a2 = v9;
      if ( v9 <= 0 )
        return 0;
    }
    sub_411138(a1, a3, (unsigned int *)a2);
    v10 = *(_QWORD *)(a1 + 1928);
    if ( v10 )
    {
      v11 = (unsigned int)*a2;
      v12 = a1 + 1920;
      do
      {
        while ( *(_DWORD *)(v10 + 32) >= (int)v11 )
        {
          v12 = v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v10 )
            goto LABEL_12;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v10 );
LABEL_12:
      if ( v12 != v6 && (int)v11 >= *(_DWORD *)(v12 + 32) )
        return 1;
    }
    else
    {
      v11 = (unsigned int)*a2;
    }
    v15 = *(_DWORD **)(a1 + 1960);
    v16 = &v15[*(_QWORD *)(a1 + 1968)];
    if ( v15 == v16 )
    {
LABEL_24:
      sub_40B2C8(a1, v11, a2[1]);
      a2[2] = 0;
    }
    else
    {
      while ( (_DWORD)v11 != *v15 )
      {
        if ( v16 == ++v15 )
          goto LABEL_24;
      }
      ptrace(PTRACE_CONT, v11, 0, 0);
      a2[2] = 0;
    }
  }
}
