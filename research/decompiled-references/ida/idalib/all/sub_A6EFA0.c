__int64 __fastcall sub_A6EFA0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // rbp
  _DWORD *v8; // rdi
  char v10; // al
  int v11; // ebp
  __int64 v12; // [rsp+0h] [rbp-178h]
  __int64 v14; // [rsp+10h] [rbp-168h]
  unsigned int i; // [rsp+18h] [rbp-160h]
  int v16; // [rsp+1Ch] [rbp-15Ch]
  void *v17[18]; // [rsp+20h] [rbp-158h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-C0h]
  _DWORD v20[46]; // [rsp+C0h] [rbp-B8h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v4 = 35;
    v12 = *a1;
    memset(&v17[1], 0, 0x88u);
    HIDWORD(v17[1]) = 32;
    v17[0] = &v17[2];
    v19 = 0x2000000001LL;
    v5 = 1;
    ptr = v20;
    v20[0] = -1;
    do
    {
      if ( v5 + 1 <= (unsigned __int64)HIDWORD(v19) )
      {
        *((_DWORD *)ptr + v5) = -1;
      }
      else
      {
        sub_2237220(&ptr, v20, v5 + 1, 4);
        *((_DWORD *)ptr + (unsigned int)v19) = -1;
      }
      v5 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v19 + 1;
      --v4;
    }
    while ( v4 );
    v6 = v3 - 1;
    v16 = 1;
    v14 = 0;
    for ( i = (v3 - 1) & sub_985B10(*(_QWORD **)a2, *(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)); ; i = v11 )
    {
      v7 = v12 + 152LL * i;
      v3 = sub_2222ED0(a2, v7);
      if ( (_BYTE)v3 )
        break;
      if ( (unsigned __int8)sub_2222ED0(v7, v17) )
      {
        if ( v14 )
          v7 = v14;
        break;
      }
      v10 = sub_2222ED0(v7, &ptr);
      if ( !v14 )
      {
        if ( !v10 )
          v7 = 0;
        v14 = v7;
      }
      v11 = v6 & (v16 + i);
      ++v16;
    }
    v8 = ptr;
    *a3 = v7;
    if ( v8 != v20 )
      free(v8);
    if ( v17[0] != &v17[2] )
      free(v17[0]);
  }
  else
  {
    *a3 = 0;
  }
  return v3;
}
