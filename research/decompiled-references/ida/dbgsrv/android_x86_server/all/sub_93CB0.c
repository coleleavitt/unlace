/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93CB0
// Address: 0x00093CB0

//----- (00093CB0) --------------------------------------------------------
unsigned int __cdecl sub_93CB0(int a1)
{
  _DWORD *v1; // eax
  int v2; // edx
  unsigned int v3; // esi
  unsigned int v4; // esi
  const void *v5; // ecx
  void *v6; // eax
  unsigned int v7; // esi
  const void *v8; // ecx
  void *v9; // eax
  int *v10; // esi
  int v11; // eax
  size_t v12; // ecx
  unsigned int v13; // edi
  void *v14; // eax
  size_t v15; // edi
  const char *v16; // eax
  void *v17; // edi
  const char *v18; // ecx
  size_t v19; // edx
  _BYTE *v20; // eax
  size_t v21; // edi
  size_t v22; // edi
  int v23; // edx
  _BYTE *v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // edx
  __suseconds_t v27; // eax
  time_t v28; // edx
  char *v29; // ecx
  char *v30; // eax
  int *v31; // eax
  const char *v33; // eax
  int v34; // edi
  int v35; // eax
  size_t v36; // [esp-8h] [ebp-4A4h]
  const void **v37; // [esp+Ch] [ebp-490h]
  size_t v38; // [esp+Ch] [ebp-490h]
  const char *v39; // [esp+Ch] [ebp-490h]
  const void *v40; // [esp+10h] [ebp-48Ch]
  const void *v41; // [esp+10h] [ebp-48Ch]
  const void *v42; // [esp+10h] [ebp-48Ch]
  unsigned int v43; // [esp+10h] [ebp-48Ch]
  size_t v44; // [esp+10h] [ebp-48Ch]
  size_t v45; // [esp+14h] [ebp-488h]
  unsigned int v46; // [esp+18h] [ebp-484h]
  _DWORD *v47; // [esp+1Ch] [ebp-480h] BYREF
  char *v48; // [esp+20h] [ebp-47Ch] BYREF
  int v49; // [esp+24h] [ebp-478h]
  int v50; // [esp+28h] [ebp-474h]
  int v51; // [esp+30h] [ebp-46Ch] BYREF
  unsigned int v52; // [esp+34h] [ebp-468h]
  unsigned int v53; // [esp+38h] [ebp-464h]
  int v54; // [esp+40h] [ebp-45Ch] BYREF
  int v55[4]; // [esp+44h] [ebp-458h] BYREF
  int v56; // [esp+54h] [ebp-448h] BYREF
  unsigned int v57; // [esp+58h] [ebp-444h]
  unsigned int v58; // [esp+5Ch] [ebp-440h]
  int v59; // [esp+60h] [ebp-43Ch] BYREF
  unsigned int v60; // [esp+64h] [ebp-438h]
  unsigned int v61; // [esp+68h] [ebp-434h]
  _BYTE v62[25]; // [esp+6Eh] [ebp-42Eh] BYREF
  _BYTE src[1025]; // [esp+87h] [ebp-415h] BYREF
  unsigned int v64; // [esp+488h] [ebp-14h]

  v64 = __readgsdword(0x14u);
  v1 = sub_94A90();
  v2 = a1;
  *(_DWORD *)(a1 + 40) = v1;
  v54 = 44;
  memset(v55, 0, 14);
  v57 = 0;
  v56 = 0;
  v59 = 0;
  v58 = 0;
  v61 = 0;
  v60 = 0;
  v37 = (const void **)(a1 + 4);
  if ( &v54 != (int *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( v3 < 2 )
    {
      v55[1] = 0;
    }
    else
    {
      v40 = *v37;
      v55[0] = (int)qvector_reserve((int)v55, nullptr, v3, 1u);
      v55[1] = v3;
      memmove((void *)v55[0], v40, v3 - 1);
      *(_BYTE *)(v55[0] + v3 - 1) = 0;
      v2 = a1;
    }
  }
  LOWORD(v55[3]) = *(_WORD *)(v2 + 56);
  if ( &v56 != (int *)(v2 + 16) )
  {
    v4 = *(_DWORD *)(v2 + 20);
    if ( v4 < 2 )
    {
      v57 = 0;
    }
    else
    {
      v5 = *(const void **)(v2 + 16);
      if ( v58 >= v4 )
      {
        v6 = (void *)v56;
      }
      else
      {
        v41 = *(const void **)(v2 + 16);
        v6 = qvector_reserve((int)&v56, (void *)v56, v4, 1u);
        v56 = (int)v6;
        v5 = v41;
      }
      v57 = v4;
      memmove(v6, v5, v4 - 1);
      *(_BYTE *)(v56 + v4 - 1) = 0;
      v2 = a1;
    }
  }
  if ( &v59 != (int *)(v2 + 28) )
  {
    v7 = *(_DWORD *)(v2 + 32);
    if ( v7 < 2 )
    {
      v60 = 0;
    }
    else
    {
      v8 = *(const void **)(v2 + 28);
      if ( v61 >= v7 )
      {
        v9 = (void *)v59;
      }
      else
      {
        v42 = *(const void **)(v2 + 28);
        v9 = qvector_reserve((int)&v59, (void *)v59, v7, 1u);
        v59 = (int)v9;
        v8 = v42;
      }
      v60 = v7;
      memmove(v9, v8, v7 - 1);
      *(_BYTE *)(v59 + v7 - 1) = 0;
      v2 = a1;
    }
  }
  v10 = (int *)(v2 + 40);
  if ( !(unsigned __int8)sub_94C00(*(_DWORD *)(v2 + 40), (int)&v54) )
  {
    if ( *(_DWORD *)(a1 + 8) >= 2u )
      v33 = (const char *)*v37;
    else
      v33 = "0.0.0.0";
    v39 = v33;
    v34 = *(unsigned __int16 *)(a1 + 56);
    v35 = sub_94B70(*(_DWORD *)(a1 + 40));
    sub_98F70("%s:%u: %s\n", v39, v34, v35);
    sub_94D80(v10, -1);
    exit(1);
  }
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v48 = nullptr;
  v49 = 0;
  v50 = 0;
  sub_94CD0(*v10, (int)&v48, 0);
  if ( (unsigned __int8)sub_B1120() )
  {
    v11 = __strlen_chk(src, 1025);
    v12 = v11;
    if ( v11 )
    {
      v13 = v11 + 1;
      v14 = (void *)v51;
      if ( v53 < v12 + 1 )
      {
        v38 = v12;
        v14 = qvector_reserve((int)&v51, (void *)v51, v13, 1u);
        v12 = v38;
        v51 = (int)v14;
      }
      v52 = v13;
      v15 = v12;
      memmove(v14, src, v12);
      *(_BYTE *)(v51 + v15) = 0;
      if ( v49 )
        v16 = v48;
      else
        v16 = byte_EF875;
      v17 = (void *)v51;
      v18 = (const char *)v51;
      if ( v52 )
        goto LABEL_34;
    }
    else
    {
      v52 = 0;
      if ( v49 )
        v16 = v48;
      else
        v16 = byte_EF875;
      v17 = (void *)v51;
    }
    v18 = byte_EF875;
LABEL_34:
    if ( !strcmp(v16, v18) )
    {
      if ( v17 )
      {
        v52 = 0;
        qfree(v17);
        v51 = 0;
        v53 = 0;
      }
    }
    else
    {
      v19 = __strlen_chk(" (my ip ", 9);
      v20 = (_BYTE *)v51;
      v21 = v52 - 1;
      if ( !v52 )
        v21 = 0;
      v43 = v21 + v19 + 1;
      if ( v53 < v43 )
      {
        v45 = v19;
        v20 = qvector_reserve((int)&v51, (void *)v51, v21 + v19 + 1, 1u);
        v19 = v45;
        v51 = (int)v20;
      }
      v52 = v43;
      v20[v21 + v19] = 0;
      if ( v21 )
      {
        v36 = v21;
        v22 = v19;
        memmove((void *)(v51 + v19), (const void *)v51, v36);
        v19 = v22;
      }
      memmove((void *)v51, " (my ip ", v19);
      v23 = __strlen_chk(")", 2);
      v24 = (_BYTE *)v51;
      v25 = v52 - 1;
      if ( !v52 )
        v25 = 0;
      v44 = v23;
      v26 = v25 + v23 + 1;
      v46 = v26;
      if ( v53 < v26 )
      {
        v24 = qvector_reserve((int)&v51, (void *)v51, v26, 1u);
        v51 = (int)v24;
      }
      v52 = v46;
      v24[v25 + v44] = 0;
      memmove((void *)(v51 + v25), ")", v44);
    }
  }
  v27 = qtime64();
  format_timestamp(v62, 25, v27, v28, 0);
  v29 = byte_EF875;
  v30 = byte_EF875;
  if ( v49 )
    v30 = v48;
  if ( v52 )
    v29 = (char *)v51;
  sub_98F70("%s Listening on %s:%u%s...\n", v62, v30, *(unsigned __int16 *)(a1 + 56), v29);
  while ( *v10 )
  {
    v47 = sub_94A90();
    if ( (unsigned __int8)sub_94C30((int)v47, *v10)
      && (v31 = (int *)(*(int (__cdecl **)(int, _DWORD *))(*(_DWORD *)a1 + 12))(a1, v47)) != nullptr )
    {
      sub_937B0(a1, v31);
    }
    else
    {
      sub_94D80((int *)&v47, -1);
      if ( !*v10 )
        break;
      sub_98F70("Rejected client\n");
    }
  }
  if ( v48 )
  {
    v49 = 0;
    qfree(v48);
    v48 = nullptr;
    v50 = 0;
  }
  if ( v51 )
  {
    v52 = 0;
    qfree((void *)v51);
    v51 = 0;
    v53 = 0;
  }
  if ( v59 )
  {
    v60 = 0;
    qfree((void *)v59);
    v59 = 0;
    v61 = 0;
  }
  if ( v56 )
  {
    v57 = 0;
    qfree((void *)v56);
    v56 = 0;
    v58 = 0;
  }
  if ( v55[0] )
  {
    v55[1] = 0;
    qfree((void *)v55[0]);
    v55[0] = 0;
    v55[2] = 0;
  }
  return __readgsdword(0x14u);
}
// 9412B: variable 'v28' is possibly undefined
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
