/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8491C
// Address: 0x0008491C

//----- (0008491C) --------------------------------------------------------
int __fastcall sub_8491C(unsigned int *a1, _DWORD *a2, int *a3, unsigned int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r4
  unsigned int v8; // r1
  char *v9; // r0
  int v10; // r0
  unsigned int v11; // r1
  int v12; // r2
  __suseconds_t v13; // r0
  unsigned int v14; // r1
  __int64 v15; // r0
  int v16; // r0
  int v17; // r7
  int v18; // r0
  int v19; // r4
  int v20; // r6
  size_t v21; // r2
  size_t v22; // r4
  char *v23; // r1
  int v24; // r5
  ssize_t v25; // r0
  ssize_t v26; // r4
  size_t v27; // r2
  char *v28; // r1
  int v29; // r5
  int v32; // [sp+14h] [bp-48h]
  _QWORD *v33; // [sp+1Ch] [bp-40h]
  int *v36; // [sp+28h] [bp-34h]
  int v37; // [sp+2Ch] [bp-30h] BYREF
  void *buf; // [sp+30h] [bp-2Ch] BYREF
  size_t v39; // [sp+34h] [bp-28h]
  unsigned int v40; // [sp+38h] [bp-24h]
  void *ptr; // [sp+3Ch] [bp-20h] BYREF
  unsigned int v42; // [sp+40h] [bp-1Ch]
  unsigned int v43; // [sp+44h] [bp-18h]
  int *v44; // [sp+48h] [bp-14h] BYREF
  unsigned int v45; // [sp+4Ch] [bp-10h]
  int v46; // [sp+50h] [bp-Ch]
  char v47[4]; // [sp+54h] [bp-8h] BYREF

  v5 = 0;
  v45 = 0;
  v44 = nullptr;
  v46 = 0;
  v42 = 0;
  ptr = nullptr;
  v43 = 0;
  v6 = a1[1];
  if ( v6 )
  {
    v44 = (int *)qvector_reserve((int)&v44, nullptr, v6, 4u);
    memset(&v44[v45], 0, 4 * (v6 - v45));
    v45 = v6;
    v7 = a1[1];
    v8 = v42;
    if ( v42 >= v7 )
    {
      if ( v42 != v7 )
      {
        buf = nullptr;
        sub_3DFF4(&ptr, v7, &buf);
      }
    }
    else
    {
      if ( v43 >= v7 )
      {
        v9 = (char *)ptr;
      }
      else
      {
        v9 = (char *)qvector_reserve((int)&ptr, ptr, a1[1], 4u);
        ptr = v9;
        v8 = v42;
      }
      memset(&v9[4 * v8], 0, 4 * (v7 - v8));
      v42 = v7;
    }
    v5 = 0;
    if ( a1[1] )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v44[v10] = *(_DWORD *)(a1[2] + v10 * 4);
        *(_DWORD *)((char *)ptr + v10 * 4) = v11;
        ++v10;
        ++v11;
      }
      while ( v11 < a1[1] );
    }
  }
  v39 = 0;
  buf = nullptr;
  v40 = 0;
  v12 = v45;
  if ( !v45 )
    goto LABEL_49;
  v33 = a3 + 4;
  v32 = 0;
  v36 = a3;
  while ( 1 )
  {
    if ( *a3 < 0 )
    {
      v16 = a3[6];
    }
    else
    {
      v13 = qtime64();
      v15 = 1000000LL * v14 + (unsigned int)v13;
      if ( (unsigned __int64)(v15 + 10) >= *v33 )
        goto LABEL_46;
      v16 = (__PAIR64__(-(HIDWORD(v15) + ((unsigned int)v15 > 0x3E7)), 999 - (int)v15) + *v33) / 0x3E8;
      v36[6] = v16;
      v12 = v45;
    }
    v17 = 0;
    v18 = qwait_for_handles(&v37, v44, v12, 0, v16);
    v19 = v18;
    if ( v18 < 0 )
    {
      winerr(v18);
      v29 = 1;
      sub_82388(a2, "Could not wait for data: %s");
LABEL_42:
      v17 = v19;
      v32 = v29;
      goto LABEL_44;
    }
    v29 = 2;
    v20 = v37;
    if ( !v18 && v37 == -1 )
      goto LABEL_42;
    v21 = v39;
    v22 = a4;
    if ( v39 >= a4 )
    {
      if ( v39 != a4 )
      {
        v47[0] = 0;
        sub_370F6(&buf, a4, v47);
        v22 = a4;
      }
    }
    else
    {
      v23 = (char *)buf;
      if ( v40 < a4 )
      {
        v23 = (char *)qvector_reserve((int)&buf, buf, a4, 1u);
        buf = v23;
        v21 = v39;
        v22 = a4;
      }
      memset(&v23[v21], 0, v22 - v21);
      v39 = v22;
    }
    v24 = 4 * v20;
    v25 = read(v44[v20], buf, v22);
    v26 = v25;
    if ( v25 <= 0 )
    {
      if ( v25 < 0 )
      {
        v17 = -v25;
        winerr(-v25);
        v32 = 1;
        sub_82388(a2, "Could not read from a pipe: %s");
      }
      memmove(&v44[v24 / 4u], &v44[v24 / 4u + 1], (-4 - v24 + 4 * v45--) & 0xFFFFFFFC);
      memmove((char *)ptr + v24, (char *)ptr + v24 + 4, (-4 - v24 + 4 * v42--) & 0xFFFFFFFC);
      goto LABEL_40;
    }
    v27 = v39;
    if ( v39 >= v25 )
    {
      if ( v39 != v25 )
      {
        v47[0] = 0;
        sub_370F6(&buf, v25, v47);
      }
    }
    else
    {
      v28 = (char *)buf;
      if ( v40 < v25 )
      {
        v28 = (char *)qvector_reserve((int)&buf, buf, v25, 1u);
        buf = v28;
        v27 = v39;
      }
      memset(&v28[v27], 0, v26 - v27);
      v39 = v26;
    }
    v17 = v26;
    if ( !(*(int (__fastcall **)(unsigned int *, _DWORD, void **))(*a1 + 8))(a1, *((_DWORD *)ptr + v20), &buf) )
      break;
LABEL_40:
    v12 = v45;
    a3 = v36;
    if ( !v45 )
      goto LABEL_44;
  }
  v17 = v26;
  v32 = 3;
LABEL_44:
  v5 = v32;
  if ( !v32 )
    goto LABEL_49;
  if ( v32 == 2 )
  {
LABEL_46:
    v5 = -1;
    goto LABEL_49;
  }
  v5 = -2;
  if ( v32 != 3 )
    v5 = v17;
LABEL_49:
  if ( buf )
  {
    v39 = 0;
    qfree(buf);
    v40 = 0;
    buf = nullptr;
  }
  if ( ptr )
  {
    v42 = 0;
    qfree(ptr);
    v43 = 0;
    ptr = nullptr;
  }
  if ( v44 )
  {
    v45 = 0;
    qfree(v44);
    v46 = 0;
    v44 = nullptr;
  }
  return v5;
}
// 84A00: variable 'v14' is possibly undefined
