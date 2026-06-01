/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CEE0
// Address: 0x0005CEE0

//----- (0005CEE0) --------------------------------------------------------
int __cdecl sub_5CEE0(char *a1, char *s, char *a3, unsigned int a4, int a5)
{
  _DWORD *idc_class; // esi
  const char *v6; // eax
  const char *v7; // esi
  size_t v8; // eax
  size_t v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  void *v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // esi
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rt2
  bool v20; // cl
  bool v21; // cf
  size_t v22; // eax
  _DWORD *v23; // eax
  char *v24; // edi
  char *v25; // ecx
  char *v26; // edi
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // edi
  size_t v32; // esi
  _DWORD *v33; // edi
  char *v34; // [esp+0h] [ebp-ACh]
  char *v35; // [esp+4h] [ebp-A8h]
  const char *v36; // [esp+4h] [ebp-A8h]
  size_t v37; // [esp+20h] [ebp-8Ch]
  int v38; // [esp+20h] [ebp-8Ch]
  char *v40; // [esp+24h] [ebp-88h]
  int v41; // [esp+28h] [ebp-84h]
  int v42; // [esp+2Ch] [ebp-80h]
  int v43[19]; // [esp+30h] [ebp-7Ch] BYREF
  int v44; // [esp+80h] [ebp-2Ch] BYREF
  void *v45; // [esp+84h] [ebp-28h]
  int v46; // [esp+88h] [ebp-24h]
  int v47; // [esp+8Ch] [ebp-20h]
  int v48; // [esp+90h] [ebp-1Ch]
  unsigned int v49; // [esp+98h] [ebp-14h]

  v49 = __readgsdword(0x14u);
  if ( s )
  {
    idc_class = (_DWORD *)find_idc_class(s);
    if ( !idc_class )
    {
      set_error_string(0, s);
      set_qerrno(1536);
      sub_5CC60(a1);
      if ( a5 )
      {
        v6 = qstrerror(0xFFFFFFFF);
        if ( v6 && (v7 = v6, (v8 = strlen(v6)) != 0) )
        {
          v9 = v8;
          v10 = a5;
          v11 = v8 + 1;
          if ( *(_DWORD *)(a5 + 8) >= v8 + 1 )
          {
            v12 = *(void **)a5;
          }
          else
          {
            v37 = v8;
            v12 = qvector_reserve(a5, *(void **)a5, v11, 1u);
            v10 = a5;
            v9 = v37;
            *(_DWORD *)a5 = v12;
          }
          *(_DWORD *)(v10 + 4) = v11;
          v36 = v7;
          v32 = v9;
          v33 = (_DWORD *)v10;
          memmove(v12, v36, v9);
          *(_BYTE *)(*v33 + v32) = 0;
        }
        else
        {
          *(_DWORD *)(a5 + 4) = 0;
        }
      }
      return 0;
    }
  }
  else
  {
    idc_class = nullptr;
  }
  v47 = 0;
  v46 = 0;
  v48 = 0;
  v45 = nullptr;
  LOBYTE(v44) = 5;
  v13 = operator new(0x14u);
  if ( idc_class )
    v14 = idc_class[4];
  else
    v14 = 0;
  v15 = sub_51020(v13, v14);
  v45 = v13;
  if ( !idc_class )
    goto LABEL_25;
  sub_1B530((int)v43, s);
  v16 = sub_5C350(idc_class, (int)v43);
  v15 = v43[0];
  if ( v43[0] )
  {
    v43[1] = 0;
    qfree((void *)v43[0]);
    v43[0] = 0;
    v43[2] = 0;
  }
  if ( v16 == -1 )
  {
LABEL_25:
    LOBYTE(v15) = 1;
    v38 = v15;
    move_idcv(a1, (char *)&v44);
  }
  else
  {
    v17 = a4 + 1;
    v41 = a4 + 1;
    if ( a4 + 1 > 0xCCCCCCC )
    {
      v24 = (char *)qalloc_or_throw(0x7FFFFFFF);
    }
    else
    {
      v19 = 20LL * v17;
      v18 = 20 * v17;
      v20 = HIDWORD(v19) != 0;
      v21 = __CFADD__(v18, 4);
      v22 = v18 + 4;
      if ( v21 )
        v22 = -1;
      if ( v20 )
        v22 = -1;
      v23 = operator new[](v22);
      v24 = (char *)(v23 + 1);
      *v23 = v41;
      if ( a4 != -1 )
      {
        v25 = (char *)(v23 + 1);
        do
        {
          *v25 = 2;
          *((_DWORD *)v25 + 4) = 0;
          *((_DWORD *)v25 + 3) = 0;
          *((_DWORD *)v25 + 2) = 0;
          *((_DWORD *)v25 + 1) = 0;
          v25 += 20;
        }
        while ( v25 != &v24[20 * v41] );
      }
    }
    copy_idcv(v24, (char *)&v44);
    v42 = v16;
    v40 = v24;
    v26 = v24 + 20;
    v27 = -1;
    while ( ++v27 < a4 )
    {
      v35 = a3;
      a3 += 20;
      v34 = v26;
      v26 += 20;
      copy_idcv(v34, v35);
    }
    sub_5FB80((int)v43, 0, 0);
    LOBYTE(v28) = sub_5D3A0((int)v43, nullptr, v42, v41, v40, a1, a5);
    v38 = v28;
    if ( v40 )
    {
      v29 = *((_DWORD *)v40 - 1);
      if ( v29 )
      {
        v30 = 20 * v29;
        do
        {
          free_idcv(&v40[v30 - 20]);
          v30 -= 20;
        }
        while ( v30 );
      }
      operator delete[](v40 - 4);
    }
    sub_5FE80((int)v43);
  }
  if ( (char)v44 == 5 )
  {
    sub_59680(v45, (char *)&v44);
  }
  else if ( (char)v44 == 7 && v45 )
  {
    v46 = 0;
    qfree(v45);
    v45 = nullptr;
    v47 = 0;
    return v38;
  }
  return v38;
}
// 5D0EA: variable 'v15' is possibly undefined
// 5D1C4: variable 'v28' is possibly undefined
