/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AA8
// Address: 0x00046AA8

//----- (00046AA8) --------------------------------------------------------
int __fastcall sub_46AA8(unsigned __int8 *a1, char *a2, int a3, unsigned int a4, int a5)
{
  _DWORD *v6; // r4
  char *v7; // r4
  int idc_class; // r0
  char *v9; // r6
  _DWORD *v10; // r0
  void *v11; // r5
  int v12; // r1
  int v13; // r5
  int v14; // r4
  unsigned int v15; // r0
  int v16; // r2
  unsigned int v17; // r0
  _DWORD *v18; // r6
  unsigned __int8 *v19; // r6
  unsigned __int8 *v20; // r5
  int v21; // r4
  const char *v22; // r0
  const char *v23; // r4
  size_t v24; // r0
  size_t v25; // r5
  unsigned int v26; // r6
  void *v27; // r0
  int v28; // r0
  unsigned int v29; // r4
  int i; // r7
  int v31; // r7
  unsigned __int8 *v32; // r5
  int v33; // r7
  unsigned __int8 *v34; // r6
  int v36; // [sp+18h] [bp-8Ch]
  int v37; // [sp+1Ch] [bp-88h]
  unsigned __int8 *v38; // [sp+28h] [bp-7Ch]
  void *v41[20]; // [sp+38h] [bp-6Ch] BYREF
  unsigned __int8 v42[8]; // [sp+88h] [bp-1Ch] BYREF
  void *v43; // [sp+90h] [bp-14h]
  int v44; // [sp+94h] [bp-10h]
  int v45; // [sp+98h] [bp-Ch]
  int v46; // [sp+9Ch] [bp-8h]

  v6 = nullptr;
  if ( a2 && (v7 = a2, idc_class = find_idc_class(a2), a2 = v7, (v6 = (_DWORD *)idc_class) == nullptr) )
  {
    v21 = 0;
    set_error_string(0, a2);
    set_qerrno(1536);
    sub_46924(a1);
    if ( a5 )
    {
      v22 = qstrerror(0xFFFFFFFF);
      if ( v22 && (v23 = v22, (v24 = strlen(v22)) != 0) )
      {
        v25 = v24;
        v26 = v24 + 1;
        if ( *(_DWORD *)(a5 + 8) >= v24 + 1 )
        {
          v27 = *(void **)a5;
        }
        else
        {
          v27 = qvector_reserve(a5, *(void **)a5, v26, 1u);
          *(_DWORD *)a5 = v27;
        }
        *(_DWORD *)(a5 + 4) = v26;
        memmove(v27, v23, v25);
        v21 = 0;
        *(_BYTE *)(*(_DWORD *)a5 + v25) = 0;
      }
      else
      {
        v21 = 0;
        *(_DWORD *)(a5 + 4) = 0;
      }
    }
  }
  else
  {
    v9 = a2;
    v38 = a1;
    v42[0] = 5;
    v46 = 0;
    v45 = 0;
    v44 = 0;
    v43 = nullptr;
    v10 = operator new(0x14u);
    v11 = v10;
    v12 = 0;
    if ( v6 )
      v12 = v6[4];
    sub_3F83C(v10, v12);
    v43 = v11;
    v13 = (int)v38;
    if ( !v6 )
      goto LABEL_18;
    sub_1B09C((int)v41, v9);
    v14 = sub_463A8(v6, (int)v41);
    if ( v41[0] )
    {
      v41[1] = nullptr;
      qfree(v41[0]);
      v41[2] = nullptr;
      v41[0] = nullptr;
    }
    if ( v14 == -1 )
    {
LABEL_18:
      v21 = 1;
      move_idcv(v38, v42);
    }
    else
    {
      v36 = v14;
      v37 = a4 + 1;
      if ( a4 + 1 > 0xAAAAAAA )
      {
        v19 = (unsigned __int8 *)qalloc_or_throw(0x7FFFFFFF);
      }
      else
      {
        v15 = 24 * (a4 + 1);
        v16 = v15 + 8;
        if ( v15 + 8 < v15 )
          v16 = -1;
        v17 = -1;
        if ( is_mul_ok(0x18u, a4 + 1) )
          v17 = v16;
        v18 = (_DWORD *)operator new[](v17);
        *v18 = 24;
        v18[1] = v37;
        v19 = (unsigned __int8 *)(v18 + 2);
        if ( a4 != -1 )
        {
          v20 = v19;
          do
          {
            *v20 = 2;
            memset(v20 + 8, 0, 0x10u);
            *((_DWORD *)v20 + 2) = 0;
            v20 += 24;
          }
          while ( v20 != &v19[24 * v37] );
          v13 = (int)v38;
        }
      }
      copy_idcv(v19, v42);
      v28 = 0;
      v29 = -1;
      for ( i = 0; ; v28 = i )
      {
        ++v29;
        i += 24;
        if ( v29 >= a4 )
          break;
        copy_idcv(&v19[v28 + 24], (unsigned __int8 *)(a3 + v28));
      }
      ((void (__fastcall *)(void **, _DWORD, _DWORD))loc_48528)(v41, 0, 0);
      v21 = sub_46D88(v41, nullptr, v36, v37, v19, v13, a5);
      if ( v19 )
      {
        v31 = *((_DWORD *)v19 - 1);
        v32 = v19 - 8;
        if ( v31 )
        {
          v33 = 24 * v31;
          v34 = v19 - 24;
          do
          {
            free_idcv(&v34[v33]);
            v33 -= 24;
          }
          while ( v33 );
        }
        operator delete[](v32);
      }
      sub_486C4((int)v41);
    }
    if ( v42[0] == 5 )
    {
      sub_448A0((int)v43, v42);
    }
    else if ( v42[0] == 7 && v43 )
    {
      v44 = 0;
      qfree(v43);
      v45 = 0;
      v43 = nullptr;
    }
  }
  return v21;
}
