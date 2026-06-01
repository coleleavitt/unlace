void *__fastcall sub_1E5F980(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rbp
  __int64 v12; // rcx
  void *result; // rax
  __int16 v14; // ax
  __int64 v15; // rdx
  unsigned int *v16; // rdi
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  void *v23; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-20h]
  char v25; // [rsp+Ch] [rbp-1Ch]

  v9 = *a2;
  v8 = *(_DWORD *)a2 >> 14;
  LOWORD(v9) = v9 & 0x1FF;
  LOBYTE(v10) = v8 & 0x1F;
  if ( (_WORD)v9 == 79 )
  {
    v11 = *((_QWORD *)a2 + 2);
    goto LABEL_3;
  }
  if ( (_WORD)v9 == 21 )
  {
    if ( (v8 & 2) != 0 )
    {
      v12 = v8 & 4;
      v11 = *((_QWORD *)a2 + 3);
      if ( (v8 & 4) != 0 )
        return *(void **)(*(_QWORD *)(a1 + 248) + 19072LL);
      goto LABEL_9;
    }
    sub_BF7A50((__int64)&v23, *((_QWORD *)a2 + 4));
    if ( v25 )
    {
      v16 = (unsigned int *)v23;
      if ( v24 <= 0x40 )
      {
        v17 = 8LL * (unsigned int)v23 + 40;
        goto LABEL_25;
      }
    }
    else
    {
      v16 = (unsigned int *)v23;
      if ( v24 <= 0x40 )
      {
        v17 = 40;
        if ( v24 )
          v17 = 8LL
              * (unsigned int)((__int64)((_QWORD)v23 << (64 - (unsigned __int8)v24)) >> (64 - (unsigned __int8)v24))
              + 40;
        goto LABEL_25;
      }
    }
    v17 = 8LL * *v16 + 40;
    operator delete[](v16);
LABEL_25:
    v11 = *(_QWORD *)((char *)a2 + v17);
    v10 = (*(_DWORD *)a2 >> 14) & 0x1F;
    goto LABEL_3;
  }
  v11 = (__int64)a2;
LABEL_3:
  v12 = v10 & 4;
  if ( (_DWORD)v12 )
    return *(void **)(*(_QWORD *)(a1 + 248) + 19072LL);
LABEL_9:
  v14 = *(_WORD *)v11 & 0x1FF;
  switch ( v14 )
  {
    case 8:
      return (void *)sub_C959C0(v11, *(_QWORD *)(a1 + 248));
    case 71:
      v15 = *(_QWORD *)(v11 + 16);
      result = *(void **)(v15 + 48);
      v23 = result;
      if ( (*(_BYTE *)(v15 + 28) & 0x7F) == 0x1E )
        return (void *)sub_6D5440(&v23);
      break;
    case 46:
      v9 = *(_QWORD *)(v11 + 24);
      if ( v9 )
      {
        v18 = *(_BYTE *)(v9 + 28) & 0x7F;
        v12 = (unsigned int)(v18 - 49);
        if ( (unsigned int)v12 <= 2 || (unsigned int)(v18 - 40) <= 6 )
          return *(void **)(v9 + 48);
      }
      break;
    case 34:
      return *(void **)(*(_QWORD *)(v11 + 16) + 48LL);
    case 32:
      v19 = *(_QWORD *)(v11 + 16);
      if ( (v19 & 4) == 0 )
        return *(void **)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 56);
      break;
    case 18:
      return *(void **)(v11 + 8);
    default:
      if ( sub_15F2610(a1, 0, v9, v12, a5, a6)
        && (*(_WORD *)v11 & 0x1FF) == 0x14
        && (v20 = sub_BFB9F0(v11), (*(_WORD *)v20 & 0x1FF) == 0x47)
        && (v21 = *(_QWORD *)(v20 + 16), (*(_BYTE *)(v21 + 28) & 0x7Fu) - 40 <= 6)
        && (v22 = sub_1905D40(a1, v21, *(_DWORD *)(v20 + 4)), (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
      {
        return (void *)sub_A73030(*(_QWORD *)(a1 + 248), v22, 1u);
      }
      else
      {
        return (void *)sub_A732E0(*(_QWORD *)(a1 + 248), (__int64)a2);
      }
  }
  return result;
}
