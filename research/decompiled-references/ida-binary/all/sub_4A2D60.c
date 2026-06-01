unsigned __int64 __fastcall sub_4A2D60(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  int v3; // r15d
  void (*v4)(void); // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // eax
  const char *v8; // rbp
  const char *v9; // rbx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 (*v14)(); // rax
  __int64 v15; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rbx
  const char *v18; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+10h] [rbp-C8h]
  const char *v21; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+28h] [rbp-B0h]
  __int128 v23; // [rsp+38h] [rbp-A0h]
  __int128 v24; // [rsp+48h] [rbp-90h]
  __int128 v25; // [rsp+58h] [rbp-80h]
  int v26; // [rsp+68h] [rbp-70h]
  __int64 v27; // [rsp+70h] [rbp-68h]
  __int64 v28; // [rsp+78h] [rbp-60h]
  __int64 v29; // [rsp+80h] [rbp-58h]
  unsigned __int64 v30; // [rsp+88h] [rbp-50h]
  __int64 v31; // [rsp+90h] [rbp-48h]
  unsigned __int64 v32; // [rsp+98h] [rbp-40h]

  v2 = *(_QWORD *)a1;
  v32 = __readfsqword(0x28u);
  v3 = (int)a2;
  v4 = *(void (**)(void))(v2 + 672);
  if ( v4 != nullsub_263 )
    v4();
  v5 = *(_QWORD *)(a1 + 2392);
  v18 = a2;
  v20 = 0;
  v19 = 0;
  v6 = *(int *)(v5 + 48);
  v22 = 0;
  v21 = nullptr;
  v26 = -1;
  v27 = 12;
  v28 = -1;
  v29 = -1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( v6 )
  {
    a2 = nullptr;
    v19 = qvector_reserve(&v19, 0, v6, 24);
    if ( *((_QWORD *)&v22 + 1) < v6 )
    {
      a2 = v21;
      v21 = (const char *)qvector_reserve(&v21, v21, v6, 16);
    }
  }
  v30 = v6;
  v7 = sub_4A0DB0(a1);
  v8 = (const char *)v7;
  v9 = nullptr;
  if ( v7 )
  {
    do
    {
      while ( 1 )
      {
        a2 = (const char *)&v18;
        if ( (unsigned __int8)sub_4DFD50(a1 + 104, &v18, v9) )
          break;
        if ( v8 == ++v9 )
          goto LABEL_9;
      }
      a2 = v9;
      sub_4DB7C0(
        v3,
        (_DWORD)v9++,
        (unsigned int)&v18,
        v10,
        v11,
        v12,
        (_DWORD)v18,
        v19,
        v20,
        DWORD2(v20),
        (__int64)v21,
        v22,
        DWORD2(v22),
        v23,
        *((__int64 *)&v23 + 1),
        v24,
        DWORD2(v24),
        v25,
        DWORD2(v25),
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    while ( v8 != v9 );
  }
LABEL_9:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2392) + 15LL) & 2) != 0 && *(_DWORD *)(a1 + 2376) == 2 )
  {
    if ( *(_QWORD *)(a1 + 2440) )
    {
      v14 = *(__int64 (**)())(*(_QWORD *)a1 + 688LL);
      if ( v14 != sub_49AD30 && ((unsigned __int8 (__fastcall *)(__int64))v14)(a1) && (*(_BYTE *)(a1 + 1784) & 8) != 0 )
      {
        v15 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2384));
        v16 = *(_QWORD **)(v15 + 216);
        v17 = v15;
        if ( v16 )
        {
          delete_dirtree(*v16);
          a2 = &byte_8;
          operator delete(v16, 8u);
        }
        *(_QWORD *)(v17 + 216) = dirtree_new_shadow_dirtree(**(_QWORD **)(v17 + 208));
      }
    }
  }
  if ( (_QWORD)v23 )
  {
    *((_QWORD *)&v23 + 1) = 0;
    qfree(v23, a2);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, a2);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, a2);
  }
  return v32 - __readfsqword(0x28u);
}
