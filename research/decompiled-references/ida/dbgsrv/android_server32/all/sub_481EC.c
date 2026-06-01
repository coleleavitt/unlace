/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481EC
// Address: 0x000481EC

//----- (000481EC) --------------------------------------------------------
int __fastcall sub_481EC(_DWORD *a1, int *a2, unsigned __int8 **a3)
{
  int v6; // r0
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r4
  unsigned int v13; // r0
  size_t v14; // r5
  void *v15; // r0
  size_t v16; // r5
  void *v17; // r1
  size_t v18; // r4
  size_t v19; // r7
  unsigned int v20; // r5
  size_t v21; // r2
  void *v22; // r1
  const char *v23; // r1
  void *ptr; // [sp+10h] [bp-1Ch] BYREF
  size_t v26; // [sp+14h] [bp-18h]
  unsigned int v27; // [sp+18h] [bp-14h]
  void *v28; // [sp+1Ch] [bp-10h] BYREF
  unsigned int v29; // [sp+20h] [bp-Ch]
  int v30; // [sp+24h] [bp-8h]
  int v31; // [sp+28h] [bp-4h]

  v31 = **(_DWORD **)(loc_48388 + 295420);
  *a2 = -1;
  v29 = 0;
  v28 = nullptr;
  v30 = 0;
  v6 = sub_475EC((int)a1, (int *)&v28);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    v8 = (_DWORD *)sub_40F30(*(_DWORD *)(v6 + 16));
    v9 = sub_463A8(v8, (int)&v28);
    if ( v9 == -1 )
    {
      v11 = sub_48004(a1, v7, (int)&v28, a3);
      v10 = 1;
      if ( !v11 )
      {
        set_qerrno(88);
        v12 = sub_40F30(v7[4]);
        v13 = 0;
        v26 = 0;
        ptr = nullptr;
        v27 = 0;
        v14 = *(_DWORD *)(v12 + 24);
        if ( v14 )
        {
          v15 = qalloc_or_throw(*(_DWORD *)(v12 + 24));
          v27 = v14;
          ptr = v15;
          qmemcpy(v15, *(const void **)(v12 + 20), v14);
          v26 = v14;
          v16 = v14 - 1;
          v17 = ptr;
          v13 = v27;
        }
        else
        {
          v17 = nullptr;
          v16 = 0;
        }
        if ( v13 < v16 + 2 )
        {
          v17 = qvector_reserve((int)&ptr, v17, v16 + 2, 1u);
          ptr = v17;
        }
        v26 = v16 + 2;
        *((_BYTE *)v17 + v16) = 46;
        *((_BYTE *)ptr + v16 + 1) = 0;
        v18 = v29 - 1;
        if ( v29 >= 2 )
        {
          v19 = v26 - 1;
          if ( !v26 )
            v19 = 0;
          v20 = v19 + v29;
          v21 = v19 + v18;
          v22 = ptr;
          if ( v27 < v19 + v29 )
          {
            v22 = qvector_reserve((int)&ptr, ptr, v20, 1u);
            ptr = v22;
            v21 = v19 + v18;
          }
          v26 = v20;
          *((_BYTE *)v22 + v21) = 0;
          qmemcpy((char *)ptr + v19, v28, v18);
        }
        if ( v26 )
          v23 = (const char *)ptr;
        else
          v23 = &byte_B3CBE;
        set_error_string(0, v23);
        if ( ptr )
        {
          v26 = 0;
          qfree(ptr);
          v27 = 0;
          ptr = nullptr;
        }
        v10 = 0;
      }
    }
    else
    {
      *a2 = v9;
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
  }
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
    v30 = 0;
    v28 = nullptr;
  }
  return v10;
}
// B3CBE: using guessed type char byte_B3CBE;
