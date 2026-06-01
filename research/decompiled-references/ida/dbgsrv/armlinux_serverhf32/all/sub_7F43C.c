/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F43C
// Address: 0x0007F43C

//----- (0007F43C) --------------------------------------------------------
unsigned int __fastcall sub_7F43C(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4)
{
  unsigned int v4; // r6
  unsigned int v8; // r7
  int v9; // r2
  unsigned __int64 v10; // r0
  __suseconds_t v11; // r0
  unsigned int v12; // r1
  unsigned __int64 v13; // r6
  unsigned __int64 v14; // kr10_8
  int v15; // r0
  char *v16; // r1
  unsigned int v17; // r2
  int v18; // r0
  unsigned int v19; // r2
  int (*v20)(); // r7
  char *v22; // r0
  void *v23; // r0
  const char *v24; // r0
  unsigned int v25; // r10
  unsigned int v26; // r0
  char *v27; // r1
  unsigned int v28; // r3
  int v29; // [sp+10h] [bp-44h]
  int v31; // [sp+24h] [bp-30h] BYREF
  void *v32; // [sp+28h] [bp-2Ch] BYREF
  unsigned int v33; // [sp+2Ch] [bp-28h]
  int v34; // [sp+30h] [bp-24h]
  void *v35; // [sp+34h] [bp-20h] BYREF
  unsigned int v36; // [sp+38h] [bp-1Ch]
  unsigned int v37; // [sp+3Ch] [bp-18h]
  void *ptr; // [sp+40h] [bp-14h] BYREF
  unsigned int v39; // [sp+44h] [bp-10h]
  unsigned int v40; // [sp+48h] [bp-Ch]

  v8 = a1[1];
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v35 = nullptr;
  v36 = 0;
  v37 = 0;
  if ( v8 )
  {
    v32 = sub_77EB0((int)&v32, nullptr, v8, 4u);
    memset((char *)v32 + 4 * v33, 0, 4 * (v8 - v33));
    v25 = a1[1];
    v26 = v36;
    v33 = v8;
    if ( v25 <= v36 )
    {
      if ( v25 < v36 )
        v36 = v25;
    }
    else
    {
      v27 = (char *)v35;
      if ( v25 > v37 )
      {
        v27 = (char *)sub_77EB0((int)&v35, v35, v25, 4u);
        v26 = v36;
        v35 = v27;
      }
      memset(&v27[4 * v26], 0, 4 * (v25 - v26));
      v36 = v25;
      v25 = a1[1];
    }
    if ( v25 )
    {
      v28 = 0;
      do
      {
        *((_DWORD *)v32 + v28) = *(_DWORD *)(a1[2] + 4 * v28);
        *((_DWORD *)v35 + v28) = v28;
        ++v28;
      }
      while ( a1[1] > v28 );
    }
  }
  v29 = 0;
  ptr = nullptr;
  v39 = 0;
  v40 = 0;
  while ( 1 )
  {
    v9 = v33;
    if ( !v33 )
      break;
    while ( 1 )
    {
      if ( *(int *)a3 >= 0 )
      {
        v11 = sub_78DE0();
        v13 = *(_QWORD *)(a3 + 16);
        v14 = __PAIR64__(
                (__PAIR64__(
                   (__PAIR64__((__PAIR64__(v12 >> 27, 32 * v12) - v12) >> 23, 15872 * v12) + v12) >> 26,
                   1015872 * v12)
               - (__PAIR64__((__PAIR64__(v12 >> 27, 32 * v12) - v12) >> 23, 15872 * v12)
                + v12)) >> 32,
                999999 * v12)
            + v12
            + (unsigned int)v11;
        if ( v14 + 10 >= v13 )
          goto LABEL_30;
        v10 = (v13 + 999 - v14) / 0x3E8;
        v9 = v33;
        *(_DWORD *)(a3 + 24) = v10;
      }
      else
      {
        LODWORD(v10) = *(_DWORD *)(a3 + 24);
      }
      v15 = sub_7F22C(&v31, (int *)v32, v9, 0, v10);
      v4 = v15;
      if ( v15 < 0 )
      {
        v24 = (const char *)sub_792D8(v15);
        sub_7995C(a2, "Could not wait for data: %s", v24);
        goto LABEL_31;
      }
      if ( !v15 && v31 == -1 )
      {
LABEL_30:
        v4 = -1;
        goto LABEL_31;
      }
      v16 = (char *)ptr;
      v17 = v39;
      if ( a4 > v39 )
      {
        if ( a4 > v40 )
        {
          v16 = (char *)sub_77EB0((int)&ptr, ptr, a4, 1u);
          v17 = v39;
          ptr = v16;
        }
        memset(&v16[v17], 0, a4 - v17);
        v39 = a4;
        v16 = (char *)ptr;
      }
      else if ( a4 < v39 )
      {
        v39 = a4;
      }
      v18 = sub_7F220(*((_DWORD *)v32 + v31), v16, a4);
      v4 = v18;
      if ( v18 > 0 )
        break;
      if ( v18 )
      {
        v4 = -v18;
        v23 = sub_792D8(-v18);
        sub_7995C(a2, "Could not read from a pipe: %s", v23);
        v29 = 1;
      }
      memmove((char *)v32 + 4 * v31, (char *)v32 + 4 * v31 + 4, 4 * v33-- - 4 * v31 - 4);
      memmove((char *)v35 + 4 * v31, (char *)v35 + 4 * v31 + 4, 4 * v36 - 4 * v31 - 4);
      v9 = v33;
      --v36;
      if ( !v33 )
        goto LABEL_24;
    }
    v19 = v39;
    if ( v18 > v39 )
    {
      v22 = (char *)ptr;
      if ( v4 > v40 )
      {
        v22 = (char *)sub_77EB0((int)&ptr, ptr, v4, 1u);
        v19 = v39;
        ptr = v22;
      }
      memset(&v22[v19], 0, v4 - v19);
      v39 = v4;
    }
    else if ( v18 < v39 )
    {
      v39 = v18;
    }
    v20 = *(int (**)())(*a1 + 8);
    if ( v20 != sub_79878 && !((int (__fastcall *)(_DWORD *, _DWORD, void **))v20)(a1, *((_DWORD *)v35 + v31), &ptr) )
    {
      v4 = -2;
      goto LABEL_31;
    }
  }
LABEL_24:
  if ( !v29 )
    v4 = 0;
LABEL_31:
  if ( ptr )
  {
    v39 = 0;
    sub_77E08(ptr);
  }
  if ( v35 )
  {
    v36 = 0;
    sub_77E08(v35);
  }
  if ( v32 )
  {
    v33 = 0;
    sub_77E08(v32);
  }
  return v4;
}
// 7F4C2: variable 'v12' is possibly undefined
// 7F608: variable 'v4' is possibly undefined
