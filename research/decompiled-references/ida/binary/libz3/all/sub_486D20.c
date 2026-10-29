__int64 __fastcall sub_486D20(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _DWORD **v5; // rax
  _DWORD *v6; // rax
  __int64 v8; // rsi
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rsi
  bool v19; // zf
  __int64 *v20; // rbx
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  char v27; // al
  int v28[2]; // [rsp+0h] [rbp-F8h] BYREF
  int v29[2]; // [rsp+8h] [rbp-F0h]
  int v30[4]; // [rsp+10h] [rbp-E8h]
  int v31[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *v32; // [rsp+28h] [rbp-D0h]
  int *v33; // [rsp+30h] [rbp-C8h] BYREF
  __int64 (__fastcall **v34)(); // [rsp+38h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B0h]
  void *v36; // [rsp+50h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-98h]
  void *v38; // [rsp+68h] [rbp-90h]
  __int64 (__fastcall **v39)(); // [rsp+70h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-78h]
  void *v41; // [rsp+88h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-60h]
  void *v43; // [rsp+A0h] [rbp-58h]
  __int64 v44; // [rsp+A8h] [rbp-50h]
  __int64 *v45; // [rsp+B0h] [rbp-48h]
  char v46; // [rsp+B8h] [rbp-40h]

  v5 = *(_DWORD ***)(a3 + 8);
  if ( !v5 || *((_DWORD *)v5 - 1) != 1 )
    return 0;
  v6 = *v5;
  v8 = *(_QWORD *)(a1 + 16);
  *(__m128i *)v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v8);
  if ( v6 )
    ++v6[2];
  v32 = v6;
  v33 = v31;
  *(_QWORD *)v31 = &off_1C4E7B8;
  v35 = 0;
  v34 = &off_1C62200;
  v36 = nullptr;
  v37 = 0;
  v38 = nullptr;
  v39 = &off_1C62200;
  v40 = 0;
  v41 = nullptr;
  v42 = 0;
  v43 = nullptr;
  v44 = v8;
  v45 = nullptr;
  v46 = 1;
  v12 = sub_3D9B00(a2, v8);
  if ( !(_BYTE)v12 )
    goto LABEL_23;
  v13 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v29 = 0;
  *(_QWORD *)v28 = v13;
  sub_3D9B60(a2, v28);
  v14 = *(__int64 **)v29;
  if ( !*(_QWORD *)v29 )
    goto LABEL_56;
  v15 = *(unsigned int *)(*(_QWORD *)v29 - 4LL);
  if ( (unsigned int)v15 > 2 )
  {
    v12 = 0;
    goto LABEL_15;
  }
  if ( (_DWORD)v15 == 1 )
  {
    v27 = sub_168D740(&v33, **(_QWORD **)v29);
  }
  else
  {
LABEL_56:
    if ( (unsigned __int8)sub_168D740(&v33, **(_QWORD **)v29)
      && !(unsigned __int8)sub_168D740(&v33, *(_QWORD *)(*(_QWORD *)v29 + 8LL)) )
    {
      goto LABEL_11;
    }
    if ( !(unsigned __int8)sub_168D740(&v33, **(_QWORD **)v29)
      && (unsigned __int8)sub_168D740(&v33, *(_QWORD *)(*(_QWORD *)v29 + 8LL)) )
    {
      v16 = 8;
      goto LABEL_12;
    }
    if ( (unsigned __int8)sub_168D740(&v33, **(_QWORD **)v29) )
    {
LABEL_11:
      v16 = 0;
LABEL_12:
      v14 = *(__int64 **)v29;
      *a4 = *(_QWORD *)(*(_QWORD *)v29 + v16);
      *a5 = **(_QWORD **)(a3 + 8);
      goto LABEL_13;
    }
    v27 = sub_168D740(&v33, *(_QWORD *)(*(_QWORD *)v29 + 8LL));
  }
  if ( v27 )
    goto LABEL_11;
  v14 = *(__int64 **)v29;
  v12 = 0;
LABEL_13:
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
LABEL_15:
    v17 = &v14[v15];
    if ( v14 >= v17 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v18 = *v14;
        if ( *v14 )
        {
          v19 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v14 >= v17 )
          goto LABEL_21;
      }
      sub_15D7BC0(*(_QWORD *)v28, v18);
      ++v14;
    }
    while ( v14 < v17 );
LABEL_21:
    v14 = *(__int64 **)v29;
    if ( *(_QWORD *)v29 )
LABEL_22:
      sub_186B220(v14 - 1);
  }
LABEL_23:
  v20 = v45;
  if ( v45 )
  {
    v21 = (unsigned __int64)&v45[*((unsigned int *)v45 - 1)];
    if ( (unsigned __int64)v45 >= v21 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = v44;
          v19 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v20 >= v21 )
          goto LABEL_30;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( (unsigned __int64)v20 < v21 );
LABEL_30:
    v20 = v45;
    if ( v45 )
LABEL_31:
      sub_186B220(v20 - 1);
  }
  v39 = &off_1C62200;
  if ( v43 )
    sub_186B220(v43);
  if ( v41 )
    sub_186B220(v41);
  v34 = &off_1C62200;
  if ( v38 )
    sub_186B220(v38);
  if ( v36 )
    sub_186B220(v36);
  v24 = *(_QWORD *)v30;
  if ( *(_QWORD *)v30 )
  {
    v25 = *(_QWORD *)&v30[2];
    v19 = (*(_DWORD *)(*(_QWORD *)v30 + 8LL))-- == 1;
    if ( v19 )
      sub_15D7BC0(v25, v24);
  }
  return v12;
}

