/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4240A8
// Address: 0x00000000004240A8

//----- (00000000004240A8) ----------------------------------------------------
__int64 __fastcall sub_4240A8(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  __int64 *v7; // x1
  char v8; // w9
  unsigned int v9; // w20
  __int64 *v11; // x1
  char v12; // w9
  void *v13; // x22
  __int64 v14; // x0
  unsigned __int64 v15; // x22
  __int64 v16; // x24
  unsigned __int64 v17; // x24
  __int64 v18; // x25
  __int64 v19; // x0
  void *v20; // x25
  void *v21; // x0
  __int64 v22; // [xsp+58h] [xbp-58h] BYREF
  size_t v23; // [xsp+60h] [xbp-50h] BYREF
  size_t n; // [xsp+68h] [xbp-48h] BYREF
  unsigned __int64 v25; // [xsp+70h] [xbp-40h] BYREF
  void *ptr; // [xsp+78h] [xbp-38h] BYREF
  unsigned __int64 v27; // [xsp+80h] [xbp-30h]
  __int64 v28; // [xsp+88h] [xbp-28h]
  void *v29; // [xsp+90h] [xbp-20h] BYREF
  unsigned __int64 v30; // [xsp+98h] [xbp-18h]
  __int64 v31; // [xsp+A0h] [xbp-10h]

  v22 = *a2;
  if ( (unsigned __int8)sub_423DD8(&v23, &v22, (unsigned __int64)a3, a4)
    && (unsigned __int8)sub_423DD8(&n, v7, (unsigned __int64)a3, v8)
    && (unsigned __int8)sub_423DD8(&v25, v11, (unsigned __int64)a3, v12) )
  {
    ptr = nullptr;
    v27 = 0;
    v28 = 0;
    v9 = (unsigned __int8)sub_423E38((__int64)&ptr, a3, v22, v23, 1u);
    if ( v9 )
    {
      v29 = nullptr;
      v30 = 0;
      v31 = 0;
      v22 += (v23 + 3) & 0xFFFFFFFFFFFFFFFCLL;
      v9 = (unsigned __int8)sub_423E38((__int64)&v29, a3, v22, n, 0);
      if ( v9 )
      {
        v14 = ((n + 3) & 0xFFFFFFFFFFFFFFFCLL) + v22;
        v22 = v14;
        if ( a1 )
        {
          v15 = v27;
          if ( v27 && (v16 = v27 - 1, v27 != 1) )
          {
            v20 = ptr;
            if ( v27 > *(_QWORD *)(a1 + 16) )
              *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, v27, 1u);
            v21 = *(void **)a1;
            *(_QWORD *)(a1 + 8) = v15;
            memmove(v21, v20, v15 - 1);
            *(_BYTE *)(*(_QWORD *)a1 + v16) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 8) = 0;
          }
          v13 = v29;
          v17 = v30;
          if ( v30 && (v18 = v30 - 1, v30 != 1) )
          {
            if ( v30 > *(_QWORD *)(a1 + 40) )
              *(_QWORD *)(a1 + 24) = sub_491288(a1 + 24, *(void **)(a1 + 24), v30, 1u);
            *(_QWORD *)(a1 + 32) = v17;
            memmove(*(void **)(a1 + 24), v13, v17 - 1);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18) = 0;
            v13 = v29;
          }
          else
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          v19 = v22;
          *(_DWORD *)(a1 + 48) = v25;
          *a2 = v19;
        }
        else
        {
          v13 = v29;
          *a2 = v14;
        }
      }
      else
      {
        v13 = v29;
      }
      if ( v13 )
      {
        v30 = 0;
        j__free(v13);
      }
    }
    if ( ptr )
    {
      v27 = 0;
      j__free(ptr);
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
// 424144: variable 'v7' is possibly undefined
// 424144: variable 'v8' is possibly undefined
// 42415C: variable 'v11' is possibly undefined
// 42415C: variable 'v12' is possibly undefined
