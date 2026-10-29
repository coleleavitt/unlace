__int64 __fastcall sub_79E3D0(__int64 a1, __int64 *a2, char a3, const char *a4, __int16 a5)
{
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r14
  const char *v11; // rsi
  size_t v12; // r13
  unsigned int v13; // ebp
  bool v14; // zf
  __int64 v15; // rax
  const char *v17; // rax
  const char *v18; // rbx
  size_t v19; // rax
  size_t v20; // r13
  void *v21; // rdi
  size_t v22; // r14
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-130h] BYREF
  void *src; // [rsp+10h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-120h]
  __int64 v27; // [rsp+30h] [rbp-108h]
  void *v28; // [rsp+38h] [rbp-100h]
  __int128 v29; // [rsp+40h] [rbp-F8h]
  __int16 v30; // [rsp+50h] [rbp-E8h]
  void *v31; // [rsp+58h] [rbp-E0h]
  __int128 v32; // [rsp+60h] [rbp-D8h]
  void *v33; // [rsp+70h] [rbp-C8h]
  __int128 v34; // [rsp+78h] [rbp-C0h]
  void *v35; // [rsp+88h] [rbp-B0h]
  __int128 v36; // [rsp+90h] [rbp-A8h]
  __int16 v37; // [rsp+A0h] [rbp-98h]
  void *v38; // [rsp+A8h] [rbp-90h]
  __int128 v39; // [rsp+B0h] [rbp-88h]
  void *v40; // [rsp+C0h] [rbp-78h]
  __int128 v41; // [rsp+C8h] [rbp-70h]
  __int64 v42; // [rsp+D8h] [rbp-60h]
  __int64 v43; // [rsp+E0h] [rbp-58h]
  int v44; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  src = nullptr;
  v24 = sub_79DA20(a3);
  *(_OWORD *)n = 0;
  if ( a4 )
  {
    v8 = strlen(a4);
    v9 = v8 + 1;
    v10 = v8;
    v11 = a4;
    src = (void *)qvector_reserve(&src, 0, v8 + 1, 1);
    n[0] = v9;
    memmove(src, a4, v10);
    *((_BYTE *)src + v10) = 0;
    v12 = n[0];
    v27 = 192;
    v28 = nullptr;
    v29 = 0;
    if ( n[0] )
    {
      v28 = (void *)qalloc_or_throw(n[0], v11);
      *((_QWORD *)&v29 + 1) = v12;
      memcpy(v28, src, v12);
      *(_QWORD *)&v29 = v12;
    }
  }
  else
  {
    v27 = 192;
    v28 = nullptr;
    v29 = 0;
  }
  v30 = a5;
  v31 = nullptr;
  v33 = nullptr;
  v35 = nullptr;
  v37 = 0;
  v38 = nullptr;
  v40 = nullptr;
  v42 = 0;
  v43 = 0;
  v44 = -1;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v39 = 0;
  v41 = 0;
  v13 = sub_79DA90(v24);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( (_BYTE)v13 )
  {
    v14 = *(_BYTE *)(a1 + 104) == 0;
    *(_BYTE *)(a1 + 69) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    if ( !v14 )
      sub_79DB00((_QWORD *)(a1 + 96));
    v15 = v24;
    *(_BYTE *)(a1 + 104) = 1;
    *(_QWORD *)(a1 + 96) = v15;
  }
  else
  {
    v17 = (const char *)sub_79DA70(v24);
    v18 = v17;
    if ( v17 && (v19 = strlen(v17), (v20 = v19) != 0) )
    {
      v21 = (void *)*a2;
      v22 = v19 + 1;
      if ( a2[2] < v19 + 1 )
      {
        v23 = qvector_reserve(a2, *a2, v19 + 1, 1);
        *a2 = v23;
        v21 = (void *)v23;
      }
      a2[1] = v22;
      memmove(v21, v18, v20);
      *(_BYTE *)(*a2 + v20) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    sub_79DB00(&v24);
  }
  return v13;
}

