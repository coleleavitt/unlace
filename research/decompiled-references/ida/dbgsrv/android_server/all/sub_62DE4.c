/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62DE4
// Address: 0x0000000000062DE4

//----- (0000000000062DE4) ----------------------------------------------------
__int64 __fastcall sub_62DE4(__int64 a1, const char *a2)
{
  pthread_mutex_t *v2; // x20
  __int64 v4; // x0
  unsigned __int64 v5; // x22
  size_t v6; // x21
  void *align; // x0
  __int64 v8; // x9
  int *v9; // x20
  unsigned int v10; // w21
  __int64 result; // x0
  __int64 v12; // x9
  int v13; // w22
  __int64 v14; // x8
  int v15; // w21
  __int64 v16; // x9
  char *v17; // x20
  const char **v18; // x0
  const char *v19; // x8
  __int64 v20; // x20
  __int64 v21; // x8
  _BYTE *v22; // x0
  char v23; // w9
  __int64 v24; // x0
  int v25; // w8
  __int64 v26; // x8
  pthread_mutex_t *v27; // x0
  _WORD *v28; // x0

  v2 = (pthread_mutex_t *)(a1 + 40);
  sub_3C748(a1 + 40, "%s.%s", a2, a2);
  sub_62638(a1);
  sub_62C58(a1);
  v4 = __strlen_chk("this", 5);
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = v4;
    if ( *(_QWORD *)(a1 + 56) >= (unsigned __int64)(v4 + 1) )
    {
      align = (void *)v2->__align;
    }
    else
    {
      align = qvector_reserve(v2, (void *)v2->__align, v5, 1u);
      v2->__align = (__int64)align;
    }
    *(_QWORD *)(a1 + 48) = v5;
    memmove(align, "this", v6);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0;
  }
  sub_62638(a1);
  v8 = *(_QWORD *)(a1 + 352);
  v9 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * (v8 - 1));
  if ( v8 )
    *(_QWORD *)(a1 + 352) = v8 - 1;
  v10 = sub_642D8((pthread_mutex_t *)a1, v9, 0, 0);
  if ( v9 )
  {
    sub_62860(v9);
    operator delete(v9);
  }
  result = set_qerrno(v10);
  if ( !(_DWORD)result )
  {
    v12 = *(_QWORD *)(a1 + 328);
    v13 = *(__int16 *)(*(_QWORD *)(a1 + 320) + 2 * (v12 - 1));
    if ( v12 )
      *(_QWORD *)(a1 + 328) = v12 - 1;
    v14 = *(_QWORD *)(a1 + 160);
    LOWORD(v15) = v13;
    v16 = *(_QWORD *)(a1 + 168) - 1LL;
    if ( *(_QWORD *)(v14 + 24 * v16 + 8) )
      v17 = *(char **)(v14 + 24 * v16);
    else
      v17 = &byte_F154B;
    v18 = sub_69D00(v17);
    if ( v18 )
    {
      v19 = v18[2];
      switch ( v19[v13] )
      {
        case 2:
          if ( (sub_5F22C(a1) & 1) != 0 )
            goto LABEL_45;
          v20 = *(_QWORD *)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -50;
          v21 = *(_QWORD *)(v20 + 8);
          if ( *(_QWORD *)(v20 + 16) >= (unsigned __int64)(v21 + 1) )
          {
            v22 = *(_BYTE **)v20;
          }
          else
          {
            v22 = qvector_reserve((pthread_mutex_t *)v20, *(void **)v20, v21 + 1, 1u);
            v21 = *(_QWORD *)(v20 + 8);
            *(_QWORD *)v20 = v22;
          }
          v23 = -50;
          break;
        case 3:
          if ( (*(unsigned __int8 *)(a1 + 212) | 2) == 0xD2 )
            goto LABEL_45;
          v20 = *(_QWORD *)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -48;
          v21 = *(_QWORD *)(v20 + 8);
          if ( *(_QWORD *)(v20 + 16) >= (unsigned __int64)(v21 + 1) )
          {
            v22 = *(_BYTE **)v20;
          }
          else
          {
            v22 = qvector_reserve((pthread_mutex_t *)v20, *(void **)v20, v21 + 1, 1u);
            v21 = *(_QWORD *)(v20 + 8);
            *(_QWORD *)v20 = v22;
          }
          v23 = -48;
          break;
        case 4:
          v15 = (__PAIR64__((unsigned __int16)v13, (unsigned __int8)v19[v13 + 1]) - 1) >> 32;
          goto LABEL_45;
        case 5:
        case 6:
        case 8:
        case 0xA:
          goto LABEL_45;
        case 7:
          v25 = *(unsigned __int8 *)(a1 + 212);
          if ( v25 == 168 || v25 == 191 )
            goto LABEL_45;
          v20 = *(_QWORD *)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -65;
          v21 = *(_QWORD *)(v20 + 8);
          if ( *(_QWORD *)(v20 + 16) >= (unsigned __int64)(v21 + 1) )
          {
            v22 = *(_BYTE **)v20;
          }
          else
          {
            v22 = qvector_reserve((pthread_mutex_t *)v20, *(void **)v20, v21 + 1, 1u);
            v21 = *(_QWORD *)(v20 + 8);
            *(_QWORD *)v20 = v22;
          }
          v23 = -65;
          break;
        case 9:
          if ( *(unsigned __int8 *)(a1 + 212) == 211 )
            goto LABEL_45;
          v20 = *(_QWORD *)(a1 + 200);
          *(_BYTE *)(a1 + 212) = -47;
          v21 = *(_QWORD *)(v20 + 8);
          if ( *(_QWORD *)(v20 + 16) >= (unsigned __int64)(v21 + 1) )
          {
            v22 = *(_BYTE **)v20;
          }
          else
          {
            v22 = qvector_reserve((pthread_mutex_t *)v20, *(void **)v20, v21 + 1, 1u);
            v21 = *(_QWORD *)(v20 + 8);
            *(_QWORD *)v20 = v22;
          }
          v23 = -47;
          break;
        default:
          goto LABEL_25;
      }
      v22[v21] = v23;
      ++*(_QWORD *)(v20 + 8);
      ++*(_DWORD *)(a1 + 208);
    }
    else
    {
      v24 = sub_699FC(*(_QWORD **)(a1 + 104), v17);
      if ( v24 != -1 && *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 104) + 8 * v24) + 24LL) <= v13 )
      {
LABEL_25:
        set_error_string(nullptr, v17);
        return set_qerrno(0x38u);
      }
    }
LABEL_45:
    v26 = *(_QWORD *)(a1 + 328);
    v27 = (pthread_mutex_t *)(a1 + 320);
    if ( *(_QWORD *)(a1 + 336) >= (unsigned __int64)(v26 + 1) )
    {
      v28 = (_WORD *)v27->__align;
    }
    else
    {
      v28 = qvector_reserve(v27, *(void **)(a1 + 320), v26 + 1, 2u);
      v26 = *(_QWORD *)(a1 + 328);
      *(_QWORD *)(a1 + 320) = v28;
    }
    v28[v26] = v15 + 1;
    ++*(_QWORD *)(a1 + 328);
    return 0;
  }
  return result;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
