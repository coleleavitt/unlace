/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CCE0
// Address: 0x0002CCE0

//----- (0002CCE0) --------------------------------------------------------
int __fastcall sub_2CCE0(int a1, int *a2, _DWORD *a3, int a4)
{
  int *v7; // r1
  int v8; // r3
  int v9; // r5
  int *v11; // r1
  int v12; // r3
  void *v13; // r6
  size_t v14; // r3
  unsigned int v15; // r6
  int v16; // r7
  unsigned int v17; // r7
  int v18; // r10
  void *v19; // r10
  int v20; // [sp+Ch] [bp-2Ch] BYREF
  size_t n; // [sp+10h] [bp-28h] BYREF
  size_t v22; // [sp+14h] [bp-24h] BYREF
  unsigned int v23; // [sp+18h] [bp-20h] BYREF
  void *src; // [sp+1Ch] [bp-1Ch] BYREF
  unsigned int v25; // [sp+20h] [bp-18h]
  int v26; // [sp+24h] [bp-14h]
  void *ptr; // [sp+28h] [bp-10h] BYREF
  unsigned int v28; // [sp+2Ch] [bp-Ch]
  int v29; // [sp+30h] [bp-8h]

  v20 = *a2;
  if ( !sub_2CB3C(&n, &v20, a3, a4) || !sub_2CB3C(&v22, v7, a3, v8) || !sub_2CB3C(&v23, v11, a3, v12) )
    return 0;
  src = nullptr;
  v25 = 0;
  v26 = 0;
  v9 = sub_2CB70((int)&src, a3, v20, n, 1u);
  if ( v9 )
  {
    ptr = nullptr;
    v28 = 0;
    v29 = 0;
    v20 += (n + 3) & 0xFFFFFFFC;
    v9 = sub_2CB70((int)&ptr, a3, v20, v22, 0);
    if ( v9 )
    {
      v14 = ((v22 + 3) & 0xFFFFFFFC) + v20;
      v20 = v14;
      if ( a1 )
      {
        v15 = v25;
        if ( v25 && (v16 = v25 - 1, v25 != 1) )
        {
          v19 = src;
          if ( v25 > *(_DWORD *)(a1 + 8) )
            *(_DWORD *)a1 = sub_78018(a1, *(void **)a1, v25, 1u);
          *(_DWORD *)(a1 + 4) = v15;
          memmove(*(void **)a1, v19, v15 - 1);
          *(_BYTE *)(*(_DWORD *)a1 + v16) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
        v13 = ptr;
        v17 = v28;
        if ( v28 && (v18 = v28 - 1, v28 != 1) )
        {
          if ( v28 > *(_DWORD *)(a1 + 20) )
            *(_DWORD *)(a1 + 12) = sub_78018(a1 + 12, *(void **)(a1 + 12), v28, 1u);
          *(_DWORD *)(a1 + 16) = v17;
          memmove(*(void **)(a1 + 12), v13, v17 - 1);
          *(_BYTE *)(*(_DWORD *)(a1 + 12) + v18) = 0;
          v13 = ptr;
        }
        else
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
        v14 = v20;
        *(_DWORD *)(a1 + 24) = v23;
      }
      else
      {
        v13 = ptr;
      }
      *a2 = v14;
    }
    else
    {
      v13 = ptr;
    }
    if ( v13 )
    {
      v28 = 0;
      sub_77F70(v13);
    }
  }
  if ( src )
  {
    v25 = 0;
    sub_77F70(src);
  }
  return v9;
}
// 2CD24: variable 'v7' is possibly undefined
// 2CD24: variable 'v8' is possibly undefined
// 2CD30: variable 'v11' is possibly undefined
// 2CD30: variable 'v12' is possibly undefined
