__int64 __fastcall sub_A5D5A0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r12
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // r13
  char v13; // al
  char v14; // al
  unsigned int v15; // eax
  __int64 v16; // rdi
  unsigned int v17; // r12d
  __int64 v18; // rax
  size_t v19; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // dl
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r13
  _DWORD *v27; // rax
  _DWORD *v28; // rdx
  int v29; // [rsp+0h] [rbp-68h]
  char v30; // [rsp+1Fh] [rbp-49h] BYREF
  _QWORD v31[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( a3 <= 0 || !a4[5] )
    return 0;
  v4 = *(_QWORD *)(a1 + 2312);
  if ( (unsigned int)a3 >= *(_DWORD *)(v4 + 476) && (unsigned int)a3 < *(_DWORD *)(v4 + 480) )
    v7 = *(_DWORD *)(v4 + 472);
  else
    v7 = sub_FF9850(v4);
  LOBYTE(v31[0]) = 0;
  if ( v7 + 1 <= 1 )
    goto LABEL_36;
  if ( (v7 & 0x80000000) == 0 )
  {
    v8 = (_DWORD *)(*(_QWORD *)(v4 + 184) + 24LL * v7);
    goto LABEL_9;
  }
  v21 = -2 - v7;
  v22 = *(_QWORD *)(*(_QWORD *)(v4 + 320) + 8LL * ((-2 - v7) >> 6));
  if ( _bittest64(&v22, v21) )
  {
    v26 = (_QWORD *)(*(_QWORD *)(v4 + 272) + 8 * ((unsigned __int64)(int)v21 >> 5));
    if ( *v26 )
    {
      v8 = (_DWORD *)(*v26 + 24LL * ((-2 - (_BYTE)v7) & 0x1F));
      goto LABEL_9;
    }
    v27 = (_DWORD *)sub_A55760((__int64 *)(*(_QWORD *)(v4 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    *v26 = v27;
    v28 = v27 + 192;
    do
    {
      *v27 = 0;
      v27 += 6;
      *((_OWORD *)v27 - 1) = 0;
      *((_QWORD *)v27 - 1) = 0;
    }
    while ( v27 != v28 );
    v23 = v31[0];
    v8 = (_DWORD *)(*v26 + 24LL * ((-2 - (_BYTE)v7) & 0x1F));
  }
  else
  {
    v8 = (_DWORD *)sub_FFBBF0(v4, (unsigned int)v21, v31);
    v23 = v31[0];
  }
  if ( v23 )
    goto LABEL_36;
LABEL_9:
  if ( !v8 )
  {
LABEL_36:
    v9 = 0;
    v7 = 0;
    goto LABEL_11;
  }
  v9 = a3 - (*v8 & 0x7FFFFFFF);
LABEL_11:
  v10 = a4[2];
  v11 = a4 + 1;
  if ( v10 )
  {
    do
    {
      while ( *(_DWORD *)(v10 + 32) >= v9 )
      {
        v11 = (_QWORD *)v10;
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_16;
      }
      v10 = *(_QWORD *)(v10 + 24);
    }
    while ( v10 );
LABEL_16:
    if ( a4 + 1 != v11 )
    {
      v12 = v11[5];
      v13 = *(_BYTE *)(v12 + 32);
      if ( (v13 & 0x18) != 0 && (v13 & 0x1C) != 8 )
      {
        if ( (v13 & 0x40) == 0 )
          goto LABEL_20;
LABEL_38:
        v24 = (*(_BYTE *)(a2 + 28) + 110) & 0x7F;
        if ( (unsigned __int8)v24 <= 0x39u )
        {
          v25 = 0x20000039FC08001LL;
          if ( _bittest64(&v25, v24) )
          {
            v29 = sub_FFE8F0(*(_QWORD *)(a1 + 2312), v7, v9, 0);
            if ( v29 == (unsigned int)sub_EAF8B0(a1 + 18384, v12, v7, *((unsigned int *)v11 + 8)) )
              return v12;
          }
        }
        goto LABEL_20;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 568LL) && (v13 & 0x40) != 0 )
        goto LABEL_38;
    }
  }
LABEL_20:
  if ( (_QWORD *)a4[3] == v11 )
    return 0;
  v12 = *(_QWORD *)(std::_Rb_tree_decrement() + 40);
  v14 = *(_BYTE *)(v12 + 32);
  if ( ((v14 & 0x18) == 0 || (v14 & 0x1C) == 8) && !*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 568LL) )
    return 0;
  if ( (v14 & 0x40) != 0 )
    return 0;
  v15 = sub_EAEFD0(a1 + 18384, v12);
  v16 = *(_QWORD *)(a1 + 2312);
  v17 = v15;
  v30 = 0;
  v18 = sub_FFC570(v16, v7, &v30);
  if ( v30 )
    return 0;
  v31[0] = v17 + v18;
  v31[1] = v9 - v17;
  v19 = j__strlen(";{}#@");
  if ( sub_2223310(v31, ";{}#@", v19, -1) != -1 )
    return 0;
  return v12;
}

