__int64 __fastcall sub_2206280(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  unsigned __int64 v10; // rsi
  char v11; // r13
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  int v14; // r13d
  _QWORD *v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  int v19; // esi
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rax
  void *v25; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+8h] [rbp-30h]

  v6 = *((_DWORD *)a2 + 2);
  if ( v6 <= 0x40 )
  {
    v7 = *a2;
    *(_DWORD *)(a1 + 8) = a3;
    v8 = v7 >> a4;
    if ( a3 <= 0x40 )
    {
LABEL_3:
      *(_QWORD *)a1 = v8;
      sub_CF8100((unsigned __int64 *)a1);
      return a1;
    }
    goto LABEL_6;
  }
  v11 = a4;
  v12 = a4 >> 6;
  v13 = (a3 + a4 - 1) >> 6;
  v14 = v11 & 0x3F;
  if ( v12 == v13 )
  {
    v10 = *(_QWORD *)(*a2 + 8LL * v12);
    *(_DWORD *)(a1 + 8) = a3;
    v8 = v10 >> v14;
    if ( a3 <= 0x40 )
      goto LABEL_3;
LABEL_6:
    sub_2205470(a1, v8, 0);
    return a1;
  }
  if ( v14 )
  {
    v26 = a3;
    if ( a3 > 0x40 )
    {
      sub_2205470((__int64)&v25, 0, 0);
      v16 = ((unsigned __int64)*((unsigned int *)a2 + 2) + 63) >> 6;
      v17 = ((unsigned __int64)v26 + 63) >> 6;
      if ( v26 <= 0x40 )
        v15 = &v25;
      else
        v15 = v25;
    }
    else
    {
      v25 = nullptr;
      v15 = &v25;
      v16 = ((unsigned __int64)v6 + 63) >> 6;
      v17 = ((unsigned __int64)a3 + 63) >> 6;
    }
    if ( (_DWORD)v17 )
    {
      v18 = v12 + 1;
      v19 = v12 + 1 + v17;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(*a2 + 8LL * (v18 - 1));
          if ( v18 >= (unsigned int)v16 )
            break;
          v20 = v18++;
          *v15++ = (*(_QWORD *)(*a2 + 8 * v20) << (64 - (unsigned __int8)v14)) | (v21 >> v14);
          if ( v18 == v19 )
            goto LABEL_16;
        }
        ++v18;
        *v15++ = v21 >> v14;
      }
      while ( v18 != v19 );
    }
LABEL_16:
    v22 = sub_CF8100((unsigned __int64 *)&v25);
    v23 = *((_DWORD *)v22 + 2);
    *(_DWORD *)(a1 + 8) = v23;
    if ( v23 > 0x40 )
      sub_2205510(a1, (const void **)v22);
    else
      *(_QWORD *)a1 = *v22;
    if ( v26 > 0x40 )
    {
      if ( v25 )
        operator delete[](v25);
    }
    return a1;
  }
  v24 = *a2;
  *(_DWORD *)(a1 + 8) = a3;
  sub_2205560(a1, (_QWORD *)(v24 + 8LL * v12), v13 - v12 + 1);
  return a1;
}
