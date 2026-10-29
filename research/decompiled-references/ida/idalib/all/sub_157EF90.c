__int64 __fastcall sub_157EF90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v7; // r10d
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // ecx
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _BYTE *v15; // r14
  _BYTE *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _WORD *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ebx
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+10h] [rbp-138h]
  int v31; // [rsp+10h] [rbp-138h]
  void *ptr; // [rsp+30h] [rbp-118h] BYREF
  __int64 v34; // [rsp+38h] [rbp-110h]
  _BYTE v35[48]; // [rsp+40h] [rbp-108h] BYREF
  int v36; // [rsp+70h] [rbp-D8h]
  void *v37; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+88h] [rbp-C0h]
  _BYTE v39[184]; // [rsp+90h] [rbp-B8h] BYREF

  v4 = a3;
  v7 = *(_DWORD *)(a4 + 24);
  v38 = 0x1000000000LL;
  v8 = (unsigned int)(v7 + 63) >> 6;
  v37 = v39;
  ptr = v35;
  v34 = 0x600000000LL;
  if ( v8 > 6 )
  {
    v31 = v7;
    sub_2237220(&ptr, v35, v8, 8);
    memset(ptr, 0, 8LL * v8);
    v9 = (unsigned int)v38;
    LODWORD(v34) = v8;
    v4 = a3;
    v29 = (unsigned int)v38 + 1LL;
    v36 = v31;
    if ( v29 > HIDWORD(v38) )
    {
      sub_2237220(&v37, v39, v29, 8);
      v9 = (unsigned int)v38;
      v4 = a3;
    }
  }
  else
  {
    if ( v8 )
    {
      v27 = 0;
      do
      {
        v28 = v27;
        v27 += 8;
        *(_QWORD *)&v35[v28] = 0;
      }
      while ( v27 < 8 * v8 );
    }
    LODWORD(v34) = (unsigned int)(v7 + 63) >> 6;
    v9 = 0;
    v36 = v7;
  }
  *((_QWORD *)v37 + v9) = v4;
  v10 = *(_DWORD *)(v4 + 48);
  v11 = ptr;
  v12 = v38 + 1;
  LODWORD(v38) = v38 + 1;
  *((_QWORD *)ptr + (v10 >> 6)) |= 1LL << v10;
LABEL_5:
  while ( v12 )
  {
LABEL_6:
    v13 = v12--;
    v14 = *((_QWORD *)v37 + v13 - 1);
    LODWORD(v38) = v12;
    v15 = *(_BYTE **)(v14 + 88);
    v16 = *(_BYTE **)(v14 + 80);
    if ( v15 != v16 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (v16[8] & 2) == 0 )
          {
            v19 = *(_QWORD *)v16;
            v20 = *(unsigned int *)(*(_QWORD *)v16 + 48LL);
            v21 = v11[*(_DWORD *)(*(_QWORD *)v16 + 48LL) >> 6];
            if ( !_bittest64(&v21, v20) )
              break;
          }
LABEL_12:
          v16 += 16;
          if ( v15 == v16 )
            goto LABEL_21;
        }
        if ( (_DWORD)v20 == *(_DWORD *)(*(_QWORD *)(a4 + 8) + 48LL) )
        {
          v25 = 1;
          goto LABEL_25;
        }
        v22 = *(_WORD **)(v19 + 24);
        if ( v22 && (*v22 & 0x1FF) == 0xFD )
        {
          v17 = sub_EF2290((__int64)v22);
          if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0
            || (v18 = *(_QWORD *)(a2 + 16)) == 0
            || (unsigned __int8)sub_18B16B0(a1, v17, *(_QWORD *)(v18 + 8)) )
          {
            v12 = v38;
            v11 = ptr;
            goto LABEL_5;
          }
          v11 = ptr;
          goto LABEL_12;
        }
        v23 = (unsigned int)v38;
        v24 = (unsigned int)v38 + 1LL;
        if ( v24 > HIDWORD(v38) )
        {
          v30 = *(_QWORD *)v16;
          sub_2237220(&v37, v39, v24, 8);
          v23 = (unsigned int)v38;
          v19 = v30;
        }
        v16 += 16;
        *((_QWORD *)v37 + v23) = v19;
        v11 = ptr;
        LODWORD(v38) = v38 + 1;
        *((_QWORD *)ptr + (*(_DWORD *)(*((_QWORD *)v16 - 2) + 48LL) >> 6)) |= 1LL << *(_DWORD *)(*((_QWORD *)v16 - 2)
                                                                                               + 48LL);
        if ( v15 == v16 )
        {
LABEL_21:
          v12 = v38;
          if ( (_DWORD)v38 )
            goto LABEL_6;
          goto LABEL_22;
        }
      }
    }
  }
LABEL_22:
  v25 = 0;
LABEL_25:
  if ( v11 != (_QWORD *)v35 )
    free(v11);
  if ( v37 != v39 )
    free(v37);
  return v25;
}
