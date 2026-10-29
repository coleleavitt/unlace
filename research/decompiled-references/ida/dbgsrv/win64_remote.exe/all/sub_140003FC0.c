/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003FC0
// Address: 0x0000000140003FC0

//----- (0000000140003FC0) ----------------------------------------------------
__int64 __fastcall sub_140003FC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax

  ++a1[1];
  v4 = (_QWORD *)*a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return a3;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    *v6 = a3;
    if ( v6 == (_QWORD *)*v4 )
      *v4 = a3;
  }
  else
  {
    v6[2] = a3;
    if ( v6 == (_QWORD *)v4[2] )
      v4[2] = a3;
  }
  v8 = (_QWORD *)a3;
  while ( !*(_BYTE *)(v8[1] + 24LL) )
  {
    v9 = v8[1];
    v10 = *(__int64 **)(v9 + 8);
    v11 = *v10;
    if ( v9 == *v10 )
    {
      v12 = v10[2];
      if ( *(_BYTE *)(v12 + 24) )
      {
        v13 = *(_QWORD **)(v9 + 16);
        if ( v8 == v13 )
        {
          v8 = (_QWORD *)v8[1];
          *(_QWORD *)(v9 + 16) = *v13;
          if ( !*(_BYTE *)(*v13 + 25LL) )
            *(_QWORD *)(*v13 + 8LL) = v9;
          v13[1] = *(_QWORD *)(v9 + 8);
          if ( v9 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v13;
          }
          else
          {
            v14 = *(_QWORD **)(v9 + 8);
            if ( v9 == *v14 )
              *v14 = v13;
            else
              v14[2] = v13;
          }
          *v13 = v9;
          *(_QWORD *)(v9 + 8) = v13;
        }
        *(_BYTE *)(v8[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(v8[1] + 8LL) + 24LL) = 0;
        v15 = *(_QWORD **)(v8[1] + 8LL);
        v16 = (_QWORD *)*v15;
        *v15 = *(_QWORD *)(*v15 + 16LL);
        v17 = v16[2];
        if ( !*(_BYTE *)(v17 + 25) )
          *(_QWORD *)(v17 + 8) = v15;
        v16[1] = v15[1];
        if ( v15 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v16;
          v16[2] = v15;
        }
        else
        {
          v18 = (_QWORD *)v15[1];
          if ( v15 == (_QWORD *)v18[2] )
            v18[2] = v16;
          else
            *v18 = v16;
          v16[2] = v15;
        }
LABEL_48:
        v15[1] = v16;
        continue;
      }
      *(_BYTE *)(v9 + 24) = 1;
      *(_BYTE *)(v12 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v8[1] + 8LL) + 24LL) = 0;
      v8 = *(_QWORD **)(v8[1] + 8LL);
    }
    else
    {
      if ( *(_BYTE *)(v11 + 24) )
      {
        v19 = *(_QWORD **)v9;
        if ( v8 == *(_QWORD **)v9 )
        {
          v8 = (_QWORD *)v8[1];
          *(_QWORD *)v9 = v19[2];
          v20 = v19[2];
          if ( !*(_BYTE *)(v20 + 25) )
            *(_QWORD *)(v20 + 8) = v9;
          v19[1] = *(_QWORD *)(v9 + 8);
          if ( v9 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v19;
          }
          else
          {
            v21 = *(_QWORD **)(v9 + 8);
            if ( v9 == v21[2] )
              v21[2] = v19;
            else
              *v21 = v19;
          }
          v19[2] = v9;
          *(_QWORD *)(v9 + 8) = v19;
        }
        *(_BYTE *)(v8[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(v8[1] + 8LL) + 24LL) = 0;
        v15 = *(_QWORD **)(v8[1] + 8LL);
        v16 = (_QWORD *)v15[2];
        v15[2] = *v16;
        if ( !*(_BYTE *)(*v16 + 25LL) )
          *(_QWORD *)(*v16 + 8LL) = v15;
        v16[1] = v15[1];
        if ( v15 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v16;
        }
        else
        {
          v22 = (_QWORD *)v15[1];
          if ( v15 == (_QWORD *)*v22 )
            *v22 = v16;
          else
            v22[2] = v16;
        }
        *v16 = v15;
        goto LABEL_48;
      }
      *(_BYTE *)(v9 + 24) = 1;
      *(_BYTE *)(v11 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v8[1] + 8LL) + 24LL) = 0;
      v8 = *(_QWORD **)(v8[1] + 8LL);
    }
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return a3;
}
