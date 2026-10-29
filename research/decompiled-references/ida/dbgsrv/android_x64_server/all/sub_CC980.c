/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CC980
// Address: 0x00000000000CC980

//----- (00000000000CC980) ----------------------------------------------------
__int64 __fastcall sub_CC980(unsigned __int64 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  void *v6; // rbp
  _BYTE *v7; // rbp
  void *v8; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rax
  int v11; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // eax
  int v17; // r13d
  int v18; // ebp
  void *v19; // rcx
  char *v20; // rax
  __int64 v21; // r14
  int v22; // eax
  void *v23; // rcx
  char *v24; // rax
  int v25; // ebp
  int v26; // r13d
  char *v27; // rax
  unsigned int v28; // ebx
  char *v29; // rax
  int v31; // [rsp+Ch] [rbp-ACh]
  int v32; // [rsp+1Ch] [rbp-9Ch] BYREF
  void *buf[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-88h]
  void *ptr[2]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-68h]
  void *v37[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v38; // [rsp+70h] [rbp-48h]
  char v39; // [rsp+7Fh] [rbp-39h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  *(_OWORD *)v37 = 0;
  v38 = 0;
  *(_OWORD *)ptr = 0;
  v36 = 0;
  v6 = (void *)a1[1];
  if ( v6 )
  {
    v37[0] = qvector_reserve((__int64)v37, nullptr, (unsigned __int64)v6, 4u);
    memset((char *)v37[0] + 4 * (__int64)v37[1], 0, 4 * ((_QWORD)v6 - (unsigned __int64)v37[1]));
    v37[1] = v6;
  }
  v7 = (_BYTE *)a1[1];
  v8 = ptr[1];
  if ( ptr[1] >= v7 )
  {
    if ( ptr[1] != v7 )
    {
      buf[0] = nullptr;
      sub_CD560((__int64)ptr, (unsigned __int64)v7, (char *)buf);
    }
  }
  else
  {
    if ( v36 >= (unsigned __int64)v7 )
    {
      v9 = (char *)ptr[0];
    }
    else
    {
      v9 = (char *)qvector_reserve((__int64)ptr, (char *)ptr[0], a1[1], 8u);
      ptr[0] = v9;
      v8 = ptr[1];
    }
    memset(&v9[8 * (_QWORD)v8], 0, 8 * (v7 - (_BYTE *)v8));
    ptr[1] = v7;
  }
  if ( a1[1] )
  {
    v10 = 0;
    do
    {
      *((_DWORD *)v37[0] + v10) = *(_DWORD *)(a1[2] + 4 * v10);
      *((_QWORD *)ptr[0] + v10) = v10;
      ++v10;
    }
    while ( v10 < a1[1] );
  }
  *(_OWORD *)buf = 0;
  v34 = 0;
  v11 = (int)v37[1];
  if ( !v37[1] )
  {
    v28 = 0;
    goto LABEL_51;
  }
  v31 = 0;
  while ( 1 )
  {
    if ( *(int *)a3 < 0 )
    {
      LODWORD(v15) = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v12 = qtime64();
      v13 = 1000000 * HIDWORD(v12);
      v14 = *(_QWORD *)(a3 + 16);
      if ( v13 + (unsigned __int64)(unsigned int)v12 + 10 >= v14 )
        goto LABEL_47;
      v15 = (v14 + 999 - ((unsigned int)v12 + v13)) / 0x3E8;
      *(_DWORD *)(a3 + 24) = v15;
      v11 = (int)v37[1];
    }
    v16 = qwait_for_handles(&v32, (__int64)v37[0], v11, 0, v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      v29 = winerr(v16);
      v31 = 1;
      sub_C8630(a2, "Could not wait for data: %s", v29);
      goto LABEL_45;
    }
    v18 = v32;
    if ( !v16 && v32 == -1 )
    {
      v31 = 2;
      goto LABEL_45;
    }
    v19 = buf[1];
    if ( buf[1] >= a4 )
    {
      if ( buf[1] != a4 )
      {
        v39 = 0;
        sub_5E330((__int64)buf, (unsigned __int64)a4, &v39);
      }
    }
    else
    {
      v20 = (char *)buf[0];
      if ( v34 < (unsigned __int64)a4 )
      {
        v20 = (char *)qvector_reserve((__int64)buf, (char *)buf[0], (unsigned __int64)a4, 1u);
        buf[0] = v20;
        v19 = buf[1];
      }
      memset(&v20[(_QWORD)v19], 0, a4 - (_BYTE *)v19);
      buf[1] = a4;
    }
    v21 = v18;
    v22 = read(*((_DWORD *)v37[0] + v18), buf[0], (size_t)a4);
    v17 = v22;
    if ( v22 <= 0 )
    {
      v25 = 0;
      if ( v22 < 0 )
      {
        v26 = -v22;
        v27 = winerr(-v22);
        v31 = 1;
        sub_C8630(a2, "Could not read from a pipe: %s", v27);
        v25 = v26;
      }
      memmove(
        (char *)v37[0] + 4 * v21,
        (char *)v37[0] + 4 * v21 + 4,
        (4 * (__int64)v37[1]-- + -4 - 4 * v21) & 0xFFFFFFFFFFFFFFFCLL);
      memmove(
        (char *)ptr[0] + 8 * v21,
        (char *)ptr[0] + 8 * v21 + 8,
        (8 * (__int64)ptr[1]-- + -8 - 8 * v21) & 0xFFFFFFFFFFFFFFF8LL);
      v17 = v25;
      goto LABEL_39;
    }
    v23 = buf[1];
    if ( buf[1] >= (void *)v22 )
    {
      if ( buf[1] != (void *)v22 )
      {
        v39 = 0;
        sub_5E330((__int64)buf, v22, &v39);
      }
    }
    else
    {
      v24 = (char *)buf[0];
      if ( v34 < v17 )
      {
        v24 = (char *)qvector_reserve((__int64)buf, (char *)buf[0], v17, 1u);
        buf[0] = v24;
        v23 = buf[1];
      }
      memset(&v24[(_QWORD)v23], 0, v17 - (_QWORD)v23);
      buf[1] = (void *)v17;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64 *, _QWORD, void **))(*a1 + 16))(
            a1,
            *((_QWORD *)ptr[0] + v18),
            buf) )
      break;
LABEL_39:
    v11 = (int)v37[1];
    if ( !v37[1] )
      goto LABEL_45;
  }
  v31 = 3;
LABEL_45:
  v28 = v31;
  switch ( v31 )
  {
    case 0:
      goto LABEL_51;
    case 2:
LABEL_47:
      v28 = -1;
      goto LABEL_51;
    case 3:
      v17 = -2;
      break;
  }
  v28 = v17;
LABEL_51:
  if ( buf[0] )
  {
    buf[1] = nullptr;
    qfree(buf[0]);
    buf[0] = nullptr;
    v34 = 0;
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v36 = 0;
  }
  if ( v37[0] )
  {
    v37[1] = nullptr;
    qfree(v37[0]);
    v37[0] = nullptr;
    v38 = 0;
  }
  return v28;
}
