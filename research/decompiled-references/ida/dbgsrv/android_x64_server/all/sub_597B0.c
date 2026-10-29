/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_597B0
// Address: 0x00000000000597B0

//----- (00000000000597B0) ----------------------------------------------------
char __fastcall sub_597B0(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned __int64 v7; // rbx
  void *v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r15
  int v14; // ebx
  _BYTE *v15; // r12
  void *v16; // rcx
  char *v17; // rax
  char *v18; // r12
  int v19; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v20; // [rsp+10h] [rbp-78h] BYREF
  char *v21; // [rsp+18h] [rbp-70h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-58h]
  _QWORD v24[2]; // [rsp+38h] [rbp-50h] BYREF
  int v25; // [rsp+48h] [rbp-40h]
  char v26; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v27; // [rsp+50h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 80) )
  {
    v3 = *(_DWORD *)(a1 + 72);
    v4 = *(_DWORD *)(a1 + 76);
    if ( v3 < v4 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 72) = v3 + 1;
      *a2 = *(_QWORD *)(a1 + 40) + 24LL * v3;
      return 1;
    }
    if ( !v4 )
    {
      *(_OWORD *)ptr = 0;
      v23 = 0;
      v9 = *(void **)(a1 + 24);
      if ( v9 )
      {
        ptr[0] = qvector_reserve((__int64)ptr, nullptr, *(_QWORD *)(a1 + 24), 1u);
        memset((char *)ptr[1] + (unsigned __int64)ptr[0], 0, (size_t)v9 - (unsigned __int64)ptr[1]);
        ptr[1] = v9;
      }
      v10 = *(_QWORD *)(a1 + 8);
      v11 = qlseek(*(_QWORD *)(v10 + 472), 0, 1);
      v12 = *(_QWORD *)(v10 + 480);
      v13 = v11 - v12;
      v14 = 1;
      if ( qlseek(*(_QWORD *)(v10 + 472), *(_QWORD *)(a1 + 16) + v12, 0) == -1 )
      {
LABEL_30:
        qlseek(*(_QWORD *)(v10 + 472), *(_QWORD *)(v10 + 480) + v13, 0);
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v23 = 0;
        }
        if ( !v14 )
        {
          v3 = *(_DWORD *)(a1 + 72);
          goto LABEL_3;
        }
        return 0;
      }
      v15 = (_BYTE *)qlread(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), ptr[0], *(_QWORD *)(a1 + 24));
      if ( (unsigned __int64)v15 < *(_QWORD *)(a1 + 24) )
      {
        sub_390A0((int)"READ ERROR: read only %zd bytes instead of %lld bytes\n", v15);
        if ( (__int64)v15 < 9 )
          goto LABEL_30;
        v16 = ptr[1];
        if ( ptr[1] < v15 )
        {
          v17 = (char *)ptr[0];
          if ( v23 < (unsigned __int64)v15 )
          {
            v17 = (char *)qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v15, 1u);
            ptr[0] = v17;
            v16 = ptr[1];
          }
          memset(&v17[(_QWORD)v16], 0, v15 - (_BYTE *)v16);
          ptr[1] = v15;
          goto LABEL_24;
        }
        if ( ptr[1] == v15 )
        {
LABEL_24:
          v21 = (char *)ptr[0];
          v18 = (char *)ptr[0] + (unsigned __int64)v15;
          v19 = *(_DWORD *)ptr[0];
          v21 = (char *)ptr[0] + 4;
          v14 = 1;
          if ( unpack_xleb128((__int64 *)&v20, 64, 1, &v21, (unsigned __int64)v18)
            && (__int64)v20 > 0
            && v20 < *(_QWORD *)(a1 + 24) )
          {
            if ( v19 == 844320833 )
            {
              v24[0] = v21;
              v24[1] = v18;
              v25 = 0;
              v26 = 1;
              sub_59CD0((__int64)v24, (__int64 *)(a1 + 40), v20);
              *(_DWORD *)(a1 + 76) = v20;
              v14 = 0;
            }
            else
            {
              sub_59BF0((int)"The relocation packing method '%4.4s' is not supported yet.", ptr[0]);
            }
          }
          goto LABEL_30;
        }
        LOBYTE(v24[0]) = 0;
        sub_5E330((__int64)ptr, (unsigned __int64)v15, (char *)v24);
      }
      v15 = ptr[1];
      if ( ptr[1] < &byte_4 )
        goto LABEL_30;
      goto LABEL_24;
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 72);
    v6 = *(_DWORD *)(a1 + 76);
    if ( v5 >= v6 )
    {
      v7 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 64);
      if ( !v7 )
        return 0;
      sub_5D330((_QWORD *)(a1 + 40), v7);
      *(_DWORD *)(a1 + 72) = 0;
      v6 = sub_595B0(a1, v7);
      *(_DWORD *)(a1 + 76) = v6;
      if ( !v6 )
        return 0;
      *(_QWORD *)(a1 + 64) += v6;
      v5 = *(_DWORD *)(a1 + 72);
    }
    if ( v5 < v6 )
    {
      *a2 = *(_QWORD *)(a1 + 40) + 24LL * v5;
      ++*(_DWORD *)(a1 + 72);
      return 1;
    }
  }
  return 0;
}
// 4: using guessed type char byte_4;
