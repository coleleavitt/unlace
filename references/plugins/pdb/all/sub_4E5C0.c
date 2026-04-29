__int64 __fastcall sub_4E5C0(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 **a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        double a8,
        double a9,
        int a10)
{
  int v11; // eax
  __int64 v15; // rax
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+0h] [rbp-88h] BYREF
  __int64 v26; // [rsp+8h] [rbp-80h] BYREF
  __int64 v27; // [rsp+10h] [rbp-78h]
  int v28[3]; // [rsp+20h] [rbp-68h] BYREF
  char v29; // [rsp+2Ch] [rbp-5Ch]
  _QWORD v30[11]; // [rsp+30h] [rbp-58h] BYREF

  v30[3] = __readfsqword(0x28u);
  v11 = *(_DWORD *)(a1 + 308);
  if ( v11 != 1000 )
  {
    *(_DWORD *)(a1 + 308) = v11 + 1;
    v15 = *(_QWORD *)(a1 + 32);
    v17 = a1 + 24;
    if ( v15 )
    {
      v18 = a1 + 24;
      do
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(v15 + 16);
          v20 = *(_QWORD *)(v15 + 24);
          if ( *(_DWORD *)(v15 + 32) < a6 )
            break;
          v18 = v15;
          v15 = *(_QWORD *)(v15 + 16);
          if ( !v19 )
            goto LABEL_7;
        }
        v15 = *(_QWORD *)(v15 + 24);
      }
      while ( v20 );
LABEL_7:
      if ( v18 != v17 && a6 >= *(_DWORD *)(v18 + 32) )
        goto LABEL_18;
    }
    v25 = 1;
    v26 = 0;
    v27 = 0;
    LODWORD(v25) = sub_4CB40((__int64 *)a1, (__int64)&v25, a3, a4, a5, a10);
    v28[0] = a6;
    v28[2] = v25;
    v30[0] = 0;
    v29 = BYTE4(v25);
    copy_tinfo_t(v30, &v26);
    v30[1] = v27;
    v21 = *(_QWORD *)(a1 + 32);
    if ( v21 )
    {
      v18 = a1 + 24;
      do
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v21 + 16);
          v23 = *(_QWORD *)(v21 + 24);
          if ( *(_DWORD *)(v21 + 32) < v28[0] )
            break;
          v18 = v21;
          v21 = *(_QWORD *)(v21 + 16);
          if ( !v22 )
            goto LABEL_14;
        }
        v21 = *(_QWORD *)(v21 + 24);
      }
      while ( v23 );
LABEL_14:
      if ( v17 != v18 && v28[0] >= *(_DWORD *)(v18 + 32) )
        goto LABEL_17;
    }
    else
    {
      v18 = a1 + 24;
    }
    v18 = sub_4A070((_QWORD *)(a1 + 16), v18, v28, a7, a8, a9);
LABEL_17:
    clear_tinfo_t(v30);
    clear_tinfo_t(&v26);
LABEL_18:
    *(_DWORD *)a2 = *(_DWORD *)(v18 + 40);
    *(_BYTE *)(a2 + 4) = *(_BYTE *)(v18 + 44);
    copy_tinfo_t(a2 + 8, v18 + 48);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(v18 + 56);
    --*(_DWORD *)(a1 + 308);
    return *(unsigned int *)(v18 + 40);
  }
  if ( (debug & 0x400000) != 0 )
    sub_29350();
  return 0;
}
