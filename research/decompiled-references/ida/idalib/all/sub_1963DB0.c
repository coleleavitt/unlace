__int64 __fastcall sub_1963DB0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 **v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v21; // [rsp+0h] [rbp-98h]
  unsigned __int64 v22; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v24; // [rsp+18h] [rbp-80h]
  _BYTE v25[120]; // [rsp+20h] [rbp-78h] BYREF

  v21 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( v21 == 1 )
    return 1;
  v10 = *(unsigned __int16 *)(a2 + 12);
  v24 = 0x800000000LL;
  ptr = v25;
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned __int16 **)(a2 + 24);
    v12 = a2 + 8LL * (unsigned int)(v10 - 1) + 32;
    while ( 1 )
    {
      v13 = sub_1961D20(a1, *v11, 0, a3, a4, v8, v10, v9);
      if ( v13 == 1 )
        goto LABEL_13;
      v8 = (unsigned int)v24;
      v14 = v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v24 + 1LL;
      if ( v15 <= HIDWORD(v24) )
      {
        ++v11;
        *((_QWORD *)ptr + (unsigned int)v24) = v14;
        v10 = (unsigned int)(v24 + 1);
        LODWORD(v24) = v24 + 1;
        if ( (unsigned __int16 **)v12 == v11 )
          break;
      }
      else
      {
        v22 = v14;
        sub_2237220(&ptr, v25, v15, 8);
        v8 = (unsigned int)v24;
        ++v11;
        *((_QWORD *)ptr + (unsigned int)v24) = v22;
        v10 = (unsigned int)(v24 + 1);
        LODWORD(v24) = v24 + 1;
        if ( v11 == (unsigned __int16 **)v12 )
          break;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 14) & 1) == 0 )
  {
    v17 = 0;
    goto LABEL_12;
  }
  v16 = *(unsigned __int16 *)(a2 + 12);
  v17 = *(_QWORD *)(a2 + 8 * v16 + 24);
  if ( !v17 )
  {
LABEL_12:
    v19 = sub_1A8ACF0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v21 & 0xFFFFFFFFFFFFFFFELL, ptr, v10, v17);
    goto LABEL_14;
  }
  v18 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 8 * v16 + 24), 0, a3, a4, v8, v10, v17);
  if ( v18 != 1 )
  {
    v10 = (unsigned int)v24;
    v17 = v18 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_12;
  }
LABEL_13:
  v19 = 1;
LABEL_14:
  if ( ptr != v25 )
    free(ptr);
  return v19;
}
