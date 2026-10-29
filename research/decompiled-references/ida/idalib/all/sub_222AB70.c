__int64 __fastcall sub_222AB70(__int64 a1, char *a2, unsigned __int64 a3)
{
  __int64 v6; // rdi
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int8 *v15; // rsi
  char *v16; // rax
  __int64 result; // rax
  unsigned __int64 v18; // rdx
  void *v19[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8) - 4) )
  {
    v6 = *(_QWORD *)(a1 + 160);
    v7 = *(_BYTE **)(v6 + 32);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 24) )
    {
      sub_227BA10(v6, 44);
    }
    else
    {
      *(_QWORD *)(v6 + 32) = v7 + 1;
      *v7 = 44;
    }
  }
  if ( *(_DWORD *)(a1 + 168) )
  {
    sub_227BA10(*(_QWORD *)(a1 + 160), 10);
    sub_227D090(*(_QWORD *)(a1 + 160), *(unsigned int *)(a1 + 172));
  }
  if ( *(_QWORD *)(a1 + 152) )
    sub_2229220(a1);
  v8 = *(unsigned int *)(a1 + 8);
  v9 = *(_QWORD *)a1;
  v10 = *(unsigned int *)(a1 + 12);
  v11 = 8 * v8;
  v12 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(*(_QWORD *)a1 + 8 * v8 - 4) = 1;
  if ( v8 >= v10 )
  {
    v18 = v8 + 1;
    if ( v10 < v18 )
    {
      sub_2237220(a1, a1 + 16, v18, 8);
      v9 = *(_QWORD *)a1;
      v11 = 8LL * *(unsigned int *)(a1 + 8);
    }
    *(_QWORD *)(v9 + v11) = 0;
    v9 = *(_QWORD *)a1;
    v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v14;
  }
  else
  {
    v13 = v9 + v11;
    v14 = (unsigned int)(v12 + 1);
    *(_DWORD *)v13 = 0;
    *(_BYTE *)(v13 + 4) = 0;
    *(_DWORD *)(a1 + 8) = v14;
  }
  *(_DWORD *)(v9 + 8 * v14 - 8) = 0;
  v15 = (unsigned __int8 *)&a2[a3];
  if ( &a2[a3] == a2 )
    goto LABEL_16;
  if ( *a2 >= 0 )
  {
    v16 = a2;
    while ( v15 != (unsigned __int8 *)++v16 )
    {
      if ( *v16 < 0 )
        goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  v19[0] = a2;
  if ( (unsigned __int8)sub_22189B0((unsigned __int8 **)v19, v15) )
  {
LABEL_16:
    sub_2228440(*(_QWORD *)(a1 + 160), (unsigned __int8 *)a2, a3);
    goto LABEL_17;
  }
  sub_222A8E0(v19, (unsigned __int8 *)a2, a3);
  sub_2228440(*(_QWORD *)(a1 + 160), (unsigned __int8 *)v19[0], (__int64)v19[1]);
  if ( v19[0] != &v20 )
    operator delete(v19[0]);
LABEL_17:
  sub_227BA10(*(_QWORD *)(a1 + 160), 58);
  result = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)result )
    return sub_227BA10(*(_QWORD *)(a1 + 160), 32);
  return result;
}
