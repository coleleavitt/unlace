__int64 __fastcall sub_147E1E0(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  char *v4; // rbx
  char *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  int v13; // eax
  __int64 *v14; // rdi
  __int64 v15; // [rsp+18h] [rbp-130h] BYREF
  void *ptr; // [rsp+20h] [rbp-128h] BYREF
  __int64 v17; // [rsp+28h] [rbp-120h]
  _QWORD v18[2]; // [rsp+30h] [rbp-118h] BYREF
  void *v19; // [rsp+40h] [rbp-108h] BYREF
  __int64 v20; // [rsp+48h] [rbp-100h]
  _BYTE v21[248]; // [rsp+50h] [rbp-F8h] BYREF

  v19 = v21;
  v20 = 0x1800000000LL;
  sub_146B5E0(&v15, a1, 0x400009u, 1, 0);
  v2 = sub_17A6A10(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
  v3 = sub_153BAF0(a1, &v19, 0, 0);
  if ( v3 <= 1 )
    v3 = sub_1C36210(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), 0);
  sub_17A6A80(*(_QWORD *)(a1 + 96), v2, v3 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_WORD *)(a1 + 32) == 460 && *(_QWORD *)(a1 + 24) )
  {
    v13 = *(_DWORD *)(a1 + 20);
    v14 = *(__int64 **)(a1 + 8);
    if ( !v13 )
      v13 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v13;
    sub_14634E0(v14, (int *)(a1 + 16));
    *(_BYTE *)(v2 + 80) = 1;
  }
  v18[0] = v2;
  v4 = (char *)v19;
  v17 = 0x200000001LL;
  ptr = v18;
  v5 = (char *)v19 + 8 * (unsigned int)v20;
  if ( v19 == v5 )
  {
    v10 = v18;
  }
  else
  {
    do
    {
      v6 = *(_QWORD *)v4;
      v7 = sub_17A6A10(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
      sub_17A6A80(*(_QWORD *)(a1 + 96), v7, v6);
      v8 = (unsigned int)v17;
      v9 = (unsigned int)v17 + 1LL;
      if ( v9 > HIDWORD(v17) )
      {
        sub_2237220(&ptr, v18, v9, 8);
        v8 = (unsigned int)v17;
      }
      v4 += 8;
      *((_QWORD *)ptr + v8) = v7;
      LODWORD(v17) = v17 + 1;
    }
    while ( v5 != v4 );
    v10 = ptr;
  }
  v11 = sub_17B2ED0(*(_QWORD *)(a1 + 96), v10);
  if ( ptr != v18 )
    free(ptr);
  if ( v15 )
    sub_1564F70(v15);
  if ( v19 != v21 )
    free(v19);
  return v11;
}
