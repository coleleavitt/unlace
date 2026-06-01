__int64 __fastcall sub_135EB10(int a1, int a2, int a3, __int64 a4, unsigned __int8 a5, _DWORD *a6, char *a7)
{
  __int64 result; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  int v19; // ebx
  unsigned __int64 v20; // rax
  int v21; // ecx
  int v22; // edx
  int v23; // r15d
  char v24; // r14
  int v25; // r10d
  unsigned int v26; // esi
  int v27; // esi
  int v28; // edx
  int v29; // eax
  unsigned int v30; // esi
  int v31; // esi
  char v32; // r14
  int v33; // eax
  char v35; // [rsp+Bh] [rbp-4Dh]
  int v36; // [rsp+Ch] [rbp-4Ch]
  int v37; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v38; // [rsp+14h] [rbp-44h] BYREF
  int v39; // [rsp+1Ch] [rbp-3Ch]

  if ( a3 == a2 )
    return (unsigned int)a1;
  if ( a1 >= 0 )
    return 0;
  if ( (unsigned __int8)sub_1020490((__int64)a6, a1, nullptr) )
  {
    v13 = *(_DWORD **)a4;
    v14 = 4LL * *(unsigned int *)(a4 + 8);
    v15 = (_DWORD *)(*(_QWORD *)a4 + v14);
    v16 = v14 >> 2;
    if ( v14 )
    {
      do
      {
        while ( 1 )
        {
          v17 = v16 >> 1;
          v18 = &v13[v16 >> 1];
          if ( *v18 >= a2 )
            break;
          v13 = v18 + 1;
          v16 = v16 - v17 - 1;
          if ( v16 <= 0 )
            goto LABEL_9;
        }
        v16 >>= 1;
      }
      while ( v17 );
    }
LABEL_9:
    if ( v15 == v13 || *v13 > a2 )
    {
      v35 = 0;
      v19 = 0;
    }
    else
    {
      v32 = *a7;
      v19 = sub_10205A0((__int64)a6, a1);
      v35 = v32;
    }
    v20 = sub_101FC50((__int64)a6, a1);
    v21 = v19;
    v39 = v22;
    v23 = v20;
    v24 = v22;
    v38 = v20;
    v25 = HIDWORD(v20);
  }
  else
  {
    v38 = sub_101FC50((__int64)a6, a1);
    v19 = v38;
    v39 = v28;
    v35 = v28;
    v24 = *a7;
    v29 = sub_10205A0((__int64)a6, a1);
    v21 = HIDWORD(v38);
    v23 = v29;
    v25 = v29;
  }
  if ( a5 )
  {
    if ( !v19 )
      goto LABEL_15;
  }
  else
  {
    if ( !v21 )
    {
LABEL_23:
      v23 = v25;
      *a7 = v24;
      goto LABEL_15;
    }
    v19 = v21;
  }
  v30 = v19 & 0x7FFFFFFF;
  if ( (v19 & 0x7FFFFFFFu) < a6[119] || v30 >= a6[120] )
  {
    v36 = v25;
    v33 = sub_101D590((__int64)a6, v30);
    v25 = v36;
    v31 = v33;
  }
  else
  {
    v31 = a6[118];
  }
  if ( !a5 )
  {
    v37 = v25;
    LOBYTE(v38) = v35;
    result = sub_135EB10(v19, v31, a3, a4, 0, (_DWORD)a6, (__int64)&v38);
    v25 = v37;
    if ( (_DWORD)result )
      goto LABEL_30;
    goto LABEL_23;
  }
  LOBYTE(v38) = *a7;
  result = sub_135EB10(v19, v31, a3, a4, 1, (_DWORD)a6, (__int64)&v38);
  if ( (_DWORD)result )
  {
LABEL_30:
    *a7 = v38;
    return result;
  }
LABEL_15:
  v26 = v23 & 0x7FFFFFFF;
  if ( (v23 & 0x7FFFFFFFu) >= a6[119] && v26 < a6[120] )
    v27 = a6[118];
  else
    v27 = sub_101D590((__int64)a6, v26);
  return sub_135EB10(v23, v27, a3, a4, a5, (_DWORD)a6, (__int64)a7);
}
