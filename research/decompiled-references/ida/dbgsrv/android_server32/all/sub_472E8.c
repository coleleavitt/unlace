/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472E8
// Address: 0x000472E8

//----- (000472E8) --------------------------------------------------------
int __fastcall sub_472E8(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        char *a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6)
{
  int v8; // r5
  unsigned __int8 *v9; // r6
  int v10; // r7
  unsigned int i; // r4
  int v12; // r5
  const char *v13; // r0
  const char *v14; // r5
  size_t v15; // r0
  size_t v16; // r6
  unsigned int v17; // r4
  _DWORD *v18; // r7
  void *v19; // r0
  unsigned __int8 *v20; // r0
  unsigned int v21; // r6
  unsigned int v22; // r7
  int j; // r4
  unsigned __int8 *v25; // [sp+18h] [bp-8Ch]
  unsigned __int8 *v27; // [sp+2Ch] [bp-78h] BYREF
  unsigned int v28; // [sp+30h] [bp-74h]
  int v29; // [sp+34h] [bp-70h]
  _DWORD v30[20]; // [sp+38h] [bp-6Ch] BYREF
  unsigned __int8 v31[8]; // [sp+88h] [bp-1Ch] BYREF
  void *v32; // [sp+90h] [bp-14h]
  int v33; // [sp+94h] [bp-10h]
  int v34; // [sp+98h] [bp-Ch]
  int v35; // [sp+9Ch] [bp-8h]

  v31[0] = 2;
  v35 = 0;
  v34 = 0;
  v33 = 0;
  v32 = nullptr;
  if ( !a2 || a3 )
  {
    if ( get_idcv_attr((int)v31, (int)a2, a3, 0) )
      goto LABEL_13;
  }
  else
  {
    copy_idcv(v31, a2);
  }
  if ( deref_idcv(v31, 2) )
  {
    if ( v31[0] == 6 )
    {
      v8 = a5;
      v28 = 0;
      v27 = nullptr;
      v29 = 0;
      if ( a2 )
      {
        v25 = a1;
        sub_47544((int)&v27, a5 + 1);
        v9 = v27;
        copy_idcv(v27, a2);
        if ( a5 )
        {
          v10 = 0;
          for ( i = 0; i < a5; ++i )
          {
            copy_idcv(&v9[v10 + 24], &a4[v10]);
            v10 += 24;
          }
          a4 = v9;
          v8 = a5 + 1;
        }
        else
        {
          a4 = v9;
          v8 = 1;
        }
        a1 = v25;
      }
      ((void (__fastcall *)(_DWORD *, _DWORD, _DWORD))loc_48528)(v30, 0, 0);
      v12 = sub_46D88(v30, nullptr, (int)v32, v8, a4, (int)a1, a6);
      sub_486C4((int)v30);
      v20 = v27;
      if ( v27 )
      {
        v21 = v28;
        if ( v28 )
        {
          v22 = 1;
          for ( j = 0; ; j += 24 )
          {
            free_idcv(&v20[j]);
            if ( v22 >= v21 )
              break;
            ++v22;
            v20 = v27;
          }
          v20 = v27;
        }
        v28 = 0;
        qfree(v20);
        v29 = 0;
        v27 = nullptr;
      }
      goto LABEL_30;
    }
    set_qerrno(1541);
  }
LABEL_13:
  sub_46924(a1);
  v12 = 0;
  if ( a6 )
  {
    v13 = qstrerror(0xFFFFFFFF);
    v14 = v13;
    if ( v13 && (v15 = strlen(v13)) != 0 )
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = (_DWORD *)a6;
      if ( *(_DWORD *)(a6 + 8) >= v15 + 1 )
      {
        v19 = *(void **)a6;
      }
      else
      {
        v19 = qvector_reserve(a6, *(void **)a6, v17, 1u);
        v18 = (_DWORD *)a6;
        *(_DWORD *)a6 = v19;
      }
      v18[1] = v17;
      memmove(v19, v14, v16);
      v12 = 0;
      *(_BYTE *)(*v18 + v16) = 0;
    }
    else
    {
      v12 = 0;
      *(_DWORD *)(a6 + 4) = 0;
    }
  }
LABEL_30:
  if ( v31[0] == 5 )
  {
    sub_448A0((int)v32, v31);
  }
  else if ( v31[0] == 7 && v32 )
  {
    v33 = 0;
    qfree(v32);
    v34 = 0;
    v32 = nullptr;
  }
  return v12;
}
