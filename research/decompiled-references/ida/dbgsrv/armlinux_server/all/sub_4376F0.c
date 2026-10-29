/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4376F0
// Address: 0x00000000004376F0

//----- (00000000004376F0) ----------------------------------------------------
__int64 __fastcall sub_4376F0(__int64 a1)
{
  unsigned int v2; // w0
  __int64 v3; // x21
  __int64 v4; // x1
  _BYTE *v5; // x0
  unsigned __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x1
  _BYTE *v9; // x0
  void **v10; // x0
  char *v11; // x1
  size_t v12; // x2
  void *ptr; // [xsp+20h] [xbp-20h] BYREF
  __int64 v15; // [xsp+28h] [xbp-18h]
  __int64 v16; // [xsp+30h] [xbp-10h]

  v2 = *(unsigned __int16 *)(a1 + 64);
  if ( v2 == 5 )
    goto LABEL_19;
  if ( v2 > 5 )
  {
    if ( v2 != 7 )
    {
      if ( v2 == 8 )
      {
        v3 = *(_QWORD *)(a1 + 200);
        *(_BYTE *)(a1 + 212) = -45;
        v4 = *(_QWORD *)(v3 + 8);
        if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(v3 + 16) )
        {
          v5 = sub_491288(v3, *(void **)v3, v4 + 1, 1u);
          *(_QWORD *)v3 = v5;
          v4 = *(_QWORD *)(v3 + 8);
        }
        else
        {
          v5 = *(_BYTE **)v3;
        }
        v5[v4] = -45;
        ++*(_QWORD *)(v3 + 8);
        v6 = *(_QWORD *)(a1 + 88);
        ++*(_DWORD *)(a1 + 208);
        sub_436CB0(a1, v6);
        return 0;
      }
      goto LABEL_17;
    }
    v7 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -46;
    v8 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v7 + 16) )
    {
      v9 = sub_491288(v7, *(void **)v7, v8 + 1, 1u);
      *(_QWORD *)v7 = v9;
      v8 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v9 = *(_BYTE **)v7;
    }
    v9[v8] = -46;
    ++*(_QWORD *)(v7 + 8);
    v10 = *(void ***)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    sub_43D128(v10, (const void *)(a1 + 88), 0x10u);
    *(_DWORD *)(a1 + 208) += 16;
    return 0;
  }
  if ( v2 == 3 )
  {
LABEL_19:
    sub_437490(a1, *(_QWORD *)(a1 + 72));
    return 0;
  }
  if ( v2 != 4 )
  {
LABEL_17:
    if ( !under_debugger )
      sub_492270(275);
    __break(0x3E8u);
    goto LABEL_19;
  }
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  sub_433020((__int64)&ptr, a1 + 40);
  if ( v15 )
  {
    v11 = (char *)ptr;
    v12 = v15 - 1;
  }
  else
  {
    v12 = 0;
    v11 = (char *)&qword_4B2D48;
  }
  sub_436CF8(a1, v11, v12);
  if ( ptr )
  {
    v15 = 0;
    j__free(ptr);
  }
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
