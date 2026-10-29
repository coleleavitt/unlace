__int64 __fastcall sub_1745860(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // r14d
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int v7; // ebp
  _DWORD *v8; // rdi
  int v10; // eax
  char v11; // al
  int v12; // ebp
  __int64 v13; // [rsp+0h] [rbp-178h]
  __int64 v15; // [rsp+10h] [rbp-168h]
  unsigned int i; // [rsp+18h] [rbp-160h]
  int v17; // [rsp+1Ch] [rbp-15Ch]
  void *v18[2]; // [rsp+20h] [rbp-158h] BYREF
  _DWORD v19[32]; // [rsp+30h] [rbp-148h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-C0h]
  _DWORD v22[46]; // [rsp+C0h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = 3;
    v13 = a1 + 8;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 16);
    v3 = v10 - 1;
    if ( !v10 )
    {
      *a3 = 0;
      return 0;
    }
  }
  v19[0] = -1;
  v4 = 35;
  v18[0] = v19;
  v18[1] = (void *)0x2000000001LL;
  v21 = 0x2000000001LL;
  v5 = 1;
  ptr = v22;
  v22[0] = -1;
  do
  {
    if ( v5 + 1 <= (unsigned __int64)HIDWORD(v21) )
    {
      *((_DWORD *)ptr + v5) = -1;
    }
    else
    {
      sub_2237220(&ptr, v22, v5 + 1, 4);
      *((_DWORD *)ptr + (unsigned int)v21) = -1;
    }
    v5 = (unsigned int)(v21 + 1);
    LODWORD(v21) = v21 + 1;
    --v4;
  }
  while ( v4 );
  v17 = 1;
  v15 = 0;
  for ( i = v3 & sub_985B10(*(_QWORD **)a2, *(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)); ; i = v12 )
  {
    v6 = v13 + 160LL * i;
    v7 = sub_2222ED0(a2, v6);
    if ( (_BYTE)v7 )
      break;
    if ( (unsigned __int8)sub_2222ED0(v6, v18) )
    {
      if ( v15 )
        v6 = v15;
      break;
    }
    v11 = sub_2222ED0(v6, &ptr);
    if ( !v15 )
    {
      if ( !v11 )
        v6 = 0;
      v15 = v6;
    }
    v12 = v3 & (v17 + i);
    ++v17;
  }
  v8 = ptr;
  *a3 = v6;
  if ( v8 != v22 )
    free(v8);
  if ( v18[0] != v19 )
    free(v18[0]);
  return v7;
}
